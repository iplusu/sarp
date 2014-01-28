/*
 *  File:       TrustM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 5, 2009
 */


includes TrustH;

module TrustM{
  provides {
    interface Trust;
  }
}

implementation {

  /*
   *    @fn:        Calculates the new trustFP from the GFB and BFB passed in.
   *    @return:    The newly calculated trustFP
   */
  command float Trust.calculateFP(uint32_t GFB_l, uint32_t BFB_l)
  {
    return (GFB_l + 0.0) / (GFB_l + BFB_l);
  }


  /*
   *    @fn:        Calculates the new trustRH from the GRB and BRB passed in.
   *    @return:    The newly calculated trustRH
   */
  command float Trust.calculateRH(uint32_t GRB_l, uint32_t BRB_l)
  {
    return (GRB_l + 0.0) / (GRB_l + BRB_l);
  }


 /*
  *     @fn:        Determines if the one and two-hop reports are consistent.
  *     @returns:   1 for consistent, 0 for inconsistent.
  */
  command uint16_t Trust.areReportsConsistent(uint16_t oneHopReportedSent, uint16_t twoHopReportedReceived)
  {
    if ( (oneHopReportedSent - twoHopReportedReceived) < (ACCEPTABLE_REPORTING_VARIANCE * oneHopReportedSent) )
      return 1;
    else
      return 0;
  }


}

