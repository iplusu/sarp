/*                                                                      tab:4
 *  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.  By
 *  downloading, copying, installing or using the software you agree to
 *  this license.  If you do not agree to this license, do not download,
 *
 */
/*                                                                      tab:4
 * "Copyright (c) 2000-2003 The Regents of the University  of California.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 */
/*                                                                      tab:4
 * Copyright (c) 2003 Intel Corporation
 * All rights reserved Contributions to the above software program by Intel
 * Corporation is program is licensed subject to the BSD License, available at
 * http://www.opensource.org/licenses/bsd-license.html
 *
 */
/*
 * Authors:     York Liu
 *
 */

/*
   TODO: Update CommandUse.invokeMsg and EventUse.singal after
         TOS update interface
 */

#if TINYDBSHIM_JITTER
#ifndef TINYDBSHIM_JITTER_FACTOR
#define TINYDBSHIM_JITTER_FACTOR 8	/* Jitter from 0 to 0.8 sec */
#endif
#endif

module TinyDBShimM {
   provides {
      interface Network;
      interface StdControl;
      interface NetworkMonitor;
#ifdef HSN_ROUTING
      event uint16_t getAdjuvantValue();
#endif
   }
   uses {

#ifdef TRACE_ROUTE
      interface StdControl as TRControl;
#endif
      interface StdControl as SettingsControl;
      interface Send as SendDataMsg;
      interface SendMsg as SendQueryMsg;
      interface Payload as SingleHopPayload;
      
      interface Receive as RcvDataMsg;
      interface ReceiveMsg as RcvQueryMsg;
      interface Receive as RcvQueryFloodMsg;

//#if SINK_NODE
      interface BareSendMsg as SendDataUART;
      interface Send as SendQueryFloodMsg;
      interface ReceiveMsg as RcvQueryFloodUART;
      interface StdControl as UARTNoCRCPacketCommControl;

      //interface ReceiveMsg as RcvDataBroadcastUART;
      interface SendMsg as SendDataBroadcastMsg;
#ifdef HSN_ROUTING // FIXME: Abandon after UART_Gateway done
      interface ReceiveMsg as RcvSettingsUART;
      interface SendMsg as SendSettingsMsg;
#endif
#ifdef kSTATUS
      interface BareSendMsg as SendStatusUART;
      interface ReceiveMsg as RcvStatusUART;
      interface QueryProcessor;
#endif
#ifdef kSUPPORTS_EVENTS
      interface ReceiveMsg as RcvEventFloodUART;
      interface Send as SendEventFloodMsg;
#endif
      interface ReceiveMsg as RcvCommandFloodUART;
      interface Send as SendCommandFloodMsg;
//#endif

      interface ReceiveMsg as RcvDataBroadcastMsg;

      interface Receive as RcvCommandFloodMsg;
      interface CommandUse;

#ifdef kSUPPORTS_EVENTS
      interface Receive as RcvEventFloodMsg;
      interface EventUse;
#endif

#ifdef kQUERY_SHARING
      interface SendMsg as SendQueryRequest;
      interface ReceiveMsg as RcvQueryRequest; 
#endif

      interface Intercept as InterceptDataMsg;
      interface Intercept as SnoopedDataMsg;

      interface StdControl as MultiHopControl;
      interface StdControl as FloodControl;

      interface MultiHopMsg;
      interface SingleHopMsg;
      interface Router;
      interface Leds;
#if TINYDBSHIM_JITTER
      interface Random;
      interface Timer;
#endif

      interface HSNValue;
#ifdef HSN_ROUTING
      command bool isAdjuvantNode();
#endif
   }
}

