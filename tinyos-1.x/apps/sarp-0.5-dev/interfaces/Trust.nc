/*
 *  File:       Trust.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 5, 2009
 */

//includes TrustH;
includes NeighborTableH;

interface Trust
{
	/*
	 *    Calculate the trust FP and RH given the GB and BB.
	 */
	//command float calculateFP(uint32_t GFB_l, uint32_t BFB_l);
	command float calculateFP(float GFB_l, float BFB_l);
	command float calculateRH(uint32_t GRB_l, uint32_t BRB_l);
	command float calculateAV(uint32_t GAB_l, uint32_t BAB_l);
	command float calculateLP(uint32_t GLB_l, uint32_t BLB_l);
	#ifdef PREDICTABILITY
	command float calculatePR(GPB_t GPB_1, BPB_t BPB_1, uint32_t timeCounter, uint8_t WindowSize);
	command float calculateOverallTrust(float trustFP, float trustLP, float trustPR);
	command float calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1, float trustPR);
	#else
	command float calculateOverallTrust(float trustFP, float trustLP);
	command float calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1);
	#endif

	command uint16_t areReportsConsistent(uint16_t oneHopReportedSent, uint16_t twoHopReportedReceived);

}
