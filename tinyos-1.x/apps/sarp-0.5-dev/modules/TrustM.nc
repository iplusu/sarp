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
		if(BFB_l == 0.0){/*dbg(DBG_USR3, "return 1.0\r\n");*/return 1.0;}
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
	command float Trust.calculatePR(GPB_t GPB_1, BPB_t BPB_1, uint32_t timeCounter, uint8_t WindowSize){
		uint8_t GPB = 0, BPB = 0;
		uint8_t cnt = 0;
		uint8_t timeOut = 0;
		int8_t badCnt;

		for(cnt = 0; cnt < GPB_SWINDOW_SIZE; cnt++) {
			timeOut = ((timeCounter - GPB_1.Good_SWindow[cnt].time) > (uint32_t)SWINDOW_TIMEOUT)?1:0;
			if(( timeOut ) && ((uint32_t)GPB_1.Good_SWindow[cnt].time != 0)) {
				#ifdef SARP04_DBG
				dbg(DBG_USR3, "PR-Pointer %d Dropped time %ld at %ld\r\n", PB_1.pointer, PB_1.SWindow[cnt].time, tos_state.tos_time/4000);
				#endif
				//GPB_1.Good_SWindow[cnt].value = 0;
				GPB_1.Good_SWindow[cnt].Bad = 0;
				GPB_1.Good_SWindow[cnt].Good = 0;
				
				GPB_1.Good_SWindow[cnt].time = 0;
				//PB_1.cnt--;
			}else{
				//GPB += GPB_1.Good_SWindow[cnt].value;
				GPB += GPB_1.Good_SWindow[cnt].Good;
			}
		}

		for(cnt = 0; cnt < WindowSize; cnt++){
			badCnt = (BPB_1.pointer - cnt + BPB_SWINDOW_SIZE) % BPB_SWINDOW_SIZE;
			//dbg(DBG_USR3, "BADCNT:%d \r\n", badCnt);
			timeOut = ((timeCounter - BPB_1.Bad_SWindow[badCnt].time) > (uint32_t)SWINDOW_TIMEOUT)?1:0;
			if(( timeOut ) && ((uint32_t)BPB_1.Bad_SWindow[badCnt].time != 0)) {
				#ifdef SARP04_DBG
				dbg(DBG_USR3, "PR-Pointer %d Dropped time %ld at %ld\r\n", PB_1.pointer, PB_1.SWindow[cnt].time, tos_state.tos_time/4000);
				#endif
				
				BPB_1.Bad_SWindow[badCnt].Bad = 0;
				BPB_1.Bad_SWindow[badCnt].Good = 0;
				
				BPB_1.Bad_SWindow[badCnt].time = 0;
			}
			else{
				BPB += BPB_1.Bad_SWindow[badCnt].Bad;
			}
		}
		/*for(cnt = 0; cnt < WindowSize; cnt++) {
			timeOut = ((timeCounter - BPB_1.Bad_SWindow[cnt].time) > (uint32_t)SWINDOW_TIMEOUT)?1:0;
			if(( timeOut ) && ((uint32_t)BPB_1.Bad_SWindow[cnt].time != 0)) {
				#ifdef SARP04_DBG
				dbg(DBG_USR3, "PR-Pointer %d Dropped time %ld at %ld\r\n", PB_1.pointer, PB_1.SWindow[cnt].time, tos_state.tos_time/4000);
				#endif
				badCnt = badCnt + 1;
			}
		}
		memcpy((SWindow_t*)BPB_1.Bad_SWindow, (SWindow_t*)BPB_1.Bad_SWindow + badCnt, sizeof(SWindow_t)*(WindowSize - badCnt + 1));
		BPB_1.pointer = BPB_1.pointer - badCnt;

		for(cnt = 0; cnt < BPB_1.pointer; cnt++){
			BPB += BPB_1.Bad_SWindow[cnt].Bad;
		}*/
		
//		dbg(DBG_USR3, "GPB:%d BPB:%d\r\n", GPB, BPB);
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

