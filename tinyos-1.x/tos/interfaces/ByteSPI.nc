// $Id: ByteSPI.nc,v 1.5 2003/10/07 21:46:14 idgay Exp $

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
 * Authors:		Jason Hill, David Gay, Philip Levis
 * Date last modified:  6/25/02
 *
 *
 */

/**
 * An SPI byte-level interface. 
 * Every bit/byte transmitted produces a result bit/byte.
 * Every call to the <code>txByte()</bode> command 
 * results in a corresponding rxByte()
 * event which contains the byte read while transmitting.
 *
 * Note: FastSPI is a non-split-phase version of this interface. ByteSPI
 * should be used when a single byte transaction on the SPI is 
 * slow.
 * @author Jason Hill
 * @author David Gay
 * @author Philip Levis
 */
interface ByteSPI {
  /**
   * Transmits a byte to the SPI bus
   *
   * @param data the byte to be transmitted
   *
   * @return SUCCESS if successful
   */
  async command result_t txByte(uint8_t data);

  /**
   * Notification of a byte received on the SPI bus.
   * Every byte transmitted results in a byte received.
   *
   * @param data the byte received
   *
   * @return SUCCESS if successful
   */
  async event result_t rxByte(uint8_t data);
}
