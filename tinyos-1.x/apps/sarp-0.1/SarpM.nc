#define CIRCULAR_BUFFER_SIZE                32
#define NO_TRUST                            0.5
#define NO_LEVEL                            255
#define NO_PARENT                           255
#define NO_NEIGHBOR                         255
#define ROOT_ADDR                           0
#define MAX_CHILDREN                        32
#define TOS_DATA_LENGTH                     TOSH_DATA_LENGTH
#define MAX_ONE_HOP_NEIGHBORS               10//0  // So we don't blow away the TelosB RAM amount !!
#define MAX_OTHER_NEIGHBORS                 10//0  // So we don't blow away the TelosB RAM amount !!

#define TRUST_FP_START                      1.0
#define TRUST_GFB_START                     0
#define TRUST_BFB_START                     0
#define TRUST_RH_START                      1.0
#define TRUST_GRB_START                     0
#define TRUST_BRB_START                     0

#define TRUST_FP_ROOT                       1.0
#define TRUST_GFB_ROOT                      0
#define TRUST_BFB_ROOT                      0
#define TRUST_RH_ROOT                       1.0
#define TRUST_GRB_ROOT                      0
#define TRUST_BRB_ROOT                      0

#define SAMPLE_DATA                         0xbeef
#define DATA_MESSAGES_PER_TRIAL             100
#define DATA_PACKET_INTERVAL                200

#define ACCEPTABLE_REPORTING_VARIANCE       0.20      // percentage of message sent
#define GOOD_REPORTING_BEHAVIOR_INCREMENT   1
#define BAD_REPORTING_BEHAVIOR_INCREMENT    2
#define MAX_REPORT_TRIES                    20

#define MAX_TRANSACTIONS                CIRCULAR_BUFFER_SIZE
#define __REAL_MOTE__

//#define DEBUG

includes IntMsg;
includes AM;
includes SarpMsg;
//includes TimeSyncMsg
includes TosTime;

#ifndef __REAL_MOTE__
// for the UDP server
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <pthread.h>
// end for the UDP server
#endif

module SarpM{
  provides {
    interface StdControl;
  }
  uses {
    interface IntOutput;
    interface SendMsg as SendDisc;
    interface SendMsg as SendUDisc;
//    interface SendMsg as SendReady;
//    interface SendMsg as SendReadyAck;
//    interface SendMsg as SendUReady;
    interface SendMsg as SendStart;
    interface SendMsg as SendData;
    interface SendMsg as SendReport;
    interface SendMsg as SendReportRequest;
    interface SendMsg as SendReportNoForwardResponse;
    interface SendMsg as SendReportForwardResponse;
    interface SendMsg as SendEndToEndReportResponse;
    interface SendMsg as SendSpecificReportRequest;
    interface SendMsg as SendSpecificReportResponse;

    interface StdControl as SubControl;
    interface StdControl as CommControl;
    interface ReceiveMsg as Receive;
    interface Timer as Timer1;          /* Posts a startDiscovery task                          */
    interface Timer as Timer2;          /* Stops Timer 1, figures out children, starts data     */
//    interface Timer as Timer3;          /* Stops sending Discovery Messages - Redundant !       */
    interface Timer as Timer4;          /* Puts a Start Message in the outQ                     */
//    interface Timer as Timer5;          /* Sends an end-of-test Ready Message out of the UART   */
    interface Timer as Timer6;          /* Starts and runs the data reporting phase.            */
    interface Timer as Timer7;          /* Sends regular report.                                */
    interface Timer as Timer8;          /* Checks to see if reports have been received.         */

    interface Time;
    interface Leds;
    interface TimeSet;
#ifdef __REAL__MOTE__
    interface CC2420Control;
#endif

  }
}

implementation {
  uint32_t heardFrom = 0;
  uint8_t myState;//, readySent;
  uint8_t myLevel, numOneHopNeighbors, numTwoHopNeighbors, srcAddr, timerOneIndex, numGrantsReceived, grantee;
  uint8_t index, dindex, outIndex;
  uint16_t myAddr, randomNum;
  bool OkToStart = TRUE;

  uint32_t TRANSACTION_ID = 0;///TOS_LOCAL_ADDRESS * 10000;

  // Message holders
  TOS_Msg inQ[CIRCULAR_BUFFER_SIZE], outQ[CIRCULAR_BUFFER_SIZE], *tempTOS, *inMsg, outMsg;
  uint8_t readInQHere, writeInQHere, readOutQHere, writeOutQHere, readReportQHere = 0, writeReportQHere = 0;
  int numMsgInQ = 0, numMsgOutQ = 0;

  uint numDataMessagesInTrial = 0;

   /*
    TOS Message has:

        OTA
        ---
        - uint16_t  addr
        -  uint8_t  type
        -  uint8_t  group
        -   int8_t  data[29]
        - uint16_t  crc

        INTERNAL
        -------
        - uint16_t  strength
        - uint8_t   ack
        - uint16_t  time
        - uint8_t   sendSecurityMode
        - uint8_t   receiveSecurityMode
    */


  TOS_Msg rdata, tdata, this_dmesg, pReqMsg, pRespMsg;//, this_ready_msg;
  DiscoveryMsg *disc_msg_in, *disc_msg_out;
//  ReadyMsg *readyMsgIn, *readyMsgOut, *readyAckIn;
  StartMsg *startMsg;
  DataMsg *dataMsgIn, *dataMsgOut;
  ReportRequestMsg *reportReqMsgIn, *reportReqMsgOut;
  ReportResponseNoForwardMsg *reportRespNoForwardMsgIn, *reportRespNoForwardMsgOut;
  ReportResponseForwardMsg *reportRespForwardMsgIn, *reportRespForwardMsgOut;
  ReportResponseForwardMsg *reportForwardMsgIn, *reportForwardMsgOut;
  EndToEndReportResponseMsg *endToEndRepRespMsgIn, *endToEndRepRespMsgOut;
  SpecificReportRequestMsg *specificReportReqMsgIn, *specificReportReqMsgOut;
  SpecificReportResponseMsg *specificReportResponseMsgIn, *specificReportResponseMsgOut;

  Other_Neighbor_Rec_withTrust_t neighborsToProcess[CIRCULAR_BUFFER_SIZE -1];
  uint8_t readNeighborBuffer = 0, writeNeighborBuffer = 0;

  Neighbor_Rec_withTrust_t myOneHopNeighbors[MAX_ONE_HOP_NEIGHBORS];
  Other_Neighbor_Rec_withTrust_t otherNodes[MAX_OTHER_NEIGHBORS];
  Neighbor_Rec_withTrust_t myChildren[MAX_CHILDREN];

  uint8_t numChildren, transactionCounter, numTransactions = 0;
//  uint8_t numChildrenReady;

  Neighbor_Rec_withTrust_t myWantedParent, myActualParent;

  Transaction_Record_t transactionRecords[MAX_TRANSACTIONS];
  uint16_t reportQ[CIRCULAR_BUFFER_SIZE], transactionTrustToProcessQ[CIRCULAR_BUFFER_SIZE], currentTID;
  Check_Transaction_Record_t transactionsToCheckQ[CIRCULAR_BUFFER_SIZE];
  uint32_t checkingTID, oneTimesTID, twoTimesTID;

  uint8_t transactionFound, sending = 0, readTransactionTrustHere = 0, writeTransactionTrustHere = 0;
  uint8_t readTransactionCheckHere = 0, writeTransactionCheckHere = 0, numTransactionsToCheck = 0;
  uint8_t dataIndex = 0, highestTrustIndex = 0, oneDiscIndex = 0, twoDiscIndex = 0;
  uint8_t tFoundHere = 0;
  uint32_t t8Counter, ttCounter;

  uint8_t selectiveCounter = 0;


  /* SELECTIVE FORWARDING PARAMETERS */

  // This is the node_id of the selective forwarding node
  uint16_t SF_NODE_ID1 = 22;
  // This is the node_id whose sends to SF_NODE_ID and whose packets will be selectively forwarded
  uint16_t SF_VICTIM_NODE_ID1 = 23;
  // This is the numerator inthe radio of packets to be forwarded
  uint8_t  SF_FORWARD_NUMERATOR = 1;
  // This is the denomenator in the number of packets to be forwaded
  uint8_t  SF_FORWARD_DENOMENATOR = 2;

  /* Comment these lines out, and alter 1193 and 1347 for only one SF attacker */
  // This is the node_id of the selective forwarding node
  uint16_t SF_NODE_ID2 = 17;
  // This is the node_id whose sends to SF_NODE_ID and whose packets will be selectively forwarded
  uint16_t SF_VICTIM_NODE_ID2 = 22;
  // This is the node_id of the selective forwarding node
  uint16_t SF_NODE_ID3 = 11;
  // This is the node_id whose sends to SF_NODE_ID and whose packets will be selectively forwarded
  uint16_t SF_VICTIM_NODE_ID3 = 16;
  // This is the node_id of the selective forwarding node
  uint16_t SF_NODE_ID4 = 6;
  // This is the node_id whose sends to SF_NODE_ID and whose packets will be selectively forwarded
  uint16_t SF_VICTIM_NODE_ID4 = 7;

  /* Example SF setup
   *
   * Let's say we want node 18 to selectively forward 60% of node 23's packets
   *
   * SF_NODE_ID = 18
   * SF_VICTIM_NODE_ID = 23
   * SF_FORWARD_NUMERATOR = 3
   * SF_FORWARD_DENOMENATOR = 5
   *
   */

  /* END SELECTIVE FORWARDING PARAMETERS */


  unsigned long oneHopQuickGlance = 0, twoHopQuickGlance = 0;
  task void startApp()
  {
    dbg(DBG_USR1, "%d started its App.\r\n", TOS_LOCAL_ADDRESS);
    this_dmesg.type = START_MSG_TYPE;
    call Leds.redOff();
    call Leds.greenOff();
    call Leds.yellowOff();
    call Timer1.start(TIMER_REPEAT, 2100 +    (15 * TOS_LOCAL_ADDRESS));     // sends DiscoveryMsg
    call Timer2.start(TIMER_ONE_SHOT, 30000 + (10 * TOS_LOCAL_ADDRESS));     // stops DiscoveryMsg
    call Timer4.start(TIMER_ONE_SHOT, 1250 +  (10 * TOS_LOCAL_ADDRESS));     // sends Start Message
    //call Timer1.start(TIMER_REPEAT, 2000 + (100 * myAddr));     // sends DiscoveryMsg
    //call Timer2.start(TIMER_ONE_SHOT, 30000 + (100 * myAddr));                   // stops DiscoveryMsg, sends ReadyMsg
    //call Timer4.start(TIMER_ONE_SHOT, 2250 + (100 * myAddr));                   // sends Start Message
  }

#ifdef IS_ROOT
  void *UDPServer(void *arg);

  void initializeUDPServer()
  {
    pthread_create(&udpServerThreadId, NULL, UDPServer, NULL);
  }
#endif

  command result_t StdControl.init()
  {
    call Leds.init();
    call CommControl.init();
    call SubControl.init();
    readInQHere = 0;
    writeInQHere = 0;
    readOutQHere = 0;
    writeOutQHere = 0;
    numMsgInQ = 0;
    numMsgOutQ = 0;
    //readySent = 0;
    myAddr = (uint16_t) TOS_LOCAL_ADDRESS;
    numOneHopNeighbors = 0;
    numTwoHopNeighbors = 0;
    oneHopQuickGlance = 0;
    twoHopQuickGlance = 0;
    myWantedParent.node_id = NO_PARENT;
    myWantedParent.level = NO_LEVEL;
    myWantedParent.parent_id = NO_PARENT;
    myWantedParent.trust.trustFP    = TRUST_FP_START;
    myWantedParent.trust.GFB        = TRUST_GFB_START;
    myWantedParent.trust.BFB        = TRUST_BFB_START;
    myWantedParent.trust.trustRH    = TRUST_RH_START;
    myWantedParent.trust.GRB        = TRUST_GRB_START;
    myWantedParent.trust.BRB        = TRUST_BRB_START;
    numChildren = 0;
    myActualParent.node_id = NO_PARENT;
    myActualParent.level = NO_LEVEL;
    myActualParent.parent_id = NO_PARENT;
    myActualParent.trust.trustFP    = TRUST_FP_START;
    myActualParent.trust.GFB        = TRUST_GFB_START;
    myActualParent.trust.BFB        = TRUST_BFB_START;
    myActualParent.trust.trustRH    = TRUST_RH_START;
    myActualParent.trust.GRB        = TRUST_GRB_START;
    myActualParent.trust.BRB        = TRUST_BRB_START;

    if ( myAddr == 0 ) // I am root,hear me roar !!!
    {
      myLevel = 0;
    }
    else // I an not root < whimper >
    {
      myLevel = NO_LEVEL;
    }

    for (index = 0; index < MAX_ONE_HOP_NEIGHBORS; index++)
    {
      myOneHopNeighbors[index].node_id = NO_NEIGHBOR;
      myOneHopNeighbors[index].level = NO_LEVEL;
      myOneHopNeighbors[index].parent_id = NO_PARENT;
      myOneHopNeighbors[index].trust.trustFP    = TRUST_FP_START;
      myOneHopNeighbors[index].trust.GFB        = TRUST_GFB_START;
      myOneHopNeighbors[index].trust.BFB        = TRUST_BFB_START;
      myOneHopNeighbors[index].trust.trustRH    = TRUST_RH_START;
      myOneHopNeighbors[index].trust.GRB        = TRUST_GRB_START;
      myOneHopNeighbors[index].trust.BRB        = TRUST_BRB_START;
    }
    for (index = 0; index < MAX_OTHER_NEIGHBORS; index++)
    {
      otherNodes[index].node_id         = NO_NEIGHBOR;
      otherNodes[index].level           = NO_LEVEL;
      otherNodes[index].one_hop_id      = NO_NEIGHBOR;
      otherNodes[index].trust.trustFP   = TRUST_FP_START;
      otherNodes[index].trust.GFB       = TRUST_GFB_START;
      otherNodes[index].trust.BFB       = TRUST_BFB_START;
      otherNodes[index].trust.trustRH   = TRUST_RH_START;
      otherNodes[index].trust.GRB       = TRUST_GRB_START;
      otherNodes[index].trust.BRB       = TRUST_BRB_START;
    }
    for (index = 0; index < MAX_CHILDREN; index++)
    {
      myChildren[index].node_id = NO_NEIGHBOR;
      myChildren[index].level = NO_LEVEL;
      myChildren[index].parent_id = NO_PARENT;
      myChildren[index].trust.trustFP    = TRUST_FP_START;
      myChildren[index].trust.GFB        = TRUST_GFB_START;
      myChildren[index].trust.BFB        = TRUST_BFB_START;
      myChildren[index].trust.trustRH    = TRUST_RH_START;
      myChildren[index].trust.GRB        = TRUST_GRB_START;
      myChildren[index].trust.BRB        = TRUST_BRB_START;
    }
    for (index = 0; index < (CIRCULAR_BUFFER_SIZE - 1 ); index++)
    {
      neighborsToProcess[index].node_id          = NO_NEIGHBOR;
      neighborsToProcess[index].level            = NO_LEVEL;
      neighborsToProcess[index].one_hop_id       = NO_NEIGHBOR;
      neighborsToProcess[index].trust.trustFP    = TRUST_FP_START;
      neighborsToProcess[index].trust.GFB        = TRUST_GFB_START;
      neighborsToProcess[index].trust.BFB        = TRUST_BFB_START;
      neighborsToProcess[index].trust.trustRH    = TRUST_RH_START;
      neighborsToProcess[index].trust.GRB        = TRUST_GRB_START;
      neighborsToProcess[index].trust.BRB        = TRUST_BRB_START;
    }
    /*
    for (index = 0; index < MAX_TRANSACTIONS; index ++)
    {
      transactionRecords[index].transaction_id = 0x00000000;
      transactionRecords[index].originatingNode = 0x0000;
      transactionRecords[index].originatorPacketCount = 0x0000;
      transactionRecords[index].receivedFrom = 0x0000;
      transactionRecords[index].isValid = 0;
      transactionRecords[index].packetsReceived = 0x0000;
      transactionRecords[index].packetsForwarded = 0x0000;
      transactionRecords[index].packetsForwardedTo = 0x0000;
      transactionRecords[index].oneHopReported = 0x00;
      transactionRecords[index].oneHopReportedPacketsReceived = 0x0000;
      transactionRecords[index].oneHopReportedPacketsForwarded = 0x0000;
      transactionRecords[index].oneHopReportedPacketsForwardedTo = 0x0000;
      transactionRecords[index].twoHopReported = 0x00;
      transactionRecords[index].twoHopReportedPacketsReceived = 0x0000;
      transactionRecords[index].processed = 0x00;
    }
    */
    TRANSACTION_ID = myAddr * 1000;
#ifdef IS_ROOT
    if (myAddr == 0)
      initializeUDPServer();
#endif
    return SUCCESS;
  }

  command result_t StdControl.start()
  {
    call SubControl.start();
    call CommControl.start();
#ifdef __REAL__MOTE__
    call CC2420Control.SetRFPower(8);
    if (TOS_LOCAL_ADDRESS == 0)
    {
#endif
      post startApp();
      OkToStart = FALSE;
#ifdef __REAL__MOTE__
    }
#endif
    return SUCCESS;
  }

  command result_t StdControl.stop()
  {
    call CommControl.stop();
    call SubControl.stop();
    return SUCCESS;
  }

  event result_t IntOutput.outputComplete(result_t success)
  {
    return SUCCESS;
  }

  event result_t SendDisc.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendUDisc.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }
