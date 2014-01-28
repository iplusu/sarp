/*
 *  File:       AttackM.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 20, 2009
 */


includes AttackH;

module AttackM {
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
		for (aCounter = 0; aCounter < numSFAttackers; aCounter++)
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

	/*
	 *    @fn:        Get the parent if the given node is a loop creation attacker
	 *    @return:    Parent node_id if YES, 0 if NO
	 */
	command uint16_t Attack.ifLoopCreatorGetParent(uint16_t myNodeId)
	{
		for (aCounter = 0; aCounter < numLoopCreationAttackers; aCounter++)
		{
			if (loopCreationAttackers[aCounter] == myNodeId )
				return loopCreationAttackersParents[aCounter];
		}
		return 0;
	}


	/*
	 *    @fn:        Determine if the given node is a loop creation attacker
	 *    @return:    1 YES, 0 if NO
	 */
	command uint16_t Attack.isLoopCreator(uint16_t myNodeId)
	{
		for (aCounter = 0; aCounter < numLoopCreationAttackers; aCounter++)
		{
			if (loopCreationAttackers[aCounter] == myNodeId )
				return 1;
		}
		return 0;
	}


	/*
	 *    @fn:        Determine if the given node is a no response attacker
	 *    @return:    1 YES, 0 if NO
	 */
	command uint16_t Attack.isNoResponder(uint16_t myNodeId)
	{
		for (aCounter = 0; aCounter < numNoResponseAttackers; aCounter++)
		{
			if (noResponseAttackers[aCounter] == myNodeId )
				return 1;
		}
		return 0;
	}


	/*
	 *    @fn:        Determine if the given node is a no response attacker
	 *    @return:    1 YES, 0 if NO
	 */
	command uint16_t Attack.isOnOffAttacker(uint16_t myNodeId)
	{
		for (aCounter = 0; aCounter < numOnOffAttackers; aCounter++)
		{
			if (onOffAttackers[aCounter] == myNodeId )
				return 1;
		}
		return 0;
	}

	#ifdef ONOFFATTACK
	command uint8_t Attack.isSelectiveForwarder(uint16_t myNodeID){
		uint32_t cnt = 0;
		for(cnt = 0; cnt < numSFAttackers; cnt++){
			if(selectiveForwardAttackers[cnt] == myNodeID){
				return TRUE;
			}
		}
		return FALSE;
	}
	
	command uint16_t Attack.initBehaviors(uint16_t myNodeID, int16_t *myGoodBehaviors, int16_t *myBadBehaviors){
		uint32_t cnt = 0;
		for(cnt = 0; cnt < numOnOffAttackers; cnt++){
			if(onOffAttackers[cnt] == myNodeID){
				*myGoodBehaviors = nGoodBehaviors[cnt];
				*myBadBehaviors = nBadBehaviors[cnt];
				return TRUE;
			}
		}
		if(call Attack.isSelectiveForwarder(myNodeID)){
			*myGoodBehaviors = 0;
			*myBadBehaviors = 255;
		}else{
			*myGoodBehaviors = 255;
			*myBadBehaviors = 0;
		}
		return FALSE;
	}
	#else
	command uint16_t Attack.getNumThirtySeconds(uint16_t myNodeId)
	{
		for (aCounter = 0; aCounter < numOnOffAttackers; aCounter++)
		{
			if (onOffAttackers[aCounter] == myNodeId )
				return numThirtySeconds[aCounter];
		}
		return 0;
	}
	#endif
}

