/*
 *  File:       TransactionTableM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 16, 2009
 */


includes AM;
includes Globals;
includes MessagingH;
includes NeighborTableH;
includes TransactionTableH;


module TransactionTableM{
  uses {
    interface NeighborTable;
    interface Trust;
    interface Messaging;
  }
  provides {
    interface TransactionTable;
    interface StdControl;
  }
}

implementation {

  uint16_t dataIndex = 0, highestTrustIndex = 0, oneDiscIndex = 0, twoDiscIndex = 0;

  command result_t StdControl.init()
  {

    return SUCCESS;
  }


  command result_t StdControl.start()
  {
    return SUCCESS;
  }


  command result_t StdControl.stop()
  {
    return SUCCESS;
  }


  /*
   *    This function checks to see if the trqnsactio has already been initialized.
   */
  command uint8_t TransactionTable.transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr)
  {
    for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
    {
      if ( transactionRecords[tLoopCounter].transaction_id == transaction_id)
      {
        transactionRecords[tLoopCounter].packetsReceived ++;
        if (myAddr != 0)
          transactionRecords[tLoopCounter].packetsForwarded ++;
        #ifdef DEBUG
        dbg(DBG_USR1, "FOUND temp parent set to %d\r\n", transactionRecords[tLoopCounter].packetsForwardedTo);
        #endif
        return 1;
      }
    }
    return 0;
  }


  /*
   *    We get a node's info and see if it is in the neighbor table.  If not, we add it.
   *    If isOneHop == 1, we check to see if it is in the one-hop table.
   *    If isOneHop != 1, we do nothing more.
   */
  command result_t TransactionTable.initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource)
  {
    for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
    {
      #ifdef DEBUG
      dbg(DBG_USR1, "reports isValid %d\r\n", transactionRecords[tLoopCounter].isValid);
      if (transactionRecords[tLoopCounter].isValid == 1)
        dbg(DBG_USR1, "reports transaction %x id VALID  -- IMPORTANT !!\r\n", transactionRecords[tLoopCounter].transaction_id);
      #endif
      dbg(DBG_USR1, "1\r\n");
      if (transactionRecords[tLoopCounter].isValid == 0)
      {
        dbg(DBG_USR1, "2\r\n");
        transactionRecords[tLoopCounter].transaction_id = transaction_id;
        dbg(DBG_USR1, "3\r\n");
        transactionRecords[tLoopCounter].originatingNode = originatingNode;
        dbg(DBG_USR1, "4\r\n");
        transactionRecords[tLoopCounter].receivedFrom = receivedFrom;
        dbg(DBG_USR1, "5\r\n");
        transactionRecords[tLoopCounter].isValid = 1;
        dbg(DBG_USR1, "6\r\n");
        #ifdef DEBUG
        dbg(DBG_USR1, "setting its recieveFrom to %d for %d\r\n", receivedFrom, transaction_id);
        #endif
        if (isSource == 1)
          transactionRecords[tLoopCounter].packetsReceived = 0;
        else
          transactionRecords[tLoopCounter].packetsReceived = 1;

        transactionRecords[tLoopCounter].packetsForwarded = 1;
        transactionRecords[tLoopCounter].oneHopReported = 0;
        transactionRecords[tLoopCounter].oneHopReportedPacketsReceived = 0;
        transactionRecords[tLoopCounter].oneHopReportedPacketsForwarded = 0;
        transactionRecords[tLoopCounter].oneHopReportedPacketsForwardedTo = NO_PARENT;
        transactionRecords[tLoopCounter].twoHopReported = 0;
        transactionRecords[tLoopCounter].twoHopReportedPacketsReceived = 0;
        transactionRecords[tLoopCounter].processed = 0;
        /* This is where we choose the parent for the transaction */

        if (myLevel == 0)
        {
          /* For now do nothing */
          /* TO DO: Determine what effect this change has */
          #ifdef DEBUG
          dbg(DBG_USR1, "is the root, and is the terminal point for this DATA packet\r\n");
          dbg(DBG_USR2, "is the root, and is the terminal point for this DATA packet\r\n");
          #endif
          /*transactionRecords[transactionCounter].packetsForwardedTo = 255;*/
        }
        else if (myLevel == 1)
        {
          /* If I can talk to root, skip this parent choice step */
          transactionRecords[tLoopCounter].packetsForwardedTo = 0;
          #ifdef DEBUG
          dbg(DBG_USR1, "hears the root, and will forward all DATA to it\r\n");
          dbg(DBG_USR2, "hears the root, and will forward all DATA to it\r\n");
          #endif
        }
        else
        {
          transactionRecords[tLoopCounter].packetsForwardedTo = call NeighborTable.getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel);
        }

        break;
      }
    }

    return SUCCESS;
  }


  command Transaction_Record_Ptr TransactionTable.getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id)
  {
    for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id)
        return &transactions[tLoopCounter];
    }
    return NULL;
  }

  command uint16_t TransactionTable.getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id)
  {
    for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id)
        return transactions[tLoopCounter].packetsForwardedTo;
    }
    return 0;
  }

  /*
   *    This command adjusts the specified neighbor's forwarding trust
   */
  command void TransactionTable.adjustThisNeighborsFPTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GFBinc, uint32_t BFBinc)
  {
    for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter ++)
    {
      if (neighbors[tnLoopCounter].node_id == node_id)
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "reports node: %d, GFBinc: %x, BFBinc: %x\r\n", node_id, GFBinc, BFBinc);
        dbg(DBG_USR2, "reports node: %d, GFBinc: %x, BFBinc: %x\r\n", node_id, GFBinc, BFBinc);
        dbg(DBG_USR2, "reports BEFORE: Node: %d, GFB: %d, BFB: %d, trustFP: %f\r\n", node_id, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.trustFP);
        #endif
        neighbors[tnLoopCounter].trust.GFB += GFBinc;
        neighbors[tnLoopCounter].trust.BFB += BFBinc;
        neighbors[tnLoopCounter].trust.trustFP = call Trust.calculateFP(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB);
        #ifdef DEBUG
        dbg(DBG_USR1, "reports AFTER: Node: %d, GFB: %d, BFB: %d, trustFP: %f\r\n", node_id, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.trustFP);
        dbg(DBG_USR2, "reports AFTER: Node: %d, GFB: %d, BFB: %d, trustFP: %f\r\n", node_id, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.trustFP);
        #endif
        #ifdef DEBUG
        dbg(DBG_USR1, "updated %d trust to %f\r\n", node_id, neighbors[tnLoopCounter].trust.trustFP);
        dbg(DBG_USR2, "updated %d trust to %f\r\n", node_id, neighbors[tnLoopCounter].trust.trustFP);
        #endif
        break;
      }
    }
  }

  /*
   *    This command adjusts the specified neighbor's reporting trust
   */
  command void TransactionTable.adjustThisNeighborsRHTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GRBinc, uint32_t BRBinc)
  {
    for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter ++)
    {
      if (neighbors[tnLoopCounter].node_id == node_id)
      {
        neighbors[tnLoopCounter].trust.GRB += GRBinc;
        neighbors[tnLoopCounter].trust.BRB += BRBinc;
        neighbors[tnLoopCounter].trust.trustRH = call Trust.calculateRH(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB);
        break;
      }
    }
  }


  /*
   *    This command will process the trust values of the transaction.
   *    It should have already been determined that we should process this transaction.
   */
  command void TransactionTable.processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors)
  {
    #ifndef NOSARP

    #ifdef DEBUG
    dbg(DBG_USR1, "transaction_id:                    0x%04x\r\n", thisTransaction->transaction_id);
    dbg(DBG_USR1, "originating Node:                  0x%02x\r\n", thisTransaction->originatingNode);
    dbg(DBG_USR1, "receivedFrom:                      0x%02x\r\n", thisTransaction->receivedFrom);
    dbg(DBG_USR1, "isValid:                           0x%02x\r\n", thisTransaction->isValid);
    dbg(DBG_USR1, "packetsReceived:                   0x%02x\r\n", thisTransaction->packetsReceived);
    dbg(DBG_USR1, "packetsForwarded:                  0x%02x\r\n", thisTransaction->packetsForwarded);
    dbg(DBG_USR1, "packetsForwardedTo:                0x%02x\r\n", thisTransaction->packetsForwardedTo);
    dbg(DBG_USR1, "oneHopReported:                    0x%02x\r\n", thisTransaction->oneHopReported);
    dbg(DBG_USR1, "oneHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->oneHopReportedPacketsReceived);
    dbg(DBG_USR1, "oneHopReportedPacketsForwarded:    0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwarded);
    dbg(DBG_USR1, "oneHopReportedPacketsForwardedTo:  0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwardedTo);
    dbg(DBG_USR1, "twoHopReported:                    0x%02x\r\n", thisTransaction->twoHopReported);
    dbg(DBG_USR1, "twoHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->twoHopReportedPacketsReceived);
    dbg(DBG_USR2, "transaction_id:                    0x%04x\r\n", thisTransaction->transaction_id);
    dbg(DBG_USR2, "originating Node:                  0x%02x\r\n", thisTransaction->originatingNode);
    dbg(DBG_USR2, "receivedFrom:                      0x%02x\r\n", thisTransaction->receivedFrom);
    dbg(DBG_USR2, "isValid:                           0x%02x\r\n", thisTransaction->isValid);
    dbg(DBG_USR2, "packetsReceived:                   0x%02x\r\n", thisTransaction->packetsReceived);
    dbg(DBG_USR2, "packetsForwarded:                  0x%02x\r\n", thisTransaction->packetsForwarded);
    dbg(DBG_USR2, "packetsForwardedTo:                0x%02x\r\n", thisTransaction->packetsForwardedTo);
    dbg(DBG_USR2, "oneHopReported:                    0x%02x\r\n", thisTransaction->oneHopReported);
    dbg(DBG_USR2, "oneHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->oneHopReportedPacketsReceived);
    dbg(DBG_USR2, "oneHopReportedPacketsForwarded:    0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwarded);
    dbg(DBG_USR2, "oneHopReportedPacketsForwardedTo:  0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwardedTo);
    dbg(DBG_USR2, "twoHopReported:                    0x%02x\r\n", thisTransaction->twoHopReported);
    dbg(DBG_USR2, "twoHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->twoHopReportedPacketsReceived);
    #endif


    if (thisTransaction->oneHopReported == 1)
    {
      if (thisTransaction->twoHopReported == 1)
      {
        /* Both One and Two reported */

        /* Adjust one-hop's trustFP if not root */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsFPTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, thisTransaction->oneHopReportedPacketsReceived, (thisTransaction->packetsForwarded - thisTransaction->oneHopReportedPacketsReceived));

        /* Check for consistent reporting and adjust trust accordingly */
        /* If the reports are consistent */
        if (call Trust.areReportsConsistent(thisTransaction->oneHopReportedPacketsForwarded, thisTransaction->twoHopReportedPacketsReceived) == 1)
        {
          /* Adjust one-hop's trustRH if not root */
          if (thisTransaction->packetsForwardedTo != 0)
            call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, GOOD_REPORTING_BEHAVIOR_INCREMENT, 0);

          /* Adjust two-hop's trustRH if not root */
          if (thisTransaction->oneHopReportedPacketsForwardedTo != 0)
            call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, GOOD_REPORTING_BEHAVIOR_INCREMENT, 0);
        }
        /* If the reports are not consistent */
        else
        {
          /* Adjust one-hop's trustRH if not root */
          if (thisTransaction->packetsForwardedTo != 0)
            call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, 0, BAD_REPORTING_BEHAVIOR_INCREMENT);

          /* Adjust two-hop's trustRH if not root */
          if (thisTransaction->oneHopReportedPacketsForwardedTo != 0)
            call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, 0, BAD_REPORTING_BEHAVIOR_INCREMENT);
        }
      }
      else // twoHopReported == 255
      {
        /* One reported, but Two did not report */

        /* Adjust one-hop's trustFP if not root */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsFPTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, thisTransaction->oneHopReportedPacketsReceived, (thisTransaction->packetsForwarded - thisTransaction->oneHopReportedPacketsReceived));

        /* We assume the one-hop report is consistent, because we cannot prove otherwise */
        /* Adjust one-hop's trustRH if not root */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, GOOD_REPORTING_BEHAVIOR_INCREMENT, 0);

        /* Assess timeout penalty to two-hop's trustRH if not root */
        if (thisTransaction->oneHopReportedPacketsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, 0, REPORT_TIMEOUT_PENALTY);
      }
    }
    else // oneHopReported == 255
    {
      if (thisTransaction->twoHopReported == 1)
      {
        /* One did not report, but Two did report */

        /* We use the two-hop's values for the one-hop calculations */
        /* Adjust one-hop's trustFP if not root */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsFPTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, thisTransaction->twoHopReportedPacketsReceived, (thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived));

        /* Assess timeout penalty to one-hop's trustRH if not root */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, 0, REPORT_TIMEOUT_PENALTY);

        /* We assume the two-hop report is consistent, because we cannot prove otherwise */
        /* Adjust two-hop's trustRH if not root */
        if (thisTransaction->oneHopReportedPacketsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, GOOD_REPORTING_BEHAVIOR_INCREMENT, 0);

      }
      else // twoHopReported == 255
      {
        /* Neither One nor Two reported */

        /* Assess timeout penalty to one-hop's trustFP if not root, 1/2 the packets. */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsFPTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, 0, (thisTransaction->packetsForwarded / 2));

        /* Assess timeout penalty to one-hop's trustRH if not root */
        if (thisTransaction->packetsForwardedTo != 0)
          call TransactionTable.adjustThisNeighborsRHTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, 0, REPORT_TIMEOUT_PENALTY);

        /* We cannot assess timeout penalty to two-hop's trustRH, because we don't know who they are */
      }
    }
    #endif
    thisTransaction->processed = 1;
    thisTransaction->isValid = 0;
  }


  command void TransactionTable.addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue)
  {
    atomic
    {
      queue[*writeHere].transactionPtr = ptr;
      queue[*writeHere].oneTimes = ones;
      queue[*writeHere].twoTimes = twos;
      (*numInQueue) ++;
      (*writeHere) ++;
      if (*writeHere >= maxQueueSize)
        *writeHere = 0;
    }
  }



  command uint16_t  TransactionTable.getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue)
  {
    atomic
    {
      if (*numInQueue == 0)
        return 0;
      else
      {
        *ptr = queue[*readHere].transactionPtr;
        *ones = queue[*readHere].oneTimes;
        *twos = queue[*readHere].twoTimes;
        (*numInQueue) --;
        (*readHere) ++;
        if (*readHere >= maxQueueSize)
          *readHere = 0;
        return 1;
      }
    }
  }


  command void TransactionTable.setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount)
  {
    for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
    {
      if (transactionRecords[tLoopCounter].transaction_id == transaction_id)
      {
        transactionRecords[tLoopCounter].originatorPacketCount = packetCount;
        break;
      }
    }
  }



  command uint16_t TransactionTable.sendReportRequestForThisTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, TOS_Msg outQ[], uint16_t *writeOutQHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t myAddr)
  {
    atomic
    {
      for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
      {
        if (transactionRecords[tLoopCounter].transaction_id == transaction_id) // do we need this check ?
        {
          dbg(DBG_USR1, "in TTsrrTT\r\n");
          dbg(DBG_USR1, "TID: %x, WOQH: %d, MXQS: %d, NMSGOQ: %d, MYADDR: %d\r\n", transaction_id, *writeOutQHere, maxQSize, *numMsgOutQ, myAddr);
          call Messaging.putReportRequestMsgInOutQ(outQ, writeOutQHere, maxQSize, numMsgOutQ, transactionRecords[tLoopCounter].packetsForwardedTo, myAddr, myAddr, transactionRecords[tLoopCounter].packetsForwarded, transactionRecords[tLoopCounter].transaction_id);
          dbg(DBG_USR1, "TID: %x, WOQH: %d, MXQS: %d, NMSGOQ: %d, MYADDR: %d\r\n", transaction_id, *writeOutQHere, maxQSize, *numMsgOutQ, myAddr);
          return 1;
        }
      }
    }
    return 0;
  }



}
