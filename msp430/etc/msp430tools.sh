#!/bin/sh
#
# Technische Universität Berlin
# Kevin Klues <klues@tkn.tu-berlin.de>
#
# Based on the CDK4MSP project from: 
# LiPronix by Li-Pro.Net
# Stephan Linz <linz@li-pro.net>
#
#

MSP430TOOLS="/opt/msp430"
PATH="$PATH:$MSP430TOOLS/bin"
LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$MSP430TOOLS/lib"
PYTHONPATH="$PYTHONPATH:$MSP430TOOLS/lib/python2.3/site-packages/"
MAN_PATH="$MAN_PATH:$MSP430TOOLS/man"

export MSP430TOOLS PATH LD_LIBRARY_PATH PYTHONPATH MAN_PATH
