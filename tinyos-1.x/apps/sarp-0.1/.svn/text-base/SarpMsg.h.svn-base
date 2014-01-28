//#define MAX_ONE_HOP_NEIGHBORS       100
//#define MAX_OTHER_NEIGHBORS         100

#define MAX_ONE_HOP_NEIGHBORS_MSG   7
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


typedef struct Trust_Rec_t {
  float     trustFP;
  uint32_t  GFB;
  uint32_t  BFB;
  float     trustRH;
  uint32_t  GRB;
  uint32_t  BRB;
} Trust_Rec_t;

/*
typedef struct data {
  uint8_t segment_id;
  uint8_t data;
}
*/
typedef struct Neighbor_Rec_t {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_id;  // do we have distinct parents or do we dynamically allocate them ?
} Neighbor_Rec_t;



/* INTERNAL */
typedef struct Neighbor_Rec_withTrust_t {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_id;  // TO DO: do we have distinct parents or do we dynamically allocate them ?
  Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;

typedef struct Other_Neighbor_Rec_withTrust_t {
  uint16_t node_id;
  uint16_t one_hop_id; // TO DO: what if more than one-hop nodes have this as a one-hop neighbor ?
  uint8_t  level;
  Trust_Rec_t trust;
} Other_Neighbor_Rec_withTrust_t;


/* EXTERNAL, FOR USE WITH DISCVOERY MESSAGES */
typedef struct Neighbor_Msg_Rec_t {
  uint16_t node_id;
  uint8_t  level;
} __attribute__((packed)) Neighbor_Msg_Rec_t;

typedef struct DiscoveryMsg {
  uint16_t node_id;
  uint8_t  level;
  uint16_t parent_id;
  uint8_t  num_neighbors;
  Neighbor_Msg_Rec_t neighbors[MAX_ONE_HOP_NEIGHBORS_MSG];
} __attribute__((packed)) DiscoveryMsg;


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


typedef struct Check_Transaction_Record_t {
  uint32_t transaction_id;
  uint16_t oneTimes;
  uint16_t twoTimes;
} __attribute__((packed)) Check_Transaction_Record_t;

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

typedef struct StartMsg {
    uint16_t node_id;
} StartMsg;


