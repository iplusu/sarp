/*
 *  File:       MessagingM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 18, 2009
 */

includes AM;
includes MessagingH;

module MessagingM{
  provides {
    interface Messaging;
  }
  uses {
    interface NeighborTable;
  }
}

implementation {

  /*
   *    C
   */
  command void Messaging.putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data)
  {
    atomic
    {
      outQ[*writeHere].addr = dst_node_id;
      outQ[*writeHere].type = DATA_MSG_TYPE;
      dataMsgOut = (DataMsg *) outQ[*writeHere].data;
      dataMsgOut->dst_node_id = dst_node_id;
      dataMsgOut->src_node_id = src_node_id;
      dataMsgOut->orig_node_id = orig_node_id;
      dataMsgOut->data = data;
      dataMsgOut->transaction_id = transaction_id;

      if ( ++(*writeHere) >= maxQSize)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *    C
   */
  command void Messaging.putDiscoveryMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t node_id, uint16_t level, uint16_t parent_id, uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
  {
    atomic
    {
      outQ[*writeHere].addr = TOS_BCAST_ADDR;
      outQ[*writeHere].type = DISCOVERY_MSG_TYPE;
      disc_msg_out = (DiscoveryMsg *) outQ[*writeHere].data;
      disc_msg_out->node_id = node_id;
      disc_msg_out->level = level;
      disc_msg_out->parent_id = parent_id;
      disc_msg_out->num_neighbors = numOneHopNeighbors;
      call NeighborTable.addNeighborsToDiscMsg(disc_msg_out->neighbors, numOneHopNeighbors, myOneHopNeighbors);

      if ( ++(*writeHere) >= maxQSize)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *
   */
  command void Messaging.putReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id)
  {
    dbg(DBG_USR1, "In M.prepreqoutq\r\n");
    atomic
    {
      outQ[*writeHere].addr = destination;
      outQ[*writeHere].type = REPORT_REQUEST_MSG_TYPE;
      reportReqMsgOut = (ReportRequestMsg *) outQ[*writeHere].data;
      #ifdef DEBUG
      dbg(DBG_USR1, "Heard a Report Request message from %d\r\n", requestor);
      #endif
      reportReqMsgOut->requestor = requestor;
      reportReqMsgOut->originator = originator;
      reportReqMsgOut->originatorPacketCount = originatorPacketCount;
      reportReqMsgOut->transaction_id = transaction_id;
      reportReqMsgOut->destination = destination;

      if ( ++(*writeHere) >= maxQSize)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *
   */
  command void Messaging.putSpecificReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t transactionParent, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id)
  {
    atomic
    {
      specificReportReqMsgOut = (SpecificReportRequestMsg *) outQ[*writeHere].data;
      outQ[*writeHere].addr = transactionParent;
      outQ[*writeHere].type = SPECIFIC_REPORT_REQUEST_MSG_TYPE;
      specificReportReqMsgOut->destination            = destination;
      specificReportReqMsgOut->requestor              = requestor;
      specificReportReqMsgOut->originator             = originator;
      specificReportReqMsgOut->originatorPacketCount  = originatorPacketCount;
      specificReportReqMsgOut->transaction_id         = transaction_id;

      /* Update Qs and post sending task. */
      if ( ++(*writeHere) >= maxQSize)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *
   */
  command void Messaging.putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent)
  {
    atomic
    {
      outQ[*writeHere].type = SPECIFIC_REPORT_RESPONSE_MSG_TYPE;
      specificReportResponseMsgOut = (SpecificReportResponseMsg *) outQ[*writeHere].data;
      specificReportResponseMsgOut->responder = responder;
      outQ[*writeHere].addr = transactionParent;
      specificReportResponseMsgOut->originator = originator;
      specificReportResponseMsgOut->transaction_id = transaction_id;
      specificReportResponseMsgOut->packetsReceived = packetsReceived;
      specificReportResponseMsgOut->packetsReceivedFrom = packetsReceivedFrom;
      specificReportResponseMsgOut->packetsForwarded = packetsForwarded;
      specificReportResponseMsgOut->packetsForwardedTo = packetsForwardedTo;

      /* Update Qs and post sending task. */
      if ( ++(*writeHere) >= CIRCULAR_BUFFER_SIZE)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *
   */
  command void Messaging.putReportResponseNoForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t originatingNode)
  {
    atomic
    {
      reportRespForwardMsgOut = (ReportResponseForwardMsg *) outQ[*writeHere].data;
      reportRespForwardMsgOut->responder = responder;
      reportRespForwardMsgOut->transaction_id = transaction_id;
      if (originatingNode == packetsReceivedFrom)
        outQ[*writeHere].type = REPORT_RESPONSE_NO_FORWARD_MSG_TYPE;
      else
        outQ[*writeHere].type = REPORT_RESPONSE_FORWARD_MSG_TYPE;
      outQ[*writeHere].addr = packetsReceivedFrom;
      reportRespForwardMsgOut->packetsReceived     = packetsReceived;
      reportRespForwardMsgOut->packetsReceivedFrom = packetsReceivedFrom;
      reportRespForwardMsgOut->packetsForwarded    = packetsForwarded;
      reportRespForwardMsgOut->packetsForwardedTo  = packetsForwardedTo;
      if ( ++(*writeHere) >= CIRCULAR_BUFFER_SIZE)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *
   */
  command void Messaging.putReportResponseForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo)
  {
  }

  /*
   *
   */
  command void Messaging.putEndToEndReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsSent)
  {
    atomic
    {
      outQ[*writeHere].type = END_TO_END_REPORT_RESPONSE_MSG_TYPE;
      endToEndRepRespMsgOut = (EndToEndReportResponseMsg *) outQ[*writeHere].data;
      #ifdef DEBUG
      dbg(DBG_USR1, "Root received a request for report to %d\r\n", originator);
      #endif
      endToEndRepRespMsgOut->responder = responder;
      endToEndRepRespMsgOut->transaction_id = transaction_id;
      outQ[*writeHere].addr = packetsReceivedFrom;
      endToEndRepRespMsgOut->originator = originator;
      endToEndRepRespMsgOut->packetsReceived = packetsReceived;
      endToEndRepRespMsgOut->packetsReceivedFrom = packetsReceivedFrom;

      if ( ++(*writeHere) >= CIRCULAR_BUFFER_SIZE)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }

  /*
   *
   */
  command void Messaging.putStartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ)
  {
    atomic
    {
      outQ[*writeHere].addr = TOS_BCAST_ADDR;
      outQ[*writeHere].type = START_MSG_TYPE;

      if ( ++(*writeHere) >= maxQSize)
        *writeHere = 0;
      (*numMsgOutQ) ++;
    }
  }


}
