/*
 * File:        NeighborTableH.h
 * Author:      Kenneth Rahn Jr
 * Created:     May 9, 2009
 */

#ifndef NEIGHBOR_TABLE_H
#define NEIGHBOR_TABLE_H

#define SWINDOW_SIZE						10
#define SWINDOW_TIME_OUT					(1000*60*60*10)

#include "Globals.h"

enum {
  NO_LEVEL                            = 255,
  NO_PARENT                           = 255,
  NO_NEIGHBOR                         = 255,
  MAX_CHILDREN                        = 32,

  TRUST_GFB_START                     = 0,
  TRUST_BFB_START                     = 0,
  TRUST_GLB_START                     = 0,
  TRUST_BLB_START                     = 0,
};

typedef struct SWindow_t{
	long long int time;
	uint32_t GPB;
	uint32_t BPB;
} SWindow_t;

typedef struct PB_t{
	SWindow_t SWindow[SWINDOW_SIZE];
	uint16_t pointer;
	//uint16_t cnt;
} PB_t;

typedef struct Trust_Rec_t {
  float     trustFP;
  uint32_t  GFB;
  uint32_t  BFB;
  float     trustLP;
  uint32_t  GLB;
  uint32_t  BLB;
  float     trustPR;
  PB_t 		PB;
  float     overallTrust;
} Trust_Rec_t;

typedef struct Neighbor_Rec_t {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_id;  // do we have distinct parents or do we dynamically allocate them ?
} Neighbor_Rec_t;


typedef struct Neighbor_Rec_withTrust_t {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_id;
  uint8_t  isOne;
  Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;

typedef struct Neighbor_Msg_Rec_t {
  uint16_t node_id;
  uint8_t  level;
} Neighbor_Msg_Rec_t;

uint8_t nLoopCounter;
uint8_t neighborFound, oneHopFound;
float parent_peer_threshold = 0.55;
float peer_child_threshold  = 0.2;
#endif


