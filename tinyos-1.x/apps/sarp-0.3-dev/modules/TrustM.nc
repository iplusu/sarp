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
//    if ( (GFB_l + BFB_l) > 0 )
      return (GFB_l + 1.0) / (GFB_l + BFB_l + 2.0);
//    else
//      return 1.0;
  }


  /*
   *    @fn:        Calculates the new trustRH from the GRB and BRB passed in.
   *    @return:    The newly calculated trustRH
   */
  command float Trust.calculateRH(uint32_t GRB_l, uint32_t BRB_l)
  {
//    if ( (GRB_l + BRB_l) > 0 )
      return (GRB_l + 1.0) / (GRB_l + BRB_l + 2.0);
//    else
//      return 1.0;
  }


  /*
   *    @fn:        Calculates the new trustAV from the GAB and BAB passed in.
   *    @return:    The newly calculated trustRH
   */
  command float Trust.calculateAV(uint32_t GAB_l, uint32_t BAB_l)
  {
//    if ( (GAB_l + BAB_l) > 0 )
      return (GAB_l + 1.0) / (GAB_l + BAB_l + 2.0);
//    else
//      return 1.0;
  }


  /*
   *    @fn:        Calculates the new trustAV from the GAB and BAB passed in.
   *    @return:    The newly calculated trustRH
   */
  command float Trust.calculateLP(uint32_t GLB_l, uint32_t BLB_l)
  {
//    if ( (GLB_l + BLB_l) > 0 )
      return (GLB_l + 1.0) / (GLB_l + BLB_l + 2.0);
//    else
//      return 1.0;
  }


  /*
   *    @fn:        Calculates the new trustAV from the GPB and BPB passed in.
   *    @return:    The newly calculated trustPR
   */
  command float Trust.calculatePR(PB_t PB_1)
  {
    uint32_t GPB = 0, BPB = 0;
	uint16_t cnt = 0;
	for(cnt = 0; cnt < SWINDOW_SIZE; cnt++){
		if((tos_state.tos_time/4000) - PB_1.SWindow[cnt].time > SWINDOW_TIME_OUT){
			PB_1.SWindow[cnt].GPB = 0;
			PB_1.SWindow[cnt].BPB = 0;
			PB_1.SWindow[cnt].time = 0;
			//PB_1.cnt--;
		}else{
			GPB += PB_1.SWindow[cnt].GPB;
			BPB += PB_1.SWindow[cnt].BPB;
		}
	}
    return (GPB + 1.0) / (GPB + BPB + 2.0);
  }


  /*
   *    @fn:        Calculates the new overallTrust from trustRH and trustFP.
   *    @return:    The newly calculated overallTrust
   */
  command float Trust.calculateOverallTrust(float trustFP, float trustRH, float trustAV, float trustLP, float trustPR)
  {
    #ifdef DEBUG
      dbg(DBG_USR1, "FP: %f, WFP: %f, RH: %f, WRH: %f, AV: %f, WAV: %f, LP: %f PR: %f WLP: %f == %f\r\n", trustFP, FP_WEIGHT, trustRH, RH_WEIGHT, trustAV, AV_WEIGHT, trustLP, trustPR, LP_WEIGHT, trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT);
    #endif
    return (trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT + trustPR * PR_WEIGHT);
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

  command float Trust.calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1)
  {
  	float tmp = ( ( GB_1 + 1.0)/ (GB_1 + BB_1 + 2.0) ) * FG_WEIGHT;;
#ifdef TRUSTVALUES
dbg(DBG_USR3, "GB: %d BB: %d TMP:%f TRUST: %f\n", GB_1, BB_1, tmp, 1.0 + tmp);
#endif
    return 1.0 + tmp;
  }
}

