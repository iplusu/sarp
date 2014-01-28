/*
 *  File:       Messaging.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 18, 2009
 */

//includes MessagingH;

interface Messaging
{
  /*
   *    C
   */
  command void putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data);

  /*
   *    C
   */
  command void putDiscoveryMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t node_id, uint16_t level, uint16_t parent_id, uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[]);

  /*
   *
   */
  command void putReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id);

  /*
   *
   */
  command void putSpecificReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t transactionParent, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id);

  /*
   *
   */
  command void putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent);

  /*
   *
   */
  command void putReportResponseNoForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t originatingNode);

  /*
   *
   */
  command void putReportResponseForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo);

  /*
   *
   */
  command void putEndToEndReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsSent);

  /*
   *
   */
  command void putStartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ);


}
