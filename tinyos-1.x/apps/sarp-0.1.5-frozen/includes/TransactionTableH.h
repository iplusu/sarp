/*
 *  File:       TransactionTableH.h
 *  Author:     Kenneth Rahn Jr
 */

#ifndef TRANSACTION_TABLE_H
#define TRANSACTION_TABLE_H

#define MAX_REPORT_TRIES                    20
#define MAX_TRANSACTIONS                CIRCULAR_BUFFER_SIZE

enum {
  GOOD_REPORTING_BEHAVIOR_INCREMENT   = 1,
  BAD_REPORTING_BEHAVIOR_INCREMENT    = 2,
  REPORT_TIMEOUT_PENALTY              = 5,

};

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


typedef Transaction_Record_t *Transaction_Record_Ptr;

typedef struct Check_Transaction_Record_t {
  Transaction_Record_Ptr transactionPtr;
  uint16_t oneTimes;
  uint16_t twoTimes;
} Check_Transaction_Record_t;


uint8_t tLoopCounter, tnLoopCounter;

#endif


