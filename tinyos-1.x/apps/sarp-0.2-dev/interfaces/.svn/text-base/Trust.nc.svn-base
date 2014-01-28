/*
 *  File:       Trust.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 5, 2009
 */

//includes TrustH;

interface Trust
{
  /*
   *    Calculate the trust FP and RH given the GB and BB.
   */
  command float calculateFP(uint32_t GFB_l, uint32_t BFB_l);
  command float calculateRH(uint32_t GRB_l, uint32_t BRB_l);
  command float calculateAV(uint32_t GAB_l, uint32_t BAB_l);
  command float calculateLP(uint32_t GLB_l, uint32_t BLB_l);
  command float calculateOverallTrust(float trustFP, float trustRH, float trustAV, float trustLP);

  command uint16_t areReportsConsistent(uint16_t oneHopReportedSent, uint16_t twoHopReportedReceived);

}
