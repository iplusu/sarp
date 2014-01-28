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


module TransactionTableM {
	uses {
		interface NeighborTable;
		interface Trust;
		interface Messaging;
		interface Attack;
		#if (PREDICTABILITY) && (__REAL__MOTE__)
		interface MemAlloc;
		#endif
	}
	provides {
		interface TransactionTable;
		interface StdControl;
	}
}

implementation {

	uint16_t dataIndex = 0, highestTrustIndex = 0, oneDiscIndex = 0, twoDiscIndex = 0;
	#ifdef PREDICTABILITY
	Trust_Rec_t *prev_neighbors = NULL;
	#ifdef __REAL__MOTE__
	Handle mHandle;
	#endif
	#endif
	command result_t StdControl.init()
	{
		return SUCCESS;
	}


	command result_t StdControl.start()
	{
	#ifdef PREDICTABILITY
		#ifdef __REAL__MOTE__		
		call MemAlloc.allocate(&mHandle, 1);
		#endif
	#endif
		return SUCCESS;
	}


	command result_t StdControl.stop()
	{
#ifdef PREDICTABILITY
		#ifdef __REAL__MOTE__
		call MemAlloc.free(mHandle);
		#endif
#endif

		return SUCCESS;
	}

#ifdef PREDICTABILITY
	int evalPredictable(Trust_Rec_t neighbor, Trust_Rec_t prev_neighbor)
	{
		if(neighbor.trustFP < prev_neighbor.trustFP - PR_TOLERANCE) return 0;
		else return 1;
	}
#endif

	/*
	 *    @fn         This function checks to see if the trqnsactio has already been initialized.
	 *    @returns:   1 for yes, 0 for no
	 */
	command uint8_t TransactionTable.transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr)
	{
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
		{
			if ( transactionRecords[tLoopCounter].transaction_id == transaction_id)
			{
				transactionRecords[tLoopCounter].packetsReceived++;
				if (myAddr != 0)
					transactionRecords[tLoopCounter].packetsForwarded++;
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
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
		{
			if ( transactionRecords[tLoopCounter].transaction_id == transaction_id)
			{
				transactionRecords[tLoopCounter].sequenceNumber++;
				break;
			}
		}
	}


	/*
	 *    We get a node's info and see if it is in the neighbor table.  If not, we add it.
	 *    If isOneHop == 1, we check to see if it is in the one-hop table.
	 *    If isOneHop != 1, we do nothing more.
	 */
	command result_t TransactionTable.initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr, uint16_t *tPointer)
	{
		/*for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter ++)
		   {
		 #ifdef DEBUG
		   dbg(DBG_USR1, "reports isValid %d\r\n", transactionRecords[tLoopCounter].isValid);
		   if (transactionRecords[tLoopCounter].isValid == 1 && tLoopCounter == MAX_TRANSACTIONS){
		    dbg(DBG_USR1, "reports transaction %x id VALID  -- IMPORTANT !!\r\n", transactionRecords[tLoopCounter].transaction_id);
		            continue;
		   }
		 #endif*/
		//if (transactionRecords[tLoopCounter].isValid == 0)
		//{
		*tPointer = (*tPointer + 1) % MAX_TRANSACTIONS;
		transactionRecords[*tPointer].transaction_id = transaction_id;
		transactionRecords[*tPointer].originatingNode = originatingNode;
		transactionRecords[*tPointer].receivedFrom = receivedFrom;
		transactionRecords[*tPointer].isValid = 1;
		transactionRecords[*tPointer].sequenceNumber = 1;
//		dbg(DBG_USR3, "tPointer:%d ID:%d O_Node:%d From:%d\r\n", *tPointer, transactionRecords[*tPointer].transaction_id, transactionRecords[*tPointer].originatingNode, transactionRecords[*tPointer].receivedFrom);

		if (isSource == 1)
			transactionRecords[*tPointer].packetsReceived = 0;
		else
			transactionRecords[*tPointer].packetsReceived = 1;

		transactionRecords[*tPointer].packetsForwarded = 1;
		transactionRecords[*tPointer].oneHopReported = 0;
		transactionRecords[*tPointer].oneHopReportedPacketsReceived = 0;
		transactionRecords[*tPointer].oneHopReportedPacketsForwarded = 0;
		transactionRecords[*tPointer].oneHopReportedPacketsForwardedTo = NO_PARENT;
		transactionRecords[*tPointer].twoHopReported = 0;
		transactionRecords[*tPointer].twoHopReportedPacketsReceived = 0;
		transactionRecords[*tPointer].processed = 0;
		transactionRecords[*tPointer].isALoop = 0;
		transactionRecords[*tPointer].lastParentTried = 255;
		transactionRecords[*tPointer].numberPossibleOtherParents = 0;
		transactionRecords[*tPointer].numberPossibleOtherParentsTried = 0;
		for (tnLoopCounter = 0; tnLoopCounter < MAX_NUMBER_OTHER_POSSIBLE_PARENTS; tnLoopCounter++)
			transactionRecords[*tPointer].possibleOtherParents[tnLoopCounter] = 0;

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
			transactionRecords[*tPointer].packetsForwardedTo = 0;
	  #ifdef DEBUG
			dbg(DBG_USR1, "hears the root, and will forward all DATA to it\r\n");
			dbg(DBG_USR2, "hears the root, and will forward all DATA to it\r\n");
	  #endif
		}
		else
		{
			if (call Attack.ifLoopCreatorGetParent(myAddr) > 0)
				transactionRecords[*tPointer].packetsForwardedTo = call Attack.ifLoopCreatorGetParent(myAddr);
			else
				transactionRecords[*tPointer].packetsForwardedTo = call NeighborTable.getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel, myPeers, numPeers, myChildren, numChildren, transactionRecords[*tPointer].receivedFrom, 255, 255, myAddr);
		}

		transactionRecords[*tPointer].originalPacketsForwardedTo = transactionRecords[*tPointer].packetsForwardedTo;
		//break;
		//}
		//}

		return SUCCESS;
	}


	command Transaction_Record_Ptr TransactionTable.getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id)
	{
  #ifdef _SARP04
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++) {
			dbg(DBG_USR3, "Transaction ID : %d isValid : %d\r\n", transactions[tLoopCounter].transaction_id, transactions[tLoopCounter].isValid);
		}
  #endif
  		if(transaction_id == 0)
			return NULL;
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
		{
			if (transactions[tLoopCounter].transaction_id == transaction_id)
				return &transactions[tLoopCounter];
		}
		return NULL;
	}

	command uint16_t TransactionTable.getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id)
	{
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
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
	 *    This command adjusts the specified neighbor's overall trust
	 */
	#ifdef ONOFFATTACK
	command void TransactionTable.adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GLBinc, uint32_t BLBinc, uint8_t isGood, uint32_t t)
	#else
	command void TransactionTable.adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GLBinc, uint32_t BLBinc)
	#endif
	{
		#ifdef PREDICTABILITY
		#ifdef __REAL__MOTE__
		call MemAlloc.free(mHandle);
		#else
		//dbg(DBG_USR3, "FREE:%d\r\n", __LINE__);
		free(prev_neighbors);
		prev_neighbors = (Trust_Rec_t*)malloc(sizeof(Trust_Rec_t) * numNeighbors);
		#endif
		
		#ifdef __REAL__MOTE__
		if(call MemAlloc.allocate(&mHandle, sizeof(Trust_Rec_t) * numNeighbors)){
			prev_neighbors = (Trust_Rec_t*)&mHandle;
		#else
		if(prev_neighbors != NULL) {
		#endif

			//#ifdef DBG_SARP04
			dbg(DBG_USR3, "ALLOC FINISH:%d\r\n", __LINE__);
			//#endif
			//memmove((Neighbor_Rec_withTrust_t*)prev_neighbors, (Neighbor_Rec_withTrust_t*)neighbors, sizeof(Neighbor_Rec_withTrust_t) * numNeighbors);
			for(tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++) {
				prev_neighbors[tnLoopCounter].GFB = neighbors[tnLoopCounter].trust.GFB;
				prev_neighbors[tnLoopCounter].BFB = neighbors[tnLoopCounter].trust.BFB;
				prev_neighbors[tnLoopCounter].trustFP = neighbors[tnLoopCounter].trust.trustFP;
				//prev_neighbors[tnLoopCounter].GLB = neighbors[tnLoopCounter].trust.GLB;
				//prev_neighbors[tnLoopCounter].BLB = neighbors[tnLoopCounter].trust.BLB;
				//prev_neighbors[tnLoopCounter].trustLP = neighbors[tnLoopCounter].trust.trustLP;
				memmove((PB_t*)&prev_neighbors[tnLoopCounter].PB, (PB_t*)&neighbors[tnLoopCounter].trust.PB, sizeof(PB_t));
				prev_neighbors[tnLoopCounter].trustPR = neighbors[tnLoopCounter].trust.trustPR;
				prev_neighbors[tnLoopCounter].overallTrust = neighbors[tnLoopCounter].trust.overallTrust;
			}
			//#ifdef DBG_SARP04
			dbg(DBG_USR3, "Copy FINISH:%d\r\n", __LINE__);
			//#endif

		}else
		{
			prev_neighbors = NULL;
		}
		#endif

		for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++)
		{
			if (neighbors[tnLoopCounter].node_id == node_id)
			{
				// adjust fp
				neighbors[tnLoopCounter].trust.GFB += GFBinc;
				neighbors[tnLoopCounter].trust.BFB += BFBinc;
				#ifdef PREDICTABILITY
				neighbors[tnLoopCounter].trust.trustFP = call Trust.calculateFP(GFBinc, BFBinc);
				#else
				//dbg(DBG_USR3, "[%d] GFB: %f BFB: %f trustFP:%f\r\n", neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.trustFP);
				neighbors[tnLoopCounter].trust.trustFP = call Trust.calculateFP(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB);
				#endif

				// adjust LP
				neighbors[tnLoopCounter].trust.GLB += GLBinc;
				neighbors[tnLoopCounter].trust.BLB += BLBinc;
				neighbors[tnLoopCounter].trust.trustLP = call Trust.calculateLP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB);

				#ifdef PREDICTABILITY
				if(/*tnForgettingCnt != 0 && */prev_neighbors != NULL) {
					neighbors[tnLoopCounter].trust.PB.pointer = (neighbors[tnLoopCounter].trust.PB.pointer + 1) % SWINDOW_SIZE;
					neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].time = t;
					
					#ifdef DBG_SARP04
					dbg(DBG_USR3, "EVAL: %d trustFP:%f evalValue:%f time:%ld\r\n", __LINE__, neighbors[tnLoopCounter].trust.trustFP, prev_neighbors[tnLoopCounter].trustFP - PR_TOLERANCE, neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].time);
					#endif
					if(evalPredictable(neighbors[tnLoopCounter].trust, prev_neighbors[tnLoopCounter])) {
						#ifdef DBG_SARP04
						dbg(DBG_USR3, "EVAL PRED TRUE: %d\r\n", __LINE__);
						#endif
						neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].GPB = 1;
						neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].BPB = 0;
					}else if(!evalPredictable(neighbors[tnLoopCounter].trust, prev_neighbors[tnLoopCounter])) {
							#ifdef DBG_SARP04
							dbg(DBG_USR3, "EVAL PRED FALSE: %d\r\n", __LINE__);
							#endif
						neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].GPB = 0;
						neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].BPB = 1;
					}
				}
				neighbors[tnLoopCounter].trust.trustPR = call Trust.calculatePR(neighbors[tnLoopCounter].trust.PB, t);
				
				#ifdef DBG_SARP04
				dbg(DBG_USR3, "[%d] trustPR:%f\r\n", neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustPR);
				#endif
				neighbors[tnLoopCounter].trust.overallTrust = call Trust.calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
				tnForgettingCnt = 0;
				//sendSarpTrust(transactionNumber, whoIAm, node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust, isGood);
				#else
				neighbors[tnLoopCounter].trust.overallTrust = call Trust.calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP);
				tnForgettingCnt = 0;
				//sendSarpTrust(transactionNumber, whoIAm, node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, 0, neighbors[tnLoopCounter].trust.overallTrust, isGood);
				#endif
				//break;
				#ifdef PREDICTABILITY
				#ifndef __REAL__MOTE__
				sendSarpTrust(transactionNumber, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust, isGood);
				#endif
				//dbg(DBG_USR3, "tr:%d nd: %d ov:%f\r\n", transactionNumber, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.overallTrust);
				#endif
			}
			#ifndef PREDICTABILITY
			#ifndef __REAL__MOTE__
			sendSarpTrust(transactionNumber, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, 0, neighbors[tnLoopCounter].trust.overallTrust, isGood);
			#endif
			//dbg(DBG_USR3, "tr:%d nd: %d ov:%f\r\n", transactionNumber, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.overallTrust);
			#endif
		}
	}

	#ifdef PREDICTABILITY
	event result_t MemAlloc.compactComplete()
	{
		return SUCCESS;
	}

	event result_t MemAlloc.reallocComplete(Handle h, result_t complete)
	{
		return SUCCESS;
	}

	event result_t MemAlloc.allocComplete(HandlePtr handle, result_t complete)
	{
		return SUCCESS;
	}
	#endif
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
	#ifdef ONOFFATTACK
	command void TransactionTable.processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm, uint8_t isGood, uint32_t timeCounter)
	#else
	command void TransactionTable.processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm)
	#endif
	{
    #ifndef NOSARP

		one_gfb_inc = 0;
		one_bfb_inc = 0;
		one_glb_inc = 0;
		one_blb_inc = 0;
		two_gfb_inc = 0;
		two_bfb_inc = 0;
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
		#ifdef SARP04
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
			one_glb_inc = 0;
			one_blb_inc = 2;
		}
		else
		{
			one_glb_inc = 1;
			one_blb_inc = 0;
		}

		if (thisTransaction->oneHopReported == 1)
		{
			if (thisTransaction->twoHopReported == 1)
			{
			#ifdef DBG_SARP04
			dbg(DBG_USR3, "%d Good One-hop Availability / Good Two-hop Availability\r\n", __LINE__);
			#endif

				/* Both One and Two reported */

				/* Adjust one-hop's trustFP if not root */
				one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived; // * 2;
				one_bfb_inc = (thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived); //thisTransaction->oneHopReportedPacketsForwarded);// * 3;

				/* Since they both reported, then give them both a trustAV pat on the back.  */
			}
			else // twoHopReported == 255
			{
				/* One reported, but Two did not report */

				/* Adjust one-hop's trustFP if not root */
				one_gfb_inc = thisTransaction->oneHopReportedPacketsReceived; // * 2;
				one_bfb_inc = (thisTransaction->packetsForwarded - thisTransaction->oneHopReportedPacketsReceived); //thisTransaction->oneHopReportedPacketsForwarded);// * 3;
			#ifdef DBG_SARP04
			dbg(DBG_USR3, "%d Good One-hop Availability / Bad Two-hop Availability\r\n", __LINE__);
			#endif
			}
		}
		else // oneHopReported == 255
		{
			if (thisTransaction->twoHopReported == 1)
			{
				#ifdef DBG_SARP04
				dbg(DBG_USR3, "%d Bad One-hop Availability / Good Two-hop Availability\r\n", __LINE__);
				#endif


				/* One did not report, but Two did report */

				/* We use the two-hop's values for the one-hop calculations */
				/* Adjust one-hop's trustFP if not root */
				one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived; // * 2;
				one_bfb_inc = (thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived); //thisTransaction->oneHopReportedPacketsForwarded);// * 3;
			}
			else // twoHopReported == 255
			{
				#ifdef DBG_SARP04
				dbg(DBG_USR3, "%d Bad One-hop Availability / Bad Two-hop Availability\r\n", __LINE__);
				#endif
				one_gfb_inc = 0;
				one_bfb_inc = 0;
			}
		}
		/* Now that the parts are processed, process the overallTrust */
		// one hop first
		if ( (thisTransaction->packetsForwardedTo != 0) && (thisTransaction->packetsForwardedTo != 255) )
			#ifdef ONOFFATTACK
			call TransactionTable.adjustThisNeighborsOverallTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, one_gfb_inc, one_bfb_inc, one_glb_inc, one_blb_inc, isGood, timeCounter);
			#else
			call TransactionTable.adjustThisNeighborsOverallTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, one_gfb_inc, one_bfb_inc, one_glb_inc, one_blb_inc);
			#endif
		// teo hop second
		if ( (thisTransaction->oneHopReportedPacketsForwardedTo != 0) && (thisTransaction->oneHopReportedPacketsForwardedTo != 255) )
			#ifdef ONOFFATTACK
			call TransactionTable.adjustThisNeighborsOverallTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, two_gfb_inc, two_bfb_inc, two_glb_inc, two_blb_inc, isGood, timeCounter);
			#else
			call TransactionTable.adjustThisNeighborsOverallTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, two_gfb_inc, two_bfb_inc, two_glb_inc, two_blb_inc);
			#endif

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

		for (tLoopCounter = 0; tLoopCounter < maxQueueSize; tLoopCounter++)
		{
      #if DEBUG
			dbg(DBG_USR1, "WriteHere: %d, MaxQSize: %d, NumInQ: %d\r\n", *writeHere, maxQueueSize, *numInQueue);
      #endif
//			tIndex = *writeHere - tLoopCounter;
//			if (tIndex < 0)
//				tIndex = tIndex + maxQueueSize;
//			if (queue[tIndex].transactionPtr == ptr)
			if(queue[tLoopCounter].transactionPtr != NULL){
				if (queue[tLoopCounter].transactionPtr->transaction_id == ptr->transaction_id && *numInQueue != 0)
				{
					#if DEBUG
					dbg(DBG_USR1, "Transaction %04x is already in TransactionToCheckQ, so I'm not putting it there again\r\n", ptr->transaction_id);
					#endif
					#ifdef DBG_SARP04
					dbg(DBG_USR3, "Transaction %d is already in TransactionToCheckQ so I'm not putting it there again\r\n", ptr->transaction_id);
					#endif
					return;
				}
			}
		}

		atomic
		{
			queue[*writeHere].transactionPtr = ptr;
			queue[*writeHere].oneTimes = ones;
			queue[*writeHere].twoTimes = twos;
			*numInQueue = *numInQueue + 1;
			*writeHere = (*writeHere + 1) % maxQueueSize;
			//(*numInQueue)++;
			//(*writeHere)++;
			//if (*writeHere >= maxQueueSize)
			//	*writeHere = 0;
			#ifdef DBG_SARP04
			dbg(DBG_USR3, "Transaction Queue// ID: %d oneTimes: %d twoTimes: %d Num: %d\r\n", ptr->transaction_id, ones, twos, *numInQueue);
			#endif
		}
	}



	command uint16_t TransactionTable.getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue)
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
				*numInQueue = *numInQueue - 1;
				*readHere = (*readHere + 1) % maxQueueSize;
				//(*numInQueue)--;
				//(*readHere)++;
				//if (*readHere >= maxQueueSize)
				//	*readHere = 0;
				return 1;
			}
		}
		/*uint8_t i;
		for(i = 0; i < maxQueueSize; i++){
			
		}*/
	}


	command void TransactionTable.setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount)
	{
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
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
			for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
			{
				if (transactionRecords[tLoopCounter].transaction_id == transaction_id) // do we need this check ?
				{
					dbg(DBG_USR1, "in TTsrrTT\r\n");
					dbg(DBG_USR1, "TID: %x, WOQH: %d, MXQS: %d, NMSGOQ: %d, MYADDR: %d\r\n", transaction_id, *writeOutQHere, maxQSize, *numMsgOutQ, myAddr);

					#ifdef DBG_SARP04
					dbg(DBG_USR3, "TID: %x writeOutQHere: %d, maxQSize: %d, numMsgOutQ: %d, MYADDR: %d\r\n", transaction_id, *writeOutQHere, maxQSize, *numMsgOutQ, myAddr);
					//dbg(DBG_USR3, "T-ID:%d Received Report Request Message from %d, and forward to %d\r\n", reportReqMsgIn->transaction_id, reportReqMsgIn->requestor, call TransactionTable.getTransactionParent(transactionRecords, reportReqMsgIn->transaction_id));
					#endif

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
		for (tLoopCounter = 0; tLoopCounter < MAX_TRANSACTIONS; tLoopCounter++)
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

	#ifdef DYNAMIC_FORGETTING
	command void TransactionTable.doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm, uint32_t timeCounter)
	{
		for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++)
		{
			#ifdef PREDICTABILITY
			float forgetFP, forgetLP, temp;

			forgetFP = call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.trustPR);
			forgetLP = call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, neighbors[tnLoopCounter].trust.trustPR);
			
			temp = forgetFP * neighbors[tnLoopCounter].trust.trustFP;
			if(temp > 1)
				neighbors[tnLoopCounter].trust.trustFP = 1.0;
			else if(temp == 0)
				neighbors[tnLoopCounter].trust.trustFP = 0.01;
			else
				neighbors[tnLoopCounter].trust.trustFP = temp;

			temp = forgetLP * neighbors[tnLoopCounter].trust.trustLP;
			if(temp > 1)
				neighbors[tnLoopCounter].trust.trustLP = 1.0;
			else if(temp == 0)
				neighbors[tnLoopCounter].trust.trustLP = 0.01;
			else
				neighbors[tnLoopCounter].trust.trustLP = temp;

			#else

			float temp;
			
			#if /*defined (MODIFIED_DF) ||*/ defined (NODFPR) || defined (PREDICTABILITY)
			neighbors[tnLoopCounter].trust.GFB = neighbors[tnLoopCounter].trust.GFB * ((1 - neighbors[tnLoopCounter].trust.trustFP * 0.5));// + (1-0.3));
			neighbors[tnLoopCounter].trust.BFB = neighbors[tnLoopCounter].trust.BFB * ((1 - neighbors[tnLoopCounter].trust.trustFP * 0.5));// + (1-0.3));
			if(neighbors[tnLoopCounter].trust.GFB < 0.01 || neighbors[tnLoopCounter].trust.BFB < 0.01){
				neighbors[tnLoopCounter].trust.GFB = 1.0;
				neighbors[tnLoopCounter].trust.BFB = 0.0;
			}
			#endif

			#ifdef ORIGINAL_DF
			neighbors[tnLoopCounter].trust.GFB = neighbors[tnLoopCounter].trust.GFB * ((1 - neighbors[tnLoopCounter].trust.trustFP));// * 0.5 + (1-0.5));
			neighbors[tnLoopCounter].trust.BFB = neighbors[tnLoopCounter].trust.BFB * ((1 - neighbors[tnLoopCounter].trust.trustFP));// * 0.5 + (1-0.5));
			#endif
			#ifdef MODIFIED_DF_BEHAVIOR
			neighbors[tnLoopCounter].trust.GFB = neighbors[tnLoopCounter].trust.GFB * ((1 - neighbors[tnLoopCounter].trust.trustFP));// * 0.5 + (1-0.5));
			neighbors[tnLoopCounter].trust.BFB = neighbors[tnLoopCounter].trust.BFB * ((1 - neighbors[tnLoopCounter].trust.trustFP));// * 0.5 + (1-0.5));
			#endif

			if(neighbors[tnLoopCounter].trust.GFB == 0)	neighbors[tnLoopCounter].trust.GFB = 1.0;
			temp = call Trust.calculateFP(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB);
			if(temp > 1)
				neighbors[tnLoopCounter].trust.trustFP = 1.0;
			else if(temp == 0)
				neighbors[tnLoopCounter].trust.trustFP = 0.01;
			else
				neighbors[tnLoopCounter].trust.trustFP = temp;
			
			#endif
			#ifdef DBG_SARP04
			dbg(DBG_USR3, "[%d] EXP:%d GFB:%d BFB:%d CalFP:%f Exp:%f FP-forget:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, call Trust.calculateFP(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB), expo(call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB), tnForgettingCnt), forgetFP);
			dbg(DBG_USR3, "[%d] EXP:%d GLB:%d BLB:%d CalLP:%f Exp:%f LP-forget:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, call Trust.calculateFP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB), expo(call Trust.calculateForgettingFactor(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB), tnForgettingCnt), forgetLP);
			#endif

			#ifdef PREDICTABILITY
			neighbors[tnLoopCounter].trust.trustPR = call Trust.calculatePR(neighbors[tnLoopCounter].trust.PB, timeCounter);

			neighbors[tnLoopCounter].trust.overallTrust = call Trust.calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
			#else
			#ifdef ORIGINAL_DF
			neighbors[tnLoopCounter].trust.overallTrust = call Trust.calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP);
			#endif

			#ifdef MODIFIED_DF
			neighbors[tnLoopCounter].trust.overallTrust = neighbors[tnLoopCounter].trust.overallTrust * FORGETTING_FACTOR;
			if(neighbors[tnLoopCounter].trust.overallTrust > 1.0)
				neighbors[tnLoopCounter].trust.overallTrust = 1.0;
			#endif
			#endif
			#ifdef DBG_SARP04
			dbg(DBG_USR3, "[%d] EXP:%d GFB:%d BFB:%d FP-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, forgetFP, neighbors[tnLoopCounter].trust.trustFP);
			dbg(DBG_USR3, "[%d] EXP:%d GLB:%d BLB:%d LP-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, forgetLP, neighbors[tnLoopCounter].trust.trustLP);
			dbg(DBG_USR3, "[%d] EXP:%d GPB:%d BPB:%d PR-forget:%f trust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.GPB, neighbors[tnLoopCounter].trust.BPB, forgetPR, neighbors[tnLoopCounter].trust.trustPR);
			dbg(DBG_USR3, "[%d] EXP:%d overalltrust:%f\n", neighbors[tnLoopCounter].node_id, tnForgettingCnt, neighbors[tnLoopCounter].trust.overallTrust);
			#endif
			// 0 means it is updated from dynamic forgetting
			#ifdef PREDICTABILITY
			#ifndef __REAL__MOTE__
			sendSarpTrust(0, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust, NONE);
			#endif
			#else
			#ifndef __REAL__MOTE__
			sendSarpTrust(0, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, 0.0, neighbors[tnLoopCounter].trust.overallTrust, NONE);
			#endif
			#endif
		}
		tnForgettingCnt++;
	}
	#endif
}
