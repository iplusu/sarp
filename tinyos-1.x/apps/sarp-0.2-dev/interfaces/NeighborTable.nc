/*
 * File:        NeighborTable.nc
 * Author:      Kenneth Rahn Jr
 * Created:     May 9, 2009
 */

includes NeighborTableH;

interface NeighborTable
{

  /*
   *    This command is called when a DiscoveryMsg arrives and has that node's one-hop neighbors in it.
   *    If we know about the neighbor already, we simply process it.
   *    If we don't know about the neighbor, we add it.
   */
  command result_t processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parentOrOneHop_l, uint16_t *isOneHop);


  /*
   *    This command adds neighbors to discvoery message.
   */
  command result_t addNeighborsToDiscMsg(Disc_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[]);

  /*
   *    This command returns the one-hop with the lowest level and highest trust value.
   */
  command uint16_t getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t dontPickMe, uint16_t dontPickMeEither, uint16_t reallyDontPickMe, uint16_t whoIAm);

}

