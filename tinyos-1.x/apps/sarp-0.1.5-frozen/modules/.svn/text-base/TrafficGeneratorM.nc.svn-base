/*
 *  File:       TrafficGeneratorM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 22, 2009
 */


includes TrafficGeneratorH;

module TrafficGeneratorM{
  provides {
    interface TrafficGenerator;
  }
}

implementation {

  /*
   *    @fn:        C
   *    @return:    T
   */
  command float TrafficGenerator.isTrafficGenerator(uint16_t node_id)
  {
    for (tfLoopCounter = 0; tfLoopCounter < numTrafficGenerators; tfLoopCounter ++)
    {
      if (trafficGenerators[tfLoopCounter] == node_id)
        return 1;
    }
    return 0;
  }


}

