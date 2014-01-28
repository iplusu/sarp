/*$T indentinput.h GC 1.140 09/21/10 13:08:27 */

/* File: TransactionTableH.h Author: Kenneth Rahn Jr */
#ifndef TRANSACTION_TABLE_H
#define TRANSACTION_TABLE_H

#define MAX_REPORT_TRIES    5
#define MAX_TRANSACTIONS    CIRCULAR_BUFFER_SIZE

#define FORGETTING_FACTOR	 1.05

#include "Globals.h"

enum
{
    GOOD_REPORTING_BEHAVIOR_INCREMENT   = 1,
    BAD_REPORTING_BEHAVIOR_INCREMENT    = 2,
    GOOD_AVAILABILITY_BEHAVIOR_INCREMENT= 1,
    BAD_AVAILABILITY_BEHAVIOR_INCREMENT = 2,
    MAX_NUMBER_OTHER_POSSIBLE_PARENTS   = 10
};

uint16_t one_gfb_inc = 0;
uint16_t one_bfb_inc = 0;
uint16_t one_glb_inc = 0;
uint16_t one_blb_inc = 0;
uint16_t two_gfb_inc = 0;
uint16_t two_bfb_inc = 0;
uint16_t two_glb_inc = 0;
uint16_t two_blb_inc = 0;

typedef struct Transaction_Record_t
{
    uint32_t    transaction_id;
    uint16_t    originatingNode;
    uint16_t    originatorPacketCount;
    uint16_t    receivedFrom;
    uint16_t    sequenceNumber;
    uint8_t     isValid;            /* this field may go away */
    uint16_t    packetsReceived;    /* if node is originator, this is 0 */
    uint16_t    packetsForwarded;   /* if node is originator, this is packets sent */
    uint16_t    packetsForwardedTo; /* one hop id */
    uint16_t    originalPacketsForwardedTo;         /* one hop id */
    uint8_t     oneHopReported;
    uint16_t    oneHopReportedPacketsReceived;
    uint16_t    oneHopReportedPacketsForwarded;
    uint16_t    oneHopReportedPacketsForwardedTo;   /* two hop id */
    uint8_t     twoHopReported;
    uint16_t    twoHopReportedPacketsReceived;
    uint8_t     processed;
    uint16_t    isALoop;
    uint16_t    lastParentTried;
    uint16_t    numberPossibleOtherParents;
    uint16_t    numberPossibleOtherParentsTried;
    uint16_t    possibleOtherParents[MAX_NUMBER_OTHER_POSSIBLE_PARENTS];
} Transaction_Record_t;

typedef Transaction_Record_t    *Transaction_Record_Ptr;

typedef struct Check_Transaction_Record_t
{
    Transaction_Record_Ptr  transactionPtr;
    uint16_t                oneTimes;
    uint16_t                twoTimes;
} Check_Transaction_Record_t;

uint8_t tLoopCounter, tnLoopCounter, tnForgettingCnt = 0;
int8_t  tIndex;
#endif
