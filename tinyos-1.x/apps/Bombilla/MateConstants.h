#ifndef BOMBILLA_CONSTANTS_H_INCLUDED
#define BOMBILLA_CONSTANTS_H_INCLUDED

typedef enum {
  MATE_OPTION_FORWARD     = 0x80,
  MATE_OPTION_FORCE       = 0x40,
  MATE_OPTION_MASK        = 0x3f,
} MateCapsuleOption;

typedef enum {
  MATE_CONTEXT_TIMER0	 = unique("MateContextConstant"),
  MATE_CONTEXT_ONCE	 = unique("MateContextConstant"),
  MATE_CONTEXT_NUM	 = unique("MateContextConstant"),
  MATE_CONTEXT_INVALID = 255
} MateContextType;
typedef enum {
  MATE_CAPSULE_TIMER0	 = unique("MateCapsuleConstant"),
  MATE_CAPSULE_ONCE	 = unique("MateCapsuleConstant"),
  MATE_CAPSULE_NUM	 = unique("MateCapsuleConstant"),
  MATE_CAPSULE_INVALID = 255
} MateCapsuleType;

enum {
  MATE_CALLDEPTH    = 8,
  MATE_OPDEPTH      = 16,
  MATE_HEAPSIZE     = uniqueCount("MateLock"),
  MATE_MAX_PARALLEL = 4,
  MATE_NUM_YIELDS   = 4,
  MATE_HEADERSIZES  = 3,
  MATE_HEADERSIZE   = 6,
  MATE_BUF_LEN      = 10,
  MATE_PGMSIZE      = 240,
  MATE_BUF_NUM      = 2
} MateSizeConstants;

typedef enum {
  MATE_DATA_NONE    = unique("MateSensorType"),
  MATE_DATA_VALUE   = unique("MateSensorType"),
  MATE_DATA_PHOTO   = unique("MateSensorType"),
  MATE_DATA_TEMP    = unique("MateSensorType"),
  MATE_DATA_MIC     = unique("MateSensorType"),
  MATE_DATA_MAGX    = unique("MateSensorType"),
  MATE_DATA_MAGY    = unique("MateSensorType"),
  MATE_DATA_ACCELX  = unique("MateSensorType"),
  MATE_DATA_ACCELY  = unique("MateSensorType"),
  MATE_DATA_END     = unique("MateSensorType")
} MateSensorType;

typedef enum {
  MATE_TYPE_INVALID = 0,
  MATE_TYPE_VALUE   = (1 << unique("MateDataType")),
  MATE_TYPE_BUFFER  = (1 << unique("MateDataType")),
  MATE_TYPE_SENSE   = (1 << unique("MateDataType"))
} MateDataType;

typedef enum {
  MATE_VAR_V = MATE_TYPE_VALUE,
  MATE_VAR_B = MATE_TYPE_BUFFER,
  MATE_VAR_S = MATE_TYPE_SENSE,
  MATE_VAR_VB = MATE_VAR_V | MATE_VAR_B,
  MATE_VAR_VS = MATE_VAR_V | MATE_VAR_S,
  MATE_VAR_SB = MATE_VAR_B | MATE_VAR_S,
  MATE_VAR_VSB = MATE_VAR_B | MATE_VAR_S | MATE_VAR_V,
  MATE_VAR_ALL = MATE_VAR_B | MATE_VAR_S | MATE_VAR_V
} MateDataCondensed;

typedef enum {
  MATE_STATE_HALT        = unique("MateState"),
  MATE_STATE_SENDING     = unique("MateState"),
  MATE_STATE_LOG         = unique("MateState"),
  MATE_STATE_SENSE       = unique("MateState"),
  MATE_STATE_SEND_WAIT   = unique("MateState"),
  MATE_STATE_LOG_WAIT    = unique("MateState"),
  MATE_STATE_SENSE_WAIT  = unique("MateState"),
  MATE_STATE_LOCK_WAIT   = unique("MateState"),
  MATE_STATE_RESUMING    = unique("MateState"),
  MATE_STATE_RUN         = unique("MateState")
} MateContextState;

