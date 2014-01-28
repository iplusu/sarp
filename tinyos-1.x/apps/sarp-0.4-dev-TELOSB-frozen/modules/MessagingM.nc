/*
 *  File:       MessagingM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 18, 2009
 */

includes AM;
includes MessagingH;

module MessagingM {
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
	command void Messaging.putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data, uint16_t lastToFindLoop, uint16_t canFixIt, uint16_t dontSendTo, uint16_t sequenceNumberIn)
	{
		atomic
		{
			outQ[*writeHere].addr = dst_node_id;
			outQ[*writeHere].type = DATA_MSG_TYPE;
			dataMsgOut = (DataMsg *) outQ[*writeHere].data;
			dataMsgOut->dst_node_id = dst_node_id;
			dataMsgOut->src_node_id = src_node_id;
			dataMsgOut->orig_node_id = orig_node_id;
			dataMsgOut->sequenceNumber = sequenceNumberIn;
			dataMsgOut->data = data;
			dataMsgOut->transaction_id = transaction_id;
			dataMsgOut->lastToFindLoop = lastToFindLoop;
			dataMsgOut->cantFixIt = canFixIt;
			dataMsgOut->dontSendTo = dontSendTo;

			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putDataMessageInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
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

			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putDiscoveryMsgInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
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

			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putReportRequestMsgInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
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
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putSpecificReportRequestMsgInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
		}
	}

	/*
	 *
	 */
	command void Messaging.putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent, uint16_t myAddr)
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
			
			/* JRT */
			specificReportResponseMsgOut->forwarder = myAddr;

			/* Update Qs and post sending task. */
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putSpecificReportResponseMsgInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
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
			
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putReportResponseNoForwardMsgInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
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
			//dbg(DBG_USR3, "Root received a E2E request for report to %d TID: %d\r\n", originator, transaction_id);
      #endif
			endToEndRepRespMsgOut->responder = responder;
			endToEndRepRespMsgOut->transaction_id = transaction_id;
			outQ[*writeHere].addr = packetsReceivedFrom;
			endToEndRepRespMsgOut->originator = originator;
			endToEndRepRespMsgOut->packetsReceived = packetsReceived;
			endToEndRepRespMsgOut->packetsReceivedFrom = packetsReceivedFrom;

			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "putEndToEndReportResponseMsgInOutQ : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
		}
		//if (responder == 0)
		//  sendSarpThroughput(transaction_id, packetsSent, packetsReceived, originator);
	}


	/*
	 *
	 */
	command void Messaging.putStartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t sender)
	{
    #ifdef DEBUG
		dbg(DBG_USR1, "%d sending a START message\r\n", sender);
    #endif
		atomic
		{
			outQ[*writeHere].addr = TOS_BCAST_ADDR;
			outQ[*writeHere].type = AM_CONTROLMSG;
			controlMsgOut = (ControlMsg *) outQ[*writeHere].data;
			controlMsgOut->msgType = CONTROL_START_TYPE;
	
			/* JRT */
			controlMsgOut->data[0] = 0xAA;
			
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "=putStartMsgInOutQ= : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
		}
	}


	/*
	 *
	 */
	command void Messaging.putNeighborDiscoveryControlMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t whoIAm, uint16_t whoIHeard, uint16_t parent)
	{
    #ifdef DEBUG
		dbg(DBG_USR1, "Sending the fact that %d heard %d to %d\r\n", whoIAm, whoIHeard, parent);
    #endif
		atomic
		{
			outQ[*writeHere].addr = parent;
			outQ[*writeHere].type = AM_CONTROLMSG;
			controlMsgOut = (ControlMsg *) outQ[*writeHere].data;
			controlMsgOut->msgType = CONTROL_NEIGHBOR_DISCOVERY_TYPE;
			controlMsgOut->data[0] = whoIAm;
			controlMsgOut->data[1] = whoIHeard;

			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;

			//dbg(DBG_USR3, "*putNeighborDiscoveryControlMsgInOutQ* : numMsgOutQ : %d writeOutQHere : %d\r\n", *numMsgOutQ, *writeHere);
		}
	}
	
	/* JRT */
	/*
	 *
	 */
	command void Messaging.putDiscMsgInUartQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t sender)
	{
		int counter = 1;
	   	atomic
	    {
	    	outQ[*writeHere].addr = TOS_UART_ADDR;
	      	outQ[*writeHere].type = AM_CONTROLMSG;
	      	controlMsgOut = (ControlMsg *) outQ[*writeHere].data;
	      	controlMsgOut->msgType = CONTROL_DISC_UART_TYPE;
		  	controlMsgOut->data[0] = sender;
		  
	      	for (;counter < 13; counter++) {
	      		controlMsgOut->data[counter] = 0;
	     		controlMsgOut->data[counter] = 0;     	    	
	      	}
	     	    	  
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;
	    }
	  }
  	
	command void Messaging.putTrustDataToUartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors)
	{
	    int counter;
	    atomic
	    {
	    	outQ[*writeHere].type = AM_NEIGHBORSTRUSTMSG;
	    	outQ[*writeHere].addr = TOS_UART_ADDR;
	    	trustDataToUartMsgOut = (NeighborsTrustMsg *) outQ[*writeHere].data;
	    	trustDataToUartMsgOut->numNeighbors = numNeighbors;
		    for (counter = 0; counter < numNeighbors; counter++)
		    {
		    	trustDataToUartMsgOut->node_id[counter] = neighbors[counter].node_id;
		    	trustDataToUartMsgOut->trust_value[counter] = (uint8_t)(100* neighbors[counter].trust.overallTrust);
     	    }
     	    
     	    for (;counter < 10; counter++) {
     	    	trustDataToUartMsgOut->node_id[counter] = 0;
     	    	trustDataToUartMsgOut->trust_value[counter] = 0;     	    	
     	    }
     	    
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;
		}
	}
	
	command void Messaging.putTransactionDataToUartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, Transaction_Record_Ptr thisTransaction)
	{
	    atomic
	    {
	    	outQ[*writeHere].type = AM_TRANSACTIONDATAMSG;
	    	outQ[*writeHere].addr = TOS_UART_ADDR;
	    	transactionDataToUartMsgOut = (TransactionDataMsg *) outQ[*writeHere].data;
	    	transactionDataToUartMsgOut->originatingNodeId = thisTransaction->originatingNode;
	    	transactionDataToUartMsgOut->originatingNodeSent = thisTransaction->packetsForwarded;
			transactionDataToUartMsgOut->oneHopNodeId = thisTransaction->packetsForwardedTo;
			transactionDataToUartMsgOut->twoHopNodeId = thisTransaction->oneHopReportedPacketsForwardedTo;
			transactionDataToUartMsgOut->oneHopSent = thisTransaction->oneHopReportedPacketsForwarded;
     	    transactionDataToUartMsgOut->oneHopReceived = thisTransaction->oneHopReportedPacketsReceived;
     	    transactionDataToUartMsgOut->twoHopReceived = thisTransaction->twoHopReportedPacketsReceived;
     	    transactionDataToUartMsgOut->oneHopReported = thisTransaction->oneHopReported;
     	    transactionDataToUartMsgOut->twoHopReported = thisTransaction->twoHopReported;
     	    
			*writeHere = (*writeHere + 1) % maxQSize;
			*numMsgOutQ = *numMsgOutQ + 1;
		}
	}
	
  	command int Messaging.isMsgForMe(uint16_t myAddr, uint16_t node_id) {
  		/* Determine if we should be listening to this neighbor */
		switch (myAddr) {
			case 0:
				if (node_id > 2)
					return 0;
				break;
			case 1:
			case 2:
				if (node_id == 7) {
					return 0;
				}
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				if (node_id == 0) {
					return 0;
				}
				break;
			case 7:
				if (node_id < 3) {
					return 0;
				}
				break;
			default:
				break;
		}

		return 1;
  	}		
}