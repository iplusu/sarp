#ifndef GLOBALS_H
#define GLOBALS_H
//#define TRUSTVALUES
//#define PREDICTABLE
//#define SARP04

#ifndef FALSE
#define FALSE	0
#endif

#ifndef TRUE
#define TRUE	1
#endif

#ifndef NONE
#define NONE 3
#endif

enum {
    CIRCULAR_BUFFER_SIZE               =  32,
    MAX_NEIGHBORS                       = 50,
    MAX_ONE_HOP_NEIGHBORS               = MAX_NEIGHBORS,
    MAX_OTHER_NEIGHBORS                 = MAX_NEIGHBORS,
};

#endif