typedef enum {
  MATE_ERROR_TRIGGERED                =  unique("MateError"),
  MATE_ERROR_INVALID_RUNNABLE         =  unique("MateError"),
  MATE_ERROR_STACK_OVERFLOW           =  unique("MateError"),
  MATE_ERROR_STACK_UNDERFLOW          =  unique("MateError"),
  MATE_ERROR_BUFFER_OVERFLOW          =  unique("MateError"),
  MATE_ERROR_BUFFER_UNDERFLOW         =  unique("MateError"),
  MATE_ERROR_INDEX_OUT_OF_BOUNDS      =  unique("MateError"),
  MATE_ERROR_INSTRUCTION_RUNOFF       =  unique("MateError"),
  MATE_ERROR_LOCK_INVALID             =  unique("MateError"),
  MATE_ERROR_LOCK_STEAL               =  unique("MateError"),
  MATE_ERROR_UNLOCK_INVALID           = unique("MateError"),
  MATE_ERROR_QUEUE_ENQUEUE            = unique("MateError"),
  MATE_ERROR_QUEUE_DEQUEUE            = unique("MateError"),
  MATE_ERROR_QUEUE_REMOVE             = unique("MateError"),
  MATE_ERROR_QUEUE_INVALID            = unique("MateError"),
  MATE_ERROR_RSTACK_OVERFLOW          = unique("MateError"),
  MATE_ERROR_RSTACK_UNDERFLOW         = unique("MateError"),
  MATE_ERROR_INVALID_ACCESS           = unique("MateError"),
  MATE_ERROR_TYPE_CHECK               = unique("MateError"),
  MATE_ERROR_INVALID_TYPE             = unique("MateError"),
  MATE_ERROR_INVALID_LOCK             = unique("MateError"),
  MATE_ERROR_INVALID_INSTRUCTION      = unique("MateError"),
  MATE_ERROR_INVALID_SENSOR           = unique("MateError")
} MateErrorCode;

typedef enum {
  MATE_MAX_NET_ACTIVITY  = 64,
  MATE_PROPAGATE_TIMER   = 737,
  MATE_PROPAGATE_FACTOR  = 0x7f   // 127
} MateCapsulePropagateConstants;

enum {
  AM_MATEROUTEMSG         = 0x1b,
  AM_MATEVERSIONMSG       = 0x1c,
  AM_MATEERRORMSG         = 0x1d,
  AM_MATECAPSULEMSG       = 0x1e,
  AM_MATEPACKETMSG        = 0x1f,
  AM_MATECAPSULECHUNKMSG  = 0x20,
  AM_MATECAPSULESTATUSMSG = 0x21,
};

typedef enum {
// instruction set,
  OPadd	= 0x0,
  OPsub	= 0x1,
  OPhalt	= 0x2,
  OPland	= 0x3,
  OPlor	= 0x4,
  OPor	= 0x5,
  OPand	= 0x6,
  OPnot	= 0x7,
  OPlnot	= 0x8,
  OPdiv	= 0x9,
  OPbtail	= 0xa,
  OPeqv	= 0xb,
  OPexp	= 0xc,
  OPimp	= 0xd,
  OPlxor	= 0xe,
  OPmod	= 0xf,
  OPmul	= 0x10,
  OPbread	= 0x11,
  OPbwrite	= 0x12,
  OPpop	= 0x13,
  OPeq	= 0x14,
  OPgte	= 0x15,
  OPgt	= 0x16,
  OPlt	= 0x17,
  OPlte	= 0x18,
  OPneq	= 0x19,
  OPcopy	= 0x1a,
  OPinv	= 0x1b,
  OPputled	= 0x1c,
  OPsend	= 0x1d,
  OPlight	= 0x1e,
  OPtemp	= 0x1f,
  OPbclear	= 0x20,
  OPbufsorta	= 0x21,
  OPbufsortd	= 0x22,
  OPbfull	= 0x23,
  OPbsize	= 0x24,
  OPcast	= 0x25,
  OPid	= 0x26,
  OPuart	= 0x27,
  OPrand	= 0x28,
  OPsettimer0	= 0x29,
  OPbpush1	= 0x2a,
  OP2pushc10	= 0x2c,
  OP2jumps10	= 0x30,
  OPgetlocal3	= 0x38,
  OPsetlocal3	= 0x40,
  OPgetvar4	= 0x50,
  OPsetvar4	= 0x60,
  OPpushc6	= 0x80
} MateInstruction;


