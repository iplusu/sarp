#ifndef __MESSAGING__
#define __MESSAGING__

#include "NeighborTableH.h"

//#define MAX_ONE_HOP_NEIGHBORS       100
//#define MAX_OTHER_NEIGHBORS         100

#define MAX_ONE_HOP_NEIGHBORS_MSG   5
#define MAX_TREE_DEPTH  20

enum {
  ROOT      = 0,
  INNER     = 1,
  LEAF      = 2,
  NO_TYPE   = 3
};

enum {
  DISCOVERY_MSG_TYPE        = 20,
  START_MSG_TYPE            = 21,
  READY_MSG_TYPE            = 22,
  READY_ACK_MSG_TYPE        = 23,
  DATA_MSG_TYPE             = 24,
  REPORT_MSG_TYPE           = 25,
  REPORT_REQUEST_MSG_TYPE   = 26,
  REPORT_RESPONSE_NO_FORWARD_MSG_TYPE   = 27,
  REPORT_RESPONSE_FORWARD_MSG_TYPE   = 28,
  END_TO_END_REPORT_RESPONSE_MSG_TYPE   = 29,
  SPECIFIC_REPORT_REQUEST_MSG_TYPE   = 30,
  SPECIFIC_REPORT_RESPONSE_MSG_TYPE   = 31
};


typedef struct DiscoveryMsg {
  uint16_t node_id;
  uint16_t level;
  uint16_t parent_id;
  uint16_t num_neighbors;
  Neighbor_Msg_Rec_t neighbors[MAX_ONE_HOP_NEIGHBORS_MSG];
} DiscoveryMsg;


typedef struct ReadyMsg {
    uint16_t node_id;
    uint16_t dest;
    uint16_t parent;
    uint8_t num_children;
} __attribute__((packed)) ReadyMsg;


typedef struct DataMsg {
    uint16_t dst_node_id;       // the next hop
    uint16_t src_node_id;       // the forwarding node
    uint32_t transaction_id;
    uint16_t orig_node_id;      // originating node
    uint16_t data;
} __attribute__((packed)) DataMsg;


typedef struct ReportRequestMsg {
  uint16_t destination;         // for the next hop
  uint16_t requestor;           // for the next hop
  uint16_t originator;
  uint16_t originatorPacketCount;
  uint32_t transaction_id;
} __attribute__((packed)) ReportRequestMsg;


typedef struct SpecificReportRequestMsg {
  uint16_t destination;         // this is who we want the report from
  uint16_t requestor;           // this is who we are
  uint16_t originator;          // not of the transaction, but the request
  uint16_t originatorPacketCount;
  uint32_t transaction_id;
} __attribute__((packed)) SpecificReportRequestMsg;


typedef struct SpecificReportResponseMsg {
  uint16_t responder;
  uint16_t originator;          // not of the transaction, but the request
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} __attribute__((packed)) SpecificReportResponseMsg;


typedef struct ReportResponseNoForwardMsg {
  uint16_t responder;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} __attribute__((packed)) ReportResponseNoForwardMsg;


typedef struct ReportResponseForwardMsg {
  uint16_t responder;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} __attribute__((packed)) ReportResponseForwardMsg;


typedef struct EndToEndReportResponseMsg {
  uint16_t responder;
  uint16_t originator;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
} __attribute__((packed)) EndToEndReportResponseMsg;


typedef struct BaseReportRequestMsg {
  uint16_t requestor;
  uint16_t segment_id;
  uint8_t  hopsRemaining;
  uint16_t route[MAX_TREE_DEPTH];
} __attribute__((packed)) BaseReportRequestMsg;


typedef struct BaseReportResponseMsg {
  uint16_t responder;
  uint16_t segment_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
} __attribute__((packed)) BaseReportResponseMsg;


typedef struct StartMsg {
    uint16_t node_id;
} StartMsg;

DataMsg *dataMsgOut;
DiscoveryMsg *disc_msg_out;
ReportRequestMsg *reportReqMsgOut;
SpecificReportRequestMsg *specificReportReqMsgOut;
SpecificReportResponseMsg *specificReportResponseMsgOut;
ReportResponseNoForwardMsg *reportRespNoForwardMsgOut;
ReportResponseForwardMsg *reportRespForwardMsgOut;
EndToEndReportResponseMsg *endToEndRepRespMsgOut;

#endif
