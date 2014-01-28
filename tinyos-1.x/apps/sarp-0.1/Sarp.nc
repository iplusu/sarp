// This is a comment


includes IntMsg;
includes AM;
includes TimeSync;
includes TimeSyncMsg;
includes SarpMsg;

configuration  Sarp {
}
implementation {

#ifdef __REAL__MOTE__

  components Main, SimpleTime, TimerC, SingleTimer, IntToLeds, SarpM, GenericComm as Comm, UARTComm as UComm, LedsC, CC2420RadioC;
  Main.StdControl -> CC2420RadioC.StdControl;
  SarpM.CC2420Control -> CC2420RadioC.CC2420Control;

//#if (0)
#else

  components Main, SimpleTime, TimerC, SingleTimer, IntToLeds, SarpM, GenericComm as Comm, UARTComm as UComm, LedsC;

#endif

  Main.StdControl -> IntToLeds.StdControl;
  Main.StdControl -> SarpM.StdControl;
  Main.StdControl -> SingleTimer.StdControl;
//  Main.StdControl -> SimpleTime.StdControl;

  SarpM.CommControl ->UComm;
  SarpM.IntOutput -> IntToLeds.IntOutput;
  SarpM.SendDisc -> Comm.SendMsg[DISCOVERY_MSG_TYPE];
  SarpM.SendUDisc -> UComm.SendMsg[DISCOVERY_MSG_TYPE];
//  SarpM.SendReady -> Comm.SendMsg[READY_MSG_TYPE];
//  SarpM.SendReadyAck -> Comm.SendMsg[READY_ACK_MSG_TYPE];
//  SarpM.SendUReady -> UComm.SendMsg[READY_MSG_TYPE];
  SarpM.SendStart -> Comm.SendMsg[START_MSG_TYPE];
  SarpM.SendData -> Comm.SendMsg[DATA_MSG_TYPE];
  SarpM.SendReport -> Comm.SendMsg[REPORT_MSG_TYPE];
  SarpM.SendReportRequest -> Comm.SendMsg[REPORT_REQUEST_MSG_TYPE];
  SarpM.SendReportNoForwardResponse -> Comm.SendMsg[REPORT_RESPONSE_NO_FORWARD_MSG_TYPE];
  SarpM.SendReportForwardResponse -> Comm.SendMsg[REPORT_RESPONSE_FORWARD_MSG_TYPE];
  SarpM.SendEndToEndReportResponse -> Comm.SendMsg[END_TO_END_REPORT_RESPONSE_MSG_TYPE];
  SarpM.SendSpecificReportRequest -> Comm.SendMsg[SPECIFIC_REPORT_REQUEST_MSG_TYPE];
  SarpM.SendSpecificReportResponse -> Comm.SendMsg[SPECIFIC_REPORT_RESPONSE_MSG_TYPE];

  SarpM.Receive -> Comm.ReceiveMsg[DISCOVERY_MSG_TYPE];
//  SarpM.Receive -> Comm.ReceiveMsg[READY_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[START_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[DATA_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[REPORT_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[REPORT_REQUEST_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[REPORT_RESPONSE_NO_FORWARD_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[REPORT_RESPONSE_FORWARD_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[END_TO_END_REPORT_RESPONSE_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[SPECIFIC_REPORT_REQUEST_MSG_TYPE];
  SarpM.Receive -> Comm.ReceiveMsg[SPECIFIC_REPORT_RESPONSE_MSG_TYPE];

  SarpM.Timer1 -> TimerC.Timer[unique ("Timer")];
  SarpM.Timer2 -> TimerC.Timer[unique ("Timer")];
//  SarpM.Timer3 -> TimerC.Timer[unique ("Timer")];
  SarpM.Timer4 -> TimerC.Timer[unique ("Timer")];
//  SarpM.Timer5 -> TimerC.Timer[unique ("Timer")];
  SarpM.Timer6 -> TimerC.Timer[unique ("Timer")];
  SarpM.Timer7 -> TimerC.Timer[unique ("Timer")];
  SarpM.Timer8 -> TimerC.Timer[unique ("Timer")];

  SarpM.Leds -> LedsC;
  SarpM.SubControl -> Comm;
  SarpM.Time -> SimpleTime;
  SarpM.TimeSet -> SimpleTime;
}

