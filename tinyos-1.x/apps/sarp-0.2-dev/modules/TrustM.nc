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
   *    @fn:        Calculates the new trustAV from the GAB and BAB passed in.
   *    @return:    The newly calculated trustRH
   */
  command float Trust.calculateAV(uint32_t GAB_l, uint32_t BAB_l)
  {
    return (GAB_l + 0.0) / (GAB_l + BAB_l);
  }


  /*
   *    @fn:        Calculates the new trustAV from the GAB and BAB passed in.
   *    @return:    The newly calculated trustRH
   */
  command float Trust.calculateLP(uint32_t GLB_l, uint32_t BLB_l)
  {
    return (GLB_l + 0.0) / (GLB_l + BLB_l);
  }


  /*
   *    @fn:        Calculates the new overallTrust from trustRH and trustFP.
   *    @return:    The newly calculated overallTrust
   */
  command float Trust.calculateOverallTrust(float trustFP, float trustRH, float trustAV, float trustLP)
  {
    #ifdef DEBUG
      dbg(DBG_USR1, "FP: %f, WFP: %f, RH: %f, WRH: %f, AV: %f, WAV: %f, LP: %f WLP: %f == %f\r\n", trustFP, FP_WEIGHT, trustRH, RH_WEIGHT, trustAV, AV_WEIGHT, trustLP, LP_WEIGHT, trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT);
    #endif
    return trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT;
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