/*
  event result_t SendReady.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendUReady.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendReadyAck.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }
*/
  event result_t SendStart.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }


  event result_t SendData.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }


  event result_t SendReport.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }


  event result_t SendReportRequest.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }


  event result_t SendReportNoForwardResponse.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendReportForwardResponse.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendEndToEndReportResponse.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendSpecificReportRequest.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }

  event result_t SendSpecificReportResponse.sendDone(TOS_MsgPtr masg, result_t success)
  {
    return SUCCESS;
  }



/*
  task void processNeighbor()
  {
    //dbg(DBG_USR1, "%d entered processNeighbor.\r\n", myAddr);
    //dbg(DBG_USR1, "%d has %d One Hop Neighbors before processing.\r\n", myAddr, numOneHopNeighbors);
    //dbg(DBG_USR1, "%d has %d Two Hop Neighbors before processing.\r\n", myAddr, numTwoHopNeighbors);
    uint8_t index3, found = 0;
        for (index3 = 0; index3 < numOneHopNeighbors; index3 ++)
        {
          if (myOneHopNeighbors[index3].node_id == neighborsToProcess[readNeighborBuffer].node_id)
          {
            //dbg(DBG_USR1, "%d found %d in its One Hop Neighbor table.\r\n", myAddr, neighborsToProcess[readNeighborBuffer].neighbor);
            found = 1;
            if (myOneHopNeighbors[index3].level != neighborsToProcess[readNeighborBuffer].level)
              myOneHopNeighbors[index3].level = neighborsToProcess[readNeighborBuffer].level;
            atomic
            {
              if (++readNeighborBuffer >= CIRCULAR_BUFFER_SIZE)
                readNeighborBuffer = 0;
            }
            break;
          }
        }
        if (found == 1)
          return;
        if (found == 1)
        {
          //dbg(DBG_USR1, "%d found %d in its Two Hop Neighbor table.\r\n", myAddr, neighborsToProcess[readNeighborBuffer].neighbor);
          return;
        }
        //dbg(DBG_USR1, "%d added %d to its Two Hop Neighbor table.\r\n", myAddr, neighborsToProcess[readNeighborBuffer].neighbor);
    //dbg(DBG_USR1, "%d has %d One Hop Neighbors after processing.\r\n", myAddr, numOneHopNeighbors);
    //dbg(DBG_USR1, "%d has %d Two Hop Neighbors after processing.\r\n", myAddr, numTwoHopNeighbors);

  }
*/

  task void processOutMsg()
  {
    sending = 1;
    atomic
    {
      /* First we copy the message to our outMsg TOS_Msg structure */
      uint8_t *put, *get;
      outMsg.addr   = outQ[readOutQHere].addr;
      outMsg.type   = outQ[readOutQHere].type;
      outMsg.group  = outQ[readOutQHere].group;
      outMsg.crc    = outQ[readOutQHere].crc;
      get = (uint8_t *) &(outQ[readOutQHere].data);
      put = (uint8_t *) &(outMsg.data);
      for (outIndex = 0; outIndex < TOS_DATA_LENGTH; outIndex++)
      {
        *put = *get;
        put++;
        get++;
      }

      /* Check to see if there is work to be done.  This is a redundant check. */
      if (numMsgOutQ > 0)
      {
        /* Find the type of message, and send it based on its type */
        uint8_t type = outQ[readOutQHere].type;
        switch (type)
        {
          case DISCOVERY_MSG_TYPE:
            call SendDisc.send(TOS_BCAST_ADDR, sizeof(DiscoveryMsg), &outMsg);
            break;
/*          case READY_MSG_TYPE:
            if (myAddr == 0)
              call SendUReady.send(TOS_UART_ADDR, sizeof(ReadyMsg), &outMsg);
            else
              call SendReady.send(myWantedParent.node_id, sizeof(ReadyMsg), &outMsg);
            break;
*/
          case START_MSG_TYPE:
            //dbg(DBG_USR1, "%d sending START MSG\r\n", myAddr);
            call SendStart.send(TOS_BCAST_ADDR, sizeof(StartMsg), &outMsg);
            break;
          case DATA_MSG_TYPE:
            //dbg(DBG_USR1, "%d sending DATA message to %d\r\n", myAddr, outMsg.addr);
            call SendData.send(outMsg.addr, sizeof(DataMsg), &outMsg);
            break;
          case REPORT_REQUEST_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending REPORT_REQUEST message to %d, \r\n", myAddr, outMsg.addr);
            //dbg(DBG_USR1, "%02x%02x %02x%02x %02x%02x %02x%02x\r\n", outMsg.data[0], outMsg.data[1], outMsg.data[2], outMsg.data[3], outMsg.data[4], outMsg.data[5], outMsg.data[6], outMsg.data[7]);
            #endif
            call SendReportRequest.send(outMsg.addr, sizeof(ReportRequestMsg), &outMsg);
            break;
          case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending REPORT_RESPONSE NO FORWARD message to %d\r\n", myAddr, outMsg.addr);
            #endif
            call SendReportNoForwardResponse.send(outMsg.addr, sizeof(ReportResponseNoForwardMsg), &outMsg);
            break;
          case REPORT_RESPONSE_FORWARD_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending REPORT_RESPONSE FORWARD message to %d\r\n", myAddr, outMsg.addr);
            #endif
            call SendReportForwardResponse.send(outMsg.addr, sizeof(ReportResponseForwardMsg), &outMsg);
            break;
          case END_TO_END_REPORT_RESPONSE_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending END TO END REPORT_RESPONSE message to %d\r\n", myAddr, outMsg.addr);
            #endif
            call SendEndToEndReportResponse.send(outMsg.addr, sizeof(EndToEndReportResponseMsg), &outMsg);
            break;
          case SPECIFIC_REPORT_REQUEST_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending SPECIFIC REPORT_REQUEST message to %d\r\n", myAddr, outMsg.addr);
            #endif
            call SendSpecificReportRequest.send(outMsg.addr, sizeof(SpecificReportRequestMsg), &outMsg);
            break;
          case SPECIFIC_REPORT_RESPONSE_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending SPECIFIC REPORT_RESPONSE message to %d\r\n", myAddr, outMsg.addr);
            #endif
            call SendSpecificReportResponse.send(outMsg.addr, sizeof(SpecificReportResponseMsg), &outMsg);
            break;
          default:
            break;
        }
        if (++readOutQHere >= CIRCULAR_BUFFER_SIZE)
          readOutQHere = 0;
        numMsgOutQ --;
      }
    } // end atomic
    sending = 0;
  }



  task void sendReport()
  {
    while(sending == 1)
    {;}

    atomic
    {
      reportRespForwardMsgOut = (ReportResponseForwardMsg *) outQ[writeOutQHere].data;
      reportRespForwardMsgOut->responder = myAddr;
      reportRespForwardMsgOut->transaction_id = reportQ[readReportQHere];
      for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
      {
        //dbg(DBG_USR1, "%d, TRID: %d, RRID: %d\r\n", myAddr, transactionRecords[transactionCounter].transaction_id, reportQ[readReportQHere]);
        if ( transactionRecords[transactionCounter].transaction_id == reportQ[readReportQHere])
        {
          if(transactionRecords[transactionCounter].originatingNode == transactionRecords[transactionCounter].receivedFrom)
            outQ[writeOutQHere].type = REPORT_RESPONSE_NO_FORWARD_MSG_TYPE;
          else
            outQ[writeOutQHere].type = REPORT_RESPONSE_FORWARD_MSG_TYPE;
          outQ[writeOutQHere].addr = transactionRecords[transactionCounter].receivedFrom;
          reportRespForwardMsgOut->packetsReceived = transactionRecords[transactionCounter].packetsReceived;
          reportRespForwardMsgOut->packetsReceivedFrom = transactionRecords[transactionCounter].receivedFrom;
          reportRespForwardMsgOut->packetsForwarded = transactionRecords[transactionCounter].packetsForwarded;
          reportRespForwardMsgOut->packetsForwardedTo = transactionRecords[transactionCounter].packetsForwardedTo;
          break;
        }
      }
      if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
        writeOutQHere = 0;
      if (++readReportQHere >= CIRCULAR_BUFFER_SIZE)
        readReportQHere = 0;
      numMsgOutQ ++;
      #ifdef DEBUG
      dbg(DBG_USR1, "%d sending regular report to %d\r\n", myAddr, transactionRecords[transactionCounter].receivedFrom);
      #endif
    }
    post processOutMsg();
  }



  task void processTransactionTrust()
  {
    /* TO DO : */
    /* One hop trust in reporting is: number packets says he sent vs number two hops says they received */
    /* One hop trust in forwarding (or link quality) is: packetISent vs packets he received */

    //dbg(DBG_USR1, "%d called POST TRANSACTION TRUST\r\n", myAddr);

    uint16_t loopCounter = 0, innerLoopCounter = 0;

    atomic
    {
      currentTID = transactionTrustToProcessQ[readTransactionTrustHere];
      #ifdef DEBUG
      dbg(DBG_USR1, "%d processing TID: %04x\r\n", myAddr, currentTID);
      #endif
      if (++readTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
        readTransactionTrustHere = 0;

      for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
      {
        //#ifdef DEBUG
        //dbg(DBG_USR1, "%d compared R: %x to T: %x\r\n", myAddr, transactionRecords[transactionCounter].transaction_id, currentTID);
        //#endif
        if (transactionRecords[transactionCounter].transaction_id == currentTID)
        {
          ttCounter = transactionCounter;
          break;
        }
      }
    } // end atomic

    if (transactionRecords[ttCounter].processed == 1)
    {
      return;
    }
    else
    {
      #ifdef MILD_DEBUG
      //if ( (myAddr == 23 ) || (myAddr == 6) )
        dbg(DBG_USR1, "%d says Trransation RECORD %x has OneReportingIn: %d and TwoReportingIn: %d, forwardedTo: %d, processed: %d\r\n", myAddr, currentTID, transactionRecords[ttCounter].oneHopReported, transactionRecords[ttCounter].twoHopReported, transactionRecords[ttCounter].packetsForwardedTo, transactionRecords[ttCounter].processed);
      #endif

      /* Changed to include case where either reporter doesn't report */
      if ( (transactionRecords[ttCounter].oneHopReported > 0) &&  ( (transactionRecords[ttCounter].twoHopReported > 0) || (transactionRecords[ttCounter].packetsForwardedTo == 0) ) )
      {
        #ifndef NOSARP

          /* However this is processed, mark it as so. */
          transactionRecords[ttCounter].processed = 1;
          transactionRecords[ttCounter].isValid = 0;

          #ifdef DEBUG
          dbg(DBG_USR1, "transaction_id:                    0x%04x\r\n", transactionRecords[ttCounter].transaction_id);
          dbg(DBG_USR1, "originating Node:                  0x%02x\r\n", transactionRecords[ttCounter].originatingNode);
          dbg(DBG_USR1, "receivedFrom:                      0x%02x\r\n", transactionRecords[ttCounter].receivedFrom);
          dbg(DBG_USR1, "isValid:                           0x%02x\r\n", transactionRecords[ttCounter].isValid);
          dbg(DBG_USR1, "packetsReceived:                   0x%02x\r\n", transactionRecords[ttCounter].packetsReceived);
          dbg(DBG_USR1, "packetsForwarded:                  0x%02x\r\n", transactionRecords[ttCounter].packetsForwarded);
          dbg(DBG_USR1, "packetsForwardedTo:                0x%02x\r\n", transactionRecords[ttCounter].packetsForwardedTo);
          dbg(DBG_USR1, "oneHopReported:                    0x%02x\r\n", transactionRecords[ttCounter].oneHopReported);
          dbg(DBG_USR1, "oneHopReportedPacketsReceived:     0x%02x\r\n", transactionRecords[ttCounter].oneHopReportedPacketsReceived);
          dbg(DBG_USR1, "oneHopReportedPacketsForwarded:    0x%02x\r\n", transactionRecords[ttCounter].oneHopReportedPacketsForwarded);
          dbg(DBG_USR1, "oneHopReportedPacketsForwardedTo:  0x%02x\r\n", transactionRecords[ttCounter].oneHopReportedPacketsForwardedTo);
          dbg(DBG_USR1, "twoHopReported:                    0x%02x\r\n", transactionRecords[ttCounter].twoHopReported);
          dbg(DBG_USR1, "twoHopReportedPacketsReceived:     0x%02x\r\n", transactionRecords[ttCounter].twoHopReportedPacketsReceived);
          #endif

          #ifdef DEBUG
          dbg(DBG_USR1, "%d reports ALL one and two hop reports are in for transaction %x %d\r\n", myAddr, transactionRecords[ttCounter].transaction_id, numOneHopNeighbors);
          #endif
          for (loopCounter = 0; loopCounter < numOneHopNeighbors; loopCounter ++)
          {
            /* Loop through the one-hop neighbors to find the right one */
            #ifdef DEBUG
            dbg(DBG_USR1, "%d %d\r\n", myOneHopNeighbors[loopCounter].node_id, transactionRecords[ttCounter].packetsForwardedTo);
            #endif
            if (myOneHopNeighbors[loopCounter].node_id == transactionRecords[ttCounter].packetsForwardedTo)
            {
              /* If we've found the node in the one-hop table */

              /* Don't touch root trust */
              if ( myOneHopNeighbors[loopCounter].node_id == 0)
                break;

              #ifdef DEBUG
              dbg(DBG_USR1, "%d reports %d's GFB before: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.GFB);
              #endif
              /* If the one-hop node reported */
              if (transactionRecords[ttCounter].oneHopReported == 1)
              {
                #ifdef DEBUG
                dbg(DBG_USR1, "%d reports %d's BFB before: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.BFB);
                #endif

                /* Set new trustFP values for the one-hop node */
                myOneHopNeighbors[loopCounter].trust.GFB += transactionRecords[ttCounter].oneHopReportedPacketsReceived;
                myOneHopNeighbors[loopCounter].trust.BFB += transactionRecords[ttCounter].packetsForwarded - transactionRecords[ttCounter].oneHopReportedPacketsReceived;
                myOneHopNeighbors[loopCounter].trust.trustFP = (myOneHopNeighbors[loopCounter].trust.GFB + 0.0)/ (myOneHopNeighbors[loopCounter].trust.GFB + myOneHopNeighbors[loopCounter].trust.BFB);

                //#ifdef DEBUG
                dbg(DBG_USR1, "%d updated %d's trustFP to %f, using GFB: %d and BFB: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.trustFP, myOneHopNeighbors[loopCounter].trust.GFB, myOneHopNeighbors[loopCounter].trust.BFB);
                //#endif

                /* Now search through the two-hop table to find the right neighbor */
                for (innerLoopCounter = 0; innerLoopCounter < numTwoHopNeighbors; innerLoopCounter ++)
                {
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d %d\r\n", otherNodes[loopCounter].node_id, transactionRecords[ttCounter].packetsForwardedTo);
                  #endif

                  if (otherNodes[innerLoopCounter].node_id == transactionRecords[ttCounter].oneHopReportedPacketsForwardedTo)
                  {
                    /* we found the record for this transaction's two-hop neighbor.  Now test to see if the two-hop reported. */
                    if (transactionRecords[ttCounter].twoHopReported == 1)
                    {
                      /* Two-hop reported, not check consistency in reporting */
                      if (  ( transactionRecords[ttCounter].oneHopReportedPacketsForwarded - transactionRecords[ttCounter].twoHopReportedPacketsReceived <= (ACCEPTABLE_REPORTING_VARIANCE * transactionRecords[ttCounter].oneHopReportedPacketsForwarded) ) && ( transactionRecords[ttCounter].oneHopReportedPacketsForwarded - transactionRecords[ttCounter].twoHopReportedPacketsReceived >= ( -1.0 * ACCEPTABLE_REPORTING_VARIANCE * transactionRecords[ttCounter].oneHopReportedPacketsForwarded) ) )
                      {
                        /* Consistent reporting */
                        myOneHopNeighbors[loopCounter].trust.GRB += GOOD_REPORTING_BEHAVIOR_INCREMENT;
                        myOneHopNeighbors[loopCounter].trust.trustRH = myOneHopNeighbors[loopCounter].trust.GRB / (myOneHopNeighbors[loopCounter].trust.GRB + myOneHopNeighbors[loopCounter].trust.BRB);
                        otherNodes[innerLoopCounter].trust.GRB += GOOD_REPORTING_BEHAVIOR_INCREMENT;
                        otherNodes[innerLoopCounter].trust.trustRH = otherNodes[innerLoopCounter].trust.GRB / (otherNodes[innerLoopCounter].trust.GRB + otherNodes[innerLoopCounter].trust.BRB);
                        #ifdef DEBUG
                        dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.trustRH, myOneHopNeighbors[loopCounter].trust.GRB, myOneHopNeighbors[loopCounter].trust.BRB);
                        dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, otherNodes[innerLoopCounter].node_id, otherNodes[innerLoopCounter].trust.trustRH, otherNodes[innerLoopCounter].trust.GRB, otherNodes[innerLoopCounter].trust.BRB);
                        #endif
                      }
                      else
                      {
                        /* Inconsistent reporting, for now, penalize nodes equally. */
                        /* TO DO : Update penalize equally */
                        myOneHopNeighbors[loopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                        myOneHopNeighbors[loopCounter].trust.trustRH = myOneHopNeighbors[loopCounter].trust.GRB / (myOneHopNeighbors[loopCounter].trust.GRB + myOneHopNeighbors[loopCounter].trust.BRB);
                        otherNodes[innerLoopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                        otherNodes[innerLoopCounter].trust.trustRH = otherNodes[innerLoopCounter].trust.GRB / (otherNodes[innerLoopCounter].trust.GRB + otherNodes[innerLoopCounter].trust.BRB);
                        #ifdef DEBUG
                        dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.trustRH, myOneHopNeighbors[loopCounter].trust.GRB, myOneHopNeighbors[loopCounter].trust.BRB);
                        dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, otherNodes[innerLoopCounter].node_id, otherNodes[innerLoopCounter].trust.trustRH, otherNodes[innerLoopCounter].trust.GRB, otherNodes[innerLoopCounter].trust.BRB);
                        #endif
                      }
                      //dbg(DBG_USR1, "%d updated %d's trustRH to %f\r\n", myAddr, otherNodes[innerLoopCounter].node_id, otherNodes[innerLoopCounter].trust.trustRH);
                    }
                    else if (transactionRecords[ttCounter].twoHopReported == 255)
                    {
                      /* Two-hop did not report, even though one-hop did */
                      /* Penalize the neighbors equally, because we don't know who is at fault, two not send report, or one not forward it */
                      myOneHopNeighbors[loopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                      myOneHopNeighbors[loopCounter].trust.trustRH = myOneHopNeighbors[loopCounter].trust.GRB / (myOneHopNeighbors[loopCounter].trust.GRB + myOneHopNeighbors[loopCounter].trust.BRB);
                      otherNodes[innerLoopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                      otherNodes[innerLoopCounter].trust.trustRH = otherNodes[innerLoopCounter].trust.GRB / (otherNodes[innerLoopCounter].trust.GRB + otherNodes[innerLoopCounter].trust.BRB);
                      #ifdef DEBUG
                      dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.trustFP, myOneHopNeighbors[loopCounter].trust.GRB, myOneHopNeighbors[loopCounter].trust.BRB);
                        dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, otherNodes[innerLoopCounter].node_id, otherNodes[innerLoopCounter].trust.trustRH, otherNodes[innerLoopCounter].trust.GRB, otherNodes[innerLoopCounter].trust.BRB);
                      #endif
                    }
                  } // end if
                  break;
                } // end for
              } // end if oneHopReported == 1
              else if (transactionRecords[ttCounter].oneHopReported == 255)
              {
                /* Now search through the two-hop table to find the right neighbor */
                for (innerLoopCounter = 0; innerLoopCounter < numTwoHopNeighbors; innerLoopCounter ++)
                {
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d %d\r\n", otherNodes[loopCounter].node_id, transactionRecords[ttCounter].packetsForwardedTo);
                  #endif

                  if (otherNodes[innerLoopCounter].node_id == transactionRecords[ttCounter].oneHopReportedPacketsForwardedTo)
                  {
                    /* We jave found the correct two-hop node */
                    if (transactionRecords[ttCounter].twoHopReported == 1)
                    {
                      /* If the two-hop reported, but one hop did not */
                      /* Assume the two-hop's report is correct, and apply the packet received count to both nodes */

                      /* Set new trustFP values for the one-hop node */
                      myOneHopNeighbors[loopCounter].trust.GFB += transactionRecords[ttCounter].twoHopReportedPacketsReceived;
                      myOneHopNeighbors[loopCounter].trust.BFB += transactionRecords[ttCounter].packetsForwarded - transactionRecords[ttCounter].twoHopReportedPacketsReceived;
                      myOneHopNeighbors[loopCounter].trust.trustFP = (myOneHopNeighbors[loopCounter].trust.GFB + 0.0)/ (myOneHopNeighbors[loopCounter].trust.GFB + myOneHopNeighbors[loopCounter].trust.BFB);
                      #ifdef DEBUG
                      dbg(DBG_USR1, "%d updated %d's trustFP to %f, using GFB: %d and BFB: %d\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.trustFP, myOneHopNeighbors[loopCounter].trust.GFB, myOneHopNeighbors[loopCounter].trust.BFB);
                      dbg(DBG_USR1, "%d updated %d's trustRH to %f, using GRB: %d and BRB: %d\r\n", myAddr, otherNodes[innerLoopCounter].node_id, otherNodes[innerLoopCounter].trust.trustRH, otherNodes[innerLoopCounter].trust.GRB, otherNodes[innerLoopCounter].trust.BRB);
                      #endif



                      /* Fault the one-hop for not reporting, but do not fault the two-hop fornot reporting */
                      myOneHopNeighbors[loopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                      myOneHopNeighbors[loopCounter].trust.trustRH = myOneHopNeighbors[loopCounter].trust.GRB / (myOneHopNeighbors[loopCounter].trust.GRB + myOneHopNeighbors[loopCounter].trust.BRB);
                      otherNodes[innerLoopCounter].trust.GRB += GOOD_REPORTING_BEHAVIOR_INCREMENT;
                      otherNodes[innerLoopCounter].trust.trustRH = otherNodes[innerLoopCounter].trust.GRB / (otherNodes[innerLoopCounter].trust.GRB + otherNodes[innerLoopCounter].trust.BRB);
                    }
                    else
                    {
                      /* Neither the one-hop nor the two-hop reported */
                      /* We know nothing about the forwarding, but we know they did not report */
                      myOneHopNeighbors[loopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                      myOneHopNeighbors[loopCounter].trust.trustRH = myOneHopNeighbors[loopCounter].trust.GRB / (myOneHopNeighbors[loopCounter].trust.GRB + myOneHopNeighbors[loopCounter].trust.BRB);
                      otherNodes[innerLoopCounter].trust.BRB += BAD_REPORTING_BEHAVIOR_INCREMENT;
                      otherNodes[innerLoopCounter].trust.trustRH = otherNodes[innerLoopCounter].trust.GRB / (otherNodes[innerLoopCounter].trust.GRB + otherNodes[innerLoopCounter].trust.BRB);
                    }
                    break;
                  } // end if
                } // end for
              }
              break;
            } // end if
          } // end for
          //dbg(DBG_USR1, "Old TID, before Timer 6 start: %x\r\n", transactionRecords[ttCounter].transaction_id);
          //dbg(DBG_USR1, "Just before calling Timer 6 start: %x\r\n", TRANSACTION_ID);

        #endif // NOSARP



        /* If the trust got adjusted, start over after 20 seconds*/
        if (myAddr == 23)// || (myAddr == 6) )
          call Timer6.start(TIMER_ONE_SHOT, 20000);//DATA_PACKET_INTERVAL);

        /*
        if (myAddr == 0)
        {
          call StdControl.init();
          call StdControl.start();
        }
        */



      } // end if onereported and twoReported > 0
      else
      {
        /* In case we don't hear from either one, check again */
        #ifdef DEBUG
        dbg(DBG_USR1, "%d called transactiontrust without having both transactions reported >0, checking again.\r\n", myAddr);
        #endif

        atomic
        {
          transactionsToCheckQ[writeTransactionCheckHere].transaction_id = transactionRecords[ttCounter].transaction_id;
          transactionsToCheckQ[writeTransactionCheckHere].oneTimes = 0 ;
          transactionsToCheckQ[writeTransactionCheckHere].twoTimes = 0 ;
          writeTransactionCheckHere ++;
          numTransactionsToCheck ++;
          if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
            writeTransactionCheckHere = 0;
          call Timer8.start(TIMER_ONE_SHOT, 4000);
        }
      }

      /* WHY CHANGE ROOT TRUST ?
      else if ( (transactionRecords[ttCounter].oneHopReported == 1) &&  (transactionRecords[ttCounter].packetsForwardedTo == 0) )
      {
        dbg(DBG_USR1, "%d reports one and ALL (ROOT) reports are in for transaction %x\r\n", myAddr, transactionRecords[ttCounter].transaction_id);
        for (loopCounter = 0; loopCounter < numOneHopNeighbors; loopCounter ++)
        {
          dbg(DBG_USR1, "%d %d\r\n", myOneHopNeighbors[loopCounter].node_id, transactionRecords[ttCounter].packetsForwardedTo);
          if (myOneHopNeighbors[loopCounter].node_id == transactionRecords[ttCounter].packetsForwardedTo)
          {
            if ( myOneHopNeighbors[loopCounter].node_id == 0)
              break; // don't otuch root trust

            myOneHopNeighbors[loopCounter].trust.GFB += transactionRecords[ttCounter].oneHopReportedPacketsReceived;
            myOneHopNeighbors[loopCounter].trust.BFB += transactionRecords[ttCounter].packetsForwarded - transactionRecords[ttCounter].oneHopReportedPacketsReceived;

            myOneHopNeighbors[loopCounter].trust.trustFP = myOneHopNeighbors[loopCounter].trust.GFB / (myOneHopNeighbors[loopCounter].trust.GFB + myOneHopNeighbors[loopCounter].trust.BFB);
            dbg(DBG_USR1, "%d updated %d's trustFP to %f\r\n", myAddr, myOneHopNeighbors[loopCounter].node_id, myOneHopNeighbors[loopCounter].trust.trustFP);
          } // end if
        } // end for
      } // end else
      */
    } // end has not been processed

  }






  task void processInMsg()
  {
    uint8_t loopCounter, neighborIndex, type;//, found = 0;

    atomic
    {
      type = inQ[readInQHere].type;
    }
    //if (myAddr == 0)
    //dbg(DBG_USR1, "%d in process in msg, type: %d.\r\n", myAddr, type);


    if (1) // for the time being there is no difference between root and other nodes (myAddr != 0)
    {
      if (type == DISCOVERY_MSG_TYPE)
      {
        disc_msg_in = (DiscoveryMsg *) inQ[readInQHere].data;
        //oneHopQuickGlance |= (0x1 << disc_msg_in->mode_id);
        //dbg(DBG_USR1, "%d heard Discovery message from %d with a level of %d.\r\n", myAddr, disc_msg_in->node_id, disc_msg_in->level);
        if ( oneHopQuickGlance & ( 0x1 << disc_msg_in->node_id) )
        {   /* We already have node in our one-hop table */
          for (loopCounter = 0; loopCounter < numOneHopNeighbors; loopCounter ++)
          {
            //  If already in table, update it
            if (myOneHopNeighbors[loopCounter].node_id == disc_msg_in->node_id)
            {
              //call Leds.greenToggle();
              //found = 1;
              //dbg(DBG_USR1, "%d already has %d in OneHop table, level: %d.\r\n", myAddr, disc_msg_in->node_id, myOneHopNeighbors[loopCounter].level);
              //dbg(DBG_USR1, "%d reports it is processing node: %d, level: %d, parent %d\r\n", myAddr, disc_msg_in->node_id, disc_msg_in->level, disc_msg_in->parent_id);
              if (myOneHopNeighbors[loopCounter].level > disc_msg_in->level)
              {
                #ifdef DEBUG
                dbg(DBG_USR1, "%d updated %d level to %d\r\n", myAddr, disc_msg_in->node_id, disc_msg_in->level);
                #endif
                myOneHopNeighbors[loopCounter].level = disc_msg_in->level;
              }
              if (myOneHopNeighbors[loopCounter].parent_id != disc_msg_in->parent_id)
              {
                //dbg(DBG_USR1, "%d updated %d parent to %d\r\n", myAddr, disc_msg_in->node_id, disc_msg_in->parent_id);
                myOneHopNeighbors[loopCounter].parent_id = disc_msg_in->parent_id;

              }
              break;
            }
          }
        }
        else
        {
          // if not in One Hop tables, add it
          //if ( (found == 0) && (disc_msg_in->node_id != myAddr) )
          if (disc_msg_in->node_id != myAddr)
          {
            myOneHopNeighbors[numOneHopNeighbors].node_id = disc_msg_in->node_id;
            myOneHopNeighbors[numOneHopNeighbors].level= disc_msg_in->level;
            myOneHopNeighbors[numOneHopNeighbors].parent_id= disc_msg_in->parent_id;
            myOneHopNeighbors[numOneHopNeighbors].trust.trustFP = TRUST_FP_START;
            myOneHopNeighbors[numOneHopNeighbors].trust.GFB = TRUST_GFB_START;
            myOneHopNeighbors[numOneHopNeighbors].trust.BFB = TRUST_BFB_START;
            myOneHopNeighbors[numOneHopNeighbors].trust.trustRH = TRUST_RH_START;
            myOneHopNeighbors[numOneHopNeighbors].trust.GRB = TRUST_GRB_START;
            myOneHopNeighbors[numOneHopNeighbors].trust.BRB = TRUST_BRB_START;
            oneHopQuickGlance |= ( 0x1 << disc_msg_in->node_id);
            numOneHopNeighbors ++;
            //dbg(DBG_USR1, "%d initialized %d level to %d\r\n", myAddr, disc_msg_in->node_id, disc_msg_in->level);
          }
        }

        // if I hear root, my level becomes 1
        if (disc_msg_in->node_id == 0)
        {
          atomic
          {
            //dbg(DBG_USR1, "%d heard root\r\n", myAddr);
            myLevel = 1;
            myWantedParent.node_id = 0;
            myWantedParent.level = 0;
            /*
            myWantedParent.parent_id = 0;
            myWantedParent.trust.trustFP =  TRUST_FP_ROOT;
            myWantedParent.trust.GFB =      TRUST_GFB_ROOT;
            myWantedParent.trust.BFB =      TRUST_BFB_ROOT;
            myWantedParent.trust.trustRH =  TRUST_RH_ROOT;
            myWantedParent.trust.GRB =      TRUST_GRB_ROOT;
            myWantedParent.trust.BRB =      TRUST_BRB_ROOT;
            */
          }
        }
        else // I don't hear root, maybe I can use this one - loosy style
        {
          if (myAddr != 0)
          {
            // is this a lower level for me ?
            // if so, make it the Wanted Parent, but don't tell it ... shh!
            if ( (disc_msg_in->level) < (myLevel -1) )
            {
              //dbg(DBG_USR1, "%d chooses %d as its parent.\r\n", myAddr, disc_msg_in->node_id);
              atomic
              {
                myLevel = disc_msg_in->level + 1;
                myWantedParent.node_id = disc_msg_in->node_id;
                myWantedParent.level = disc_msg_in->level;
              }
              /*
              myWantedParent.parent_id = disc_msg_in->parent_id;
              myWantedParent.trust.trustFP =  TRUST_FP_START;
              myWantedParent.trust.GFB =      TRUST_GFB_START;
              myWantedParent.trust.BFB =      TRUST_BFB_START;
              myWantedParent.trust.trustRH =  TRUST_RH_START;
              myWantedParent.trust.GRB =      TRUST_GRB_START;
              myWantedParent.trust.BRB =      TRUST_BRB_START;
              */
            }
          }
        }

        // process Neighbor Table here
         for (neighborIndex = 0; neighborIndex < disc_msg_in->num_neighbors; neighborIndex ++)
         {
           if (disc_msg_in->neighbors[neighborIndex].node_id != myAddr)
           {    /* The node is not me */

              if (! (oneHopQuickGlance & ( 0x1 << disc_msg_in->neighbors[neighborIndex].node_id)) )
              { /* The node is not in our oneHop tables*/

                if (! (twoHopQuickGlance & ( 0x1 << disc_msg_in->neighbors[neighborIndex].node_id)) )
                { /* The node is not in our twoHop tables, so add it. */
                  atomic
                  {
                    otherNodes[numTwoHopNeighbors].node_id = disc_msg_in->neighbors[neighborIndex].node_id;
                    otherNodes[numTwoHopNeighbors].one_hop_id = disc_msg_in->node_id;
                    otherNodes[numTwoHopNeighbors].level = disc_msg_in->neighbors[neighborIndex].level;
                    otherNodes[numTwoHopNeighbors].trust.trustFP =  TRUST_FP_START;
                    otherNodes[numTwoHopNeighbors].trust.GFB =      TRUST_GFB_START;
                    otherNodes[numTwoHopNeighbors].trust.BFB =      TRUST_BFB_START;
                    otherNodes[numTwoHopNeighbors].trust.trustRH =  TRUST_RH_START;
                    otherNodes[numTwoHopNeighbors].trust.GRB =      TRUST_GRB_START;
                    otherNodes[numTwoHopNeighbors].trust.BRB =      TRUST_BRB_START;
                    numTwoHopNeighbors++;
                    twoHopQuickGlance |= ( 0x1 << disc_msg_in->neighbors[neighborIndex].node_id);
                  }
                }
                else
                { /* The node is in our twoHop tables already */
                  //dbg(DBG_USR1, "Found in two-hop tables\r\n");

                  for (oneDiscIndex = 0; oneDiscIndex < numTwoHopNeighbors; oneDiscIndex ++)
                  {
                    if (otherNodes[oneDiscIndex].node_id == disc_msg_in->node_id)
                    {
                      if (otherNodes[oneDiscIndex].level > disc_msg_in->level)
                        otherNodes[oneDiscIndex].level = disc_msg_in->level;
                      break;
                    }
                  } // end for
                } // end is in twoHop table
              }
           } // if the neighbor is not me
         }
          /*
              if (oneHopQuickGlance |= (0x1 << disc_msg_in->mode_id))
             neighborsToProcess[writeNeighborBuffer].node_id = disc_msg_in->neighbors[neighborIndex].node_id;
             neighborsToProcess[writeNeighborBuffer].one_hop_id = disc_msg_in->node_id;
             neighborsToProcess[writeNeighborBuffer].one_hop_id = disc_msg_in->level;
             atomic
             {
               if (++writeNeighborBuffer == CIRCULAR_BUFFER_SIZE)
                 writeNeighborBuffer = 0;
               post processNeighbor();
            } // end atomic statement
            */

      } // end DISCOVERY_MSG_TYPE

      /*
          Ready messages are like legacy code.  We had them being pushed up the tree because
          we were printing them out the UART -- but we don't need to do that in TOSSIM
          or for this application
      else if (type == READY_MSG_TYPE)
      {
        readyMsgIn = (ReadyMsg *) inQ[readInQHere].data;
        dbg(DBG_USR1, "%d heard a READY MSG from %d\r\n", myAddr, readyMsgIn->node_id);

        //call Leds.yellowOn();
        if (myAddr == 0)
        {
          if (readyMsgIn->dest == 0)
          {
            outQ[writeOutQHere].addr = myWantedParent.node_id;
            outQ[writeOutQHere].type = READY_MSG_TYPE;
            readyMsgOut = (ReadyMsg *)outQ[writeOutQHere].data;
            readyMsgOut->node_id = readyMsgIn->node_id;
            readyMsgOut->dest = readyMsgIn->dest;
            readyMsgOut->parent = readyMsgIn->parent;
            readyMsgOut->num_children = readyMsgIn->num_children;
            if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
              writeOutQHere = 0;
            numMsgOutQ ++;
          }
          post processOutMsg();
        }
        else
        {
          if (readyMsgIn->dest == myAddr)
          {
            atomic
            {
              outQ[writeOutQHere].addr = myWantedParent.node_id;
              outQ[writeOutQHere].type = READY_MSG_TYPE;
              readyMsgOut = (ReadyMsg *)outQ[writeOutQHere].data;
              readyMsgOut->node_id = readyMsgIn->node_id;
              readyMsgOut->dest = myWantedParent.node_id;
              readyMsgOut->parent = readyMsgIn->parent;
              readyMsgOut->num_children = readyMsgIn->num_children;

              if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                writeOutQHere = 0;
              numMsgOutQ ++;
            }
            //dbg(DBG_USR1, "%d forwarding a READY MSG from %d to %d\r\n", myAddr, readyMsgIn->node_id, myWantedParent.node_id);
            post processOutMsg();
          }
        }

      }
      else if (type == READY_ACK_MSG_TYPE)
      {
        readyAckIn = (ReadyMsg *) inQ[readInQHere].data;
        heardFrom = heardFrom | ( 1 << ( readyAckIn->node_id));
        //dbg(DBG_USR1, "%d received ACK_MSG, addressed to: %d\r\n", myAddr, inQ[readInQHere].addr);
        if (inQ[readInQHere].addr == myAddr)
        {
          //dbg(DBG_USR1, "%d says Ack received from parent.\r\n", myAddr);
          call Timer1.start(TIMER_REPEAT, 5000);
          call Timer3.start(TIMER_ONE_SHOT, 30000);
        }
        //readyMsgIn = (ReadyMsg *) inQ[readInQHere].data;

      }
      */
      else if (type == START_MSG_TYPE)
      {
        /* TO DO : reset mote here if running */

        //dbg(DBG_USR1, "%d heard a START MSG\r\n", myAddr);
        if (OkToStart)
        {

          atomic
          {
            outQ[writeOutQHere].addr = TOS_BCAST_ADDR;
            outQ[writeOutQHere].type = START_MSG_TYPE;

            if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
              writeOutQHere = 0;
            numMsgOutQ ++;
          }
          post processOutMsg();
          post startApp();
          OkToStart = FALSE;
          call Timer4.start(TIMER_ONE_SHOT, 2005 + 2 * TOS_LOCAL_ADDRESS);
        }
      }
      else if (type == DATA_MSG_TYPE)
      {
        dataMsgIn = (DataMsg *) inQ[readInQHere].data;
        transactionFound = 0;
        call Leds.redToggle();
        if (dataMsgIn->dst_node_id == myAddr)
        {
          #ifdef DEBUG
          dbg(DBG_USR1, "%d heard DATA_PACKET from %d\r\n", myAddr, dataMsgIn->src_node_id);
          #endif
          call Leds.greenToggle();
          /* selective forwarding test */

          if ( ! (                                                                              \
              /* I am 18, you are 23, I forward 50% of your packets */
              ( (myAddr == SF_NODE_ID1) && (dataMsgIn->src_node_id == SF_VICTIM_NODE_ID1) && (selectiveCounter >= SF_FORWARD_NUMERATOR) )    ||    \
              ( (myAddr == SF_NODE_ID2) && (dataMsgIn->src_node_id == SF_VICTIM_NODE_ID2) && (selectiveCounter >= SF_FORWARD_NUMERATOR) )    ||    \
              ( (myAddr == SF_NODE_ID3) && (dataMsgIn->src_node_id == SF_VICTIM_NODE_ID3) && (selectiveCounter >= SF_FORWARD_NUMERATOR) )    ||    \
              ( (myAddr == SF_NODE_ID4) && (dataMsgIn->src_node_id == SF_VICTIM_NODE_ID4) && (selectiveCounter >= SF_FORWARD_NUMERATOR) )          \
              /* I am 1, you are 5, I forward 50% of packets */
              /*|| (myAddr == 5) && (dataMsgIn->src_node_id == 6) && (selectiveCounter >= 1)         \ */
              ) )
          {
            atomic
            {

              /* Checking to see if we've heard of this transaction before, and if so increment the packet count. */
              /* This is atomic, so we will forward it -- increment packet counts now to avoid another loop in the code. */
              for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
              {

                //dbg(DBG_USR1, "TR_ID: %d, DM_ID: %d, TC:%d\r\n", transactionRecords[transactionCounter].transaction_id, dataMsgIn->transaction_id, transactionCounter);
                if ( transactionRecords[transactionCounter].transaction_id == dataMsgIn->transaction_id)
                {
                  transactionRecords[transactionCounter].packetsReceived ++;
                  transactionFound = 1;
                  if (myAddr != 0)
                    transactionRecords[transactionCounter].packetsForwarded ++;
                  //dbg(DBG_USR1, "%d FOUND temp parent set to %d\r\n", myAddr, transactionRecords[transactionCounter].packetsForwardedTo);
                  break;
                }
              }

              /* If we haven't heard this transaction before, initialize it and set packets received to one. */

              if (transactionFound == 0)
              {
                for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
                {
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d reports isValid %d\r\n", myAddr, transactionRecords[transactionCounter].isValid);
                  if (transactionRecords[transactionCounter].isValid == 1)
                    dbg(DBG_USR1, "%d reports transaction %x id VALID  -- IMPORTANT !!\r\n", myAddr, transactionRecords[transactionCounter].transaction_id);
                  #endif

                  if (transactionRecords[transactionCounter].isValid == 0)
                  {
                    transactionRecords[transactionCounter].transaction_id = dataMsgIn->transaction_id;
                    transactionRecords[transactionCounter].originatingNode = dataMsgIn->orig_node_id;
                    transactionRecords[transactionCounter].receivedFrom = dataMsgIn->src_node_id;
                    transactionRecords[transactionCounter].isValid = 1;
                    //dbg(DBG_USR1, "%d setting its recieveFrom to %d for %d\r\n", myAddr, dataMsgIn->src_node_id, dataMsgIn->transaction_id);
                    transactionRecords[transactionCounter].packetsReceived = 1;
                    transactionRecords[transactionCounter].packetsForwarded = 1;

                    transactionRecords[transactionCounter].oneHopReported = 0;
                    transactionRecords[transactionCounter].oneHopReportedPacketsReceived = 0;
                    transactionRecords[transactionCounter].oneHopReportedPacketsForwarded = 0;
                    transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = 0;
                    transactionRecords[transactionCounter].twoHopReported = 0;
                    transactionRecords[transactionCounter].twoHopReportedPacketsReceived = 0;
                    transactionRecords[transactionCounter].processed = 0;
                    /* This is where we choose the parent for the transaction */

                    if (myAddr == 0)
                    {
                      /* For now do nothing */
                      /* TO DO: Determie what effect this change has */
                      ;//transactionRecords[transactionCounter].packetsForwardedTo = 255;
                    }
                    if (myLevel == 1)
                    {
                      /* If I can talk to root, skip this parent choice step */
                        transactionRecords[transactionCounter].packetsForwardedTo = 0;
                    }
                    else if (myAddr != 0 )
                    {
                      highestTrustIndex = 255;
                      /* figure out and set the transaction parent here */
                      for (dataIndex = 0; dataIndex < numOneHopNeighbors; dataIndex ++)
                      {
                        #ifdef DEBUG
                        dbg(DBG_USR1, "HTI: %d, DI:%d\r\n", highestTrustIndex, dataIndex);
                        dbg(DBG_USR1, "%d:%d considered %d:%d as its transaction parent.\r\n", myAddr, myLevel, myOneHopNeighbors[dataIndex].node_id, myOneHopNeighbors[dataIndex].level);
                        #endif
                        if (highestTrustIndex == 255)
                        {
                          #ifdef DEBUG
                          dbg(DBG_USR1, "Highest trust index is 255.\r\n");
                          #endif
                          if (myOneHopNeighbors[dataIndex].level < myLevel)
                          {
                            #ifdef DEBUG
                            dbg(DBG_USR1, "%d:%d REALLY considered %d:%d as its transaction parent.\r\n", myAddr, myLevel, myOneHopNeighbors[dataIndex].node_id, myOneHopNeighbors[dataIndex].level);
                            #endif
                            highestTrustIndex = dataIndex;
                          }
                        }
                        else
                        {
                          #ifdef DEBUG
                          dbg(DBG_USR1, "Highest trust index: %d\r\n", highestTrustIndex);
                          #endif
                          if (myOneHopNeighbors[dataIndex].level <= myOneHopNeighbors[highestTrustIndex].level)
                          {
                            if (myOneHopNeighbors[dataIndex].trust.trustFP > myOneHopNeighbors[highestTrustIndex].trust.trustFP)
                            {
                              highestTrustIndex = dataIndex;
                              #ifdef DEBUG
                              dbg(DBG_USR1, "%d:%d TRULY considered %d:%d as its transaction parent.\r\n", myAddr, myLevel, myOneHopNeighbors[dataIndex].node_id, myOneHopNeighbors[dataIndex].level);
                              #endif
                            }
                          }
                        }
                      }
                      //#ifdef DEBUG
                      dbg(DBG_USR1, "%d chose %d as its %x transaction parent, with a trust value of %f\r\n", myAddr, myOneHopNeighbors[highestTrustIndex].node_id, transactionRecords[transactionCounter].transaction_id, myOneHopNeighbors[highestTrustIndex].trust.trustFP);
                      //#endif
                      /* TO DO : Parent trust thresholding */
                      if (myOneHopNeighbors[highestTrustIndex].trust.trustFP > 0)
                        transactionRecords[transactionCounter].packetsForwardedTo = myOneHopNeighbors[highestTrustIndex].node_id;
                      else
                      {
                        /* TO DO : This is where we make another choice */
                        transactionRecords[transactionCounter].packetsForwardedTo = myOneHopNeighbors[highestTrustIndex].node_id;
                      }
                    }

                    // This doesn't make a dynamice choice //transactionRecords[transactionCounter].packetsForwardedTo = myWantedParent.node_id;
                    //dbg(DBG_USR1, "%d INITIALLY set temp parent to %d\r\n", myAddr, transactionRecords[transactionCounter].packetsForwardedTo);
                    break;
                  }
                }
              }

              /* If we are not root, forward the DATA packet to our parent. */
              if (myAddr != 0)
              {
                //dbg(DBG_USR1, "%d says, Temp parent = %d, Wanted Parent ID = %d\r\n", myAddr, transactionRecords[transactionCounter].packetsForwardedTo, myWantedParent.node_id);
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].packetsForwardedTo;
                outQ[writeOutQHere].type = DATA_MSG_TYPE;
                dataMsgOut = (DataMsg *) outQ[writeOutQHere].data;
                dataMsgOut->dst_node_id = transactionRecords[transactionCounter].packetsForwardedTo;
                dataMsgOut->src_node_id = myAddr;
                dataMsgOut->orig_node_id = dataMsgIn->orig_node_id;
                dataMsgOut->data = dataMsgIn->data;
                dataMsgOut->transaction_id = dataMsgIn->transaction_id;

                if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                  writeOutQHere = 0;
                numMsgOutQ ++;
                //dbg(DBG_USR1, "%d forwarded DATA packet from %d to %d\r\n", myAddr, dataMsgIn->src_node_id, dataMsgOut->dst_node_id);
                post processOutMsg();
              }
              /* Else, we are root and we print that we recieved a DATA packet from the node.  */
              //else
              //  dbg(DBG_USR1, "%d received DATA packet from %d\r\n", myAddr, dataMsgIn->orig_node_id);
            } // end atomic

          } // end selective forwarding test


          if ( (myAddr == SF_NODE_ID1) || (myAddr == SF_NODE_ID2) || (myAddr == SF_NODE_ID3) || (myAddr == SF_NODE_ID4)  )
          {
            selectiveCounter ++;
            if (selectiveCounter >= SF_FORWARD_DENOMENATOR)
              selectiveCounter = 0;
          }
        }
        #ifdef DEBUG
        else
          dbg(DBG_USR1, "%d heard a DATA packet, but it wasn't for me.\r\n", myAddr);
        #endif

      }
      else if (type == REPORT_REQUEST_MSG_TYPE)         // set isValid = 0
      {
      /* TO DO : if the root doesn't near any report requests -- mark the transactoin invalid, but 1 will keep asking */
        //dbg(DBG_USR1, "%d heard a REPORT_REQUEST_MSG packet\r\n", myAddr);
        if (myAddr == 0)
        {
          reportReqMsgIn = (ReportRequestMsg *) inQ[readInQHere].data;
          atomic
          {
            /*  If this is the root, send end-to-end regular report response */
            outQ[writeOutQHere].type = END_TO_END_REPORT_RESPONSE_MSG_TYPE;
            endToEndRepRespMsgOut = (EndToEndReportResponseMsg *) outQ[writeOutQHere].data;
            #ifdef DEBUG
            dbg(DBG_USR1, "Root received a request for report to %d\r\n", reportReqMsgIn->originator); 
            #endif
            endToEndRepRespMsgOut->responder = myAddr;
            endToEndRepRespMsgOut->transaction_id = reportReqMsgIn->transaction_id;
            for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
            {
              if ( transactionRecords[transactionCounter].transaction_id == reportReqMsgIn->transaction_id)
              {
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].receivedFrom;
                endToEndRepRespMsgOut->originator = transactionRecords[transactionCounter].originatingNode;
                endToEndRepRespMsgOut->packetsReceived = transactionRecords[transactionCounter].packetsReceived;
                endToEndRepRespMsgOut->packetsReceivedFrom = transactionRecords[transactionCounter].receivedFrom;
                transactionRecords[transactionCounter].isValid = 0;
                dbg(DBG_USR1, "END-2-END report: %d received %d of %d packets from %d for transaction %x\r\n", myAddr, transactionRecords[transactionCounter].packetsReceived, DATA_MESSAGES_PER_TRIAL, transactionRecords[transactionCounter].originatingNode, transactionRecords[transactionCounter].transaction_id);
                dbg(DBG_USR1, "End-2-End Report follows:\r\n");
                dbg(DBG_USR1, "Transaction:       0x%x\r\n", transactionRecords[transactionCounter].transaction_id);
                dbg(DBG_USR1, "Packets Received:  0x%x\r\n", transactionRecords[transactionCounter].packetsReceived);
                dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", reportReqMsgIn->originatorPacketCount);
                //dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", DATA_MESSAGES_PER_TRIAL);
                break;
              }
            }

            if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
              writeOutQHere = 0;
            numMsgOutQ ++;
          }
          post processOutMsg();

          #ifdef DEBUG
          dbg(DBG_USR1, "%d heard a Report Request message from %d\r\n", myAddr, reportReqMsgIn->originator);
          #endif
        } // end if myAddr == 0

        else
        {
          atomic
          {
            reportReqMsgIn = (ReportRequestMsg *) inQ[readInQHere].data;
            /* If I am not root, forward request to the message's next hop, closer to the root. */
            outQ[writeOutQHere].type = REPORT_REQUEST_MSG_TYPE;
            reportReqMsgOut = (ReportRequestMsg *) outQ[writeOutQHere].data;
            #ifdef DEBUG
            dbg(DBG_USR1, "%d heard a Report Request message from %d\r\n", myAddr, reportReqMsgIn->requestor);
            #endif
            reportReqMsgOut->requestor = myAddr;
            reportReqMsgOut->originator = reportReqMsgIn->originator;
            reportReqMsgOut->originatorPacketCount = reportReqMsgIn->originatorPacketCount;
            reportReqMsgOut->transaction_id = reportReqMsgIn->transaction_id;
            for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
            {
              if ( transactionRecords[transactionCounter].transaction_id == reportReqMsgIn->transaction_id)
              {
                #ifdef DEBUG
                dbg(DBG_USR1, "%d reports for transaction %x it forwards packets to: %d\r\n", myAddr, transactionRecords[transactionCounter].transaction_id, transactionRecords[transactionCounter].packetsForwardedTo);
                #endif
                transactionRecords[transactionCounter].originatorPacketCount = reportReqMsgIn->originatorPacketCount;
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].packetsForwardedTo;
                reportReqMsgOut->destination = transactionRecords[transactionCounter].packetsForwardedTo;
                break;
              }
            }

            if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
              writeOutQHere = 0;
            numMsgOutQ ++;

            /* If report requests come through me, then I need to check for responses. */
            /* In case I don't hear the report to me -- I know to check for it */
            /* This ay fix the last gummy bug. */
            transactionsToCheckQ[writeTransactionCheckHere].transaction_id = transactionRecords[transactionCounter].transaction_id;
            transactionsToCheckQ[writeTransactionCheckHere].oneTimes = 0 ;
            transactionsToCheckQ[writeTransactionCheckHere].twoTimes = 0 ;
            writeTransactionCheckHere ++;
            numTransactionsToCheck ++;
            if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
              writeTransactionCheckHere = 0;

            reportQ[writeReportQHere] = transactionRecords[transactionCounter].transaction_id;
            if (++writeReportQHere == CIRCULAR_BUFFER_SIZE)
              writeReportQHere = 0;

            #ifdef DEBUG
            dbg(DBG_USR1, "%d forwarded a Report Request message to %d\r\n", myAddr, reportReqMsgOut->destination);
            #endif
          }

          post processOutMsg();
        }
        call Timer8.start(TIMER_ONE_SHOT, 3100);
        call Timer7.start(TIMER_ONE_SHOT, 380 + (30 * myAddr) ); // send regular report to one-hop

      }
      else if (type == REPORT_RESPONSE_NO_FORWARD_MSG_TYPE)
      {
        reportRespNoForwardMsgIn = (ReportResponseNoForwardMsg *) inQ[readInQHere].data;
        #ifdef DEBUG
        dbg(DBG_USR1, "%d heard a Report Response NO Forward message\r\n", myAddr);
        #endif
        atomic
        {
          for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d, TRID: %d, RRID: %d\r\n", myAddr, transactionRecords[transactionCounter].transaction_id, reportRespNoForwardMsgIn->transaction_id);
            #endif
            if ( transactionRecords[transactionCounter].transaction_id == reportRespNoForwardMsgIn->transaction_id)
            {
              if (reportRespNoForwardMsgIn->packetsReceivedFrom == myAddr)
              {
                /* This is a one hop message, to me.  */
                #ifdef DEBUG
                dbg(DBG_USR1, "%d reports the NO forward message is a ONE hop message\r\n", myAddr);
                #endif
                transactionRecords[transactionCounter].oneHopReportedPacketsReceived = reportRespNoForwardMsgIn->packetsReceived;
                transactionRecords[transactionCounter].oneHopReportedPacketsForwarded = reportRespNoForwardMsgIn->packetsForwarded;
                transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = reportRespNoForwardMsgIn->packetsForwardedTo;
                transactionRecords[transactionCounter].oneHopReported = 1;
                transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                  writeTransactionTrustHere = 0;
                post processTransactionTrust();
              }
              else if (reportRespNoForwardMsgIn->packetsReceivedFrom == transactionRecords[transactionCounter].packetsForwardedTo)
              {
                /* Now, process the report, if it heard the packets from the node I forwarded my packets to. */
                #ifdef DEBUG
                dbg(DBG_USR1, "%d reports the NO forward message is a TWO hop message\r\n", myAddr);
                #endif
                transactionRecords[transactionCounter].twoHopReportedPacketsReceived = reportRespNoForwardMsgIn->packetsReceived;
                transactionRecords[transactionCounter].twoHopReported = 1;
                transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                  writeTransactionTrustHere = 0;
                post processTransactionTrust();
              }
              break;
            }
          }
        } // end atomic transaction
      }
      else if (type == REPORT_RESPONSE_FORWARD_MSG_TYPE)
      {

        atomic
        {
          reportForwardMsgIn = (ReportResponseForwardMsg *) inQ[readInQHere].data;
          #ifdef DEBUG
          dbg(DBG_USR1, "%d heard a Report Response Forward message, TID: %d\r\n", myAddr, reportForwardMsgIn->transaction_id);
          #endif
          outQ[writeOutQHere].type = REPORT_RESPONSE_NO_FORWARD_MSG_TYPE;
          reportForwardMsgOut = (ReportResponseForwardMsg *) outQ[writeOutQHere].data;
          reportForwardMsgOut->responder = reportForwardMsgIn->responder;
          reportForwardMsgOut->transaction_id = reportForwardMsgIn->transaction_id;
          reportForwardMsgOut->packetsReceived = reportForwardMsgIn->packetsReceived;
          reportForwardMsgOut->packetsReceivedFrom = reportForwardMsgIn->packetsReceivedFrom;
          reportForwardMsgOut->packetsForwarded = reportForwardMsgIn->packetsForwarded;
          reportForwardMsgOut->packetsForwardedTo = reportForwardMsgIn->packetsForwardedTo;

          /* Now, process the report, if it was meant for us. */
          /* This should only happen if the report is sent from the transaction originator's oneHopNeighbor */
          if (reportForwardMsgIn->packetsReceivedFrom == myAddr)
          {
            for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
            {
              #ifdef DEBUG
              dbg(DBG_USR1, "%d, TRID: %d, RRID: %d\r\n", myAddr, transactionRecords[transactionCounter].transaction_id, reportForwardMsgIn->transaction_id);
              #endif
              if ( transactionRecords[transactionCounter].transaction_id == reportForwardMsgIn->transaction_id)
              {
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].receivedFrom;
                transactionRecords[transactionCounter].oneHopReportedPacketsReceived = reportForwardMsgIn->packetsReceived;
                transactionRecords[transactionCounter].oneHopReportedPacketsForwarded = reportForwardMsgIn->packetsForwarded;
                transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = reportForwardMsgIn->packetsForwardedTo;
                transactionRecords[transactionCounter].oneHopReported = 1;
                transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                  writeTransactionTrustHere = 0;
                post processTransactionTrust();
                break;
              }
            }
          }

          /* Update Qs and post sending task. */
          if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
            writeOutQHere = 0;
          //if (++readReportQHere >= CIRCULAR_BUFFER_SIZE)
          //  readReportQHere = 0;
          numMsgOutQ ++;
          post processOutMsg();

        } // end atomic transaction
      }
      else if (type == END_TO_END_REPORT_RESPONSE_MSG_TYPE)         // set isValid = 0
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "%d heard an End To End Report Response message\r\n", myAddr);
        #endif
        endToEndRepRespMsgIn = (EndToEndReportResponseMsg *) inQ[readInQHere].data;
        if (myAddr != endToEndRepRespMsgIn->originator)
        {
          atomic
          {
            outQ[writeOutQHere].type = END_TO_END_REPORT_RESPONSE_MSG_TYPE;
            endToEndRepRespMsgOut = (EndToEndReportResponseMsg *) outQ[writeOutQHere].data;

            endToEndRepRespMsgOut->responder           =   myAddr;
            endToEndRepRespMsgOut->transaction_id      =   endToEndRepRespMsgIn->transaction_id;
            endToEndRepRespMsgOut->originator          =   endToEndRepRespMsgIn->originator;
            endToEndRepRespMsgOut->packetsReceived     =   endToEndRepRespMsgIn->packetsReceived;
            endToEndRepRespMsgOut->packetsReceivedFrom =   endToEndRepRespMsgIn->packetsReceivedFrom;

            for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
            {
              if ( transactionRecords[transactionCounter].transaction_id == endToEndRepRespMsgIn->transaction_id)
              {
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].receivedFrom;
                #ifdef DEBUG
                dbg(DBG_USR1, "%d sending end-to-end report to %d through %d\r\n", myAddr, endToEndRepRespMsgIn->originator, transactionRecords[transactionCounter].receivedFrom);
                #endif
                break;
              }
            }

            if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
              writeOutQHere = 0;
            numMsgOutQ ++;
            post processOutMsg();
          } // end atomic
        }
        else  /* This report is for me. */
        {
          ;
          #ifdef DEBUG
          dbg(DBG_USR1, "%d heard and will process its end-to-end report response.\r\n", myAddr);
          #endif
        }
      }
      else if (type == SPECIFIC_REPORT_REQUEST_MSG_TYPE)
      {
        atomic
        {
          specificReportReqMsgIn = (SpecificReportRequestMsg *) inQ[readInQHere].data;
          /* Look up the transaction. */
          for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
          {
            if ( transactionRecords[transactionCounter].transaction_id == specificReportReqMsgIn->transaction_id)
            {/* Found the record !*/
              
              /* If I am root, reprint end-to-end report */
              if (myAddr == 0)
              {
                dbg(DBG_USR1, "END-2-END report: %d received %d of %d packets from %d for transaction %x\r\n", myAddr, transactionRecords[transactionCounter].packetsReceived, specificReportReqMsgIn->originatorPacketCount, transactionRecords[transactionCounter].originatingNode, transactionRecords[transactionCounter].transaction_id);
                dbg(DBG_USR1, "End-2-End Report follows:\r\n");
                dbg(DBG_USR1, "Transaction:       0x%x\r\n", transactionRecords[transactionCounter].transaction_id);
                dbg(DBG_USR1, "Packets Received:  0x%x\r\n", transactionRecords[transactionCounter].packetsReceived);
                dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", specificReportReqMsgIn->originatorPacketCount);
              }

              if (specificReportReqMsgIn->destination == myAddr)
              {
                #ifdef DEBUG
                dbg(DBG_USR1, "%d received a SPECIFIC_REPORT_REQUEST_MSG for ME.\r\n", myAddr);
                #endif
                /* It is a request to me, so send response */
                outQ[writeOutQHere].type = SPECIFIC_REPORT_RESPONSE_MSG_TYPE;
                specificReportResponseMsgOut = (SpecificReportResponseMsg *) outQ[writeOutQHere].data;
                specificReportResponseMsgOut->responder = myAddr;
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].receivedFrom;
                specificReportResponseMsgOut->originator = specificReportReqMsgIn->originator;
                specificReportResponseMsgOut->transaction_id = transactionRecords[transactionCounter].transaction_id;
                specificReportResponseMsgOut->packetsReceived = transactionRecords[transactionCounter].packetsReceived;
                specificReportResponseMsgOut->packetsReceivedFrom = transactionRecords[transactionCounter].receivedFrom;
                specificReportResponseMsgOut->packetsForwarded = transactionRecords[transactionCounter].packetsForwarded;
                specificReportResponseMsgOut->packetsForwardedTo = transactionRecords[transactionCounter].packetsForwardedTo;

                /* Update Qs and post sending task. */
                if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                  writeOutQHere = 0;
                //if (++readReportQHere >= CIRCULAR_BUFFER_SIZE)
                //  readReportQHere = 0;
                numMsgOutQ ++;
                post processOutMsg();
                break;
              }
              else if ( specificReportReqMsgIn->destination == transactionRecords[transactionCounter].packetsForwardedTo )
              {
                /* They want their two hop, or who I sent the packets to, forward the message to them. */
                #ifdef DEBUG
                dbg(DBG_USR1, "%d received a SPECIFIC_REPORT_REQUEST_MSG for NOT me.\r\n", myAddr);
                #endif
                specificReportReqMsgOut = (SpecificReportRequestMsg *) outQ[writeOutQHere].data;
                outQ[writeOutQHere].addr = transactionRecords[transactionCounter].packetsForwardedTo;
                outQ[writeOutQHere].type = SPECIFIC_REPORT_REQUEST_MSG_TYPE;
                specificReportReqMsgOut->destination = transactionRecords[transactionCounter].packetsForwardedTo;
                specificReportReqMsgOut->requestor              = specificReportReqMsgIn->requestor;
                specificReportReqMsgOut->originator             = specificReportReqMsgIn->originator;
                specificReportReqMsgOut->originatorPacketCount  = specificReportReqMsgIn->originatorPacketCount;
                specificReportReqMsgOut->transaction_id         = specificReportReqMsgIn->transaction_id;

                /* Update Qs and post sending task. */
                if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                  writeOutQHere = 0;
                numMsgOutQ ++;
                post processOutMsg();
                break;
              }
            } // end outer if
          }

        } // end atomic transaction
      }
      else if (type == SPECIFIC_REPORT_RESPONSE_MSG_TYPE)
      {
        //SpecificReportResponseMsg *specificReportResponseMsgIn, *specificReportResponseMsgOut;
        #ifdef DEBUG
        dbg(DBG_USR1, "%d heard a SPECIFIC REPORT RESPONSE message\r\n", myAddr);
        #endif
        specificReportResponseMsgIn = (SpecificReportResponseMsg *) inQ[readInQHere].data;
        atomic
        {
          for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
          {
            if ( transactionRecords[transactionCounter].transaction_id == specificReportResponseMsgIn->transaction_id)
            {
              if (specificReportResponseMsgIn->originator == myAddr) // If I sent the request
              {
              /* This is for me */
                if (specificReportResponseMsgIn->responder == transactionRecords[transactionCounter].packetsForwardedTo)
                {
                /* This is a one-hop report */
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d heard a SPECIFIC ONE-hop msg for me, TID: %x\r\n", myAddr, specificReportResponseMsgIn->transaction_id);
                  #endif
                  transactionRecords[transactionCounter].oneHopReportedPacketsReceived    = specificReportResponseMsgIn->packetsReceived;
                  transactionRecords[transactionCounter].oneHopReportedPacketsForwarded   = specificReportResponseMsgIn->packetsForwarded;
                  transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = specificReportResponseMsgIn->packetsForwardedTo;
                  transactionRecords[transactionCounter].oneHopReported = 1;
                  transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                  if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                    writeTransactionTrustHere = 0;
                  post processTransactionTrust();
                  /* In case we don't hear from either one, check again */
                  transactionsToCheckQ[writeTransactionCheckHere].transaction_id = transactionRecords[transactionCounter].transaction_id;
                  transactionsToCheckQ[writeTransactionCheckHere].oneTimes = 0 ;
                  transactionsToCheckQ[writeTransactionCheckHere].twoTimes = 0 ;
                  writeTransactionCheckHere ++;
                  numTransactionsToCheck ++;
                  if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
                    writeTransactionCheckHere = 0;
                  call Timer8.start(TIMER_ONE_SHOT, 3250);

                }
                else if (specificReportResponseMsgIn->responder == transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo)
                {
                /* This is a two-hop report for me */
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d heard a SPECIFIC hop-TWO msg for me\r\n", myAddr);
                  #endif
                  transactionRecords[transactionCounter].twoHopReportedPacketsReceived = specificReportResponseMsgIn->packetsReceived;
                  transactionRecords[transactionCounter].twoHopReported = 1;
                  transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                  if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                    writeTransactionTrustHere = 0;
                  post processTransactionTrust();
                }
                else
                {
                  ;
                  /* BAD FLAG : else te node who sent the report to me is not the node who I sent the packets to ! */
                }
              } // end for me

              else if (specificReportResponseMsgIn->originator == transactionRecords[transactionCounter].receivedFrom)
              {
                /* For who I got the packets from */
                /* TO DO: Decide if we process this anyway .... */
                outQ[writeOutQHere].type = SPECIFIC_REPORT_RESPONSE_MSG_TYPE;
                outQ[writeOutQHere].addr = specificReportResponseMsgIn->originator;
                specificReportResponseMsgOut = (SpecificReportResponseMsg *) outQ[writeOutQHere].data;
                specificReportResponseMsgOut->responder           = specificReportResponseMsgIn->responder;
                specificReportResponseMsgOut->originator          = specificReportResponseMsgIn->originator;
                specificReportResponseMsgOut->transaction_id      = specificReportResponseMsgIn->transaction_id;
                specificReportResponseMsgOut->packetsReceived     = specificReportResponseMsgIn->packetsReceived;
                specificReportResponseMsgOut->packetsReceivedFrom = specificReportResponseMsgIn->packetsReceivedFrom;
                specificReportResponseMsgOut->packetsForwarded    = specificReportResponseMsgIn->packetsForwarded;
                specificReportResponseMsgOut->packetsForwardedTo  = specificReportResponseMsgIn->packetsForwardedTo;
                /* Update Qs and post sending task. */
                if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                  writeOutQHere = 0;
                numMsgOutQ ++;
                post processOutMsg();
                #ifdef DEBUG
                dbg(DBG_USR1, "%d reports forwarding SPECIFIC_REPORT_RESPONSE_MESSAGE_OUT to %d\r\n", myAddr, specificReportResponseMsgOut->originator);
                #endif
              }
              break;    // found the transaction -- no don't loop any more
            } // end found transaction
          } // end for loop
        } // end atomic
      }

    } // end if TRUE -- used to be myAddr != 0

    numMsgInQ --;
    readInQHere ++;
    if (readInQHere >= CIRCULAR_BUFFER_SIZE)
      readInQHere = 0;

  } // end processInMsg



  event TOS_MsgPtr Receive.receive(TOS_MsgPtr n)
  {
    int8_t loopCounter, *put, *get;
    #ifdef DEBUG
    if (n->type ==SPECIFIC_REPORT_REQUEST_MSG_TYPE)
      dbg(DBG_USR1, "%d heard a SPECIFIC_REPORT_REQUEST_MSG_TYPE message.\r\n", myAddr);
    #endif
    //if (n->type == REPORT_REQUEST_MSG_TYPE)
    //  dbg(DBG_USR1, "%d heard a report requestadressed to %d\r\n", myAddr, n->addr);
    //if (n->type == START_MSG_TYPE)
    //  call Leds.redOn();
    //else if (n->type == START_MSG_TYPE)
    //  call Leds.yellowToggle();

  /*
        TOS_Msg OTA fields
        ------------------

        uint16_t    addr
        uint8_t     type
        uint8_t     group
        int8_t      data[29]
        uint16_t    crc
  */
    atomic
    {
      inQ[writeInQHere].addr = n->addr;
      inQ[writeInQHere].type = n->type;
      inQ[writeInQHere].group = n->group;
      inQ[writeInQHere].crc = n->crc;
      put = (int8_t *) &(inQ[writeInQHere].data);
      get = (int8_t *) &(n->data);
      for (loopCounter = 0; loopCounter < TOS_DATA_LENGTH; loopCounter++)
      {
        *put = *get;
        put++;
        get++;
      }
      if (++writeInQHere >= CIRCULAR_BUFFER_SIZE)
        writeInQHere = 0;
      numMsgInQ ++;
      post processInMsg();
      //if (n->type == REPORT_REQUEST_MSG_TYPE)
      //  dbg(DBG_USR1, "%d heard a REPORT_REQUEST_MSG\r\n", myAddr);
    }
    return n;
  }


  task void sendDiscovery()
  {
    /*
          TOS_Msg OTA fields
          ------------------

          uint16_t    addr
          uint8_t     type
          uint8_t     group
          int8_t      data[29]
          uint16_t    crc
    */
      atomic
      {
        outQ[writeOutQHere].addr = TOS_BCAST_ADDR;
        outQ[writeOutQHere].type = DISCOVERY_MSG_TYPE;
        disc_msg_out = (DiscoveryMsg *)outQ[writeOutQHere].data;
        disc_msg_out->node_id = myAddr;
        disc_msg_out->level = myLevel;
        disc_msg_out->parent_id = myWantedParent.node_id;
        disc_msg_out->num_neighbors = numOneHopNeighbors + numTwoHopNeighbors;
        for (dindex = 0; dindex < numOneHopNeighbors; dindex++)
        {
            disc_msg_out->neighbors[dindex].node_id = myOneHopNeighbors[dindex].node_id;
            disc_msg_out->neighbors[dindex].level = myOneHopNeighbors[dindex].level;
        }

        if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
          writeOutQHere = 0;
        numMsgOutQ ++;
      }
      post processOutMsg();
  }




  /* This sends ready message to parent  */
  /* Removed becasue we don't need it */
