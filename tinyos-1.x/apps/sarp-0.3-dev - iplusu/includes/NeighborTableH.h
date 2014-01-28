/*$T indentinput.h GC 1.140 06/02/10 17:23:23 */

/* File: NeighborTableH.h Author: Kenneth Rahn Jr Created: May 9, 2009 */
#ifndef NEIGHBOR_TABLE_H
#define NEIGHBOR_TABLE_H

#define NO_LEVEL		255
#define NO_PARENT		255
#define NO_NEIGHBOR		255
#define MAX_CHILDREN	32

#define TRUST_FP_START	1.0
#define TRUST_GFB_START 100.0
#define TRUST_BFB_START 0.0
#define TRUST_RH_START	1.0
#define TRUST_GRB_START 100.0
#define TRUST_BRB_START 0.0
#define TRUST_AV_START	1.0
#define TRUST_GAB_START 100.0
#define TRUST_BAB_START 0.0
#define TRUST_LP_START	1.0
#define TRUST_GLB_START 100.0
#define TRUST_BLB_START 0.0
#define TRUST_PR_START	1.0
#define TRUST_GPB_START 100.0
#define TRUST_BPB_START 0.0
#define TRUST_OV_START	1.0

#include "Globals.h"

/*
 -----------------------------------------------------------------------------------------------------------------------
    enum { NO_LEVEL = 255, NO_PARENT = 255, NO_NEIGHBOR = 255, MAX_CHILDREN = 32, TRUST_FP_START = 1, TRUST_GFB_START =
    1, TRUST_BFB_START = 0, TRUST_RH_START = 1, TRUST_GRB_START = 1, TRUST_BRB_START = 0, TRUST_AV_START = 1,
    TRUST_GAB_START = 1, TRUST_BAB_START = 0, TRUST_LP_START = 1, TRUST_GLB_START = 1, TRUST_BLB_START = 0,
    TRUST_PR_START = 1, TRUST_GPB_START = 1, TRUST_BPB_START = 0, TRUST_OV_START = 1 //
    GOOD_REPORTING_BEHAVIOR_INCREMENT = 1, // BAD_REPORTING_BEHAVIOR_INCREMENT = 2 };
 -----------------------------------------------------------------------------------------------------------------------
 */
typedef struct Trust_Rec_t
{
	float		trustFP;
	uint32_t	GFB;
	uint32_t	BFB;
	float		trustRH;
	uint32_t	GRB;
	uint32_t	BRB;
	float		trustAV;
	uint32_t	GAB;
	uint32_t	BAB;
	float		trustLP;
	uint32_t	GLB;
	uint32_t	BLB;
	float		trustPR;
	uint32_t	GPB;
	uint32_t	BPB;
	float		overallTrust;
} Trust_Rec_t;

/*
 -----------------------------------------------------------------------------------------------------------------------
    typedef struct Trust_Rec_t { float trustFP;
    float GFB;
    float BFB;
    float trustRH;
    float GRB;
    float BRB;
    float trustAV;
    float GAB;
    float BAB;
    float trustLP;
    float GLB;
    float BLB;
    float trustPR;
    float GPB;
    float BPB;
    float overallTrust;
    } Trust_Rec_t;
 -----------------------------------------------------------------------------------------------------------------------
 */
typedef struct Neighbor_Rec_t
{
	uint16_t	node_id;
	uint8_t		level;
	uint16_t	parent_id;	/* do we have distinct parents or do we dynamically allocate them ? */
} Neighbor_Rec_t;

typedef struct Neighbor_Rec_withTrust_t
{
	uint16_t	node_id;
	uint8_t		level;
	uint16_t	parent_id;
	uint8_t		isOne;
	Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;

typedef struct Neighbor_Msg_Rec_t
{
	uint16_t	node_id;
	uint8_t		level;
} Neighbor_Msg_Rec_t;

/*
 * typedef struct Transaction_Record_t { uint32_t transaction_id;
 * uint16_t originatingNode;
 * uint16_t originatorPacketCount;
 * uint16_t receivedFrom;
 * uint8_t isValid;
 * // this field may go away uint16_t packetsReceived;
 * // if node is originator, this is 0 uint16_t packetsForwarded;
 * // if node is originator, this is packets sent uint16_t packetsForwardedTo;
 * // one hop id uint8_t oneHopReported;
 * uint16_t oneHopReportedPacketsReceived;
 * uint16_t oneHopReportedPacketsForwarded;
 * uint16_t oneHopReportedPacketsForwardedTo;
 * // two hop id uint8_t twoHopReported;
 * uint16_t twoHopReportedPacketsReceived;
 * uint8_t processed;
 * } Transaction_Record_t;
 * typedef struct Check_Transaction_Record_t { uint32_t transaction_id;
 * uint16_t oneTimes;
 * uint16_t twoTimes;
 * } Check_Transaction_Record_t;
 */
uint8_t nLoopCounter;
uint8_t neighborFound, oneHopFound;

/*
 * uint16_t dataIndex, oneDiscIndex, twoDiscIndex;
 * *uint16_t highestParentTrustIndex, highestPeertTrustIndex, highestChildTrustIndex;
 * *uint16_t maxParentPeerTrustIndex, maxOverallTrustIndex, chosenParentTrustIndex;
 */
float	parent_peer_threshold = 0.8;
float	peer_child_threshold = 0.2;
#endif