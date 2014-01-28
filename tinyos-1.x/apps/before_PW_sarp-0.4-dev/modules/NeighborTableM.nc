/*
 *  File:       NeighborTableM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 9, 2009
 */


includes AM;
includes Globals;
includes MessagingH;
includes NeighborTableH;

#define PARENT_PEER_THRESHOLD   parent_peer_threshold
#define PEER_CHILD_THRESHOLD    peer_child_threshold

module NeighborTableM {
	provides {
		interface NeighborTable;
		interface StdControl;
	}
}

implementation {

	uint16_t dataIndex = 0, nLoopCounter = 0, oneDiscIndex = 0, twoDiscIndex = 0;
	uint16_t highestParentTrustIndex, highestPeerTrustIndex, highestChildTrustIndex;
	uint16_t maxParentPeerTrustIndex, maxOverallTrustIndex, chosenParentTrustIndex;

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

	/*    We get a node's info and see if it is in the neighbor table.  If not, we add it.
	 *    If isOneHop == 1, we check to see if it is in the one-hop table.
	 *    If isOneHop != 1, we do nothing more.
	 */
	command result_t NeighborTable.processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parent_l, uint16_t *isOneHop)
	{
		atomic
		{
      #ifdef DEBUG
			if (*isOneHop == 1)
				dbg(DBG_USR1, "processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
			else
				dbg(DBG_USR1, "processing: %d, not a one-hops, numone-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
      #endif

			/* Check to see if the neighbor is in the one-hop neighbor table. */
			oneHopFound = 0;
			for (nLoopCounter = 0; nLoopCounter < *numOneHopNeighbors; nLoopCounter++)
			{
				if (myOneHopNeighbors[nLoopCounter]->node_id  == nodeId_l)
				{
					oneHopFound = 1;
					break;
				}
			}

			/* Check to see if the neighbor is in the general neighbor table. */
			neighborFound = 0;
			for (nLoopCounter = 0; nLoopCounter < *numNeighbors; nLoopCounter++)
			{
				if (neighbors[nLoopCounter].node_id  == nodeId_l)
				{
					neighborFound = 1;
					/* Now check to see if we need to update its level */
					if (neighbors[nLoopCounter].level > level_l)
					{
	    #ifdef DEBUG
						dbg(DBG_USR1, "%d updated %d level to %d\r\n", TOS_LOCAL_ADDRESS, nodeId_l, level_l);
	    #endif
						neighbors[nLoopCounter].level = level_l;
					}

					/* Now check to see if we're comparing apples to apples */
					if (oneHopFound == *isOneHop)
					{
						/* Now check to see if we need to update its parentOrOneHop */
						if (neighbors[nLoopCounter].parent_id != parent_l)
							neighbors[nLoopCounter].parent_id = parent_l;
					}
					break;
				}
			}

			/* If it is not in the neighbor table, add it. */
			if (neighborFound == 0)
			{
				/* Add it */
				neighbors[*numNeighbors].node_id = nodeId_l;
				neighbors[*numNeighbors].level = level_l;
				neighbors[*numNeighbors].parent_id = parent_l;
				neighbors[*numNeighbors].isOne = 0;
				neighbors[*numNeighbors].trust.trustFP = 0.5;
				neighbors[*numNeighbors].trust.GFB = TRUST_GFB_START;
				neighbors[*numNeighbors].trust.BFB = TRUST_BFB_START;
				neighbors[*numNeighbors].trust.trustLP = 0.5;
				neighbors[*numNeighbors].trust.GLB = TRUST_GLB_START;
				neighbors[*numNeighbors].trust.BLB = TRUST_BLB_START;
				neighbors[*numNeighbors].trust.trustPR = 0.5;
				memset(neighbors[*numNeighbors].trust.PB.SWindow, 0, sizeof(PB_t));
				//neighbors[*numNeighbors].trust.trustPR = 1;
				//neighbors[*numNeighbors].trust.PB.SWindow->GPB = 9;
				//neighbors[*numNeighbors].trust.PB.SWindow->time = tos_state.tos_time/4000;
				neighbors[*numNeighbors].trust.overallTrust = 0.5;

				/* If it is a one-hop neighbor, add it to that table */
				if (*isOneHop == 1)
				{
					myOneHopNeighbors[*numOneHopNeighbors] = &neighbors[*numNeighbors];
					(*numOneHopNeighbors)++;
	  #ifdef DEBUG
					dbg(DBG_USR1, "Incrementing one-hop neighbors to %d\r\n", *numOneHopNeighbors);
	  #endif
					neighbors[*numNeighbors].isOne = 1;
				}
				*numNeighbors = *numNeighbors + 1;
	#ifdef DEBUG
				dbg(DBG_USR1, "%d added node %d, level %d\r\n", TOS_LOCAL_ADDRESS, nodeId_l, level_l);
	#endif
			}
      #ifdef DEBUG
			dbg(DBG_USR1, "Done processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
      #endif
	  #ifndef SARP04
			for(nLoopCounter = 0; nLoopCounter < *numNeighbors; nLoopCounter++)
				dbg(DBG_USR3, "Neighbor Node ID: %d Level: %d isOneHop: %d\r\n", neighbors[nLoopCounter].node_id, neighbors[nLoopCounter].level, neighbors[nLoopCounter].isOne);
			dbg(DBG_USR3, "  \r\n");
	  #endif
		}
		return SUCCESS;
	}


	command result_t NeighborTable.addNeighborsToDiscMsg(Disc_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
	{
    #ifdef DEBUG
		dbg(DBG_USR1, "%d adding neighbors to DiscMsg\r\n", TOS_LOCAL_ADDRESS);
    #endif
		atomic
		{
      #ifdef DEBUG
			dbg(DBG_USR1, "Adding %d neighbors to Disc message.\r\n", numOneHopNeighbors);
      #endif
			if (numOneHopNeighbors < MAX_ONE_HOP_NEIGHBORS_MSG)
			{
				for (nLoopCounter = 0; nLoopCounter < numOneHopNeighbors; nLoopCounter++)
				{
					msgNeighbors[nLoopCounter].node_id = myOneHopNeighbors[nLoopCounter]->node_id;
					msgNeighbors[nLoopCounter].level = myOneHopNeighbors[nLoopCounter]->level;
				}
			}
			else
			{
				for (nLoopCounter = 0; nLoopCounter < MAX_ONE_HOP_NEIGHBORS_MSG; nLoopCounter++)
				{
					msgNeighbors[nLoopCounter].node_id = myOneHopNeighbors[nLoopCounter]->node_id;
					msgNeighbors[nLoopCounter].level = myOneHopNeighbors[nLoopCounter]->level;
				}
			}
      #ifdef DEBUG
			dbg(DBG_USR1, "Done adding %d neighbors to Disc message.\r\n", numOneHopNeighbors);
      #endif
		}
		return SUCCESS;
	}


	command uint16_t NeighborTable.getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t dontPickMe, uint16_t dontPickMeEither, uint16_t reallyDontPickMe, uint16_t whoIAm)
	{
		/* Not attackers, but a guided route */
		//if (whoIAm == 23)
		//  return 18;
		//else if (whoIAm == 18)
		//  return 13;
		//else if (whoIAm == 13)
		//  return 8;

		/* figure out and set the transaction parent here */
		highestParentTrustIndex = 255;
		highestPeerTrustIndex = 255;
		highestChildTrustIndex = 255;
		maxParentPeerTrustIndex = 255;
		maxOverallTrustIndex = 255;
		chosenParentTrustIndex = 255;
    #ifdef DEBUG
		dbg(DBG_USR1, "Parent num one-hops: %d\r\n", numOneHopNeighbors);
    #endif
		for (nLoopCounter = 0; nLoopCounter < numOneHopNeighbors; nLoopCounter++)
		{
      #ifdef DEBUG
			dbg(DBG_USR1, "Checking Potential parent\r\n");
      #endif
			if (highestParentTrustIndex == 255) // still hasn't found a potential transaction parent
			{
				if ( (myOneHopNeighbors[nLoopCounter]->level < myLevel_l)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMe)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMeEither)  && (myOneHopNeighbors[nLoopCounter]->node_id != reallyDontPickMe) )
				{
					highestParentTrustIndex = nLoopCounter;

					/* Update maxParentPeerTrustIndex, if applicable */
					if (maxParentPeerTrustIndex == 255)
					{
						maxParentPeerTrustIndex = nLoopCounter;
					}
					else
					{
						if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust >= myOneHopNeighbors[maxParentPeerTrustIndex]->trust.overallTrust)
							maxParentPeerTrustIndex = nLoopCounter;
					}
				}
			}
			else
			{
				if ( (myOneHopNeighbors[nLoopCounter]->level < myLevel_l)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMe)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMeEither)  && (myOneHopNeighbors[nLoopCounter]->node_id != reallyDontPickMe) )
				{
					if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust > myOneHopNeighbors[highestParentTrustIndex]->trust.overallTrust)
					{
						highestParentTrustIndex = nLoopCounter;

						/* Update maxParentPeerTrustIndex, if applicable */
						if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust >= myOneHopNeighbors[maxParentPeerTrustIndex]->trust.overallTrust)
							maxParentPeerTrustIndex = nLoopCounter;
					}
				}
			}

      #ifdef DEBUG
			dbg(DBG_USR1, "Checking Potential peer\r\n");
      #endif
			/* Update highest peer index here */
			if (highestPeerTrustIndex == 255) // still hasn't found a potential transaction parent from the peers group
			{
				if ( (myOneHopNeighbors[nLoopCounter]->level == myLevel_l)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMe)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMeEither)  && (myOneHopNeighbors[nLoopCounter]->node_id != reallyDontPickMe) )
				{
					highestPeerTrustIndex = nLoopCounter;

					/* Update maxParentPeerTrustIndex, if applicable */
					if (maxParentPeerTrustIndex == 255)
					{
						maxParentPeerTrustIndex = nLoopCounter;
					}
					else
					{
						if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust >= myOneHopNeighbors[maxParentPeerTrustIndex]->trust.overallTrust)
							maxParentPeerTrustIndex = nLoopCounter;
					}
				}
			}
			else
			{
				if ( (myOneHopNeighbors[nLoopCounter]->level == myLevel_l)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMe)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMeEither)  && (myOneHopNeighbors[nLoopCounter]->node_id != reallyDontPickMe) )
				{
					if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust > myOneHopNeighbors[highestPeerTrustIndex]->trust.overallTrust)
					{
						highestPeerTrustIndex = nLoopCounter;

						/* Update maxParentPeerTrustIndex, if applicable */
						if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust > myOneHopNeighbors[maxParentPeerTrustIndex]->trust.overallTrust)
							maxParentPeerTrustIndex = nLoopCounter;
					}
				}
			}

      #ifdef DEBUG
			dbg(DBG_USR1, "Checking Potential child\r\n");
      #endif
			/* Update highest child index here */
			if (highestChildTrustIndex == 255) // still hasn't found a potential transaction parent from the children group
			{
				if ( (myOneHopNeighbors[nLoopCounter]->level > myLevel_l)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMe)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMeEither)  && (myOneHopNeighbors[nLoopCounter]->node_id != reallyDontPickMe) )
				{
					highestChildTrustIndex = nLoopCounter;
				}
			}
			else
			{
				if ( (myOneHopNeighbors[nLoopCounter]->level > myLevel_l)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMe)  && (myOneHopNeighbors[nLoopCounter]->node_id != dontPickMeEither)  && (myOneHopNeighbors[nLoopCounter]->node_id != reallyDontPickMe) )
				{
					if (myOneHopNeighbors[nLoopCounter]->trust.overallTrust > myOneHopNeighbors[highestChildTrustIndex]->trust.overallTrust)
					{
						highestChildTrustIndex = nLoopCounter;
					}
				}
			}

		} // end for loop

    #ifdef DEBUG
		dbg(DBG_USR1, "Done with for loop\r\n");
    #endif
		/* At end of for loop, maxParentPeerTrustIndex and highestChildTrustIndex are correct.  Now we set our maxOverallTrustIndex */
		if (maxParentPeerTrustIndex == 255)
		{
      #ifdef DEBUG
			dbg(DBG_USR1, "mppi == 255\r\n");
      #endif
			if (highestChildTrustIndex == 255)
				return 255; // hear nobody -- you're screwed
			else
				maxOverallTrustIndex = highestChildTrustIndex; // only one heard was the highest child
		}
		else
		{
      #ifdef DEBUG
			dbg(DBG_USR1, "mppi != 255\r\n");
      #endif
			if (highestChildTrustIndex == 255)
				maxOverallTrustIndex = maxParentPeerTrustIndex;
			else
			{
				if (myOneHopNeighbors[maxParentPeerTrustIndex]->trust.overallTrust >= myOneHopNeighbors[highestChildTrustIndex]->trust.overallTrust)
					maxOverallTrustIndex = maxParentPeerTrustIndex;
				else
					maxOverallTrustIndex = highestChildTrustIndex;
			}
		}

    #ifdef DEBUG
		if (highestParentTrustIndex != 255)
			dbg(DBG_USR1, "HPaTI: %d, MPPTI: %d, MOTI: %d\r\n", myOneHopNeighbors[highestParentTrustIndex]->node_id, myOneHopNeighbors[maxParentPeerTrustIndex]->node_id, myOneHopNeighbors[maxOverallTrustIndex]->node_id);
		if (highestPeerTrustIndex != 255)
			dbg(DBG_USR1, "HPeTI: %d, MPPTI: %d, MOTI: %d\r\n", myOneHopNeighbors[highestPeerTrustIndex]->node_id, myOneHopNeighbors[maxParentPeerTrustIndex]->node_id, myOneHopNeighbors[maxOverallTrustIndex]->node_id);
		if (highestChildTrustIndex != 255)
			dbg(DBG_USR1, "HCTI: %d, MOTI: %d\r\n", myOneHopNeighbors[highestChildTrustIndex]->node_id, myOneHopNeighbors[maxOverallTrustIndex]->node_id);
    #endif

		/* Set chosen parent trust index */
		/* If we haven't chosen a transaction parent or the parent's trust is too low */
		if ( (highestParentTrustIndex == 255) || (myOneHopNeighbors[highestParentTrustIndex]->trust.overallTrust < PARENT_PEER_THRESHOLD) )
		{
			dbg(DBG_USR1, "either HPaTI == 255 or no trusted parent\r\n");
			/* Try either parents or peers */
			if ( (highestPeerTrustIndex == 255) || (myOneHopNeighbors[maxParentPeerTrustIndex]->trust.overallTrust < PEER_CHILD_THRESHOLD) )
			{
				dbg(DBG_USR1, "either HPeTI == 255 or no trusted peer\r\n");
				/* If there is either no peer or no trusted peer-parent, so use maxOverall */
				chosenParentTrustIndex = maxOverallTrustIndex;
			}
			else
			{
				dbg(DBG_USR1, "neither HPeTI == 255 nor no trusted peer\r\n");
				/* There is a trusted peer-parent */
				chosenParentTrustIndex = maxParentPeerTrustIndex;
			}
		}
		else
		{
			dbg(DBG_USR1, "neither HPaTI == 255 nor no trusted parent\r\n");
			chosenParentTrustIndex = highestParentTrustIndex;
		}

    #ifdef DEBUG
		dbg(DBG_USR1, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[chosenParentTrustIndex]->node_id, myOneHopNeighbors[chosenParentTrustIndex]->level, myOneHopNeighbors[chosenParentTrustIndex]->trust.overallTrust);
		dbg(DBG_USR2, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[chosenParentTrustIndex]->node_id, myOneHopNeighbors[chosenParentTrustIndex]->level, myOneHopNeighbors[chosenParentTrustIndex]->trust.overallTrust);
    #endif
		return myOneHopNeighbors[chosenParentTrustIndex]->node_id;
	} // end getTransactionParent




}