/*
  task void sendReadyMsg()
  {
    if ( (myAddr == 0) || ( (myWantedParent.node_id != NO_PARENT) && (myAddr != 0) ) )
    {
      atomic
      {
        outQ[writeOutQHere].addr = TOS_BCAST_ADDR;
        //outQ[writeOutQHere].addr = myWantedParent.node_id;
        outQ[writeOutQHere].type = READY_MSG_TYPE;
        readyMsgOut = (ReadyMsg *)outQ[writeOutQHere].data;
        readyMsgOut->node_id = myAddr;
        readyMsgOut->dest = myWantedParent.node_id;
        readyMsgOut->parent = myWantedParent.node_id;
        readyMsgOut->num_children = numChildren;

        if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
          writeOutQHere = 0;
        numMsgOutQ ++;
      }
      post processOutMsg();
    }
    else
    {
      ; // put shutdown code here
    }
  }
*/



  /* This sends a data message to trnasaction parent, and is used if this node is the transaction originator.  */
  /* If this is the first packet in the series, then choose a parent dynamically */
  task void sendDataMsg()
  {
    uint8_t highestTrustIndex2 = 0, dataIndex2 = 0;
    /* TO DO ; -- MULTIPLE TRANSACTIONS ORIGINATING AT SAME NODE SIMULTANEOUSLY */
    if ( numDataMessagesInTrial <= DATA_MESSAGES_PER_TRIAL )
    {
      if ( (myWantedParent.node_id != NO_PARENT) && (myAddr != 0) )
      {

        atomic
        {
            transactionFound = 0;
            //TRANSACTION_ID = TOS_LOCAL_ADDRESS * 10000;
            for (transactionCounter = 0; transactionCounter <= MAX_TRANSACTIONS; transactionCounter ++)
            {

              if ( transactionRecords[transactionCounter].transaction_id == TRANSACTION_ID)
              {
                transactionRecords[transactionCounter].packetsForwarded ++;
                transactionFound = 1;
                break;
              }
            }

            /* If we haven't heard this transaction before, initialize it and set packets received to one. */

            if (transactionFound == 0)
            {
              for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
              {
                if (transactionRecords[transactionCounter].isValid == 0) // do we need this check ?
                {
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d initializing TID: %x\r\n", myAddr, TRANSACTION_ID);
                  #endif
                  transactionRecords[transactionCounter].isValid = 1;
                  transactionRecords[transactionCounter].transaction_id = TRANSACTION_ID;
                  transactionRecords[transactionCounter].receivedFrom = NO_PARENT;
                  transactionRecords[transactionCounter].originatingNode = myAddr;
                  transactionRecords[transactionCounter].packetsReceived = 0;
                  transactionRecords[transactionCounter].packetsForwarded = 1;
                  transactionRecords[transactionCounter].processed = 0;

                  highestTrustIndex2 = 255;
                  /* figure out and set the transaction parent here */
                  for (dataIndex2 = 0; dataIndex2 < numOneHopNeighbors; dataIndex2 ++)
                  {
                    #ifdef DEBUG
                    dbg(DBG_USR1, "HTI: %d, DI:%d\r\n", highestTrustIndex2, dataIndex2);
                    dbg(DBG_USR1, "%d:%d considered %d:%d as its transaction parent.\r\n", myAddr, myLevel, myOneHopNeighbors[dataIndex2].node_id, myOneHopNeighbors[dataIndex2].level);
                    #endif
                    if (highestTrustIndex2 == 255) // still hasn't found a potential transaction parent
                    {
                      #ifdef DEBUG
                      dbg(DBG_USR1, "Highest trust index is 255.\r\n");
                      #endif
                      if (myOneHopNeighbors[dataIndex2].level < myLevel)
                      {
                        #ifdef DEBUG
                        dbg(DBG_USR1, "%d:%d REALLY considered %d:%d:%f as its transaction parent.\r\n", myAddr, myLevel, myOneHopNeighbors[dataIndex2].node_id, myOneHopNeighbors[dataIndex2].level, myOneHopNeighbors[dataIndex2].trust.trustFP);
                        #endif
                        highestTrustIndex2 = dataIndex2;
                      }
                    }
                    else
                    {
                      #ifdef DEBUG
                      dbg(DBG_USR1, "Highest trust index: %d\r\n", highestTrustIndex2);
                      #endif
                      if (myOneHopNeighbors[dataIndex2].level < myLevel)
                      {
                        if (myOneHopNeighbors[dataIndex2].trust.trustFP > myOneHopNeighbors[highestTrustIndex2].trust.trustFP)
                        {
                          highestTrustIndex2 = dataIndex2;
                          #ifdef DEBUG
                          dbg(DBG_USR1, "%d:%d TRULY considered %d:%d as its transaction parent.\r\n", myAddr, myLevel, myOneHopNeighbors[dataIndex2].node_id, myOneHopNeighbors[dataIndex2].level);
                          #endif
                        }
                      }
                    }
                  }
                  //#ifdef DEBUG
                  dbg(DBG_USR1, "%d chose %d as its %x transaction parent, with a trust value of %f\r\n", myAddr, myOneHopNeighbors[highestTrustIndex2].node_id, transactionRecords[transactionCounter].transaction_id, myOneHopNeighbors[highestTrustIndex2].trust.trustFP);
                  //#endif
                  /* Deprecated */
                  /* figure out and set the transaction parent here */
                  /*
                  for (dataIndex = 0; dataIndex < numOneHopNeighbors; dataIndex ++)
                  {
                    if (dataIndex == 0)
                      highestTrustIndex = dataIndex;
                    else
                    {
                      if (myOneHopNeighbors[dataIndex].level < myLevel)
                      {
                        if (myOneHopNeighbors[dataIndex].trust.trustFP > myOneHopNeighbors[highestTrustIndex].trust.trustFP)
                        {
                          highestTrustIndex = dataIndex;
                        }
                      }
                    }
                  }
                  */
                  /* TO DO : Parent trust thresholding */
                  if (myOneHopNeighbors[highestTrustIndex2].trust.trustFP > 0)
                    transactionRecords[transactionCounter].packetsForwardedTo = myOneHopNeighbors[highestTrustIndex2].node_id;
                  else
                  {
                    /* TO DO : This is where we make another choice */
                    transactionRecords[transactionCounter].packetsForwardedTo = myOneHopNeighbors[highestTrustIndex2].node_id;
                  }
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", myAddr, myLevel, myOneHopNeighbors[highestTrustIndex2].node_id, myOneHopNeighbors[highestTrustIndex2].level, myOneHopNeighbors[dataIndex2].trust.trustFP);
                  #endif

                  numDataMessagesInTrial = 1;

                  transactionRecords[transactionCounter].oneHopReported = 0;
                  transactionRecords[transactionCounter].oneHopReportedPacketsReceived = 0;
                  transactionRecords[transactionCounter].oneHopReportedPacketsForwarded = 0;
                  transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = NO_PARENT;
                  transactionRecords[transactionCounter].twoHopReported = 0;
                  transactionRecords[transactionCounter].twoHopReportedPacketsReceived = 0;

                  break;
                } // end if transation is valid
              } // end for loop
            } // end if transaction found

          /* Now go ahead and send it */
          outQ[writeOutQHere].addr = transactionRecords[transactionCounter].packetsForwardedTo;
          outQ[writeOutQHere].type = DATA_MSG_TYPE;
          dataMsgOut = (DataMsg *)outQ[writeOutQHere].data;
          dataMsgOut->dst_node_id = transactionRecords[transactionCounter].packetsForwardedTo;
          dataMsgOut->src_node_id = myAddr;
          dataMsgOut->orig_node_id = myAddr;
          dataMsgOut->data = SAMPLE_DATA;
          dataMsgOut->transaction_id = TRANSACTION_ID;

          if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
            writeOutQHere = 0;
          numMsgOutQ ++;
          #ifdef DEBUG
          dbg(DBG_USR1, "%d put a DATA Message in its outQ, for %d\r\n", myAddr, dataMsgOut->dst_node_id);
          #endif
        } // end atomic

        numDataMessagesInTrial ++;
        post processOutMsg();
        call Timer6.start(TIMER_ONE_SHOT, DATA_PACKET_INTERVAL);
      }
      else
      {
        dbg(DBG_USR1, "HELP !!!! I AM %d.  I AM TOLD TO SEND A data message BUT I CAN'T !!!!!\r\n", myAddr);
      }
    }
    else
    {
      //#ifdef DEBUG
      dbg(DBG_USR1, "%d all done sending %d data packets.\r\n", myAddr, numDataMessagesInTrial - 1);
      //#endif

      /* To DO REPORT: Write a description of the reporting including pseudocode */
      /* TO DO : What happens if there is a node that doesn't respond at all ?  */
      /* TO DO : Build in an ALIVE_MESSAGE, so it can know if it can sucessfully forwarded a packet ? */
      /* TO DO : Choosing <b>transaction parent</b> based on trust values */
      /* TO DO : Process reports to change trust values */
      /* TO DO : Keep track of nodes that have messages recently */
      /* To DO : IMPORTANT timeout on reports received. */

      /* Forwarding trust:  send versus heard.  Assume everything that is heard is forwaded.  */
      /* This sends a report request message to parent  */
      tFoundHere = 0;
      if ( (myWantedParent.node_id != NO_PARENT) && (myAddr != 0) )
      {
        atomic
        {
          reportReqMsgOut = (ReportRequestMsg *)outQ[writeOutQHere].data;
          for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
          {
            if (transactionRecords[transactionCounter].transaction_id == TRANSACTION_ID) // do we need this check ?
            {
              outQ[writeOutQHere].addr = transactionRecords[transactionCounter].packetsForwardedTo;
              reportReqMsgOut->destination = transactionRecords[transactionCounter].packetsForwardedTo;

              outQ[writeOutQHere].type = REPORT_REQUEST_MSG_TYPE;
              reportReqMsgOut->requestor = myAddr;
              reportReqMsgOut->originator = myAddr;
              reportReqMsgOut->originatorPacketCount = transactionRecords[transactionCounter].packetsForwarded;
              reportReqMsgOut->transaction_id = TRANSACTION_ID;

              if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                writeOutQHere = 0;
              numMsgOutQ ++;

              /* This writes the current TID to the to-check buffer, so it can check it later. */
              transactionsToCheckQ[writeTransactionCheckHere].oneTimes = 0;
              transactionsToCheckQ[writeTransactionCheckHere].twoTimes = 0;
              transactionsToCheckQ[writeTransactionCheckHere].transaction_id = TRANSACTION_ID;
              writeTransactionCheckHere ++;
              numTransactionsToCheck ++;
              if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
                writeTransactionCheckHere = 0;
              /* This starts the timer to check for reports */
              call Timer8.start(TIMER_ONE_SHOT, 4000);
              post processOutMsg();

              TRANSACTION_ID ++;
              numDataMessagesInTrial = 0;
              tFoundHere = 1;
              break;
            }
          }
        }
        if (tFoundHere == 0)
        {
          dbg(DBG_USR1, "%d CANNOT FIND THIS TRANSACTION TO ASK FOR REPORTS -- THIS IS REALLY BAD !!!\r\n");
        }

        //dbg(DBG_USR1, "%d put a REPORT_REQUEST_MSG Message in its outQ.\r\n", myAddr);
      }
      else
      {
        dbg(DBG_USR1, "HELP !!!! I AM %d.  I AM TOLD TO SEND A data message BUT I CAN'T !!!!!\r\n", myAddr);
      }
    }
  }



  /* This posts a sendDiscovery task. */
  event result_t Timer1.fired()
  {
    post sendDiscovery();
    return SUCCESS;
  }


  /* This is the READY_MSG timer.  It sends a ready Message, then sets a flag, and calls itself again. 
     The second time it calls is invoked it lights the LEDs with the number of its parent, and starts
     Times 6, which is the Data messaging phase. */

  /* This has been changed to remove the ready message from this equation.  We don't need it. */
  event result_t Timer2.fired()
  {
    uint8_t chIndex = 0, oneIndex = 0;
    /* determine who our children are. */
    /* TO DO: Find out if we even care about this anymore */
    for (oneIndex=0; oneIndex < numOneHopNeighbors; oneIndex ++)
    {
      if (myOneHopNeighbors[oneIndex].parent_id == myAddr)  // this is my child
      {
        myChildren[chIndex].node_id = myOneHopNeighbors[oneIndex].node_id;
        myChildren[chIndex].level = myOneHopNeighbors[oneIndex].level;
        myChildren[chIndex].parent_id = myOneHopNeighbors[oneIndex].parent_id;
        numChildren++;
        chIndex++;
      }
    }
    // stop sending Discovery messages
    call Timer1.stop();

    /*
    #ifdef __REAL_MOTE__
    // Say who our parents are
    call Leds.redOff();
    call Leds.greenOff();
    call Leds.yellowOff();
    if (myWantedParent.node_id & 1)
      call Leds.redOn();
    if (myWantedParent.node_id &2)
      call Leds.greenOn();
    if (myWantedParent.node_id & 4)
      call Leds.yellowOn();
    #endif
    */

    /* TO DO : Make this a dynamic starting sending data.  Make it based on sensor readings. */
    // start sending data messages
    //if ( myAddr != 0 )
    if (myAddr == 23)// || (myAddr == 6) )
      call Timer6.start(TIMER_ONE_SHOT, DATA_PACKET_INTERVAL);
      //call Timer6.start(TIMER_ONE_SHOT, (DATA_PACKET_INTERVAL * 100) * myAddr);
    return SUCCESS;
  }



  /* This timer stops sending Discovery Messages */

  /* Removed becasue it is redundant */
  /*
  event result_t Timer3.fired()
  {
    call Timer1.stop();
    return SUCCESS;
  }
  */

  /* This is the start timer.  It prevents multiple START_MSG_TYPE messages within 5 seconds */
  event result_t Timer4.fired()
  {
    atomic
    {
      outQ[writeOutQHere].addr = TOS_BCAST_ADDR;
      outQ[writeOutQHere].type = START_MSG_TYPE;
      if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
        writeOutQHere = 0;
      numMsgOutQ ++;
    }
    post processOutMsg();

    // Uncomment the below line to enable end-of-test messages
    //call Timer5.start(TIMER_ONE_SHOT, 50000);

    return SUCCESS;
  }


  /**************************************
   *
   *    FUNCTIONALITY FOR TESTING
   *
   **************************************/

  /* This timer sends a ready message out of the UART port to signal it is the end of the test. */
  /* Removed because it is not useful anymore. */
  /*
  event result_t Timer5.fired()
  {
    OkToStart = TRUE;
    outMsg.addr   = TOS_UART_ADDR;
    outMsg.type   = READY_MSG_TYPE;
    readyMsgOut = (ReadyMsg *)outMsg.data;
    readyMsgOut->node_id = 0xff;
    readyMsgOut->dest = 0xff;
    readyMsgOut->parent = 0xff;
    readyMsgOut->num_children = 0xff;
    call SendUReady.send(TOS_UART_ADDR, sizeof(ReadyMsg), &outMsg);
    return SUCCESS;
  }
  */

  /*  This timer starts and continues the process of sending data messages, and then calling for reports. */
  event result_t Timer6.fired()
  {
    post sendDataMsg();
    return SUCCESS;
  }


  event result_t Timer7.fired()
  {
    post sendReport();
    return SUCCESS;
  }

  event result_t Timer8.fired()
  {
    #ifdef DEBUG
    dbg(DBG_USR1, "%d reports %d transactions to check\r\n", myAddr, numTransactionsToCheck);
    #endif
    if (numTransactionsToCheck > 0)
    {
      /* TO DO: Check report get count against the MAX-- define the MAX. */
      // MAXREPORT_TRIES 20
      atomic
      {
        checkingTID = transactionsToCheckQ[readTransactionCheckHere].transaction_id;
        oneTimesTID = transactionsToCheckQ[readTransactionCheckHere].oneTimes;
        twoTimesTID = transactionsToCheckQ[readTransactionCheckHere].twoTimes;
        readTransactionCheckHere++;
        numTransactionsToCheck --;
        if (readTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
          readTransactionCheckHere = 0;

        for (transactionCounter = 0; transactionCounter < MAX_TRANSACTIONS; transactionCounter ++)
        {
          //#ifdef DEBUG
          //dbg(DBG_USR1, "%d T: %x, Ch: %x\r\n", myAddr, transactionRecords[transactionCounter].transaction_id, checkingTID);
          //#endif

          if (transactionRecords[transactionCounter].transaction_id == checkingTID)
          {
            t8Counter = transactionCounter;
            break;
          }
        } // end for looping through the transactions
      }
      if (transactionRecords[t8Counter].processed == 0)
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "%d reports oneTimes: %d, and twoTimes: %d\r\n", myAddr, oneTimesTID, twoTimesTID);
        #endif

        if (transactionRecords[t8Counter].oneHopReported == 0)
        {
          /* If we did not hear from one-hop */
          if (oneTimesTID >= MAX_REPORT_TRIES)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d report ONE hop %d TIMED OUT\r\n", myAddr, transactionRecords[t8Counter].packetsForwardedTo);
            #endif
            atomic
            {
              transactionRecords[t8Counter].oneHopReported = 255;
              /* This writes the current TID to the to-check buffer, so it can check it later. */
              transactionsToCheckQ[writeTransactionCheckHere].transaction_id = transactionRecords[t8Counter].transaction_id;
              transactionsToCheckQ[writeTransactionCheckHere].oneTimes = ++oneTimesTID;
              transactionsToCheckQ[writeTransactionCheckHere].twoTimes = 0;
              writeTransactionCheckHere ++;
              numTransactionsToCheck ++;
              if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
                writeTransactionCheckHere = 0;
            }
            call Timer8.start(TIMER_ONE_SHOT, 2515);
                transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                  writeTransactionTrustHere = 0;
            post processTransactionTrust();
          }
          else
          {
            /* One hop did not report in -- go get it ! */
            #ifdef DEBUG
            dbg(DBG_USR1, "%d reports ONE hop %d DID NOT CHECK IN %d times for transaction %x\r\n", myAddr, transactionRecords[t8Counter].packetsForwardedTo, oneTimesTID + 1, checkingTID);
            #endif
            atomic
            {
              outQ[writeOutQHere].addr = transactionRecords[t8Counter].packetsForwardedTo;
              outQ[writeOutQHere].type = SPECIFIC_REPORT_REQUEST_MSG_TYPE;
              specificReportReqMsgOut = (SpecificReportRequestMsg *)outQ[writeOutQHere].data;
              specificReportReqMsgOut->destination = transactionRecords[t8Counter].packetsForwardedTo;
              specificReportReqMsgOut->requestor = myAddr;
              specificReportReqMsgOut->originator =myAddr;// transactionRecords[t8Counter].originatingNode;
              specificReportReqMsgOut->originatorPacketCount = transactionRecords[t8Counter].originatorPacketCount;
              specificReportReqMsgOut->transaction_id = checkingTID;

              if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                writeOutQHere = 0;
              numMsgOutQ ++;

              /* This writes the current TID to the to-check buffer, so it can check it later. */
              transactionsToCheckQ[writeTransactionCheckHere].transaction_id = checkingTID;
              transactionsToCheckQ[writeTransactionCheckHere].oneTimes = ++oneTimesTID;
              transactionsToCheckQ[writeTransactionCheckHere].twoTimes = 0;
              writeTransactionCheckHere ++;
              numTransactionsToCheck ++;
              if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
                writeTransactionCheckHere = 0;
            }
            post processOutMsg();
            call Timer8.start(TIMER_ONE_SHOT, 2300);
          }
        }
        else if ( (transactionRecords[t8Counter].packetsForwardedTo != 0) && (transactionRecords[t8Counter].twoHopReported == 0) )
        {
          /* If we did not send to root, and two hop did not report in, go get it ! */
          if (twoTimesTID >= MAX_REPORT_TRIES)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d report TWO hop %d TIMED OUT\r\n", myAddr, transactionRecords[t8Counter].oneHopReportedPacketsForwardedTo);
            #endif
            atomic
            {
              transactionRecords[t8Counter].twoHopReported = 255;
              /* This writes the current TID to the to-check buffer, so it can check it later. */
              transactionsToCheckQ[writeTransactionCheckHere].transaction_id = checkingTID;
              transactionsToCheckQ[writeTransactionCheckHere].oneTimes = oneTimesTID;
              transactionsToCheckQ[writeTransactionCheckHere].twoTimes = ++twoTimesTID;
              writeTransactionCheckHere ++;
              numTransactionsToCheck ++;
              if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
                writeTransactionCheckHere = 0;
            }
            call Timer8.start(TIMER_ONE_SHOT, 1005);
                transactionTrustToProcessQ[writeTransactionTrustHere] = transactionRecords[transactionCounter].transaction_id;
                if (++writeTransactionTrustHere >= CIRCULAR_BUFFER_SIZE)
                  writeTransactionTrustHere = 0;
            post processTransactionTrust();
          }
          else
          {
            /* Two hop did not report in (and there was a two-hop) -- go get it ! */
            #ifdef DEBUG
            dbg(DBG_USR1, "%d reports TWO hop DID NOT CHECK IN %d times for transaction %x\r\n", myAddr, twoTimesTID + 1, checkingTID);
            #endif
            atomic
            {
              outQ[writeOutQHere].addr = transactionRecords[t8Counter].packetsForwardedTo;
              outQ[writeOutQHere].type = SPECIFIC_REPORT_REQUEST_MSG_TYPE;
              specificReportReqMsgOut = (SpecificReportRequestMsg *)outQ[writeOutQHere].data;
              specificReportReqMsgOut->destination = transactionRecords[t8Counter].oneHopReportedPacketsForwardedTo;
              specificReportReqMsgOut->requestor = myAddr;
              specificReportReqMsgOut->originator = myAddr;//transactionRecords[t8Counter].originatingNode;
              specificReportReqMsgOut->originatorPacketCount = transactionRecords[t8Counter].originatorPacketCount;
              specificReportReqMsgOut->transaction_id = checkingTID;

              #ifdef DEBUG
              dbg(DBG_USR1, "%d will send a SPECIFIC_REPORT_REQUEST_MSG_TYPE to %d\r\n", myAddr, transactionRecords[t8Counter].packetsForwardedTo);
              #endif
              if (++writeOutQHere >= CIRCULAR_BUFFER_SIZE)
                writeOutQHere = 0;
              numMsgOutQ ++;

              /* This writes the current TID to the to-check buffer, so it can check it later. */
              transactionsToCheckQ[writeTransactionCheckHere].transaction_id = checkingTID;
              transactionsToCheckQ[writeTransactionCheckHere].twoTimes = ++twoTimesTID;
              transactionsToCheckQ[writeTransactionCheckHere].oneTimes = oneTimesTID;
              writeTransactionCheckHere ++;
              numTransactionsToCheck ++;
              if (writeTransactionCheckHere >= CIRCULAR_BUFFER_SIZE)
                writeTransactionCheckHere = 0;
            }
            post processOutMsg();
            call Timer8.start(TIMER_ONE_SHOT, 3400);
          } // end if .. else
        } // end if .. else if
      }
      else
      {
        /* This is already processed, a duplicate .. skip over it and process the next one */
        #ifdef DEBUG
        dbg(DBG_USR1, "%d says DUPlicate call to timer8\r\n", myAddr);
        #endif
        if (numTransactionsToCheck > 0)
          call Timer8.start(TIMER_ONE_SHOT, 2200);
      }
      /* If there are more transactions to check -- don't fall through here !*/
      if (numTransactionsToCheck > 0)
         call Timer8.start(TIMER_ONE_SHOT, 1900);
    } // end if numTransactionsToCheck > 0
    return SUCCESS;
  }


