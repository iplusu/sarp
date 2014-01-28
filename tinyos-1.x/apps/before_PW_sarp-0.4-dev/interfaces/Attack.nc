/*
 *  File:       Attack.nc
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 20, 2009
 */
interface Attack
{
	command uint16_t sfDropThis(uint16_t myNodeId, uint16_t potentialVictim, uint16_t *mySelectiveCounter);

	/*
	 * Description:   This function get its parent if a node is a loop creation attacker
	 * Params:        uint16_t myNodeId -- the node_id of the node to be tested
	 * Returns:       0 is the node is not a loop creation attacker
	 *                Otherwise, return the node_id of the chosen parent
	 */
	command uint16_t ifLoopCreatorGetParent(uint16_t myNodeId);

	/*
	 * Description:   This function will determine if a node is a loop creation attacker
	 * Params:        uint16_t myNodeId -- the node_id of the node to be tested
	 * Returns:       0 is the node is not a loop creation attacker
	 *                1, otherwise
	 */
	command uint16_t isLoopCreator(uint16_t myNodeId);

	/*
	 * Description:   This function will determine if a node is a no response attacker
	 * Params:        uint16_t myNodeId -- the node_id of the node to be tested
	 * Returns:       0 is the node is not a loop creation attacker
	 *                1, otherwise
	 */
	command uint16_t isNoResponder(uint16_t myNodeId);


	/*
	 * Description:   This function will determine if a node is an on/off attacker
	 * Params:        uint16_t myNodeId -- the node_id of the node to be tested
	 * Returns:       0 is the node is not a loop creation attacker
	 *                1, otherwise
	 */
	command uint16_t isOnOffAttacker(uint16_t myNodeId);

	#ifdef ONOFFATTACK
	command uint16_t initBehaviors(uint16_t myNodeId, uint16_t *myGoodBehaviors, uint16_t *myBadBehaviors);

	command uint8_t isSelectiveForwarder(uint16_t myNodeID);
	#else
	command uint16_t getNumThirtySeconds(uint16_t myNodeId);
	#endif
}
