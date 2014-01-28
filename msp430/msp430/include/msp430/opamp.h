#ifndef __msp430_headers_opamp_h
#define __msp430_headers_opamp_h

/* opamp.h
 *
 * mspgcc project: MSP430 device headers
 * Operational amplifier module header
 *
 * (c) 2003 by Steve Underwood <steveu@coppice.org>
 * Originally based in part on work by Texas Instruments Inc.
 *
 * $Id: opamp.h,v 1.4 2004/11/04 00:18:58 coppice Exp $
 */

/* Switches: none */
#define OA0CTL0_            0x00C0  /* OA0 Control register 0 */
sfrb(OA0CTL0, OA0CTL0_);
#define OA0CTL1_            0x00C1  /* OA0 Control register 1 */
sfrb(OA0CTL1, OA0CTL1_);
#define OA1CTL0_            0x00C2  /* OA1 Control register 0 */
sfrb(OA1CTL0, OA1CTL0_);
#define OA1CTL1_            0x00C3  /* OA1 Control register 1 */
sfrb(OA1CTL1, OA1CTL1_);
#define OA2CTL0_            0x00C4  /* OA2 Control register 0 */
sfrb(OA2CTL0, OA2CTL0_);
#define OA2CTL1_            0x00C5  /* OA2 Control register 1 */
sfrb(OA2CTL1, OA2CTL1_);

#define OAADC0              (0x01)    /* OAx output to ADC12 input channel select 0 */
#define OAADC1              (0x02)    /* OAx output to ADC12 input channel select 1 */
#define OAPM0               (0x04)    /* OAx Power mode select 0 */
#define OAPM1               (0x08)    /* OAx Power mode select 1 */
#define OAP0                (0x10)    /* OAx Inverting input select 0 */
#define OAP1                (0x20)    /* OAx Inverting input select 1 */
#define OAN0                (0x40)    /* OAx Non-inverting input select 0 */
#define OAN1                (0x80)    /* OAx Non-inverting input select 1 */

#define OAPM_0              (0x00)    /* OAx Power mode select: off */
#define OAPM_1              (0x04)    /* OAx Power mode select: slow */
#define OAPM_2              (0x08)    /* OAx Power mode select: medium */
#define OAPM_3              (0x0C)    /* OAx Power mode select: fast */
#define OAP_0               (0x00)    /* OAx Inverting input select 00 */
#define OAP_1               (0x10)    /* OAx Inverting input select 01 */
#define OAP_2               (0x20)    /* OAx Inverting input select 10 */
#define OAP_3               (0x30)    /* OAx Inverting input select 11 */
#define OAN_0               (0x40)    /* OAx Non-inverting input select 00 */
#define OAN_1               (0x40)    /* OAx Non-inverting input select 01 */
#define OAN_2               (0x80)    /* OAx Non-inverting input select 10 */
#define OAN_3               (0x40)    /* OAx Non-inverting input select 11 */

#define OARRIP              (0x01)    /* OAx Rail-to-Rail Input off */
//#define Reserved          (0x02)    /* */
#define OAFC0               (0x04)    /* OAx Function control 0 */
#define OAFC1               (0x08)    /* OAx Function control 1 */
#define OAFC2               (0x10)    /* OAx Function control 2 */
#define OAFBR0              (0x20)    /* OAx Feedback resistor select 0 */
#define OAFBR1              (0x40)    /* OAx Feedback resistor select 1 */
#define OAFBR2              (0x80)    /* OAx Feedback resistor select 2 */

#define OAFC_0              (0x00)    /* OAx Function: Gen. Purpose */
#define OAFC_1              (0x04)    /* OAx Function: Comparing */
#define OAFC_2              (0x08)    /* OAx Function: Reserved */
#define OAFC_3              (0x0C)    /* OAx Function: Differential */
#define OAFC_4              (0x10)    /* OAx Function: Non-Inverting, PGA */
#define OAFC_5              (0x14)    /* OAx Function: Reserved */
#define OAFC_6              (0x18)    /* OAx Function: Inverting */
#define OAFC_7              (0x1C)    /* OAx Function: Differential */
#define OAFBR_0             (0x00)    /* OAx Feedback resistor: Tap 0 */
#define OAFBR_1             (0x20)    /* OAx Feedback resistor: Tap 1 */
#define OAFBR_2             (0x40)    /* OAx Feedback resistor: Tap 2 */
#define OAFBR_3             (0x60)    /* OAx Feedback resistor: Tap 3 */
#define OAFBR_4             (0x80)    /* OAx Feedback resistor: Tap 4 */
#define OAFBR_5             (0xA0)    /* OAx Feedback resistor: Tap 5 */
#define OAFBR_6             (0xC0)    /* OAx Feedback resistor: Tap 6 */
#define OAFBR_7             (0xE0)    /* OAx Feedback resistor: Tap 7 */

#endif
