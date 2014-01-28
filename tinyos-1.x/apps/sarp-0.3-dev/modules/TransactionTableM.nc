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
    interface Attack;
  }
  provides {
    interface TransactionTable;
    interface StdControl;
  }
}

implementation {

  uint16_t dataIndex = 0, highestTrustIndex = 0, oneDiscIndex = 0, twoDiscIndex = 0;
  Trust_Rec_t *prev_neighbors = NULL;
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
  
  float expo(float value, uint8_t _exponent)
  {
    float returnValue = 1;
	int i = 0;
  	for(i = 0; i < _exponent; i++)
	{
	  returnValue = returnValue * value;
  	}
#ifdef PREDICTABLE
dbg(DBG_USR3,"value:%f exponent:%d returnValue:%f\r\n", value, _exponent, returnValue);
#endif
	return returnValue;
  }

  int evalPredictable(Neighbor_Rec_withTrust_t neighbor, Trust_Rec_t prev_neighbor, int GFBinc, int BFBinc)
  {
    float temp = 0.0;
	
	temp = call Trust.calculateFP(GFBinc + BFBinc, 0);
#ifdef PREDICTABLE
dbg(DBG_USR3, "[%d] FP-PREV:%f FP-CURRENT:%f\n", neighbor.node_id, prev_neighbor.trustFP, neighbor.trust.trustFP);
#endif
	if(prev_neighbor.trustFP > neighbor.trust.trustFP)	return 0;

	prev_neighbor.GRB += GOOD_REPORTING_BEHAVIOR_INCREMENT;
    prev_neighbor.BRB += 0;
	temp = call Trust.calculateRH(prev_neighbor.GRB, prev_neighbor.BRB);
#ifdef PREDICTABLE
dbg(DBG_USR3, "[%d] RH-PREV:%f RH-CURRENT:%f\n", neighbor.node_id, prev_neighbor.trustRH, neighbor.trust.trustRH);
#endif	
	if(prev_neighbor.trustRH > neighbor.trust.trustRH)	return 0;

    prev_neighbor.GAB += GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
    prev_neighbor.BAB += 0;
	temp = call Trust.calculateAV(prev_neighbor.GAB, prev_neighbor.BAB);
#ifdef PREDICTABLE
dbg(DBG_USR3, "[%d] AV-PREV:%f AV-CURRENT:%f\n", neighbor.node_id, prev_neighbor.trustAV, neighbor.trust.trustAV);
#endif
	if(prev_neighbor.trustAV > neighbor.trust.trustAV)	return 0;

    prev_neighbor.GLB += 1;
    prev_neighbor.BLB += 0;
	temp = call Trust.calculateAV(prev_neighbor.GLB, prev_neighbor.BLB);
#ifdef PREDICTABLE
dbg(DBG_USR3, "[%d] LP-PREV:%f LP-CURRENT:%f\n", neighbor.node_id, prev_neighbor.trustLP, neighbor.trust.trustLP);
#endif
	if(prev_neighbor.trustLP > neighbor.trust.trustLP)	return 0;
	
	return 1;
  }
  
  /*
   *    @fn         This function checks to see if the trqnsactio has already been initialized.
   *    @returns:   1 for yes, 0 for no
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
   *    @fn         This function checks to see if the trqnsactio has already been initialized.
   *    @returns:   1 for yes, 0 for no
   */
  command void TransactionTable.incrementSequenceNumber(Transaction_Record_t transactionRecords[], uint32_t transaction_id)
  {
    for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
    {
      if ( transactionRecords[tLoopCounter].transaction_id == transaction_id)
      {
        transactionRecords[tLoopCounter].sequenceNumber ++;
        break;
      }
    }
  }


  /*
   *    We get a node's info and see if it is in the neighbor table.  If not, we add it.
   *    If isOneHop == 1, we check to see if it is in the one-hop table.
   *    If isOneHop != 1, we do nothing more.
   */
  command result_t TransactionTable.initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr)
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
        transactionRecords[tLoopCounter].sequenceNumber = 1;
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
        transactionRecords[tLoopCounter].isALoop = 0;
        transactionRecords[tLoopCounter].lastParentTried = 255;
        transactionRecords[tLoopCounter].numberPossibleOtherParents = 0;
        transactionRecords[tLoopCounter].numberPossibleOtherParentsTried = 0;
        for (tnLoopCounter = 0; tnLoopCounter < MAX_NUMBER_OTHER_POSSIBLE_PARENTS; tnLoopCounter++)
          transactionRecords[tLoopCounter].possibleOtherParents[tnLoopCounter] = 0;

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
          if (call Attack.ifLoopCreatorGetParent(myAddr) > 0)
            transactionRecords[tLoopCounter].packetsForwardedTo = call Attack.ifLoopCreatorGetParent(myAddr);
          else
            transactionRecords[tLoopCounter].packetsForwardedTo = call NeighborTable.getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel, myPeers, numPeers, myChildren, numChildren, transactionRecords[tLoopCounter].receivedFrom, 255, 255, myAddr);
        }

        transactionRecords[tLoopCounter].originalPacketsForwardedTo = transactionRecords[tLoopCounter].packetsForwardedTo;
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
        if (transactions[tLoopCounter].lastParentTried == 255)
          return transactions[tLoopCounter].packetsForwardedTo;
        else
          return transactions[tLoopCounter].lastParentTried;
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
        neighbors[tnLoopCounter].trust.GFB *= GFB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.BFB *= BFB_FORGETTING_FACTOR;
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
        neighbors[tnLoopCounter].trust.GRB *= GRB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.BRB *= BRB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.GRB += GRBinc;
        neighbors[tnLoopCounter].trust.BRB += BRBinc;
        neighbors[tnLoopCounter].trust.trustRH = call Trust.calculateRH(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB);
        break;
      }
    }
  }



  /*
   *    This command adjusts the specified neighbor's availability trust
   */
  command void TransactionTable.adjustThisNeighborsAVTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GABinc, uint32_t BABinc)
  {
    for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter ++)
    {
      if (neighbors[tnLoopCounter].node_id == node_id)
      {
        neighbors[tnLoopCounter].trust.GAB *= GAB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.BAB *= BAB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.GAB += GABinc;
        neighbors[tnLoopCounter].trust.BAB += BABinc;
        neighbors[tnLoopCounter].trust.trustAV = call Trust.calculateAV(neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB);
        break;
      }
    }
  }


  /*
   *    This command adjusts the specified neighbor's availability trust
   */
  command void TransactionTable.adjustThisNeighborsLPTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint32_t GLBinc, uint32_t BLBinc)
  {
    for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter ++)
    {
      if (neighbors[tnLoopCounter].node_id == node_id)
      {
        neighbors[tnLoopCounter].trust.GLB *= GLB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.BLB *= BLB_FORGETTING_FACTOR;
        neighbors[tnLoopCounter].trust.GLB += GLBinc;
        neighbors[tnLoopCounter].trust.BLB += BLBinc;
        neighbors[tnLoopCounter].trust.trustLP = call Trust.calculateLP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB);
        break;
      }
    }
  }


  /*
   *    This command adjusts the specified neighbor's overall trust
   */
  command void TransactionTable.adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GRBinc, uint32_t BRBinc, uint32_t GABinc, uint32_t BABinc, uint32_t GLBinc, uint32_t BLBinc)
  {
#ifdef TRUSTVALUES
    dbg(DBG_USR3, "id:%d IAM:%d GFBinc:%d BFBinc:%d GRBinc:%d BRBinc:%d GABinc:%d BABinc:%d GLBinc:%d BLBinc:%d\n", node_id, whoIAm, GFBinc, BFBinc, GRBinc, BRBinc, GABinc, BABinc, GLBinc, BLBinc);
#endif
    for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter ++)
    {
      if (neighbors[tnLoopCounter].node_id == node_id)
      {
        // adjust fp
        neighbors[tnLoopCounter].trust.GFB += GFBinc;
        neighbors[tnLoopCounter].trust.BFB += BFBinc;
		neighbors[tnLoopCounter].trust.trustFP = call Trust.calculateFP(GFBinc, BFBinc);

        // adjust RH
        neighbors[tnLoopCounter].trust.GRB += GRBinc;
        neighbors[tnLoopCounter].trust.BRB += BRBinc;
		neighbors[tnLoopCounter].trust.trustRH = call Trust.calculateRH(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB);

        // adjust AV
        neighbors[tnLoopCounter].trust.GAB += GABinc;
        neighbors[tnLoopCounter].trust.BAB += BABinc;
		neighbors[tnLoopCounter].trust.trustAV = call Trust.calculateAV(neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB);

        // adjust LP 
        neighbors[tnLoopCounter].trust.GLB += GLBinc;
        neighbors[tnLoopCounter].trust.BLB += BLBinc;
		neighbors[tnLoopCounter].trust.trustLP = call Trust.calculateLP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB);
#ifdef PREDICTABLE
dbg(DBG_USR3, "START: %d FORGETTINGCNT: %d\r\n", __LINE__, tnForgettingCnt);
#endif
		if(tnForgettingCnt != 0 && prev_neighbors != NULL){
		  if(evalPredictable(neighbors[tnLoopCounter], prev_neighbors[tnLoopCounter], GFBinc, BFBinc)){
#ifdef PREDICTABLE
dbg(DBG_USR3, "EVAL PRED TRUE: %d\r\n", __LINE__);
#endif
			  neighbors[tnLoopCounter].trust.PB.pointer = (neighbors[tnLoopCounter].trust.PB.pointer + 1) % SWINDOW_SIZE;
			  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].time = tos_state.tos_time/4000;
			  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].GPB = 1;
			  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].BPB = 0;
		  }else if(!evalPredictable(neighbors[tnLoopCounter], prev_neighbors[tnLoopCounter], GFBinc, BFBinc)){
#ifdef PREDICTABLE
dbg(DBG_USR3, "EVAL PRED FALSE: %d\r\n", __LINE__);
#endif
			  neighbors[tnLoopCounter].trust.PB.pointer = (neighbors[tnLoopCounter].trust.PB.pointer + 1) % SWINDOW_SIZE;
			  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].time = tos_state.tos_time/4000;
			  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].GPB = 0;
			  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].BPB = 2;
		  }
		}
		neighbors[tnLoopCounter].trust.trustPR = call Trust.calculatePR(neighbors[tnLoopCounter].trust.PB);