implementation {

//#if SINK_NODE
   TOS_Msg mDbg, mCmd; // mDb stores status, mCmd stores Command after Flood
   enum { FLOOD_QUERY, FLOOD_COMMAND, FLOOD_EVENT };
   int8_t flood_type;

   bool uart_pending;
   bool send_flood_pending; //, send_broadcast_pending;
   TOS_Msg forward_msg, broadcast_msg;
   TOS_MsgPtr pforward_msg, pbroadcast_msg;

#ifdef HSN_ROUTING // FIXME: Abandon after UART_Gateway done
   bool send_settings_pending;
   TOS_Msg settings_msg;
   TOS_MsgPtr psettings_msg;
#endif

//#endif
  
#if TINYDBSHIM_JITTER
   bool send_datamsg_pending;
   uint8_t send_datamsg_interval;
   TOS_Msg data_msg;
   TOS_MsgPtr pdata_msg;
#endif

   command result_t StdControl.init() {
//#if SINK_NODE
      pforward_msg = &forward_msg;
      pbroadcast_msg = &broadcast_msg;
#ifdef HSN_ROUTING // FIXME: Abandon after UART_Gateway done
      psettings_msg = &settings_msg;
#endif
      uart_pending = FALSE;
      send_flood_pending = FALSE;
      //send_broadcast_pending = FALSE;
#ifdef HSN_ROUTING // FIXME: Abandon after UART_Gateway done
      send_settings_pending = FALSE;
#endif
      if (TOS_LOCAL_ADDRESS == 0)
         call UARTNoCRCPacketCommControl.init();
//#endif
      call FloodControl.init();
      call SettingsControl.init();
#ifdef TRACE_ROUTE
      call TRControl.init();
#endif
#if TINYDBSHIM_JITTER
      call Random.init();
      send_datamsg_pending = FALSE;
      send_datamsg_interval = 0;
      pdata_msg = &data_msg;
#endif
      return call MultiHopControl.init();
   }

   command result_t StdControl.start() {
      call FloodControl.start();
      if (TOS_LOCAL_ADDRESS == 0) 
         call UARTNoCRCPacketCommControl.start();
      call SettingsControl.start();
#ifdef TRACE_ROUTE
      call TRControl.start();
#endif
#if TINYDBSHIM_JITTER
      call Timer.start(TIMER_REPEAT, CLOCK_SCALE/10);	/* 10 per sec */
#endif
      return call MultiHopControl.start();
   }

   command result_t StdControl.stop() {
      call SettingsControl.stop();
      call FloodControl.stop();
//#if SINK_NODE
      if (TOS_LOCAL_ADDRESS == 0)
         call UARTNoCRCPacketCommControl.stop();
//#endif
#ifdef TRACE_ROUTE
      call TRControl.stop();
#endif
#if TINYDBSHIM_JITTER
      call Timer.stop();
#endif
      return call MultiHopControl.stop();
   }

#ifdef HSN_ROUTING
   /* ------ getAdjuvantValue ------ */
   event uint16_t getAdjuvantValue() {
      return call HSNValue.getAdjuvantValue();
   }
#endif

   /* ------ HSNValue ------ */

   /* Trigger the route update when a new query arrived in TinyDB,
      To allow SoI to use the up-to-date HSNValue. Both SoI & Quality */
   event void HSNValue.adjuvantValueReset() {
      call Router.triggerRouteAdvertisement();
      return;
   }

   /* ------ Data Message ------ */
   command QueryResultPtr Network.getDataPayLoad(TOS_MsgPtr msg) {
//#if SINK_NODE
      if (TOS_LOCAL_ADDRESS == 0) {
         /* SINK node send the data to UART only */
         return (QueryResultPtr)msg->data;
      } else {
//#else
         uint16_t len;
         return (QueryResultPtr)
              (call SendDataMsg.getBuffer(msg, (uint16_t *)&len));
      }
//#endif
   }

#if TINYDBSHIM_JITTER
   event result_t Timer.fired() {
      uint16_t len;
      if (!send_datamsg_pending) return SUCCESS; 
      if (send_datamsg_interval > 0) {
         send_datamsg_interval--;
         return SUCCESS;
      }
      call SendDataMsg.getBuffer(pdata_msg, (uint16_t *)&len);
      if (call SendDataMsg.send(pdata_msg, len) == SUCCESS) {
         //return err_NoError;
	 return SUCCESS;
      } else {
         dbg(DBG_TEMP, ("Calling SendDataMsg Failed\n"));
         //return err_MessageSendFailed;
         send_datamsg_pending = FALSE;
	 return FAIL;
      }
   }
#endif
   
   command TinyDBError Network.sendDataMessage(TOS_MsgPtr msg) {
//#if SINK_NODE
      if (TOS_LOCAL_ADDRESS == 0) {
         if (uart_pending) {
            dbg(DBG_TEMP, ("SendDataUART pending\n"));
            return err_MessageSendFailed;
         } 
         if (call SendDataUART.send(msg) == SUCCESS) {
            uart_pending = TRUE;
            return err_NoError;
         } else {
            dbg(DBG_TEMP, ("SendDataUART Failure\n"));
            return err_MessageSendFailed;
         }
      } else {
//#else
#if TINYDBSHIM_JITTER
      if (send_datamsg_pending == FALSE) {
         send_datamsg_interval = (TINYDBSHIM_JITTER_FACTOR == 0)?0:
               ((call Random.rand() & 0xff)  % TINYDBSHIM_JITTER_FACTOR) + 1;
         pdata_msg = msg;
         send_datamsg_pending = TRUE;
         return err_NoError;
      } else {
         return err_MessageSendFailed;
      }
#else
      uint16_t len;
      call SendDataMsg.getBuffer(msg, (uint16_t *)&len);
      if (call SendDataMsg.send(msg, len) == SUCCESS) {
         return err_NoError;
      } else {
         dbg(DBG_TEMP, ("Calling SendDataMsg Failed\n"));
         return err_MessageSendFailed;
      }
#endif
      }
//#endif
   }

   command TinyDBError Network.sendDataMessageTo(TOS_MsgPtr msg, uint16_t to) {
      // TODO: Figure out the logic, from Sam, used by Root to send out beacon
//      return call Network.sendDataMessage(msg);
      return err_MessageSendFailed;
   }

   default event result_t Network.sendDataDone
                          (TOS_MsgPtr msg, result_t success) {
      return SUCCESS;
   }

   event result_t SendDataMsg.sendDone(TOS_MsgPtr msg, result_t success) {
      if (success == FAIL)
         dbg(DBG_TEMP, ("SendDataMsg.sendDone signals Failure\n"));
      signal Network.sendDataDone(msg, success);
#if TINYDBSHIM_JITTER
      send_datamsg_pending = FALSE;
#endif
      return SUCCESS;
   }

//#if SINK_NODE
   event result_t SendDataUART.sendDone(TOS_MsgPtr msg, result_t success) {
      if (success == FAIL)
         dbg(DBG_TEMP, ("SendDataUART.sendDone signals Failure\n"));
      uart_pending = FALSE;
      signal Network.sendDataDone(msg, success);
      return SUCCESS;
   }
//#endif

#ifdef kQUERY_SHARING
   /* ------ QueryRequest Message ------ */
   command QueryRequestMessagePtr Network.getQueryRequestPayLoad
                                  (TOS_MsgPtr msg) {
      QueryRequestMessagePtr qr_ptr;
      call SingleHopPayload.linkPayload(msg, (uint8_t **) &qr_ptr);
      return qr_ptr;
   }

   command TinyDBError Network.sendQueryRequest(TOS_MsgPtr msg, uint16_t to) {
      QueryRequestMessagePtr qr_ptr;
      uint16_t len = (uint16_t)call SingleHopPayload.linkPayload(msg, (uint8_t **) &qr_ptr);
      if (call SendQueryRequest.send(to, len, msg) == SUCCESS) {
         return err_NoError;
      } else {
         return err_MessageSendFailed;
      }
   }

   default event result_t Network.sendQueryRequestDone
                          (TOS_MsgPtr msg, result_t success) {
      return SUCCESS;
   }

   event result_t SendQueryRequest.sendDone(TOS_MsgPtr msg, result_t success) {
      signal Network.sendQueryRequestDone(msg, success);
      return SUCCESS;
   }
#endif

   /* ------ Query Message ------ */
   command QueryMessagePtr Network.getQueryPayLoad(TOS_MsgPtr msg) {
      QueryMessagePtr q_ptr;
      call SingleHopPayload.linkPayload(msg, (uint8_t **) &q_ptr);
      return q_ptr;
   }

   /* Mote responses for query request, or forward the query */
   command TinyDBError Network.sendQueryMessage(TOS_MsgPtr msg) {
      QueryMessagePtr q_ptr;
      uint16_t len = (uint16_t)call SingleHopPayload.linkPayload(msg, (uint8_t **) &q_ptr);
      /* Single Hop Broadcast */
      if (call SendQueryMsg.send(TOS_BCAST_ADDR, len, msg) == SUCCESS) {
         return err_NoError;
      } else {
         return err_MessageSendFailed;
      }
   }

   default event result_t Network.sendQueryDone
                          (TOS_MsgPtr msg, result_t success) {
      return SUCCESS;
   }

   event result_t SendQueryMsg.sendDone(TOS_MsgPtr msg, result_t success) {
      signal Network.sendQueryDone(msg, success);
      return SUCCESS;
   }

   /* ------ dataSub Event ------ */
   default event result_t Network.dataSub(QueryResultPtr qresMsg) {
      return SUCCESS;
   }

   event TOS_MsgPtr RcvDataMsg.receive
                         (TOS_MsgPtr msg, void *payload, uint16_t len) {
      //wsnAddr shop_src = call SingleHopMsg.getSrcAddress(msg);
      //wsnAddr mhop_src = call MultiHopMsg.getSource(msg);
      //dbg(DBG_TEMP, "Signal dataSub from Receive - S.src:%d M.src:%d\n",
      //     shop_src, mhop_src);
      signal Network.dataSub((QueryResultPtr)payload);
      return msg;
   }

   event result_t InterceptDataMsg.intercept
                         (TOS_MsgPtr msg, void *payload, uint16_t len) {
      /* In DSDV it intercepts every packet even though its the final
         destination. Filter out the packet which is the final and 
         give a SUCCESS return to let the DSDV signal the Receive to
         RcvDataMsg.receive */
      if (call MultiHopMsg.getDest(msg) == (wsnAddr)TOS_LOCAL_ADDRESS) {
         return SUCCESS;
      }
      /* ONLY signal to TinyDB if it is a specialized node. We only do
         query processor on the specialized node, the TinyDB anyway
         re-create a new packet and never forward it */
#ifdef HSN_ROUTING
      if (call isAdjuvantNode()) {
         signal Network.dataSub((QueryResultPtr)payload);
         return FAIL;
      } else {
         return SUCCESS;
      }
#else
      /* This is strange, TinyDB doen't want the network layer to forward
         the intercept packet (I'm the middle node), which is fine but
         it should return FAIL instead of assuming network layer knows */
      signal Network.dataSub((QueryResultPtr)payload);
      return FAIL;
#endif   // HSN_ROUTING
   }

   /* Receive |TOS|DATA| from UART, do single hop broadcast to direct neighbors
      neighbor receive it then just signal the dataSub */

//#if SINK_NODE
#if 0
   task void handle_broadcast_task() {

      uint8_t len;
      uint8_t *payload;
      uint8_t *pdata;

      pdata = pbroadcast_msg->data;

      if (!send_broadcast_pending) return;

      /* Convert the data from UART from |TOS_Hdr|TinyDBmsg| to
         |TOS_Hdr|SingleHopHdr|TinyDBMsg|. */
      len = call SingleHopPayload.linkPayload(pbroadcast_msg, (uint8_t **) &payload);

      memmove(payload, pdata, len);

      if (call SendDataBroadcastMsg.send(TOS_BCAST_ADDR, len, pbroadcast_msg) != SUCCESS)
         send_broadcast_pending = FALSE;
      return;
   }

   TOS_MsgPtr handle_broadcast(TOS_MsgPtr msg) {
      TOS_MsgPtr retmsg = msg;

      if (send_broadcast_pending) {
         dbg(DBG_ROUTE, ("Drop since singlehop broadcast is pending\n"));
      } else {
         if (post handle_broadcast_task()) {
            send_broadcast_pending = TRUE;
            retmsg = pbroadcast_msg;
            pbroadcast_msg = msg;
         }
      }
      return retmsg;
   }

   event TOS_MsgPtr RcvDataBroadcastUART.receive(TOS_MsgPtr msg) {
      return handle_broadcast(msg);
   }
#endif

   event result_t SendDataBroadcastMsg.sendDone(TOS_MsgPtr msg, result_t success) {
      // Shall we notify the upper layer by singal snoopedSub here? Not for now!
      // Sink sync time stamp with child
      signal Network.sendDataDone(msg, success);
      return SUCCESS;
   }

#ifdef HSN_ROUTING // FIXME: Abandon after UART_Gateway done
   task void handle_settings_task() {
      if (! send_settings_pending) {
         return;
      }

      if (! call SendSettingsMsg.send
         (psettings_msg->addr, psettings_msg->length, psettings_msg)) {
         send_settings_pending = FALSE;
      }
   }
   
   event TOS_MsgPtr RcvSettingsUART.receive(TOS_MsgPtr incoming) {
      TOS_MsgPtr retmsg = incoming;

      if (!send_settings_pending) {
         if (post handle_settings_task()) {
            retmsg = psettings_msg;
            psettings_msg = incoming;
            send_settings_pending = TRUE;
         }
      }
      return retmsg;
   }

   event result_t SendSettingsMsg.sendDone(TOS_MsgPtr sent, result_t success) {
      if (psettings_msg == sent) {
         send_settings_pending = FALSE;
      }
      return SUCCESS;
   }
#endif // HSN_ROUTING

//#endif

   /* ------ querySub Event ------ */
   default event result_t Network.querySub(QueryMessagePtr qMsg) {
      return SUCCESS;
   }

   event TOS_MsgPtr RcvQueryMsg.receive(TOS_MsgPtr msg) {
      QueryMessagePtr q_ptr;
      call SingleHopPayload.linkPayload(msg, (uint8_t **) &q_ptr);
      signal Network.querySub(q_ptr);
      return msg;
   }

   event TOS_MsgPtr RcvQueryFloodMsg.receive
                         (TOS_MsgPtr msg, void *payload, uint16_t len) {
      signal Network.querySub((QueryMessagePtr)payload);
      return msg;
   }

//#if SINK_NODE      
   task void handle_flood_task() {

      uint16_t len;
      uint8_t *payload;
      uint8_t *pdata;

      pdata  = pforward_msg->data;

      if (!send_flood_pending) return;

      /* Convert the data from UART from |TOS_Hdr|TinyDBmsg| to
         |TOS_Hdr|FloodHdr|TinyDBMsg|. Use SendCommandFloodMsg for all types */
      payload = (uint8_t *)call SendCommandFloodMsg.getBuffer
                                                    (pforward_msg, &len);

      memmove(payload, pdata, len);

      switch (flood_type) {
      case FLOOD_QUERY:
         if (call SendQueryFloodMsg.send(pforward_msg, len) != SUCCESS)
            send_flood_pending = FALSE;
         break;
      case FLOOD_COMMAND:
         if (call SendCommandFloodMsg.send(pforward_msg, len) != SUCCESS)
            send_flood_pending = FALSE;
         mCmd = *pforward_msg; // save off command for later execution
         break;
#ifdef kSUPPORTS_EVENTS
      case FLOOD_EVENT:
         if (call SendEventFloodMsg.send(pforward_msg, len) != SUCCESS)
            send_flood_pending = FALSE;
         break;
#endif
      default:
         send_flood_pending = FALSE;
      }
      
      return;
   }

   TOS_MsgPtr handle_flood(uint8_t type, TOS_MsgPtr msg) {
      TOS_MsgPtr retmsg = msg;

      if (send_flood_pending) {
         dbg(DBG_ROUTE, ("Drop since flood is pending\n"));
      } else {
         if (post handle_flood_task()) {
            send_flood_pending = TRUE;
            flood_type = type;
            retmsg = pforward_msg;
            pforward_msg = msg;
         }
      }
      return retmsg;
   }

   event TOS_MsgPtr RcvQueryFloodUART.receive(TOS_MsgPtr msg) {
      return handle_flood(FLOOD_QUERY, msg);
   }

   event result_t SendQueryFloodMsg.sendDone(TOS_MsgPtr msg, result_t success) {
      uint16_t len;
      QueryMessagePtr q_ptr = 
         (QueryMessagePtr)call SendQueryFloodMsg.getBuffer(msg, &len);
      signal Network.querySub(q_ptr);
      send_flood_pending = FALSE;
      return SUCCESS;
   }
//#endif

   /* ------ snoopedSub Event ------ */
   default event result_t Network.snoopedSub
           (QueryResultPtr qresMsg, bool isFromParent, uint16_t senderid) {
      return SUCCESS;
   }
 
   /* For the packet's single hop dest not to itself */
   event result_t SnoopedDataMsg.intercept
                         (TOS_MsgPtr msg, void *payload, uint16_t len) {
      bool isFromParent = FALSE;
      uint16_t senderid = (uint16_t)call MultiHopMsg.getSource(msg);
      /* compare with parents, which is nexthop */
      if (call SingleHopMsg.getSrcAddress(msg) == 
                    (wsnAddr) call Router.getNextHop(call Router.getRoot()))
         isFromParent = TRUE;
      signal Network.snoopedSub((QueryResultPtr)payload, isFromParent, senderid);
      return SUCCESS;
   }

   /* Root singlehop broadcast data, neighbor snoop it since it's not
      the final destination. Used for root to sync with its child */
   event TOS_MsgPtr RcvDataBroadcastMsg.receive(TOS_MsgPtr msg) {
      bool isFromParent = FALSE;
      uint16_t senderid = (uint16_t)call SingleHopMsg.getSrcAddress(msg);
      QueryResultPtr payload;
      /* compare with parents, which is nexthop */
      if (senderid == 
                    (wsnAddr) call Router.getNextHop(call Router.getRoot()))
         isFromParent = TRUE;
      call SingleHopPayload.linkPayload(msg, (uint8_t **) &payload);
      signal Network.snoopedSub(payload, isFromParent, senderid);
      return msg;
   }

#ifdef kQUERY_SHARING
   /* ------ queryRequestSub Event ------ */
   default event result_t Network.queryRequestSub
                          (QueryRequestMessagePtr qreqMsg) {
      return SUCCESS;
   }

   event TOS_MsgPtr RcvQueryRequest.receive(TOS_MsgPtr msg) {
      QueryRequestMessagePtr qr_ptr;
      call SingleHopPayload.linkPayload(msg, (uint8_t **) &qr_ptr);
      signal Network.queryRequestSub(qr_ptr);
      return msg;
   }
#endif

//#if SINK_NODE
#ifdef kSTATUS
   /* ------ Status ------ */

   event TOS_MsgPtr RcvStatusUART.receive(TOS_MsgPtr msg) {
      short numqs, i;
      StatusMessage *smsg;
      smsg = (StatusMessage *)&(mDbg.data);

      numqs = call QueryProcessor.numQueries();
      if (numqs > kMAX_QUERIES)
         numqs = kMAX_QUERIES;
      smsg->numQueries = numqs;
      for (i = 0; i < numqs; i++) {
         uint8_t qid = (uint8_t)((call QueryProcessor.getQueryIdx(i))->qid);
         dbg(DBG_USR2, "i = %d, qid = %d\n", i, qid );
         smsg->queries[i] = qid;
      }

      call SendStatusUART.send(&mDbg);
      return msg;
   }

   event result_t SendStatusUART.sendDone(TOS_MsgPtr msg, result_t success) {
      return SUCCESS;
   }

   event result_t QueryProcessor.queryComplete(ParsedQueryPtr q) {
      return SUCCESS;
   }

#endif
//#endif

   /* ------ Command ------ */

   event TOS_MsgPtr RcvCommandFloodMsg.receive
                         (TOS_MsgPtr msg, void *payload, uint16_t len) {
      SchemaErrorNo errorNo;
      /* TODO: Don't re-construct msg, just signal payload, wait TOS update */
      memmove(msg->data, payload, len);
      call CommandUse.invokeMsg(msg, NULL, &errorNo);
      return msg;
   }

//if SINK_NODE
   event result_t SendCommandFloodMsg.sendDone(TOS_MsgPtr msg, result_t success) {
      uint16_t len;
      SchemaErrorNo errorNo;
      void *payload = call SendCommandFloodMsg.getBuffer(&mCmd, &len);
      // XXX ignore command return value for now
      /* TODO: Don't re-construct msg, just signal payload, wait TOS update */
      memmove(msg->data, payload, len);
      call CommandUse.invokeMsg(msg, NULL, &errorNo);
      send_flood_pending = FALSE;
      return SUCCESS;
   }

   event TOS_MsgPtr RcvCommandFloodUART.receive(TOS_MsgPtr msg) {
      return handle_flood(FLOOD_COMMAND, msg);
   }
//#endif

   event result_t CommandUse.commandDone(char *commandName, char *resultBuf, SchemaErrorNo err) {
      return SUCCESS;
   }

#ifdef kSUPPORTS_EVENTS
   /* ------ Event ------ */

   event TOS_MsgPtr RcvEventFloodMsg.receive
                         (TOS_MsgPtr msg, void *payload, uint16_t len) {
      /* TODO: Don't re-construct msg, just signal payload, wait TOS update */
      memmove(msg->data, payload, len);
      call EventUse.signalEventMsg(msg);
      return msg;
   }

//if SINK_NODE
   event result_t SendEventFloodMsg.sendDone(TOS_MsgPtr msg, result_t success) {
      uint16_t len;
      void *payload = call SendEventFloodMsg.getBuffer(msg, &len);
      /* TODO: Don't re-construct msg, just signal payload, wait TOS update */
      memmove(msg->data, payload, len);
      call EventUse.signalEventMsg(msg);
      send_flood_pending = FALSE;
      return SUCCESS;
   }

   event TOS_MsgPtr RcvEventFloodUART.receive(TOS_MsgPtr msg) {
      return handle_flood(FLOOD_EVENT, msg);
   }
//#endif

   event result_t EventUse.eventDone(char *name, SchemaErrorNo err) {
      return SUCCESS;
   }

#endif

   /* FIXME ------ Dummy NetworkMonitor ------ */
   command void NetworkMonitor.updateContention(bool failure, int status) {
      return;
   }
   command uint16_t NetworkMonitor.getContention() {
      return 0;
   }
   command uint16_t NetworkMonitor.getParent() {
      return (uint16_t)call Router.getNextHop(call Router.getRoot());
   }
   command uint8_t NetworkMonitor.getQueueLength() {
      return 0;
   }
   command uint8_t NetworkMonitor.getMHopQueueLength() {
      return 0;
   }
   command uint8_t NetworkMonitor.getDepth() {
      return 0;
   }
   command uint8_t NetworkMonitor.getXmitCount() {
      return 0;
   }
   command uint8_t NetworkMonitor.getQuality() {
      return 0;
   }
   command bool NetworkMonitor.isAdjuvantNode() {
#ifdef HSN_ROUTING
      return call isAdjuvantNode();
#else
      /* Every node is adjuvant node if not using HSN routing */
      return TRUE;
#endif
   }
#ifdef kHAS_NEIGHBOR_ATTR
   /** TODO: Refer to tos/lib/TinyDB/NetworkMultiHopM.nc
       Write the list of neighbors we have recently heard into
       the bitmap dest.  Bit n in the bitmap corresponds to a recent
       message from sensor n
   */
   command void NetworkMonitor.getNeighbors(char *dest) {
      return;
   }
#endif
}
