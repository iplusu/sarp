/*
 *  File:       AttackM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 20, 2009
 */


includes AttackH;

module AttackM{
  provides {
    interface Attack;
  }
}

implementation {

  /*
   *    @fn:        C
   *    @return:    1 for Yes, 0 for No
   */
  command uint16_t Attack.sfDropThis(uint16_t myNodeId, uint16_t potentialVictim, uint16_t *mySelectiveCounter)
  {
    for (aCounter = 0; aCounter < numSFAttackers; aCounter ++)
    {
      if ( (selectiveForwardAttackers[aCounter] == myNodeId) && (selectiveForwardVictims[aCounter] == potentialVictim) )
      {
        /* SF drop this data packet */
        if ( (*mySelectiveCounter)++ >= selectiveForwardNumerators[aCounter])
        {
          if ( *mySelectiveCounter  == selectiveForwardDenomenators[aCounter] )
            *mySelectiveCounter = 0;

          return 1;
        }
        break;
      }
    }
    return 0;
  }

}

