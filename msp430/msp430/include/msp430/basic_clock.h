#ifndef __msp430_headers_clock_h
#define __msp430_headers_clock_h

/* basic_clock.h
 *
 * mspgcc project: MSP430 device headers
 * BASIC_CLOCK module header
 *
 * (c) 2002 by M. P. Ashton <data@ieee.org>
 * Originally based in part on work by Texas Instruments Inc.
 *
 * $Id: basic_clock.h,v 1.4 2003/03/04 15:49:45 coppice Exp $
 */

/* Switches: none */

#define DCOCTL_             0x0056  /* DCO Clock Frequency Control */
sfrb (DCOCTL,DCOCTL_);
#define BCSCTL1_            0x0057  /* Basic Clock System Control 1 */
sfrb (BCSCTL1,BCSCTL1_);
#define BCSCTL2_            0x0058  /* Basic Clock System Control 2 */
sfrb (BCSCTL2,BCSCTL2_);

#define MOD0                0x01    /* Modulation Bit 0 */
#define MOD1                0x02    /* Modulation Bit 1 */
#define MOD2                0x04    /* Modulation Bit 2 */
#define MOD3                0x08    /* Modulation Bit 3 */
#define MOD4                0x10    /* Modulation Bit 4 */
#define DCO0                0x20    /* DCO Select Bit 0 */
#define DCO1                0x40    /* DCO Select Bit 1 */
#define DCO2                0x80    /* DCO Select Bit 2 */

#define RSEL0               0x01    /* Resistor Select Bit 0 */
#define RSEL1               0x02    /* Resistor Select Bit 1 */
#define RSEL2               0x04    /* Resistor Select Bit 2 */
#define XT5V                0x08    /* XT5V should always be reset */
#define DIVA0               0x10    /* ACLK Divider 0 */
#define DIVA1               0x20    /* ACLK Divider 1 */
#define XTS                 0x40    /* LFXTCLK 0:Low Freq. / 1: High Freq. */
#define XT2OFF              0x80    /* Enable XT2CLK */

#define DIVA_0              (0<<4)  /* ACLK Divider 0: /1 */
#define DIVA_1              (1<<4)  /* ACLK Divider 1: /2 */
#define DIVA_2              (2<<4)  /* ACLK Divider 2: /4 */
#define DIVA_3              (3<<4)  /* ACLK Divider 3: /8 */

#define DCOR                0x01    /* Enable External Resistor : 1 */
#define DIVS0               0x02    /* SMCLK Divider 0 */
#define DIVS1               0x04    /* SMCLK Divider 1 */
#define SELS                0x08    /* SMCLK Source Select 0:DCOCLK / 1:XT2CLK/LFXTCLK */
#define DIVM0               0x10    /* MCLK Divider 0 */
#define DIVM1               0x20    /* MCLK Divider 1 */
#define SELM0               0x40    /* MCLK Source Select 0 */
#define SELM1               0x80    /* MCLK Source Select 1 */

#define DIVS_0              (0<<1)  /* SMCLK Divider 0: /1 */
#define DIVS_1              (1<<1)  /* SMCLK Divider 1: /2 */
#define DIVS_2              (2<<1)  /* SMCLK Divider 2: /4 */
#define DIVS_3              (3<<1)  /* SMCLK Divider 3: /8 */

#define DIVM_0              (0<<4)  /* MCLK Divider 0: /1 */
#define DIVM_1              (1<<4)  /* MCLK Divider 1: /2 */
#define DIVM_2              (2<<4)  /* MCLK Divider 2: /4 */
#define DIVM_3              (3<<4)  /* MCLK Divider 3: /8 */

#define SELM_0              (0<<6)  /* MCLK Source Select 0: DCOCLK */
#define SELM_1              (1<<6)  /* MCLK Source Select 1: DCOCLK */
#define SELM_2              (2<<6)  /* MCLK Source Select 2: XT2CLK/LFXTCLK */
#define SELM_3              (3<<6)  /* MCLK Source Select 3: LFXTCLK */

/* Aliases by mspgcc */
#define DIVA_DIV1           DIVA_0
#define DIVA_DIV2           DIVA_1
#define DIVA_DIV4           DIVA_2
#define DIVA_DIV8           DIVA_3
             
#define DIVS_DIV1           DIVS_0
#define DIVS_DIV2           DIVS_1
#define DIVS_DIV4           DIVS_2
#define DIVS_DIV8           DIVS_3

#define DIVM_DIV1           DIVM_0
#define DIVM_DIV2           DIVM_1
#define DIVM_DIV4           DIVM_2
#define DIVM_DIV8           DIVM_3

#define SELM_DCOCLK         SELM_0
/*#define SELM_DCOCLK         SELM_1*/
#define SELM_XT2CLK         SELM_2
#define SELM_LFXTCLK        SELM_3
             
#endif
