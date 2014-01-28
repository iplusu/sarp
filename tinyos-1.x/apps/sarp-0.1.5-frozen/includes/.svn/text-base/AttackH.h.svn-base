/*
 *  File:       AttackH.h
 *  Author:     Kenneth Rahn Jr
 *  Created:    May 20, 2009
 */

#ifndef ATTACK_H
#define ATTACK_H


  /* SELECTIVE FORWARDING PARAMETERS */

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

uint16_t selectiveForwardAttackers[]    = { 18,  1 };
uint16_t selectiveForwardVictims[]      = { 23,  2 };
uint16_t selectiveForwardNumerators[]   = {  4,  4 };
uint16_t selectiveForwardDenomenators[] = {  5,  5 };

uint16_t numSFAttackers = 2;

/* We dont' use this yet, but we should. */
typedef struct selectiveForwarder {
  uint16_t attacker_id;
  uint16_t victim_id;
  uint16_t numerator;
  uint16_t demonenator;
} selectiveForwarder;


/* END SELECTIVE FORWARDING PARAMETERS */

#endif