/*
 * MVirus uses the Trickle algorithm for code propagation and maintenance.
 * A full description and evaluation of the algorithm can be found in
 *
 * Philip Levis, Neil Patel, David Culler, and Scott Shenker.
 * "Trickle: A Self-Regulating Algorithm for Code Propagation and Maintenance
 * in Wireless Sensor Networks." In Proceedings of the First USENIX/ACM
 * Symposium on Networked Systems Design and Implementation (NSDI 2004).
 *
 * A copy of the paper can be downloaded from Phil Levis' web site:
 *        http://www.cs.berkeley.edu/~pal/
 *
 * A brief description of the algorithm can be found in the comments
 * at the head of MVirus.nc.
 *
 */

typedef enum {
  /* These first two constants define the granularity at which t values
     are calculated (in ms). Version vectors and capsules have separate
     timers, as version timers decay (lengthen) while capsules timers
     are constant, as they are not a continuous process.*/
  MVIRUS_VERSION_TIMER = 100,           // The units of time (ms)
  MVIRUS_CAPSULE_TIMER = 100,           // The units of time (ms)

  /* These constants define how many times a capsule is transmitted,
     the timer interval for Trickle suppression, and the redundancy constant
     k. Due to inherent loss, having a repeat > 1 is preferrable, although
     it should be small. It's better to broadcast the data twice rather
     than require another metadata announcement to trigger another
     transmission. It's not clear whether REDUNDANCY should be > or = to
     REPEAT. In either case, both constants should be small (e.g, 2-4). */
  
  MVIRUS_CAPSULE_REPEAT = 2,            // How many times to repeat a capsule
  MVIRUS_CAPSULE_TAU = 10,              // Capsules have a fixed tau
  MVIRUS_CAPSULE_REDUNDANCY = 2,        // Capsule redundancy (suppression pt.)

  /* These constants define the minimum and maximum tau values for
     version vector exchange, as well as the version vector redundancy
     constant k. Note that the tau values are in terms of multiples
     of the TIMER value above (e.g., a MIN of 10 and a TIMER of 100
     means a MIN of 1000 ms, or one second). */
  MVIRUS_VERSION_TAU_MIN = 10,          // Version scaling tau minimum
  MVIRUS_VERSION_TAU_MAX = 600,         // Version scaling tau maximum
  MVIRUS_VERSION_REDUNDANCY = 1,        // Version redundancy (suppression pt.)
  
  /* These constants are all for sending data larger than a single
     packet; they define the size of a program chunk, bitmasks, etc.*/
  MVIRUS_CHUNK_HEADER_SIZE = 8,
  MVIRUS_CHUNK_SIZE = TOSH_DATA_LENGTH - MVIRUS_CHUNK_HEADER_SIZE,
  MVIRUS_BITMASK_ENTRIES = ((MATE_PGMSIZE + MVIRUS_CHUNK_SIZE - 1) / MVIRUS_CHUNK_SIZE),
  MVIRUS_BITMASK_SIZE = (MVIRUS_BITMASK_ENTRIES + 7) / 8,
} MVirusConstants;

#endif