#ifdef PREDICTABLE
dbg(DBG_USR3, "[%d] trustPR:%f\r\n", neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustPR);
#endif		
        neighbors[tnLoopCounter].trust.overallTrust = call Trust.calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
		
		tnForgettingCnt = 0;
        sendSarpTrust(transactionNumber, whoIAm, node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust);
        break;
      }
    }
	free(prev_neighbors);
	prev_neighbors = (Trust_Rec_t*)malloc(sizeof(Trust_Rec_t) * numNeighbors);
	if(prev_neighbors != NULL){
		//memmove((Neighbor_Rec_withTrust_t*)prev_neighbors, (Neighbor_Rec_withTrust_t*)neighbors, sizeof(Neighbor_Rec_withTrust_t) * numNeighbors);
#ifdef PREDICTABLE
dbg(DBG_USR3, "ALLOC FINISH:%d\r\n", __LINE__);
#endif
		for(tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++){
			prev_neighbors[tnLoopCounter].GFB = neighbors[tnLoopCounter].trust.GFB;
			prev_neighbors[tnLoopCounter].BFB = neighbors[tnLoopCounter].trust.BFB;
			prev_neighbors[tnLoopCounter].trustFP = neighbors[tnLoopCounter].trust.trustFP;
			prev_neighbors[tnLoopCounter].GLB = neighbors[tnLoopCounter].trust.GLB;
			prev_neighbors[tnLoopCounter].BLB = neighbors[tnLoopCounter].trust.BLB;
			prev_neighbors[tnLoopCounter].trustLP = neighbors[tnLoopCounter].trust.trustLP;
			prev_neighbors[tnLoopCounter].GRB = neighbors[tnLoopCounter].trust.GRB;
			prev_neighbors[tnLoopCounter].BRB = neighbors[tnLoopCounter].trust.BRB;
			prev_neighbors[tnLoopCounter].trustRH = neighbors[tnLoopCounter].trust.trustRH;
			memmove((PB_t*)&prev_neighbors[tnLoopCounter].PB, (PB_t*)&neighbors[tnLoopCounter].trust.PB, sizeof(PB_t));
			prev_neighbors[tnLoopCounter].trustPR = neighbors[tnLoopCounter].trust.trustPR;
			prev_neighbors[tnLoopCounter].overallTrust = neighbors[tnLoopCounter].trust.overallTrust;
		}
	}
	else{
#ifdef PREDICTABLE
dbg(DBG_USR3, "NULL FINISH:%d\r\n", __LINE__);
#endif		
	}
  }

  /*
   */
  command void TransactionTable.markAsLoop(Transaction_Record_Ptr thisTransaction)
  {
    thisTransaction->isALoop = 1;
  }

  /*
   *    This command will process the trust values of the transaction.
   *    It should have already been determined that we should process this transaction.
   */
  command void TransactionTable.processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm)
  {
    #ifndef NOSARP

    one_gfb_inc = 0;
    one_bfb_inc = 0;
    one_grb_inc = 0;
    one_brb_inc = 0;
    one_gab_inc = 0;
    one_bab_inc = 0;
    one_glb_inc = 0;
    one_blb_inc = 0;
    two_gfb_inc = 0;
    two_bfb_inc = 0;
    two_grb_inc = 0;
    two_brb_inc = 0;
    two_gab_inc = 0;
    two_bab_inc = 0;
    two_glb_inc = 0;
    two_blb_inc = 0;

    #ifdef DEBUG
    dbg(DBG_USR1, "transaction_id:                    0x%04x\r\n", thisTransaction->transaction_id);
    dbg(DBG_USR1, "originating Node:                  0x%02x\r\n", thisTransaction->originatingNode);
    dbg(DBG_USR1, "receivedFrom:                      0x%02x\r\n", thisTransaction->receivedFrom);
    dbg(DBG_USR1, "isValid:                           0x%02x\r\n", thisTransaction->isValid);
    dbg(DBG_USR1, "sequenceNumber:                    0x%02x\r\n", thisTransaction->sequenceNumber);
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
//#define TRANSACTION
#ifdef PREDICTABLE
	dbg(DBG_USR3, "transaction_id:                    %d\r\n", thisTransaction->transaction_id);
    dbg(DBG_USR3, "originating Node:                  %d\r\n", thisTransaction->originatingNode);
    dbg(DBG_USR3, "receivedFrom:                      %d\r\n", thisTransaction->receivedFrom);
    dbg(DBG_USR3, "isValid:                           %d\r\n", thisTransaction->isValid);
    dbg(DBG_USR3, "packetsReceived:                   %d\r\n", thisTransaction->packetsReceived);
    dbg(DBG_USR3, "packetsForwarded:                  %d\r\n", thisTransaction->packetsForwarded);
    dbg(DBG_USR3, "packetsForwardedTo:                %d\r\n", thisTransaction->packetsForwardedTo);
    dbg(DBG_USR3, "oneHopReported:                    %d\r\n", thisTransaction->oneHopReported);
    dbg(DBG_USR3, "oneHopReportedPacketsReceived:     %d\r\n", thisTransaction->oneHopReportedPacketsReceived);
    dbg(DBG_USR3, "oneHopReportedPacketsForwarded:    %d\r\n", thisTransaction->oneHopReportedPacketsForwarded);
    dbg(DBG_USR3, "oneHopReportedPacketsForwardedTo:  %d\r\n", thisTransaction->oneHopReportedPacketsForwardedTo);
    dbg(DBG_USR3, "twoHopReported:                    %d\r\n", thisTransaction->twoHopReported);
    dbg(DBG_USR3, "twoHopReportedPacketsReceived:     %d\r\n", thisTransaction->twoHopReportedPacketsReceived);
#endif

    if (thisTransaction->isALoop == 1)
    {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
      one_glb_inc = 0;
      one_blb_inc = 1;
    }
    else
    {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
      one_glb_inc = 1;
      one_blb_inc = 0;
    }

    if (thisTransaction->oneHopReported == 1)
    {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
      if (thisTransaction->twoHopReported == 1)
      {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
        /* Both One and Two reported */

        /* Adjust one-hop's trustFP if not root */
	    one_gfb_inc = thisTransaction->oneHopReportedPacketsReceived;// * 2;
    	one_bfb_inc = (thisTransaction->packetsForwarded - thisTransaction->oneHopReportedPacketsForwarded);// * 3;

        /* Check for consistent reporting and adjust trust accordingly */
        /* If the reports are consistent */
        if (call Trust.areReportsConsistent(thisTransaction->oneHopReportedPacketsForwarded, thisTransaction->twoHopReportedPacketsReceived) == 1)
        {
          /* Adjust one-hop's trustRH if not root */
          one_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
          one_brb_inc = 0;

          /* Adjust two-hop's trustRH if not root */
          two_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
          two_brb_inc = 0;
        }
        /* If the reports are not consistent */
        else
        {
          /* Adjust one-hop's trustRH if not root */
          one_grb_inc = 0;
          one_brb_inc = BAD_REPORTING_BEHAVIOR_INCREMENT ;

          /* Adjust two-hop's trustRH if not root */
          two_grb_inc = 0;
          two_brb_inc = BAD_REPORTING_BEHAVIOR_INCREMENT ;
		//  dbg(DBG_USR3, "one_grb_inc:%d one_brb_inc:%d two_grb_inc:%d two_brb_inc:%d\n", one_grb_inc, one_brb_inc, two_grb_inc, two_brb_inc);
        }

        /* Since they both reported, then give them both a trustAV pat on the back.  */
        one_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
        one_bab_inc = 0;
        two_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
        two_bab_inc = 0;
      }
      else // twoHopReported == 255
      {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
        /* One reported, but Two did not report */

        /* Adjust one-hop's trustFP if not root */
        one_gfb_inc = thisTransaction->oneHopReportedPacketsReceived;// * 2;
        one_bfb_inc = ((thisTransaction->packetsForwarded - thisTransaction->oneHopReportedPacketsForwarded));// * 3;

        /* We assume the one-hop report is consistent, because we cannot prove otherwise */
        /* Adjust one-hop's trustRH if not root */
        one_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
        one_brb_inc = 0;


        /* The one-hop reported, but the two-hop did not.  Praise 1 and punish 2 */
        one_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
        one_bab_inc = 0;
        two_gab_inc = 0;
        two_bab_inc = BAD_AVAILABILITY_BEHAVIOR_INCREMENT;
      }
    }
    else // oneHopReported == 255
    {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
      if (thisTransaction->twoHopReported == 1)
      {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif

        /* One did not report, but Two did report */

        /* We use the two-hop's values for the one-hop calculations */
        /* Adjust one-hop's trustFP if not root */
        one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived;// * 2;
        one_bfb_inc = ((thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived));// * 3;

        /* We assume the two-hop report is consistent, because we cannot prove otherwise */
        /* Adjust two-hop's trustRH if not root */
        two_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
        two_brb_inc = 0;

        /* Praise two-hop and punish one-hop */
        one_gab_inc = 0;
        one_bab_inc = BAD_AVAILABILITY_BEHAVIOR_INCREMENT;
        two_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
        two_bab_inc = 0;
      }
      else // twoHopReported == 255
      {
#ifdef TRANSACTION
dbg(DBG_USR3, "%d\n", __LINE__);
#endif
        /* Neither One nor Two reported */

        /* We cannot assess timeout penalty to two-hop's trustRH, because we don't know who they are */
        /* Assess timeout penalty to one-hop's trustAV. */
        one_gab_inc = 0;
        one_bab_inc =BAD_AVAILABILITY_BEHAVIOR_INCREMENT ;
      }
    }
    /* Now that the parts are processed, process the overallTrust */
    // one hop first
    if ( (thisTransaction->packetsForwardedTo != 0) && (thisTransaction->packetsForwardedTo != 255) )
      call TransactionTable.adjustThisNeighborsOverallTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, one_gfb_inc, one_bfb_inc, one_grb_inc, one_brb_inc, one_gab_inc, one_bab_inc, one_glb_inc, one_blb_inc);
	
    // teo hop second
    if ( (thisTransaction->oneHopReportedPacketsForwardedTo != 0) && (thisTransaction->oneHopReportedPacketsForwardedTo != 255) )
      call TransactionTable.adjustThisNeighborsOverallTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, two_gfb_inc, two_bfb_inc, two_grb_inc, two_brb_inc, two_gab_inc, two_bab_inc, two_glb_inc, two_blb_inc);

    #endif
    thisTransaction->processed = 1;
    thisTransaction->isValid = 0;
  }


  command void TransactionTable.addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue)
  {
    #if DEBUG
    dbg(DBG_USR1, "In addToTransactionCheckQ in TransactionTableM.nc\r\n");
    #endif
    #if DEBUG
    dbg(DBG_USR1, " ADD to Transactions to CheckQ, ones: %d, twos: %d\r\n", ones, twos);
    #endif

    for (tLoopCounter = *numInQueue; tLoopCounter >0; tLoopCounter --)
    {
      #if DEBUG
      dbg(DBG_USR1, "WriteHere: %d, MaxQSize: %d, NumInQ: %d\r\n");
      #endif
      tIndex = *writeHere - tLoopCounter;
      if (tIndex < 0)
        tIndex = tIndex + maxQueueSize;
      if (queue[tIndex].transactionPtr == ptr)
      {
        #if DEBUG
        dbg(DBG_USR1, "Transaction %04x is already in TransactionToCheckQ, so I'm not putting it there again\r\n", ptr->transaction_id);
        #endif
        return;
      }
    }

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
    //atomic
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
    //atomic
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

  /*
   * Returns:   1 if it IS a loop
   *            0 if it IS NOT a loop.
   */
  command uint16_t TransactionTable.isALoop(Transaction_Record_t transactions[], uint32_t transaction_id, uint16_t senderNow, uint16_t sequenceNumberIn)
    {
     for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
     {
       if (transactions[tLoopCounter].transaction_id == transaction_id)
       {
         if ( (transactions[tLoopCounter].receivedFrom != senderNow) || (transactions[tLoopCounter].sequenceNumber > sequenceNumberIn) )
          return 1;
         else
         {
           // keeps the running sequence number
           transactions[tLoopCounter].sequenceNumber = sequenceNumberIn;
           return 0;
         }
       }
     }
     return 0; // shouldn't be reached
   }

  command void TransactionTable.doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm)
  {
    for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter ++)
    {
      float forgetFP, forgetRH, forgetAV, forgetLP, temp;
	  forgetFP = call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB);
	  forgetRH = call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB);
	  forgetAV = call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB);
	  forgetLP = call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB);
