/*
 * File:        NeighborTableH.h
 * Author:      Kenneth Rahn Jr
 * Created:     May 9, 2009
 */

#ifndef NEIGHBOR_TABLE_H
#define NEIGHBOR_TABLE_H

enum {
  NO_LEVEL                            = 255,
  NO_PARENT                           = 255,
  NO_NEIGHBOR                         = 255,
  MAX_CHILDREN                        = 32,
  MAX_NEIGHBORS                       = 50,
  MAX_ONE_HOP_NEIGHBORS               = MAX_NEIGHBORS,
  MAX_OTHER_NEIGHBORS                 = MAX_NEIGHBORS,

  TRUST_FP_START                      = 1,
  TRUST_GFB_START                     = 0,
  TRUST_BFB_START                     = 0,
  TRUST_RH_START                      = 1,
  TRUST_GRB_START                     = 0,
  TRUST_BRB_START                     = 0,
//  GOOD_REPORTING_BEHAVIOR_INCREMENT   = 1,
//  BAD_REPORTING_BEHAVIOR_INCREMENT    = 2

};

typedef struct Trust_Rec_t {
  float     trustFP;
  uint32_t  GFB;
  uint32_t  BFB;
  float     trustRH;
  uint32_t  GRB;
  uint32_t  BRB;
} Trust_Rec_t;

typedef struct Neighbor_Rec_t {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_id;  // do we have distinct parents or do we dynamically allocate them ?
} Neighbor_Rec_t;


typedef struct Neighbor_Rec_withTrust_t {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_or_oneHop_id;  // Parent for one-hop neighbors, or one_hop for other neighbors
  uint8_t  isOne;
  Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;

typedef struct Neighbor_Msg_Rec_t {
  uint16_t node_id;
  uint8_t  level;
} Neighbor_Msg_Rec_t;

/*
typedef struct Transaction_Record_t {
  uint32_t transaction_id;
  uint16_t originatingNode;
  uint16_t originatorPacketCount;
  uint16_t receivedFrom;
  uint8_t  isValid;         // this field may go away
  uint16_t packetsReceived;  // if node is originator, this is 0
  uint16_t packetsForwarded; // if node is originator, this is packets sent
  uint16_t packetsForwardedTo;  // one hop id
  uint8_t  oneHopReported;
  uint16_t oneHopReportedPacketsReceived;
  uint16_t oneHopReportedPacketsForwarded;
  uint16_t oneHopReportedPacketsForwardedTo;  // two hop id
  uint8_t  twoHopReported;
  uint16_t twoHopReportedPacketsReceived;
  uint8_t  processed;
} Transaction_Record_t;

typedef struct Check_Transaction_Record_t {
  uint32_t transaction_id;
  uint16_t oneTimes;
  uint16_t twoTimes;
} Check_Transaction_Record_t;

*/

uint8_t nLoopCounter;
uint8_t neighborFound, oneHopFound;

#endif

