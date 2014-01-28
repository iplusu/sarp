#!/bin/csh
#
# Technische Universität Berlin
# Kevin Klues <klues@tkn.tu-berlin.de>
#
# Based on the CDK4MSP project from:
# LiPronix by Li-Pro.Net
# Stephan Linz <linz@li-pro.net>
#
#

setenv MSP430TOOLS /opt/msp430
setenv PATH ${PATH}:${MSP430TOOLS}/bin
setenv LD_LIBRARY_PATH ${LD_LIBRARY_PATH}:${MSP430TOOLS}/lib
setenv PYTHONPATH ${PYTHONPATH}:${MSP430TOOLS}/lib/python2.3/site-packages/
setenv MAN_PATH ${MAN_PATH}:${MSP430TOOLS}/man
