/*
 *  File:       TrafficGenerator.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 22, 2009
 */

interface TrafficGenerator
{
  /*
   *    Calculate the trust FP and RH given the GB and BB.
   */
  command float isTrafficGenerator(uint16_t node_id);

}