#ifdef IS_ROOT
  void *UDPServer(void *arg)
  {
    if (TOS_LOCAL_ADDRESS == 0)
    {
      int sockfd, n;
      struct sockaddr_in servaddr, cliaddr;
      socklen_t len;
      uint8_t msgIndex;
      uint8_t mesg[sizeof(TOS_Msg) + 1];
      int8_t loopCounter2, *put2, *get2;
      TOS_MsgPtr tmpUDP;

      sockfd = socket(AF_INET,SOCK_DGRAM,0);

      memset(&servaddr, 0, sizeof(servaddr));
      servaddr.sin_family = AF_INET;
      servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
      servaddr.sin_port=htons(40000);
      bind(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));

      //printf("Sizeof our msg: %d\r\n", sizeof(mesg));
      for (;;)
      {
        len = sizeof(cliaddr);
        n = recvfrom(sockfd, mesg, sizeof(mesg), 0, (struct sockaddr *)&cliaddr, &len);
        printf("-------------------------------------------------------\n");
        mesg[n] = 0;
        printf("Received the following:\r\n0x ");
        for (msgIndex = 0; msgIndex < sizeof(mesg); msgIndex++)
        {
          printf("%x ", mesg[msgIndex]);
        }
        printf("\r\n-------------------------------------------------------\n");

          //signal Receive.receive((TOS_MsgPtr) &mesg[1]);

        tmpUDP = (TOS_MsgPtr) &mesg[1];
        atomic
        {
          inQ[writeInQHere].addr = tmpUDP->addr;
          inQ[writeInQHere].type = tmpUDP->type;
          inQ[writeInQHere].group = tmpUDP->group;
          inQ[writeInQHere].crc = tmpUDP->crc;
          put2 = (int8_t *) &(inQ[writeInQHere].data);
          get2 = (int8_t *) &(tmpUDP->data);
          for (loopCounter2 = 0; loopCounter2 < TOS_DATA_LENGTH; loopCounter2++)
          {
            *put2 = *get2;
            put2++;
            get2++;
          }
          if (++writeInQHere >= CIRCULAR_BUFFER_SIZE)
            writeInQHere = 0;
          numMsgInQ ++;
          #ifdef DEBUG
          if (tmpUDP->type == 24)
            dbg(DBG_USR1, "%d heard something from %d.\r\n", myAddr, tmpUDP->addr);
          #endif
          post processInMsg();
        }

      }
    }

    return 0;
  }
#endif





} // end Implementation

