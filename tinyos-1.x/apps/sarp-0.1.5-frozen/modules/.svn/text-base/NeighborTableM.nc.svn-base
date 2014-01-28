/*
 *  File:       NeighborTableM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 9, 2009
 */


includes AM;
includes Globals;
includes MessagingH;
includes NeighborTableH;

module NeighborTableM{
  provides {
    interface NeighborTable;
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

  /*    We get a node's info and see if it is in the neighbor table.  If not, we add it.
   *    If isOneHop == 1, we check to see if it is in the one-hop table.
   *    If isOneHop != 1, we do nothing more.
   */
  command result_t NeighborTable.processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parentOrOneHop_l, uint16_t *isOneHop)
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
      for (nLoopCounter = 0; nLoopCounter < *numOneHopNeighbors; nLoopCounter ++)
      {
        if (myOneHopNeighbors[nLoopCounter]->node_id  == nodeId_l)
        {
          oneHopFound = 1;
          break;
        }
      }

      /* Check to see if the neighbor is in the general neighbor table. */
      neighborFound = 0;
      for (nLoopCounter = 0; nLoopCounter < *numNeighbors; nLoopCounter ++)
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
            if (neighbors[nLoopCounter].parent_or_oneHop_id != parentOrOneHop_l)
              neighbors[nLoopCounter].parent_or_oneHop_id = parentOrOneHop_l;
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
        neighbors[*numNeighbors].parent_or_oneHop_id = parentOrOneHop_l;
        neighbors[*numNeighbors].isOne = 0;
        neighbors[*numNeighbors].trust.trustFP = TRUST_FP_START;
        neighbors[*numNeighbors].trust.GFB = TRUST_GFB_START;
        neighbors[*numNeighbors].trust.BFB = TRUST_BFB_START;
        neighbors[*numNeighbors].trust.trustRH = TRUST_RH_START;
        neighbors[*numNeighbors].trust.GRB = TRUST_GRB_START;
        neighbors[*numNeighbors].trust.BRB = TRUST_BRB_START;

        /* If it is a one-hop neighbor, add it to that table */
        if (*isOneHop == 1)
        {
          myOneHopNeighbors[*numOneHopNeighbors] = &neighbors[*numNeighbors];
          (*numOneHopNeighbors) ++;
          #ifdef DEBUG
          dbg(DBG_USR1, "Incrementing one-hop neighbors to %d\r\n", *numOneHopNeighbors);
          #endif
          neighbors[*numNeighbors].isOne = 1;
        }
        (*numNeighbors) ++;
        #ifdef DEBUG
        dbg(DBG_USR1, "%d added node %d, level %d\r\n", TOS_LOCAL_ADDRESS, nodeId_l, level_l);
        #endif
      }
      #ifdef DEBUG
      dbg(DBG_USR1, "Done processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
      #endif
    }
    return SUCCESS;
  }


  command result_t NeighborTable.addNeighborsToDiscMsg(Neighbor_Msg_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
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


  command uint16_t NeighborTable.getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l)
  {
    /* figure out and set the transaction parent here */
    highestTrustIndex = 255;
    dbg(DBG_USR1, "num one-hops: %d\r\n", numOneHopNeighbors);
    for (nLoopCounter = 0; nLoopCounter < numOneHopNeighbors; nLoopCounter ++)
    {
      #ifdef DEBUG
      dbg(DBG_USR1, "HTI: %d, DI:%d\r\n", highestTrustIndex, nLoopCounter);
      dbg(DBG_USR1, "%d:%d considered %d:%d as its transaction parent.\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[nLoopCounter]->node_id, myOneHopNeighbors[nLoopCounter]->level);
      dbg(DBG_USR2, "%d:%d considered %d:%d as its transaction parent.\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[nLoopCounter]->node_id, myOneHopNeighbors[nLoopCounter]->level);
      #endif
      if (highestTrustIndex == 255) // still hasn't found a potential transaction parent
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "Highest trust index is 255.\r\n");
        #endif
        if (myOneHopNeighbors[nLoopCounter]->level < myLevel_l)
        {
          #ifdef DEBUG
          dbg(DBG_USR1, "%d:%d REALLY considered %d:%d:%f as its transaction parent.\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[nLoopCounter]->node_id, myOneHopNeighbors[nLoopCounter]->level, myOneHopNeighbors[nLoopCounter]->trust.trustFP);
          dbg(DBG_USR2, "%d:%d REALLY considered %d:%d:%f as its transaction parent.\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[nLoopCounter]->node_id, myOneHopNeighbors[nLoopCounter]->level, myOneHopNeighbors[nLoopCounter]->trust.trustFP);
          #endif
          highestTrustIndex = nLoopCounter;
        }
      }
      else
      {
        #ifdef DEBUG
        dbg(DBG_USR1, "Highest trust index: %d\r\n", highestTrustIndex);
        #endif
        if (myOneHopNeighbors[nLoopCounter]->level < myLevel_l)
        {
          if (myOneHopNeighbors[nLoopCounter]->trust.trustFP > myOneHopNeighbors[highestTrustIndex]->trust.trustFP)
          {
            highestTrustIndex = nLoopCounter;
            #ifdef DEBUG
            dbg(DBG_USR1, "%d:%d TRULY considered %d:%d as its transaction parent.\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[nLoopCounter]->node_id, myOneHopNeighbors[nLoopCounter]->level);
            dbg(DBG_USR2, "%d:%d TRULY considered %d:%d as its transaction parent.\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[nLoopCounter]->node_id, myOneHopNeighbors[nLoopCounter]->level);
            #endif
          }
        }
      }
    }

    /* If we haven't chosen a transaction parent. */
    if (highestTrustIndex == 255)
      return highestTrustIndex;
    else
      dbg(DBG_USR1, "HTI is not 255\r\n");

    #ifdef DEBUG
    dbg(DBG_USR1, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[highestTrustIndex]->node_id, myOneHopNeighbors[highestTrustIndex]->level, myOneHopNeighbors[highestTrustIndex]->trust.trustFP);
    dbg(DBG_USR2, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[highestTrustIndex]->node_id, myOneHopNeighbors[highestTrustIndex]->level, myOneHopNeighbors[highestTrustIndex]->trust.trustFP);
    #endif
    /* TO DO : Parent trust thresholding */
    if (myOneHopNeighbors[highestTrustIndex]->trust.trustFP > 0)
      return myOneHopNeighbors[highestTrustIndex]->node_id;
    else
    {
      /* TO DO : This is where we make another choice */
      return myOneHopNeighbors[highestTrustIndex]->node_id;
      //transactionRecords[transactionCounter].packetsForwardedTo = myOneHopNeighbors[highestTrustIndex].node_id;
    }
  }


}
