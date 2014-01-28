/*
 *  File:	TrafficGeneratorH.h
 *  Author:	Kenneth Rahn Jr
 *  Created:	May 20, 2009
 */

#ifndef ATTACK_H
#define ATTACK_H

/* BEGIN SELECTIVE FORWARDING PARAMETERS */

/* Example SF setup
 *
 * Let's say we want node 22 to selectively forward 50% of node 23's packets and
 * node 17 to selectively forward 60% of node 22's packets.
 *
 * uint16_t selectiveForwardeAttackers[]   = { 22, 17 };
 * uint16_t selectiveForwardVictims[]      = { 23, 22 };
 * uint16_t selectiveforwardNumerator[]    = {  1,  3 };
 * uint16_t selectiveForwardDenomenators[] = {  2,  5 };
 *
 */

uint16_t aCounter;

uint16_t selectiveForwardAttackers[]    = { 4, 4, 4, 4, 2, 2 };
uint16_t selectiveForwardVictims[]      = { 5, 1, 7, 3, 5, 1 };
uint16_t selectiveForwardNumerators[]   = { 7, 7, 7, 7, 1, 1 };
uint16_t selectiveForwardDenomenators[] = { 10, 10, 10, 10, 10, 10 };
//uint16_t selectiveForwardNumerators[]   = { 35, 35, 35, 35, 5, 5 };
//uint16_t selectiveForwardDenomenators[] = { 50, 50, 50, 50, 50, 50 };

uint16_t numSFAttackers                 = 6;

/* We dont' use this yet, but we should. */
typedef struct selectiveForwarder {
  uint16_t attacker_id;
  uint16_t victim_id;
  uint16_t numerator;
  uint16_t demonenator;
} selectiveForwarder;
/* END SELECTIVE FORWARDING PARAMETERS */


/* BEGIN LOOP CREATION PARAMETERS */
uint16_t loopCreationAttackers[]            = {  };
uint16_t loopCreationAttackersParents[]     = {  };
//uint16_t loopCreationAttackers[]            = {  8,  7, 12 }
//uint16_t loopCreationAttackersParents[]     = {  7, 12, 13 }

uint16_t numLoopCreationAttackers           = 0;
/* END LOOP CREATION PARAMETERS */


/* BEGIN NO RESPONSE PARAMETERS */
uint16_t noResponseAttackers[]            = {  };
uint16_t numNoResponseAttackers           = 0;
/* END NO RESPONSE PARAMETERS */


/* BEGIN ON / OFF PARAMETERS */
//uint16_t onOffAttackers[]                 = { };
//uint16_t nGoodBehaviors[]                 = { };
//uint16_t nBadBehaviors[]                  = { };
//uint16_t numOnOffAttackers                = 0;
uint16_t onOffAttackers[]                 = { 2 };
uint16_t nGoodBehaviors[]                 = { 2 };
uint16_t nBadBehaviors[]                  = { 1 };
uint16_t numOnOffAttackers                = 1;

/* END ON / OFF PARAMETERS */

#endif