#ifdef TRUSTVALUES
dbg(DBG_USR3, "[%d] EXP:%d GFB:%d BFB:%d CalFP:%f Exp:%f FP-forget:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, call Trust.calculateFP(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB), expo(call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB), tnForgettingCnt), forgetFP);
dbg(DBG_USR3, "[%d] EXP:%d GRB:%d BRB:%d CalRH:%f Exp:%f RH-forget:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB, call Trust.calculateFP(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB), expo(call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB), tnForgettingCnt), forgetRH);
dbg(DBG_USR3, "[%d] EXP:%d GAB:%d BAB:%d CalAV:%f Exp:%f AV-forget:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB, call Trust.calculateFP(neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB), expo(call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB), tnForgettingCnt), forgetAV);
dbg(DBG_USR3, "[%d] EXP:%d GLB:%d BLB:%d CalLP:%f Exp:%f LP-forget:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, call Trust.calculateFP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB), expo(call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB), tnForgettingCnt), forgetLP);
#endif


	  temp = forgetFP * neighbors[tnLoopCounter].trust.trustFP;
	  if(temp > 1)
	  	neighbors[tnLoopCounter].trust.trustFP = 1.0;
	  else if(temp == 0)
	  	neighbors[tnLoopCounter].trust.trustFP = 0.01;
	  else
	    neighbors[tnLoopCounter].trust.trustFP = temp;

	  temp = forgetRH * neighbors[tnLoopCounter].trust.trustRH;
	  if(temp > 1)
	  	neighbors[tnLoopCounter].trust.trustRH = 1.0;
	  else if(temp == 0)
	  	neighbors[tnLoopCounter].trust.trustRH = 0.01;
	  else
	    neighbors[tnLoopCounter].trust.trustRH = temp;
	  
      temp = forgetAV * neighbors[tnLoopCounter].trust.trustAV;
	  if(temp > 1)
	  	neighbors[tnLoopCounter].trust.trustAV = 1.0;
	  else if(temp == 0)
	  	neighbors[tnLoopCounter].trust.trustAV = 0.01;
	  else
	    neighbors[tnLoopCounter].trust.trustAV = temp;
	  
      temp = forgetLP * neighbors[tnLoopCounter].trust.trustLP;
	  if(temp > 1)
	  	neighbors[tnLoopCounter].trust.trustLP = 1.0;
	  else if(temp == 0)
	  	neighbors[tnLoopCounter].trust.trustLP = 0.01;
	  else
	    neighbors[tnLoopCounter].trust.trustLP = temp;
	  
      neighbors[tnLoopCounter].trust.overallTrust = call Trust.calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
#ifdef TRUSTVALUES
	  dbg(DBG_USR3, "[%d] EXP:%d GFB:%d BFB:%d FP-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, forgetFP, neighbors[tnLoopCounter].trust.trustFP);
	  dbg(DBG_USR3, "[%d] EXP:%d GRB:%d BRB:%d RH-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB, forgetRH, neighbors[tnLoopCounter].trust.trustRH);
	  dbg(DBG_USR3, "[%d] EXP:%d GAB:%d BAB:%d AV-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB, forgetAV, neighbors[tnLoopCounter].trust.trustAV);
	  dbg(DBG_USR3, "[%d] EXP:%d GLB:%d BLB:%d LP-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, forgetLP, neighbors[tnLoopCounter].trust.trustLP);
	  dbg(DBG_USR3, "[%d] EXP:%d GPB:%d BPB:%d PR-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GPB, neighbors[tnLoopCounter].trust.BPB, forgetPR, neighbors[tnLoopCounter].trust.trustPR);
	  dbg(DBG_USR3, "[%d] EXP:%d overalltrust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.overallTrust);
#endif
      // 0 means it is updated from dynamic forgetting
      sendSarpTrust(0, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust);
    }
	tnForgettingCnt++;
  }
}
