/*									tab:4
 *
 *
 * "Copyright (c) 2000-2002 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 */
/*									tab:4
 *  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.  By
 *  downloading, copying, installing or using the software you agree to
 *  this license.  If you do not agree to this license, do not download,
 *  install, copy or use the software.
 *
 *  Intel Open Source License 
 *
 *  Copyright (c) 2002 Intel Corporation 
 *  All rights reserved. 
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 * 
 *	Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *	Redistributions in binary form must reproduce the above copyright
 *  notice, this list of conditions and the following disclaimer in the
 *  documentation and/or other materials provided with the distribution.
 *      Neither the name of the Intel Corporation nor the names of its
 *  contributors may be used to endorse or promote products derived from
 *  this software without specific prior written permission.
 *  
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 *  PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE INTEL OR ITS
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * 
 */
/* Authors:   Philip Levis
 * History:   created 4/18/2002
 *            ported to nesC 6/19/2002
 */

/**
 * @author Philip Levis
 */


#ifndef BOMBILLA_TYPES_H_INCLUDED
#define BOMBILLA_TYPES_H_INCLUDED

#include "list.h"
#include <stddef.h>
#include "AM.h"
#include "AbstractConstants.h"

typedef struct {
  list_t queue;
} BombillaQueue;

typedef struct {
  uint8_t type;
  uint16_t var;
} BombillaSensorVariable;

typedef struct {
  uint8_t padding;
  int16_t var;
} BombillaValueVariable;

typedef struct {
  uint8_t type;
  uint8_t size;
  int16_t entries[BOMB_BUF_LEN];
} BombillaDataBuffer;

typedef struct {
  uint8_t padding;
  BombillaDataBuffer* var;
} BombillaBufferVariable;

typedef struct {
  uint8_t type;
  union {
    BombillaSensorVariable sense;
    BombillaValueVariable value;
    BombillaBufferVariable buffer;
  };
} BombillaStackVariable;

typedef struct {
  uint8_t sp;
  BombillaStackVariable stack[BOMB_OPDEPTH];
} BombillaOperandStack;
   	 
typedef struct {
  //  uint32_t indexes;
  //uint8_t counter;
} BombillaBiBaSignature;

typedef uint32_t b_capsule_version;

typedef struct {
  b_capsule_version version;
  uint8_t type;
  uint8_t options;
  int8_t code[BOMB_PGMSIZE];
  BombillaBiBaSignature signature;
} BombillaCapsule;

typedef struct {
  bool haveSeen;
  uint8_t usedVars[(BOMB_HEAPSIZE + 7) / 8];
  BombillaCapsule capsule;
} BombillaCapsuleBuffer;

typedef struct {
  BombillaCapsuleBuffer* capsule;
  uint8_t pc;
} BombillaReturnVariable;

typedef struct {
  uint8_t sp;
  BombillaReturnVariable stack[BOMB_CALLDEPTH];
} BombillaReturnStack;

typedef struct {
  uint16_t pc;
  uint8_t state;
  BombillaCapsuleBuffer rootCapsule;
  BombillaCapsuleBuffer* currentCapsule;
  uint8_t which;
  uint8_t heldSet[(BOMB_HEAPSIZE + 7) / 8];
  uint8_t releaseSet[(BOMB_HEAPSIZE + 7) / 8];
  uint8_t acquireSet[(BOMB_HEAPSIZE + 7) / 8];
  BombillaOperandStack opStack;
  list_link_t link;
  BombillaQueue* queue;
} BombillaContext;

typedef struct {
  BombillaContext* holder;
} BombillaLock;

typedef struct BombillaErrorMsg {
  uint8_t context;
  uint8_t reason;
  uint8_t capsule;
  uint8_t instruction;
} BombillaErrorMsg;

typedef struct BombillaCapsuleMsg {
  BombillaCapsule capsule;
} BombillaCapsuleMsg;

typedef struct BombillaPacketMsg {
  int8_t header[BOMB_HEADERSIZE];
  BombillaDataBuffer payload;
} BombillaPacket;

typedef enum {
  BOMB_VERSION_VECTOR = 0,
  BOMB_VERSION_PROGRAM = 1
} BombillaVersionMsgType;

typedef struct BombillaVersionMsg {
  uint8_t type;
  b_capsule_version versions[BOMB_CAPSULE_NUM];
  BombillaBiBaSignature signature;
} BombillaVersionMsg;

#endif
