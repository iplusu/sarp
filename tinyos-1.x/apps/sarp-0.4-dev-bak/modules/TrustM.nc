/*
 *  File:       TrustM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 5, 2009
 */


includes TrustH;

module TrustM {
	provides {
		interface Trust;
	}
}

implementation {

	/*
	 *    @fn:        Calculates the new trustFP from the GFB and BFB passed in.
	 *    @return:    The newly calculated trustFP
	 */
//	command float Trust.calculateFP(uint32_t GFB_l, uint32_t BFB_l)
	command float Trust.calculateFP(float GFB_l, float BFB_l)
	{
//    if ( (GFB_l + BFB_l) > 0 )
	#ifdef PREDICTABILITY
		return (GFB_l + 1.0) / (GFB_l + BFB_l + 2.0);
	#else
		#if defined (MODIFIED_DF) || defined (NODFPR)
		if(BFB_l == 0.0){dbg(DBG_USR3, "return 1.0\r\n");return 1.0;}
		else return (GFB_l + 1.0) / (GFB_l + BFB_l + 2.0);
		#endif
		
		#if defined ORIGINAL_DF  || defined (PREDICTABILITY)
		return (GFB_l + 1.0) / (GFB_l + BFB_l + 2.0);
		#endif
	#endif
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
	#ifdef PREDICTABILITY
	command float Trust.calculatePR(PB_t PB_1, uint32_t timeCounter){
		uint32_t GPB = 0, BPB = 0;
		uint16_t cnt = 0;
		uint8_t timeDiff = 0;

		for(cnt = 0; cnt < SWINDOW_SIZE; cnt++) {
			timeDiff = (timeCounter - PB_1.SWindow[cnt].time) > (uint32_t)SWINDOW_TIMEOUT;
			if(( timeDiff ) && ((uint32_t)PB_1.SWindow[cnt].time != 0)) {
				#ifdef SARP04_DBG
				dbg(DBG_USR3, "PR-Pointer %d Dropped time %ld at %ld\r\n", PB_1.pointer, PB_1.SWindow[cnt].time, tos_state.tos_time/4000);
				#endif
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
	 #endif


	/*
	 *    @fn:        Calculates the new overallTrust from trustRH and trustFP.
	 *    @return:    The newly calculated overallTrust
	 */
	#ifdef PREDICTABILITY
	command float Trust.calculateOverallTrust(float trustFP, float trustLP, float trustPR)
	#else
	command float Trust.calculateOverallTrust(float trustFP, float trustLP)
	#endif
	{
    #ifdef DEBUG
//      dbg(DBG_USR1, "FP: %f, WFP: %f, RH: %f, WRH: %f, AV: %f, WAV: %f, LP: %f PR: %f WLP: %f == %f\r\n", trustFP, FP_WEIGHT, trustRH, RH_WEIGHT, trustAV, AV_WEIGHT, trustLP, trustPR, LP_WEIGHT, trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT);
    #endif
//		return (trustFP * FP_WEIGHT + trustLP * LP_WEIGHT + trustPR * PR_WEIGHT);
	 #ifdef PREDICTABILITY
	 return (trustFP * trustPR);
	 #else
	 return trustFP;
	 #endif

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

	#ifdef PREDICTABILITY
	command float Trust.calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1, float trustPR)
	#else
	command float Trust.calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1)
	#endif
	{
		#ifdef PREDICTABILITY
		float tmp = ( ( GB_1 + 1.0)/ (GB_1 + BB_1 + 2.0) ) * trustPR;
		return 1.0 + tmp;
		#else
		float tmp = ( ( GB_1 + 1.0)/ (GB_1 + BB_1 + 2.0) );
		return 1.0 + tmp;
		#endif
	}
}

