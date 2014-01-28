#define ROOT_ADDR                           0
#define TOS_DATA_LENGTH                     TOSH_DATA_LENGTH

#define TRUST_FP_ROOT                       1.0
#define TRUST_GFB_ROOT                      0
#define TRUST_BFB_ROOT                      0
#define TRUST_RH_ROOT                       1.0
#define TRUST_GRB_ROOT                      0
#define TRUST_BRB_ROOT                      0

#define SAMPLE_DATA                         0xbeef
// #define DATA_MESSAGES_PER_TRIAL             10 // moved to includes/TrafficGenerator.h
#define DATA_PACKET_INTERVAL                1000

#define MAX_REPORT_TRIES                    5

#define MAX_TRANSACTIONS                CIRCULAR_BUFFER_SIZE

#define ACCEPTABLE_REPORTING_VARIANCE2       0.2

includes IntMsg;
includes AM;
includes TosTime;
includes Globals;
includes MessagingH;
includes TransactionTableH;
includes TrafficGeneratorH;
includes TrustH;

module SarpM{
  provides {
    interface StdControl;
  }
  uses {
    interface IntOutput;
    interface SendMsg as SendDisc;
    interface SendMsg as SendUDisc;
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
    interface Timer as Timer9;
    interface Timer as Timer10;

    interface Time;
    interface Leds;
    interface TimeSet;
#ifdef __REAL__MOTE__
    interface CC2420Control;
#endif

/* Begin modular intferaces */

    interface NeighborTable;
    interface TransactionTable;
    interface Trust;
    interface Messaging;
    interface Attack;
    interface TrafficGenerator;

/* End modular intferaces */

  }
}

