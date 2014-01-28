// This is a comment

includes IntMsg;
includes AM;
includes TimeSync;
includes TimeSyncMsg;

includes MessagingH;

configuration Sarp {
}
implementation {
#ifdef __REAL__MOTE__

	components Main, SimpleTime, TimerC, SingleTimer, SarpM, GenericComm as Comm, UARTComm as UComm, LedsC, CC2420RadioC, TrustM, NeighborTableM, TransactionTableM, MessagingM, AttackM, TrafficGeneratorM, TinyAlloc;
	Main.StdControl->CC2420RadioC.StdControl;
	SarpM.CC2420Control->CC2420RadioC.CC2420Control;

//#if (0)
#else

	components Main, SimpleTime, TimerC, SingleTimer, SarpM, GenericComm as Comm, UARTComm as UComm, LedsC, TrustM, NeighborTableM, TransactionTableM, MessagingM, AttackM, TrafficGeneratorM;

#endif

	Main.StdControl->SarpM.StdControl;
	Main.StdControl->SingleTimer.StdControl;
	Main.StdControl->TimerC;

	SarpM.CommControl->UComm;
	SarpM.SendDisc->Comm.SendMsg[DISCOVERY_MSG_TYPE];
	//SarpM.SendUDisc->UComm.SendMsg[DISCOVERY_MSG_TYPE];
	//SarpM.SendStart->Comm.SendMsg[CONTROL_MSG_TYPE];
	SarpM.SendData->Comm.SendMsg[DATA_MSG_TYPE];
	SarpM.SendReport->Comm.SendMsg[REPORT_MSG_TYPE];
	SarpM.SendReportRequest->Comm.SendMsg[REPORT_REQUEST_MSG_TYPE];
	SarpM.SendReportNoForwardResponse->Comm.SendMsg[REPORT_RESPONSE_NO_FORWARD_MSG_TYPE];
	SarpM.SendReportForwardResponse->Comm.SendMsg[REPORT_RESPONSE_FORWARD_MSG_TYPE];
	SarpM.SendEndToEndReportResponse->Comm.SendMsg[END_TO_END_REPORT_RESPONSE_MSG_TYPE];
	SarpM.SendSpecificReportRequest->Comm.SendMsg[SPECIFIC_REPORT_REQUEST_MSG_TYPE];
	SarpM.SendSpecificReportResponse->Comm.SendMsg[SPECIFIC_REPORT_RESPONSE_MSG_TYPE];
#ifdef SARP04
	SarpM.Receive->Comm.ReceiveMsg[DISCOVERY_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[CONTROL_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[DATA_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[REPORT_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[REPORT_REQUEST_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[REPORT_RESPONSE_NO_FORWARD_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[REPORT_RESPONSE_FORWARD_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[END_TO_END_REPORT_RESPONSE_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[SPECIFIC_REPORT_REQUEST_MSG_TYPE];
	SarpM.Receive->Comm.ReceiveMsg[SPECIFIC_REPORT_RESPONSE_MSG_TYPE];
#else
	SarpM.ReceiveDisc->Comm.ReceiveMsg[DISCOVERY_MSG_TYPE];
	//SarpM.ReceiveStart->Comm.ReceiveMsg[CONTROL_MSG_TYPE];
	SarpM.ReceiveData->Comm.ReceiveMsg[DATA_MSG_TYPE];
	SarpM.ReceiveReport->Comm.ReceiveMsg[REPORT_MSG_TYPE];
	SarpM.ReceiveReportRequest->Comm.ReceiveMsg[REPORT_REQUEST_MSG_TYPE];
	SarpM.ReceiveReportNoForwardResponse->Comm.ReceiveMsg[REPORT_RESPONSE_NO_FORWARD_MSG_TYPE];
	SarpM.ReceiveReportforwardResponse->Comm.ReceiveMsg[REPORT_RESPONSE_FORWARD_MSG_TYPE];
	SarpM.ReceiveEndToEndReportResponse->Comm.ReceiveMsg[END_TO_END_REPORT_RESPONSE_MSG_TYPE];
	SarpM.ReceiveSpecificReportRequest->Comm.ReceiveMsg[SPECIFIC_REPORT_REQUEST_MSG_TYPE];
	SarpM.ReceiveSpecificReportResponse->Comm.ReceiveMsg[SPECIFIC_REPORT_RESPONSE_MSG_TYPE];
#endif

	SarpM.Timer1->TimerC.Timer[unique("Timer")];
	SarpM.Timer2->TimerC.Timer[unique("Timer")];
//  SarpM.Timer3 -> TimerC.Timer[unique ("Timer")];

	#ifdef __REAL__MOTE__
	SarpM.Timer4->TimerC.Timer[unique("Timer")];
	#endif
	
//  SarpM.Timer5 -> TimerC.Timer[unique ("Timer")];
	SarpM.Timer6->TimerC.Timer[unique("Timer")];
	SarpM.Timer7->TimerC.Timer[unique("Timer")];
	SarpM.Timer8->TimerC.Timer[unique("Timer")];
#ifndef ONOFFATTACK
	SarpM.Timer9->TimerC.Timer[unique("Timer")]; // on/off attacker timer
#endif
	SarpM.Timer10->TimerC.Timer[unique("Timer")]; // dynamic forgetter

	SarpM.Leds->LedsC;
	SarpM.SubControl->Comm;
	SarpM.Time->SimpleTime;
	SarpM.TimeSet->SimpleTime;

	SarpM.Trust->TrustM.Trust;
	SarpM.NeighborTable->NeighborTableM.NeighborTable;
	SarpM.TransactionTable->TransactionTableM.TransactionTable;
	SarpM.Messaging->MessagingM.Messaging;
	SarpM.Attack->AttackM.Attack;
	SarpM.TrafficGenerator->TrafficGeneratorM.TrafficGenerator;

	Main.StdControl->TransactionTableM.StdControl;

	TransactionTableM.NeighborTable->NeighborTableM.NeighborTable;
	TransactionTableM.Trust->TrustM.Trust;
	TransactionTableM.Messaging->MessagingM.Messaging;
	TransactionTableM.Attack->AttackM.Attack;

	#ifdef __REAL__MOTE__
	Main.StdControl->NeighborTableM.StdControl;
	#ifdef PREDICTABILITY
	TransactionTableM.MemAlloc->TinyAlloc;
	SarpM.LocalTime->TimerC.LocalTime;
	#endif
	#endif

	MessagingM.NeighborTable->NeighborTableM.NeighborTable;
}

