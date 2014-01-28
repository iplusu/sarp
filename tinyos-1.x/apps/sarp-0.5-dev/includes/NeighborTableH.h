/*$T indentinput.h GC 1.140 09/21/10 13:08:20 */

/* File: NeighborTableH.h Author: Kenneth Rahn Jr Created: May 9, 2009 */
#ifndef NEIGHBOR_TABLE_H
#define NEIGHBOR_TABLE_H

#ifdef PREDICTABILITY
#define GPB_SWINDOW_SIZE			5//10
#define BPB_SWINDOW_SIZE			65//(GPB_SWINDOW_SIZE * 3)
#define SWINDOW_TIMEOUT		(uint32_t)(1000ul * 60ul * 60ul * 6ul)
#endif
#include "Globals.h"

enum
{
    NO_LEVEL        = 255,
    NO_PARENT       = 255,
    NO_NEIGHBOR     = 255,
    MAX_CHILDREN    = 32,
    TRUST_GFB_START = 1,
    TRUST_BFB_START = 0,
    TRUST_GLB_START = 1,
    TRUST_BLB_START = 0,
};

#ifdef PREDICTABILITY
/*typedef struct Good_SWindow_t
{
    uint32_t		time;
	uint8_t			Good;
    uint8_t			Bad;
} Good_SWindow_t;*/

typedef struct _SWindow//Bad_SWindow_t
{
    uint32_t		time;
    uint8_t			Good;
	uint8_t			Bad;
} SWindow_t;//Bad_SWindow_t;

typedef struct GPB_t
{
    //Good_SWindow_t	Good_SWindow[GPB_SWINDOW_SIZE];
    //Bad_SWindow_t		Good_SWindow[BPB_SWINDOW_SIZE];
    SWindow_t		Good_SWindow[GPB_SWINDOW_SIZE];
    uint8_t			pointer;
} GPB_t;

typedef struct BPB_t
{
    SWindow_t		Bad_SWindow[BPB_SWINDOW_SIZE];
    uint16_t 		pointer;
} BPB_t;

#endif
typedef struct Trust_Rec_t
{
    float       trustFP;
    float	    GFB;
    float	    BFB;
    float       trustLP;
    uint32_t    GLB;
    uint32_t    BLB;
#ifdef PREDICTABILITY
    float       trustPR;
    GPB_t        GPB;
    BPB_t        BPB;
#endif
    float       overallTrust;
} Trust_Rec_t;

typedef struct Neighbor_Rec_t
{
    uint16_t    node_id;
    uint8_t     level;
    uint16_t    parent_id;  /* do we have distinct parents or do we dynamically allocate them ? */
} Neighbor_Rec_t;

typedef struct Neighbor_Rec_withTrust_t
{
    uint16_t    node_id;
    uint8_t     level;
    uint16_t    parent_id;
    uint8_t     isOne;
    Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;

typedef struct Neighbor_Msg_Rec_t
{
    uint16_t    node_id;
    uint8_t     level;
} Neighbor_Msg_Rec_t;

uint8_t nLoopCounter;
uint8_t neighborFound, oneHopFound;
#ifdef PREDICTABILITY
float   parent_peer_threshold = 0.4;
//float   parent_peer_threshold = 0.71;
#else
float   parent_peer_threshold = 0.75;
#endif
float   peer_child_threshold = 0.2;
#endif