implementation {

  uint16_t DFCounter = 0;
//  uint32_t DFThreshold = 2880; // number of 30-seconds // moved to includes/TrustH

  uint32_t heardFrom = 0;
  uint16_t myState;//, readySent;
  uint16_t myLevel, srcAddr, timerOneIndex;
  uint16_t index, dindex, outIndex;
  uint16_t myAddr, randomNum;
  bool OkToStart = TRUE;
  uint32_t TRANSACTION_ID = 0;///TOS_LOCAL_ADDRESS * 10000;

  uint16_t myOne, myZero;

  // Message holders
  TOS_Msg inQ[CIRCULAR_BUFFER_SIZE], outQ[CIRCULAR_BUFFER_SIZE], *tempTOS, *inMsg, outMsg;
  uint16_t readInQHere, writeInQHere, readOutQHere, writeOutQHere, readReportQHere = 0, writeReportQHere = 0;
  uint16_t numMsgInQ = 0, numMsgOutQ = 0;

  uint16_t numDataMessagesInTrial = 0;

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
  DiscoveryMsg *disc_msg_in;
//  ReadyMsg *readyMsgIn, *readyMsgOut, *readyAckIn;
  StartMsg *startMsg;
  DataMsg *dataMsgIn;
  ReportRequestMsg *reportReqMsgIn;
  ReportResponseNoForwardMsg *reportRespNoForwardMsgIn;
  ReportResponseForwardMsg *reportRespForwardMsgIn;
  ReportResponseForwardMsg *reportForwardMsgIn;
  EndToEndReportResponseMsg *endToEndRepRespMsgIn;
  SpecificReportRequestMsg *specificReportReqMsgIn;
  SpecificReportResponseMsg *specificReportResponseMsgIn;
  ControlMsg *controlMsgIn;

  Neighbor_Rec_withTrust_t myStaticParent;


  uint16_t transactionCounter, numTransactions = 0;

  /*
   *    Here are the neighbor tables for this instance
   */
  Neighbor_Rec_withTrust_t neighbors[MAX_NEIGHBORS];
  Neighbor_Rec_withTrust_t *myOneHopNeighbors[MAX_ONE_HOP_NEIGHBORS];
  Neighbor_Rec_withTrust_t *otherNodes[MAX_OTHER_NEIGHBORS];
  Neighbor_Rec_withTrust_t *myChildren[MAX_CHILDREN], *myPeers[MAX_CHILDREN];

  uint16_t numOneHopNeighbors, numChildren, numPeers, numNeighbors, loopCounterN = 0;



  /*
   *    Here are the trust tables and their helper items
   */
  Transaction_Record_t transactionRecords[MAX_TRANSACTIONS];
  uint32_t reportQ[CIRCULAR_BUFFER_SIZE], currentTID;
  Check_Transaction_Record_t transactionsToCheckQ[CIRCULAR_BUFFER_SIZE];

  Transaction_Record_Ptr checkThisTransaction, thisTransaction;

  uint32_t checkingTID;
  uint16_t oneTimesTID, twoTimesTID;

  uint16_t transactionFound, sending = 0;
  uint16_t readTransactionCheckHere = 0, writeTransactionCheckHere = 0, numTransactionsToCheck = 0;
  uint16_t dataIndex = 0, highestTrustIndex = 0, oneDiscIndex = 0, twoDiscIndex = 0;
  uint16_t tFoundHere = 0;
  uint32_t nodeCounter, nodeCounter2;


  uint16_t lastToFindLoop = 255;
  uint16_t cantFixIt = 255;
  uint16_t dontSendTo = 255;
  uint16_t newTransactionParent;

  uint16_t isOff_onoff = 0, onOffThirtySecondCounter = 0;


  uint16_t selectiveCounter = 0;

  unsigned long oneHopQuickGlance = 0, twoHopQuickGlance = 0;

  task void startApp()
  {
    dbg(DBG_USR1, "%d started its App.\r\n", TOS_LOCAL_ADDRESS);
    this_dmesg.type = CONTROL_MSG_TYPE;
    call Leds.redOff();
    call Leds.greenOff();
    call Leds.yellowOff();
    call Timer1.start(TIMER_REPEAT, 2100 +    (15 * TOS_LOCAL_ADDRESS));     // sends DiscoveryMsg
    call Timer2.start(TIMER_ONE_SHOT, 30000 + (10 * TOS_LOCAL_ADDRESS));     // stops DiscoveryMsg
    call Timer4.start(TIMER_ONE_SHOT, 1250 +  (10 * TOS_LOCAL_ADDRESS));     // sends Start Message
    call Timer10.start(TIMER_REPEAT, 30000);                                 // starts dynamic forgetting
    if (call Attack.isOnOffAttacker(myAddr) == 1)
      call Timer9.start(TIMER_REPEAT, 30000);                                // starts on/off cycle

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
    oneHopQuickGlance = 0;
    twoHopQuickGlance = 0;
    myStaticParent.node_id = NO_PARENT;
    myStaticParent.level = NO_LEVEL;
    myStaticParent.parent_id = NO_PARENT;
    numChildren = 0;

    numOneHopNeighbors = 0;
    numChildren = 0;
    neighborFound = 0;
    oneHopFound = 0;
    numNeighbors = 0;
    
    myZero = 0;
    myOne = 1;


    if ( myAddr == 0 ) // I am root,hear me roar !!!
    {
      myLevel = 0;
    }
    else // I an not root < whimper >
    {
      myLevel = NO_LEVEL;
    }

    TRANSACTION_ID = myAddr * 10000;
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
            //dbg(DBG_USR1, "%d sending DISC MSG\r\n", myAddr);
            call SendDisc.send(TOS_BCAST_ADDR, sizeof(DiscoveryMsg), &outMsg);
            break;
          case CONTROL_MSG_TYPE:
            //dbg(DBG_USR1, "%d sending START MSG\r\n", myAddr);
            call SendStart.send(outMsg.addr, sizeof(StartMsg), &outMsg);
            break;
          case DATA_MSG_TYPE:
            dbg(DBG_USR1, "%d sending DATA message to %d\r\n", myAddr, outMsg.addr);
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
            if (  (! call Attack.isNoResponder(myAddr)) || (isOff_onoff == 0)  )
              call SendReportNoForwardResponse.send(outMsg.addr, sizeof(ReportResponseNoForwardMsg), &outMsg);
            break;
          case REPORT_RESPONSE_FORWARD_MSG_TYPE:
            #ifdef DEBUG
            dbg(DBG_USR1, "%d sending REPORT_RESPONSE FORWARD message to %d\r\n", myAddr, outMsg.addr);
            #endif
            if (  (! call Attack.isNoResponder(myAddr)) || (isOff_onoff == 0)  )
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
            if (  (! call Attack.isNoResponder(myAddr)) || (isOff_onoff == 0)  )
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

    #ifdef DEBUG
    dbg(DBG_USR1, "In sendReport in SarpM, 430\r\n");
    #endif
    atomic
    {
      #ifdef DEBUG
      dbg(DBG_USR1, "RRQH: %d, RRQ: %x\r\n", readReportQHere, reportQ[readReportQHere]);
      #endif
      thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, reportQ[readReportQHere]);
      #ifdef DEBUG
      dbg(DBG_USR1, "WOQH: %d, NMSGOQ: %d, TID: %x, PR: %d, RFrom: %d, PF: %d, PFT: %d, ORIGND: %d\r\n", writeOutQHere, numMsgOutQ, thisTransaction->transaction_id, thisTransaction->packetsReceived, thisTransaction->receivedFrom, thisTransaction->packetsForwarded, thisTransaction->packetsForwardedTo, thisTransaction->originatingNode);
      #endif
      call Messaging.putReportResponseNoForwardMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr, thisTransaction->transaction_id, thisTransaction->packetsReceived, thisTransaction->receivedFrom, thisTransaction->packetsForwarded, thisTransaction->packetsForwardedTo, thisTransaction->originatingNode);

      if (++readReportQHere >= CIRCULAR_BUFFER_SIZE)
        readReportQHere = 0;
      #ifdef DEBUG
      dbg(DBG_USR1, "%d sending regular report to %d\r\n", myAddr, thisTransaction->receivedFrom);
      #endif
    }
    post processOutMsg();
  }




  task void processInMsg()
  {
    uint8_t loopCounter, type;//, found = 0;

    atomic
    {
      type = inQ[readInQHere].type;
    }
    //if (myAddr == 0)
    //dbg(DBG_USR1, "%d in process in msg, type: %d.\r\n", myAddr, type);


    disc_msg_in = (DiscoveryMsg *) inQ[readInQHere].data;

    if (1) // for the time being there is no difference between root and other nodes (myAddr != 0)
    {
      if ( (type == DISCOVERY_MSG_TYPE) && (disc_msg_in->node_id != myAddr) )
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "%d heard Discovery message from %d with a level of %d.\r\n", myAddr, disc_msg_in->node_id, disc_msg_in->level);
        #endif
        call NeighborTable.processNeighborFromDiscMsg(neighbors, myOneHopNeighbors, &numNeighbors, &numOneHopNeighbors, disc_msg_in->node_id, disc_msg_in->level, disc_msg_in->parent_id, &myOne);
        for (loopCounter = 0; loopCounter < disc_msg_in->num_neighbors; loopCounter++)
        {
          if (disc_msg_in->neighbors[loopCounter].node_id != myAddr)
            call NeighborTable.processNeighborFromDiscMsg(neighbors, myOneHopNeighbors, &numNeighbors, &numOneHopNeighbors, disc_msg_in->neighbors[loopCounter].node_id, disc_msg_in->neighbors[loopCounter].level, disc_msg_in->node_id, &myZero);
        }
        // if I hear root, my level becomes 1
        if (disc_msg_in->node_id == 0)
        {
          atomic
          {
            //dbg(DBG_USR1, "%d heard root\r\n", myAddr);
            myLevel = 1;
            myStaticParent.node_id = 0;
            myStaticParent.level = 0;
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
                myStaticParent.node_id = disc_msg_in->node_id;
                myStaticParent.level = disc_msg_in->level;
              }
            }
          }
        }
        
        /* Here send control message */
        if (myStaticParent.node_id != NO_PARENT)
        {
          #ifdef DEBUG
          dbg(DBG_USR1, "Adding %d heard %d to ouQ\r\n", myAddr, disc_msg_in->node_id);
          #endif
          call Messaging.putNeighborDiscoveryControlMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr, disc_msg_in->node_id, myStaticParent.node_id);
          post processOutMsg();
        }


      } // end DISCOVERY_MSG_TYPE

      else if (type == CONTROL_MSG_TYPE)
      {
        /* TO DO : reset mote here if running */

        controlMsgIn = (ControlMsg *) inQ[readInQHere].data;
        #ifdef DEBUG
        dbg(DBG_USR1, "%d heard a CONTROL MSG, type: %d, from %d\n", myAddr, controlMsgIn->msgType, controlMsgIn->data[0]);
        #endif
        if (controlMsgIn->msgType == 0)
        {
          if (OkToStart)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d heard a START MSG, and OkToStart == true\r\n", myAddr);
            #endif
            call Messaging.putStartMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr);
            post processOutMsg();
            post startApp();
            OkToStart = FALSE;
            call Timer4.start(TIMER_ONE_SHOT, 2005 + 2 * TOS_LOCAL_ADDRESS);
          }
          else
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d heard a START MSG, and OkToStart == true\r\n", myAddr);
            #endif
          }
        }
        else if (controlMsgIn->msgType == 1)
        {
          if (myAddr == 0)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "ROOT heard CONTROL_MSG, and it said %d heard %d\r\n", controlMsgIn->data[0], controlMsgIn->data[1]);
            #endif
          }
          else if (myStaticParent.node_id != 255)
          {
            // sendControlMessage(1, controlMsgIn->data, 2);
            #ifdef DEBUG
            dbg(DBG_USR1, "%d heard a NEIGHBOR DISCOVERY MSG that %d heard %d\r\n", myAddr, controlMsgIn->data[0], controlMsgIn->data[1]);
            #endif
            call Messaging.putNeighborDiscoveryControlMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, controlMsgIn->data[0], controlMsgIn->data[1], myStaticParent.node_id);
            post processOutMsg();
          }
        }
      }
      else if (type == DATA_MSG_TYPE)
      {
        dataMsgIn = (DataMsg *) inQ[readInQHere].data;
        transactionFound = 0;
        lastToFindLoop = 255;
        cantFixIt = 255;
        dontSendTo = 255;
        call Leds.redToggle();
        
        if (dataMsgIn->lastToFindLoop != 255)
          lastToFindLoop = dataMsgIn->lastToFindLoop;
        if (dataMsgIn->cantFixIt != 255)
          cantFixIt = dataMsgIn->cantFixIt;
        if (dataMsgIn->dontSendTo != 255)
          dontSendTo = dataMsgIn->dontSendTo;
        dbg(DBG_USR1, "reports lastToFindLoop: %d, cantFixIt: %d, dontSendTo: %d\r\n", dataMsgIn->lastToFindLoop, dataMsgIn->cantFixIt, dataMsgIn->dontSendTo);
        dbg(DBG_USR2, "reports lastToFindLoop: %d, cantFixIt: %d, dontSendTo: %d\r\n", dataMsgIn->lastToFindLoop, dataMsgIn->cantFixIt, dataMsgIn->dontSendTo);

        if (dataMsgIn->dst_node_id == myAddr)
        {
          #ifdef DEBUG
          dbg(DBG_USR1, "%d heard DATA_PACKET from %d with sequenceNumber %d\r\n", myAddr, dataMsgIn->src_node_id, dataMsgIn->sequenceNumber);
          dbg(DBG_USR2, "%d heard DATA_PACKET from %d with sequenceNumber %d\r\n", myAddr, dataMsgIn->src_node_id, dataMsgIn->sequenceNumber);
          #endif

          /* Checking to see if we've heard of this transaction before, and if so increment the packet count. */
          transactionFound = call TransactionTable.transactionExistsAlready(transactionRecords, dataMsgIn->transaction_id, myAddr);

          /* If we haven't heard this transaction before, initialize it and set packets received to one. */
          if (transactionFound == 0)
            call TransactionTable.initializeTransaction(transactionRecords, dataMsgIn->transaction_id, dataMsgIn->orig_node_id, dataMsgIn->src_node_id, myOneHopNeighbors, numOneHopNeighbors, myLevel, 0, myPeers, numPeers, myChildren, numChildren, myAddr);

          thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, dataMsgIn->transaction_id);
          call Leds.greenToggle();
          /* selective forwarding test */

          if ( (call Attack.sfDropThis(myAddr, dataMsgIn->src_node_id, &selectiveCounter)) == 0 )
          {
            /* This is where we test for loops */
            if  ( ((call TransactionTable.isALoop(transactionRecords, dataMsgIn->transaction_id, dataMsgIn->src_node_id, dataMsgIn->sequenceNumber) == 1) && (call Attack.isLoopCreator(myAddr) != 1 ) )  || ( (lastToFindLoop == myAddr) && (cantFixIt == 0) ) || (cantFixIt == 1) )
            {
              dbg(DBG_USR1, "FOUND A LOOP !\r\n");
              dbg(DBG_USR2, "FOUND A LOOP !\r\n");

              /* If lastToFindLoop is 255, then we are the first to detect the loop ! */
              /* If not, then we just pass it along.*/
              if (lastToFindLoop == 255)
                call TransactionTable.markAsLoop(thisTransaction);

              /* If we are not root, forward the DATA packet to our parent. */
              if (myAddr != 0)
              {
                if ( (lastToFindLoop == 255) || ( (lastToFindLoop != myAddr) && (cantFixIt == 1) ) )
                {
                  dbg(DBG_USR1, "is going to try to fix it\r\n");
                  dbg(DBG_USR2, "is going to try to fix it\r\n");
                  /* First get a handle on this transaction */
                  //thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, dataMsgIn->transaction_id);

                  thisTransaction->numberPossibleOtherParents = 0;
                  thisTransaction->numberPossibleOtherParentsTried = 0;

                  /* Second populate our other choices list */
                  /* Cannot put the following nodes on the list:
                   * 1)  The node who originally sent it to us
                   * 2)  The node who we originally sent it to
                   * 3)  The node who sent us the looping packet
                   */
                  for (loopCounter = 0; loopCounter < numOneHopNeighbors; loopCounter++)
                  {
                    if ( (myOneHopNeighbors[loopCounter]->node_id != thisTransaction->packetsForwardedTo) && (myOneHopNeighbors[loopCounter]->node_id != thisTransaction->receivedFrom)  && (myOneHopNeighbors[loopCounter]->node_id != dataMsgIn->src_node_id))
                    {
                      thisTransaction->possibleOtherParents[thisTransaction->numberPossibleOtherParents] = myOneHopNeighbors[loopCounter]->node_id;
                      thisTransaction->numberPossibleOtherParents = thisTransaction->numberPossibleOtherParents + 1;
                    }
                  }

                  dbg(DBG_USR1, "reports %d possible other parents\r\n", thisTransaction->numberPossibleOtherParents);
                  dbg(DBG_USR2, "reports %d possible other parents\r\n", thisTransaction->numberPossibleOtherParents);
                  if (thisTransaction->numberPossibleOtherParents > 0)
                  {
                    dbg(DBG_USR1, "is trying possible other parent number %d\r\n", thisTransaction->numberPossibleOtherParentsTried);
                    dbg(DBG_USR2, "is trying possible other parent number %d\r\n", thisTransaction->numberPossibleOtherParentsTried);
                    newTransactionParent = thisTransaction->possibleOtherParents[thisTransaction->numberPossibleOtherParentsTried];
                    thisTransaction->numberPossibleOtherParentsTried = thisTransaction->numberPossibleOtherParentsTried + 1;
                  }
                  else
                  {
                    dbg(DBG_USR1, "there are no other possible parents for me to try\r\n");
                    dbg(DBG_USR2, "there are no other possible parents for me to try\r\n");
                    newTransactionParent = 255;
                  }

                  //newTransactionParent = call NeighborTable.getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel, myPeers, numPeers, myChildren, numChildren, thisTransaction->receivedFrom, thisTransaction->packetsForwardedTo, dataMsgIn->src_node_id);
                  if (newTransactionParent == 255)
                  {
                    dbg(DBG_USR1, "can't fit it !\r\n");
                    dbg(DBG_USR2, "can't fit it !\r\n");
                    cantFixIt = 1;
                  }
                  else
                  {
                    cantFixIt = 0;
                    dontSendTo = thisTransaction->packetsForwardedTo;
                    thisTransaction->packetsForwardedTo = newTransactionParent;
                    lastToFindLoop = myAddr;
                    dbg(DBG_USR1, "will try %d instead of %d\r\n", newTransactionParent, dontSendTo);
                    dbg(DBG_USR2, "will try %d instead of %d\r\n", newTransactionParent, dontSendTo);
                  }
                }
                else if ( (lastToFindLoop == myAddr) && (cantFixIt == 0) )
                {
                    cantFixIt = 1;
                    dbg(DBG_USR1, "can't fit it either !\r\n");
                    dbg(DBG_USR2, "can't fit it either !\r\n");
                    thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, dataMsgIn->transaction_id);
                    if (thisTransaction->numberPossibleOtherParents > 0)
                    {
                      if (thisTransaction->numberPossibleOtherParentsTried >= thisTransaction->numberPossibleOtherParents) 
                      {
                        // we have tried all of our possilbe parents once, now try them with the cant fix it bit set
                        if (thisTransaction->numberPossibleOtherParentsTried >= (2 * thisTransaction->numberPossibleOtherParents) )
                        {
                          newTransactionParent = 255;
                          cantFixIt = 1;
                        }
                        else
                        {
                          // do something
                          newTransactionParent = thisTransaction->possibleOtherParents[thisTransaction->numberPossibleOtherParentsTried - thisTransaction->numberPossibleOtherParents];
                          thisTransaction->numberPossibleOtherParentsTried ++;
                          cantFixIt = 1;
                        }
                      }
                      else
                      {
                        // we have not yet tried all of our parents
                        newTransactionParent = thisTransaction->possibleOtherParents[thisTransaction->numberPossibleOtherParentsTried];
                        thisTransaction->numberPossibleOtherParentsTried ++;
                        cantFixIt = 0;
                      }
                    }
                    //newTransactionParent = call NeighborTable.getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel, myPeers, numPeers, myChildren, numChildren, thisTransaction->receivedFrom, thisTransaction->packetsForwardedTo, dataMsgIn->src_node_id);
                    if (newTransactionParent == 255)
                    {
                      dbg(DBG_USR1, "nobody else !\r\n");
                      newTransactionParent = call TransactionTable.getTransactionParent(transactionRecords, dataMsgIn->transaction_id);
                      cantFixIt = 1;
                    }
                    else
                    {
                      dontSendTo = thisTransaction->packetsForwardedTo;
                      thisTransaction->packetsForwardedTo = newTransactionParent;
                      lastToFindLoop = myAddr;
                    }
                }
                dbg(DBG_USR1, "will now send to %d\r\n", newTransactionParent);
                dbg(DBG_USR2, "will now send to %d\r\n", newTransactionParent);
                thisTransaction->lastParentTried = newTransactionParent;
                call Messaging.putDataMessageInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, newTransactionParent, myAddr, dataMsgIn->transaction_id, dataMsgIn->orig_node_id, dataMsgIn->data, lastToFindLoop, cantFixIt, dontSendTo, dataMsgIn->sequenceNumber);
                //call Messaging.putDataMessageInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, call TransactionTable.getTransactionParent(transactionRecords, dataMsgIn->transaction_id), myAddr, dataMsgIn->transaction_id, dataMsgIn->orig_node_id, dataMsgIn->data, lastToFindLoop, cantFixIt, dontSendTo);
                post processOutMsg();
              }
            }
            else // not a loop
            {
              dbg(DBG_USR1, "did NOT find a loop\r\n");
              dbg(DBG_USR2, "did NOT find a loop\r\n");
              atomic
              {
                /* If we are not root, forward the DATA packet to our parent. */
                if (myAddr != 0)
                {
                  newTransactionParent = call TransactionTable.getTransactionParent(transactionRecords, dataMsgIn->transaction_id);
                  thisTransaction->lastParentTried = newTransactionParent;
                  call Messaging.putDataMessageInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, newTransactionParent, myAddr, dataMsgIn->transaction_id, dataMsgIn->orig_node_id, dataMsgIn->data, lastToFindLoop, cantFixIt, dontSendTo, dataMsgIn->sequenceNumber);
                  post processOutMsg();
                }
                /* Else, we are root and we print that we recieved a DATA packet from the node.  */
              } // end atomic
            }

          } // end selective forwarding test

        }
        #ifdef DEBUG
        else
          dbg(DBG_USR1, "%d heard a DATA packet, but it wasn't for me.\r\n", myAddr);
        #endif

      }
      else if (type == REPORT_REQUEST_MSG_TYPE)         // set isValid = 0
      {
      /* TO DO : if the root doesn't near any report requests -- mark the transaction invalid, but 1 will keep asking */
        //dbg(DBG_USR1, "%d heard a REPORT_REQUEST_MSG packet\r\n", myAddr);
        if (myAddr == 0)
        {
          #ifdef DEBUG
          dbg(DBG_USR1, "Root heard a request for report.\r\n");
          #endif
          reportReqMsgIn = (ReportRequestMsg *) inQ[readInQHere].data;
          thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, reportReqMsgIn->transaction_id);
          #ifdef DEBUG
          dbg(DBG_USR1, "Transaction gotten in SarpM at 572\r\n");
          #endif
          call Messaging.putEndToEndReportResponseMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr, thisTransaction->originatingNode, thisTransaction->transaction_id, thisTransaction->packetsReceived, thisTransaction->receivedFrom, reportReqMsgIn->originatorPacketCount);
          #ifdef DEBUG
          dbg(DBG_USR1, "End-2-End Report in outQ, SarpM line 576\r\n");
          #endif
          thisTransaction->isValid = 0;

          reportQ[writeReportQHere] = thisTransaction->transaction_id;
          if (++writeReportQHere == CIRCULAR_BUFFER_SIZE)
            writeReportQHere = 0;

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

            call TransactionTable.setOriginatorPacketCount(transactionRecords, reportReqMsgIn->transaction_id, reportReqMsgIn->originatorPacketCount);
            call Messaging.putReportRequestMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, call TransactionTable.getTransactionParent(transactionRecords, reportReqMsgIn->transaction_id), myAddr, reportReqMsgIn->originator, reportReqMsgIn->originatorPacketCount, reportReqMsgIn->transaction_id);
            #ifdef DEBUG
            dbg(DBG_USR1, "%d heard a Report Request message from %d\r\n", myAddr, reportReqMsgIn->requestor);
            #endif


            /* If report requests come through me, then I need to check for responses. */
            /* In case I don't hear the report to me -- I know to check for it */
            /* This may fix the last gummy bug. */
            call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, &transactionRecords[transactionCounter], 0, 0, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);

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
              }
              else if (reportRespNoForwardMsgIn->packetsReceivedFrom == transactionRecords[transactionCounter].packetsForwardedTo)
              {
                /* Now, process the report, if it heard the packets from the node I forwarded my packets to. */
                #ifdef DEBUG
                dbg(DBG_USR1, "%d reports the NO forward message is a TWO hop message\r\n", myAddr);
                #endif
                if (transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo != reportRespNoForwardMsgIn->responder)
                  transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = reportRespNoForwardMsgIn->responder;
                transactionRecords[transactionCounter].twoHopReportedPacketsReceived = reportRespNoForwardMsgIn->packetsReceived;
                transactionRecords[transactionCounter].twoHopReported = 1;
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
          call Messaging.putReportResponseNoForwardMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, reportForwardMsgIn->responder, reportForwardMsgIn->transaction_id, reportForwardMsgIn->packetsReceived, reportForwardMsgIn->packetsReceivedFrom, reportForwardMsgIn->packetsForwarded, reportForwardMsgIn->packetsForwardedTo, reportForwardMsgIn->packetsReceivedFrom);
          post processOutMsg();

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
                break;
              }
            }
          }


        } // end atomic transaction
      }
      else if (type == END_TO_END_REPORT_RESPONSE_MSG_TYPE)         // set isValid = 0
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "%d heard an End To End Report Response message\r\n", myAddr);
        #endif
        endToEndRepRespMsgIn = (EndToEndReportResponseMsg *) inQ[readInQHere].data;
        thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, endToEndRepRespMsgIn->transaction_id);
        if (myAddr != endToEndRepRespMsgIn->originator)
        {
          call Messaging.putEndToEndReportResponseMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr, thisTransaction->originatingNode, thisTransaction->transaction_id, thisTransaction->packetsReceived, thisTransaction->receivedFrom, reportReqMsgIn->originatorPacketCount);
          post processOutMsg();
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
          #ifdef DEBUG
          dbg(DBG_USR1, "Before making srrmi\r\n");
          #endif
          specificReportReqMsgIn = (SpecificReportRequestMsg *) inQ[readInQHere].data;
          #ifdef DEBUG
          dbg(DBG_USR1, "before tt=ctt.gttp, TID: %x\r\n", specificReportReqMsgIn->transaction_id);
          #endif

          /* Look up the transaction. */
          thisTransaction = call TransactionTable.getThisTransactionPtr(transactionRecords, specificReportReqMsgIn->transaction_id);
          #ifdef DEBUG
          dbg(DBG_USR1, "before if.myqddr==0\r\n");
          #endif
              
          /* If I am root, reprint end-to-end report */
          if (myAddr == 0)
          {
            dbg(DBG_USR1, "END-2-END report: %d received %d of %d packets from %d for transaction %x\r\n", myAddr, thisTransaction->packetsReceived, specificReportReqMsgIn->originatorPacketCount, thisTransaction->originatingNode, thisTransaction->transaction_id);
            dbg(DBG_USR1, "End-2-End Report follows:\r\n");
            dbg(DBG_USR1, "Transaction:       0x%x\r\n", thisTransaction->transaction_id);
            dbg(DBG_USR1, "Packets Received:  0x%x\r\n", thisTransaction->packetsReceived);
            dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", specificReportReqMsgIn->originatorPacketCount);
          }

          dbg(DBG_USR1, "yah");
          if (specificReportReqMsgIn->destination == myAddr)
          {
            dbg(DBG_USR1, "yah2");
            #ifdef DEBUG
            dbg(DBG_USR1, "%d received a SPECIFIC_REPORT_REQUEST_MSG for ME.\r\n", myAddr);
            #endif
            /* It is a request to me, so send response */
            call Messaging.putSpecificReportResponseMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr, specificReportReqMsgIn->originator, specificReportReqMsgIn->transaction_id, thisTransaction->packetsReceived, thisTransaction->receivedFrom, thisTransaction->packetsForwarded, thisTransaction->packetsForwardedTo, thisTransaction->receivedFrom);
            post processOutMsg();
          }
          else if ( specificReportReqMsgIn->destination == thisTransaction->packetsForwardedTo )
          {
            dbg(DBG_USR1, "yah3");
            /* They want their two hop, or who I sent the packets to, forward the message to them. */
            #ifdef DEBUG
            dbg(DBG_USR1, "%d received a SPECIFIC_REPORT_REQUEST_MSG for NOT me.\r\n", myAddr);
            #endif
            call Messaging.putSpecificReportRequestMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, thisTransaction->packetsForwardedTo, thisTransaction->packetsForwardedTo, specificReportReqMsgIn->requestor, specificReportReqMsgIn->originator, specificReportReqMsgIn->originatorPacketCount, specificReportReqMsgIn->transaction_id);
            post processOutMsg();
          }
          dbg(DBG_USR1, "yah4");
          call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, thisTransaction, 0, 0, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);
          dbg(DBG_USR1, "yah5");

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
                  /* In case we don't hear from either one, check again */
                  call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, &transactionRecords[transactionCounter], 0, 0, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);
                  call Timer8.start(TIMER_ONE_SHOT, 3250);

                }
                else if (specificReportResponseMsgIn->responder == transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo)
                {
                /* This is a two-hop report for me */
                  #ifdef DEBUG
                  dbg(DBG_USR1, "%d heard a SPECIFIC hop-TWO msg for me\r\n", myAddr);
                  #endif
                  if (transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo != specificReportResponseMsgIn->responder)
                    transactionRecords[transactionCounter].oneHopReportedPacketsForwardedTo = specificReportResponseMsgIn->responder;
                  transactionRecords[transactionCounter].twoHopReportedPacketsReceived = specificReportResponseMsgIn->packetsReceived;
                  transactionRecords[transactionCounter].twoHopReported = 1;
                }
                else
                {
                  ;
                  /* BAD FLAG : else te node who sent the report to me is not the node who I sent the packets to ! */
                }
              } // end for me

              else if (specificReportResponseMsgIn->originator == transactionRecords[transactionCounter].receivedFrom)
              {
                call Messaging.putSpecificReportResponseMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, specificReportResponseMsgIn->responder, specificReportResponseMsgIn->originator, specificReportResponseMsgIn->transaction_id, specificReportResponseMsgIn->packetsReceived, specificReportResponseMsgIn->packetsReceivedFrom, specificReportResponseMsgIn->packetsForwarded, specificReportResponseMsgIn->packetsForwardedTo, specificReportResponseMsgIn->originator);
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
    //if (n->type == DISCOVERY_MSG_TYPE)
    //  dbg(DBG_USR1, "%d heard a DISCOVERY_MSG\r\n", myAddr);
    //if (n->type == CONTROL_MSG_TYPE)
    //  dbg(DBG_USR1, "%d heard a CONTROL_MSG\r\n", myAddr);
    if (n->type == DATA_MSG_TYPE)
      dbg(DBG_USR1, "%d heard a DATA_MSG\r\n", myAddr);

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
        dbg(DBG_USR1, "%d reports %d ONE-HOP neighbors\r\n", myAddr, numOneHopNeighbors);
        call Messaging.putDiscoveryMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr, myLevel, myStaticParent.node_id, numOneHopNeighbors, myOneHopNeighbors); 
      }
      post processOutMsg();
  }




  /* This sends a data message to trnasaction parent, and is used if this node is the transaction originator.  */
  /* If this is the first packet in the series, then choose a parent dynamically */
  task void sendDataMsg()
  {
    lastToFindLoop = 255;
    cantFixIt = 255;
    dontSendTo = 255;

    /* TO DO ; -- MULTIPLE TRANSACTIONS ORIGINATING AT SAME NODE SIMULTANEOUSLY */
    if ( numDataMessagesInTrial <= DATA_MESSAGES_PER_TRIAL )
    {
      if ( (myLevel != NO_LEVEL) && (myAddr != 0) )
      {

        atomic
        {
          transactionFound = 0;
          /* Checking to see if we've heard of this transaction before, and if so increment the packet count. */
          transactionFound = call TransactionTable.transactionExistsAlready(transactionRecords, TRANSACTION_ID, myAddr);

          /* If we haven't heard this transaction before, initialize it and set packets received to one. */
          if (transactionFound == 0)
          {
            call TransactionTable.initializeTransaction(transactionRecords, TRANSACTION_ID, myAddr, NO_PARENT, myOneHopNeighbors, numOneHopNeighbors, myLevel, 1, myPeers, numPeers, myChildren, numChildren, myAddr);
            numDataMessagesInTrial = 1; // same thing as the sequenceNumber, for the sender
          }
          else // we have heard about it, so increment the sequence number
            call TransactionTable.incrementSequenceNumber(transactionRecords, TRANSACTION_ID);

          /* Put the message on the outQ */
          call Messaging.putDataMessageInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, call TransactionTable.getTransactionParent(transactionRecords, TRANSACTION_ID), myAddr, TRANSACTION_ID, myAddr, SAMPLE_DATA, lastToFindLoop, cantFixIt, dontSendTo, numDataMessagesInTrial);
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
      dbg(DBG_USR1, "%d ALL DONE sending %d data packets.\r\n", myAddr, numDataMessagesInTrial - 1);
      //#endif

      /* TO DO : Build in an ALIVE_MESSAGE, so it can know if it can sucessfully forwarded a packet ? */
      /* TO DO : Keep track of nodes that have messages recently */

      /* Forwarding trust:  send versus heard.  Assume everything that is heard is forwaded.  */
      /* This sends a report request message to parent  */
      tFoundHere = 0;
      if ( (myLevel != NO_LEVEL) && (myAddr != 0) )
      {
        atomic
        {
          tFoundHere = call TransactionTable.sendReportRequestForThisTransaction(transactionRecords, TRANSACTION_ID, outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr);
          post processOutMsg();

          /* This writes the current TID to the to-check buffer, so it can check it later. */
          call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, call TransactionTable.getThisTransactionPtr(transactionRecords, TRANSACTION_ID), 0, 0, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);

          /* This starts the timer to check for reports */
          call Timer8.start(TIMER_ONE_SHOT, 4000);

          TRANSACTION_ID ++;
          if (TRANSACTION_ID >= ( (myAddr + 1) * 10000))
            TRANSACTION_ID = ( myAddr * 10000 );
          
           numDataMessagesInTrial = 0;
        }
        if (tFoundHere == 0)
        {
          dbg(DBG_USR1, "%d CANNOT FIND THIS TRANSACTION TO ASK FOR REPORTS -- THIS IS REALLY BAD !!!\r\n");
        }

        //dbg(DBG_USR1, "%d put a REPORT_REQUEST_MSG Message in its outQ.\r\n", myAddr);
      }
      else
      {
        dbg(DBG_USR1, "HELP !!!! I AM %d.  I AM TOLD TO SEND A request for reports BUT I CAN'T !!!!!\r\n", myAddr);
      }
    }
  }



  /* This posts a sendDiscovery task. */
  event result_t Timer1.fired()
  {
    post sendDiscovery();
    return SUCCESS;
  }


  /* This has been changed to remove the ready message from this equation.  We don't need it. */
  event result_t Timer2.fired()
  {
    /* Determine who our children are. */
    nodeCounter2 = 0;
    for (nodeCounter=0; nodeCounter < numOneHopNeighbors; nodeCounter ++)
    {
      if (myOneHopNeighbors[nodeCounter]->parent_id == myAddr)  // this is my child
      {
        myChildren[nodeCounter2] = myOneHopNeighbors[nodeCounter];
        numChildren ++;
        nodeCounter2 ++;
      }
    }

    /* Determine who our peers are. */
    nodeCounter2 = 0;
    for (nodeCounter=0; nodeCounter < numOneHopNeighbors; nodeCounter ++)
    {
      if (myOneHopNeighbors[nodeCounter]->level == myLevel)  // this is my peer
      {
        myPeers[nodeCounter2] = myOneHopNeighbors[nodeCounter];
        numPeers ++;
        nodeCounter2 ++;
      }
    }
    // stop sending Discovery messages
    call Timer1.stop();


    /* TO DO : Make this a dynamic starting sending data.  Make it based on sensor readings. */
    // start sending data messages
    if (call TrafficGenerator.isTrafficGenerator(myAddr) == 1)
      call Timer6.start(TIMER_ONE_SHOT, DATA_PACKET_INTERVAL);
    return SUCCESS;
    // stop sending Discovery messages
    call Timer1.stop();


    /* TO DO : Make this a dynamic starting sending data.  Make it based on sensor readings. */
    // start sending data messages
    if (call TrafficGenerator.isTrafficGenerator(myAddr) == 1)
      call Timer6.start(TIMER_ONE_SHOT, DATA_PACKET_INTERVAL);
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

  /* This is the start timer.  It prevents multiple CONTROL_MSG_TYPE messages within 5 seconds */
  event result_t Timer4.fired()
  {
    call Messaging.putStartMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, myAddr);
    post processOutMsg();

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
    #ifdef DEBUG
    dbg(DBG_USR1, "%d has %d one-hop neighbors\r\n", myAddr, numOneHopNeighbors);
    #endif
    post sendDataMsg();
    return SUCCESS;
  }


  event result_t Timer7.fired()
  {
    #ifdef DEBUG
    dbg(DBG_USR1, "Timer 7 fired\r\n");
    #endif
    post sendReport();
    return SUCCESS;
  }

  event result_t Timer8.fired()
  {
    #ifdef DEBUG
    dbg(DBG_USR1, "%d reports %d transactions to check\r\n", myAddr, numTransactionsToCheck);
    #endif
    if ( (numTransactionsToCheck > 0) && (call TransactionTable.getFromTransactionCheckQ(transactionsToCheckQ, &checkThisTransaction, &oneTimesTID, &twoTimesTID, &readTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck) == 1) )
    {
      if (checkThisTransaction->processed == 0)
      {
        /* If both reports are in, process the transaction */
        if ( (checkThisTransaction->oneHopReported > 0) && ( (checkThisTransaction->twoHopReported > 0) || (checkThisTransaction->packetsForwardedTo == 0)) )
        {
          if (checkThisTransaction->processed == 0)
            call TransactionTable.processThisTransaction(checkThisTransaction, neighbors, numNeighbors, myAddr);
          if (call TrafficGenerator.isTrafficGenerator(myAddr) == 1)
            call Timer6.start(TIMER_ONE_SHOT, 20000);//DATA_PACKET_INTERVAL);
        }


        /* If not, then go get the missing one(s) */
        else if (checkThisTransaction->oneHopReported == 0)
        {
          /* If we did not hear from one-hop */
          if (oneTimesTID >= MAX_REPORT_TRIES)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d report ONE hop %d TIMED OUT\r\n", myAddr, checkThisTransaction->packetsForwardedTo);
            #endif
            checkThisTransaction->oneHopReported = 255;
            call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, checkThisTransaction, oneTimesTID, 0, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);
            call Timer8.start(TIMER_ONE_SHOT, 500);
          }
          else
          {
            /* One hop did not report in -- go get it ! */
            #ifdef DEBUG
            dbg(DBG_USR1, "%d reports ONE hop %d DID NOT CHECK IN, oneTimesTID: %d times for transaction %x\r\n", myAddr, checkThisTransaction->packetsForwardedTo, oneTimesTID, checkThisTransaction->transaction_id);
            #endif
            call Messaging.putSpecificReportRequestMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, checkThisTransaction->packetsForwardedTo, checkThisTransaction->packetsForwardedTo, myAddr, myAddr, checkThisTransaction->originatorPacketCount, checkThisTransaction->transaction_id);

            /* This writes the current TID to the to-check buffer, so it can check it later. */
            oneTimesTID ++;
            call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, checkThisTransaction, oneTimesTID, 0, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);
            post processOutMsg();
            call Timer8.start(TIMER_ONE_SHOT, 2300);
          }
        }
        else if ( (checkThisTransaction->packetsForwardedTo != 0) && (checkThisTransaction->twoHopReported == 0) )
        {
          /* If we did not send to root, and two hop did not report in, go get it ! */
          if (twoTimesTID >= MAX_REPORT_TRIES)
          {
            #ifdef DEBUG
            dbg(DBG_USR1, "%d report TWO hop %d TIMED OUT\r\n", myAddr, checkThisTransaction->oneHopReportedPacketsForwardedTo);
            #endif
            atomic
            {
              checkThisTransaction->twoHopReported = 255;
              /* This writes the current TID to the to-check buffer, so it can check it later. */
              twoTimesTID ++;
              call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, checkThisTransaction, oneTimesTID, twoTimesTID, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);
            }
            call Timer8.start(TIMER_ONE_SHOT, 500);
          }
          else
          {
            /* Two hop did not report in (and there was a two-hop) -- go get it ! */
            #ifdef DEBUG
            dbg(DBG_USR1, "%d reports TWO hop DID NOT CHECK IN, twoTimesTID: %d for transaction %x\r\n", myAddr, twoTimesTID , checkThisTransaction->transaction_id);
            #endif
            call Messaging.putSpecificReportRequestMsgInOutQ(outQ, &writeOutQHere, CIRCULAR_BUFFER_SIZE, &numMsgOutQ, checkThisTransaction->packetsForwardedTo, checkThisTransaction->oneHopReportedPacketsForwardedTo, myAddr, myAddr, checkThisTransaction->originatorPacketCount, checkThisTransaction->transaction_id);
            twoTimesTID ++;

            /* This writes the current TID to the to-check buffer, so it can check it later. */
            call TransactionTable.addToTransactionCheckQ(transactionsToCheckQ, checkThisTransaction, oneTimesTID, twoTimesTID, &writeTransactionCheckHere, CIRCULAR_BUFFER_SIZE, &numTransactionsToCheck);

            post processOutMsg();
            call Timer8.start(TIMER_ONE_SHOT, 2400);
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
          call Timer8.start(TIMER_ONE_SHOT, 1200);
      }
      /* If there are more transactions to check -- don't fall through here !*/
      if (numTransactionsToCheck > 0)
         call Timer8.start(TIMER_ONE_SHOT, 1900);
    } // end if numTransactionsToCheck > 0
    return SUCCESS;
  }


  event result_t Timer9.fired()
  {
    dbg(DBG_USR2, "Timer 9 fired, counter: %d, num: %d\r\n", onOffThirtySecondCounter, call Attack.getNumThirtySeconds(myAddr));
    onOffThirtySecondCounter ++;
    if (onOffThirtySecondCounter >= call Attack.getNumThirtySeconds(myAddr))
    {
      dbg(DBG_USR2, "FLIPPED ITS ON-OFF STATUS !!!!!!!!!!!!!!!!!!!!1\r\n");
      if (isOff_onoff == 1)
        isOff_onoff = 0;
      else
        isOff_onoff = 1;
      onOffThirtySecondCounter = 0;
    }
    return SUCCESS;
  }

  event result_t Timer10.fired()
  {
    DFCounter ++;
    dbg(DBG_USR2, "Timer 10 fired, counter: %d, num: %d\r\n", DFCounter, DFThreshold);
    if (DFCounter == DFThreshold)
    {
      dbg(DBG_USR2, "Doing Dynamic Forgetting\r\n");
      DFCounter = 0;
      call TransactionTable.doDynamicForgetting(neighbors, numNeighbors);
    }
    return SUCCESS;
  }


} // end Implementation

