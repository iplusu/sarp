
// $Id: CC1000RadioC.nc,v 1.3 2004/02/04 17:35:40 kristinwright Exp $

/*									tab:4
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
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/*
 * Authors: Philip Buonadonna
 * Date last modified: $Revision: 1.3 $
 *
 */

/**
 * @author Philip Buonadonna
 */

configuration CC1000RadioC
{
  provides {
    interface StdControl;
    interface BareSendMsg as Send;
    interface ReceiveMsg as Receive;
    interface CC1000Control;
    interface RadioCoordinator as RadioReceiveCoordinator;
    interface RadioCoordinator as RadioSendCoordinator;
  }
}
implementation
{
  components CC1000RadioIntM as CC1000RadioM, CC1000ControlM, HPLCC1000M, 
    RandomLFSR, ADCC, HPLSpiM, TimerC, HPLPowerManagementM, TinySecC, LedsC;

  StdControl = CC1000RadioM;

  StdControl = TinySecC;
  Send = TinySecC.Send;
  Receive = TinySecC.Receive;
  TinySecC.RadioSend -> CC1000RadioM;
  TinySecC.RadioReceive -> CC1000RadioM;
  TinySecC.TinySecRadio -> CC1000RadioM.TinySecRadio;
  CC1000RadioM.TinySec -> TinySecC.TinySec;

  CC1000Control = CC1000ControlM;
  RadioReceiveCoordinator = CC1000RadioM.RadioReceiveCoordinator;
  RadioSendCoordinator = CC1000RadioM.RadioSendCoordinator;

  CC1000RadioM.CC1000StdControl -> CC1000ControlM;
  CC1000RadioM.CC1000Control -> CC1000ControlM;
  CC1000RadioM.Random -> RandomLFSR;
  CC1000RadioM.ADCControl -> ADCC;
  CC1000RadioM.RSSIADC -> ADCC.ADC[TOS_ADC_CC_RSSI_PORT];
  CC1000RadioM.SpiByteFifo -> HPLSpiM;

  CC1000RadioM.TimerControl -> TimerC.StdControl;
  CC1000RadioM.SquelchTimer -> TimerC.Timer[unique("Timer")];
  CC1000RadioM.WakeupTimer -> TimerC.Timer[unique("Timer")];
  CC1000RadioM.Leds -> LedsC;
  //  CC1000RadioM.SysTime->SysTimeC;

  CC1000ControlM.HPLChipcon -> HPLCC1000M;
  CC1000RadioM.PowerManagement ->HPLPowerManagementM.PowerManagement;
  HPLSpiM.PowerManagement ->HPLPowerManagementM.PowerManagement;
}
