#define nx_struct struct
#define nx_union union
# 37 "/usr/include/stdint.h"
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__ 
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__ 
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h"
typedef long int __gwchar_t;
# 292 "/usr/include/inttypes.h" 3
#line 288
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
# 385 "/usr/lib/ncc/nesc_nx.h"
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3
typedef unsigned int size_t;
# 38 "/usr/include/string.h"
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 59
extern void *memset(void *__s, int __c, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 87 "/usr/include/string.h" 3
extern char *strncpy(char *__restrict __dest, 
const char *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;









extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;

extern int strncmp(const char *__s1, const char *__s2, size_t __n) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 199
extern char *strtok(char *__restrict __s, const char *__restrict __delim) 
__attribute((__nothrow__)) __attribute((__nonnull__(2))) ;
#line 256
extern char *strerror(int __errnum) __attribute((__nothrow__)) ;
#line 296
extern void bzero(void *__s, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3
typedef long int wchar_t;
# 102 "/usr/include/stdlib.h" 3
#line 98
typedef struct __nesc_unnamed4243 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4244 {

  long int quot;
  long int rem;
} ldiv_t;
#line 145
extern double atof(const char *__nptr) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;

extern int atoi(const char *__nptr) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;








__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
#line 305
__extension__ 







__extension__ 
# 34 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ 
#line 50
typedef signed long long int __int64_t;
__extension__ 
#line 51
typedef unsigned long long int __uint64_t;







__extension__ 
#line 59
typedef long long int __quad_t;
__extension__ 
#line 60
typedef unsigned long long int __u_quad_t;
#line 137
__extension__ 
#line 137
typedef __u_quad_t __dev_t;
__extension__ 
#line 138
typedef unsigned int __uid_t;
__extension__ 
#line 139
typedef unsigned int __gid_t;
__extension__ 
#line 140
typedef unsigned long int __ino_t;
__extension__ 
#line 141
typedef __u_quad_t __ino64_t;
__extension__ 
#line 142
typedef unsigned int __mode_t;
__extension__ 
#line 143
typedef unsigned int __nlink_t;
__extension__ 
#line 144
typedef long int __off_t;
__extension__ 
#line 145
typedef __quad_t __off64_t;
__extension__ 
#line 146
typedef int __pid_t;
__extension__ 
#line 147
typedef struct __nesc_unnamed4245 {
#line 147
  int __val[2];
} 
#line 147
__fsid_t;
__extension__ 
#line 148
typedef long int __clock_t;
__extension__ 
#line 149
typedef unsigned long int __rlim_t;
__extension__ 
#line 150
typedef __u_quad_t __rlim64_t;
__extension__ 
#line 151
typedef unsigned int __id_t;
__extension__ 
#line 152
typedef long int __time_t;
__extension__ 
#line 153
typedef unsigned int __useconds_t;
__extension__ 
#line 154
typedef long int __suseconds_t;

__extension__ 
#line 156
typedef int __daddr_t;
__extension__ 
#line 157
typedef long int __swblk_t;
__extension__ 
#line 158
typedef int __key_t;


__extension__ 
#line 161
typedef int __clockid_t;


__extension__ 
#line 164
typedef void *__timer_t;


__extension__ 
#line 167
typedef long int __blksize_t;




__extension__ 
#line 172
typedef long int __blkcnt_t;
__extension__ 
#line 173
typedef __quad_t __blkcnt64_t;


__extension__ 
#line 176
typedef unsigned long int __fsblkcnt_t;
__extension__ 
#line 177
typedef __u_quad_t __fsblkcnt64_t;


__extension__ 
#line 180
typedef unsigned long int __fsfilcnt_t;
__extension__ 
#line 181
typedef __u_quad_t __fsfilcnt64_t;

__extension__ 
#line 183
typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ 
#line 192
typedef int __intptr_t;


__extension__ 
#line 195
typedef unsigned int __socklen_t;
# 35 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 62
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 100
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 77 "/usr/include/time.h"
typedef __time_t time_t;
#line 93
typedef __clockid_t clockid_t;
#line 105
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h"
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 23 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;







#line 28
typedef struct __nesc_unnamed4246 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 121 "/usr/include/time.h"
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 69 "/usr/include/bits/time.h"
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 78
#line 67
typedef struct __nesc_unnamed4247 {







  __fd_mask __fds_bits[1024 / (8 * sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
#line 109
extern int select(int __nfds, fd_set *__restrict __readfds, 
fd_set *__restrict __writefds, 
fd_set *__restrict __exceptfds, 
struct timeval *__restrict __timeout);
# 29 "/usr/include/sys/sysmacros.h"
__extension__ 


__extension__ 


__extension__ 





__extension__ 





__extension__ 





__extension__ 
# 235 "/usr/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 36 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;






#line 39
typedef union __nesc_unnamed4248 {

  char __size[36];
  long int __align;
} pthread_attr_t;





#line 46
typedef struct __pthread_internal_slist {

  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 73
#line 54
typedef union __nesc_unnamed4249 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union  {

      int __spins;
      __pthread_slist_t __list;
    } ;
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;





#line 75
typedef union __nesc_unnamed4250 {

  char __size[4];
  long int __align;
} pthread_mutexattr_t;
#line 99
#line 84
typedef union __nesc_unnamed4251 {

  struct __nesc_unnamed4252 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 101
typedef union __nesc_unnamed4253 {

  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 139
#line 119
typedef union __nesc_unnamed4254 {

  struct __nesc_unnamed4255 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;





#line 141
typedef union __nesc_unnamed4256 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 156
typedef union __nesc_unnamed4257 {

  char __size[20];
  long int __align;
} pthread_barrier_t;





#line 162
typedef union __nesc_unnamed4258 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 467 "/usr/include/stdlib.h"
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 498
extern int rand(void ) __attribute((__nothrow__)) ;

extern void srand(unsigned int __seed) __attribute((__nothrow__)) ;
#line 536
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 589
extern void *malloc(size_t __size) __attribute((__nothrow__)) __attribute((__malloc__)) ;

extern void *calloc(size_t __nmemb, size_t __size) 
__attribute((__nothrow__)) __attribute((__malloc__)) ;










extern void free(void *__ptr) __attribute((__nothrow__)) ;
#line 646
extern void exit(int __status) __attribute((__nothrow__)) __attribute((__noreturn__)) ;
# 660 "/usr/include/stdlib.h" 3
extern char *getenv(const char *__name) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 764
typedef int (*__compar_fn_t)(const void *, const void *);
# 291 "/usr/include/math.h" 3
#line 284
typedef enum __nesc_unnamed4259 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 309
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 152 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
# 48 "/usr/include/ctype.h"
enum __nesc_unnamed4260 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 91 "/opt/tinyos-1.x/tos/system/tos.h"
typedef unsigned char bool;






enum __nesc_unnamed4261 {
  FALSE = 0, 
  TRUE = 1
};

uint16_t TOS_LOCAL_ADDRESS = 1;

enum __nesc_unnamed4262 {
  FAIL = 0, 
  SUCCESS = 1
};


static inline uint8_t rcombine(uint8_t r1, uint8_t r2);
typedef uint8_t result_t  ;







static inline result_t rcombine(result_t r1, result_t r2);
#line 140
enum __nesc_unnamed4263 {
  NULL = 0x0
};
# 46 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 62
typedef struct _IO_FILE __FILE;
# 355 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3
typedef unsigned int wint_t;
# 84 "/usr/include/wchar.h" 3
#line 76
typedef struct __nesc_unnamed4264 {

  int __count;
  union __nesc_unnamed4265 {

    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 30 "/usr/include/_G_config.h"
#line 26
typedef struct __nesc_unnamed4266 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 31
typedef struct __nesc_unnamed4267 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 37 "/usr/include/gconv.h"
enum __nesc_unnamed4268 {

  __GCONV_OK = 0, 
  __GCONV_NOCONV, 
  __GCONV_NODB, 
  __GCONV_NOMEM, 

  __GCONV_EMPTY_INPUT, 
  __GCONV_FULL_OUTPUT, 
  __GCONV_ILLEGAL_INPUT, 
  __GCONV_INCOMPLETE_INPUT, 

  __GCONV_ILLEGAL_DESCRIPTOR, 
  __GCONV_INTERNAL_ERROR
};



enum __nesc_unnamed4269 {

  __GCONV_IS_LAST = 0x0001, 
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct)(struct __gconv_step *, struct __gconv_step_data *, 
const unsigned char **, const unsigned char *, 
unsigned char **, size_t *, int , int );


typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step *, unsigned char );


typedef int (*__gconv_init_fct)(struct __gconv_step *);
typedef void (*__gconv_end_fct)(struct __gconv_step *);



typedef int (*__gconv_trans_fct)(struct __gconv_step *, 
struct __gconv_step_data *, void *, 
const unsigned char *, 
const unsigned char **, 
const unsigned char *, unsigned char **, 
size_t *);


typedef int (*__gconv_trans_context_fct)(void *, const unsigned char *, 
const unsigned char *, 
unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct)(const char *, const char ***, 
size_t *);


typedef int (*__gconv_trans_init_fct)(void **, const char *);
typedef void (*__gconv_trans_end_fct)(void *);

struct __gconv_trans_data {


  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step {

  struct __gconv_loaded_object *__shlib_handle;
  const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data {

  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};








#line 172
typedef struct __gconv_info {

  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data[];
} *__gconv_t;
# 53 "/usr/include/_G_config.h"
#line 45
typedef union __nesc_unnamed4270 {

  struct __gconv_info __cd;
  struct __nesc_unnamed4271 {

    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 167 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 167
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 203
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 268
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 361
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
#line 451
extern int _IO_getc(_IO_FILE *__fp);
# 88 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t;
# 142 "/usr/include/stdio.h"
struct _IO_FILE;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 213 "/usr/include/stdio.h" 3
extern int fclose(FILE *__stream);
#line 248
extern FILE *fopen(const char *__restrict __filename, 
const char *__restrict __modes);
#line 280
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__nothrow__)) ;
#line 327
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 357
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;

extern int vsnprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, __gnuc_va_list __arg) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 0))) ;
#line 399
extern int fscanf(FILE *__restrict __stream, 
const char *__restrict __format, ...);
# 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
# 75 "/usr/include/signal.h" 3
typedef void (*__sighandler_t)(int );
#line 92
extern __sighandler_t signal(int __sig, __sighandler_t __handler) 
__attribute((__nothrow__)) ;
#line 201
typedef __sighandler_t sig_t;
# 37 "/usr/include/bits/siginfo.h"
#line 33
typedef union sigval {

  int sival_int;
  void *sival_ptr;
} sigval_t;
#line 108
#line 51
typedef struct siginfo {

  int si_signo;
  int si_errno;

  int si_code;

  union __nesc_unnamed4272 {

    int _pad[128 / sizeof(int ) - 3];


    struct __nesc_unnamed4273 {

      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;


    struct __nesc_unnamed4274 {

      int si_tid;
      int si_overrun;
      sigval_t si_sigval;
    } _timer;


    struct __nesc_unnamed4275 {

      __pid_t si_pid;
      __uid_t si_uid;
      sigval_t si_sigval;
    } _rt;


    struct __nesc_unnamed4276 {

      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __clock_t si_utime;
      __clock_t si_stime;
    } _sigchld;


    struct __nesc_unnamed4277 {

      void *si_addr;
    } _sigfault;


    struct __nesc_unnamed4278 {

      long int si_band;
      int si_fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
#line 129
enum __nesc_unnamed4279 {

  SI_ASYNCNL = -60, 

  SI_TKILL = -6, 

  SI_SIGIO, 

  SI_ASYNCIO, 

  SI_MESGQ, 

  SI_TIMER, 

  SI_QUEUE, 

  SI_USER, 

  SI_KERNEL = 0x80
};




enum __nesc_unnamed4280 {

  ILL_ILLOPC = 1, 

  ILL_ILLOPN, 

  ILL_ILLADR, 

  ILL_ILLTRP, 

  ILL_PRVOPC, 

  ILL_PRVREG, 

  ILL_COPROC, 

  ILL_BADSTK
};



enum __nesc_unnamed4281 {

  FPE_INTDIV = 1, 

  FPE_INTOVF, 

  FPE_FLTDIV, 

  FPE_FLTOVF, 

  FPE_FLTUND, 

  FPE_FLTRES, 

  FPE_FLTINV, 

  FPE_FLTSUB
};



enum __nesc_unnamed4282 {

  SEGV_MAPERR = 1, 

  SEGV_ACCERR
};



enum __nesc_unnamed4283 {

  BUS_ADRALN = 1, 

  BUS_ADRERR, 

  BUS_OBJERR
};



enum __nesc_unnamed4284 {

  TRAP_BRKPT = 1, 

  TRAP_TRACE
};



enum __nesc_unnamed4285 {

  CLD_EXITED = 1, 

  CLD_KILLED, 

  CLD_DUMPED, 

  CLD_TRAPPED, 

  CLD_STOPPED, 

  CLD_CONTINUED
};



enum __nesc_unnamed4286 {

  POLL_IN = 1, 

  POLL_OUT, 

  POLL_MSG, 

  POLL_ERR, 

  POLL_PRI, 

  POLL_HUP
};
#line 293
#line 273
typedef struct sigevent {

  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;

  union __nesc_unnamed4287 {

    int _pad[64 / sizeof(int ) - 3];



    __pid_t _tid;

    struct __nesc_unnamed4288 {

      void (*_function)(sigval_t );
      void *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;






enum __nesc_unnamed4289 {

  SIGEV_SIGNAL = 0, 

  SIGEV_NONE, 

  SIGEV_THREAD, 


  SIGEV_THREAD_ID = 4
};
# 216 "/usr/include/signal.h"
extern int sigemptyset(sigset_t *__set) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 25 "/usr/include/bits/sigaction.h"
struct sigaction {



  union __nesc_unnamed4290 {


    __sighandler_t sa_handler;

    void (*sa_sigaction)(int , siginfo_t *, void *);
  } 
  __sigaction_handler;







  __sigset_t sa_mask;


  int sa_flags;


  void (*sa_restorer)(void );
};
# 260 "/usr/include/signal.h"
extern int sigaction(int __sig, const struct sigaction *__restrict __act, 
struct sigaction *__restrict __oact) __attribute((__nothrow__)) ;
#line 308
struct sigvec {

  __sighandler_t sv_handler;
  int sv_mask;

  int sv_flags;
};
# 19 "/usr/include/asm/sigcontext.h"
struct _fpreg {
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg {
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg {
  unsigned long element[4];
};

struct _fpstate {

  unsigned long cw;
  unsigned long sw;
  unsigned long tag;
  unsigned long ipoff;
  unsigned long cssel;
  unsigned long dataoff;
  unsigned long datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;


  unsigned long _fxsr_env[6];
  unsigned long mxcsr;
  unsigned long reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  unsigned long padding[56];
};



struct sigcontext {
  unsigned short gs, __gsh;
  unsigned short fs, __fsh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs, __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss, __ssh;
  struct _fpstate *fpstate;
  unsigned long oldmask;
  unsigned long cr2;
};
# 26 "/usr/include/bits/sigstack.h"
struct sigstack {

  void *ss_sp;
  int ss_onstack;
};



enum __nesc_unnamed4291 {

  SS_ONSTACK = 1, 

  SS_DISABLE
};
#line 55
#line 50
typedef struct sigaltstack {

  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
# 62 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
enum __nesc_unnamed4292 {
  TOSNODES = 1000
};





enum __nesc_unnamed4293 {
  TOSSIM_RADIO_MODEL_SIMPLE = 0, 
  TOSSIM_RADIO_MODEL_LOSSY = 1, 
  TOSSIM_RADIO_MODEL_PACKET = 2
};
# 55 "/opt/tinyos-1.x/tos/platform/pc/heap_array.h"
#line 51
typedef struct __nesc_unnamed4294 {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long *key);
static inline void heap_insert(heap_t *heap, void *data, long long key);
# 65 "/usr/include/bits/sched.h" 3
struct sched_param {

  int __sched_priority;
};
#line 89
struct __sched_param {

  int __sched_priority;
};
#line 104
typedef unsigned long int __cpu_mask;









#line 111
typedef struct __nesc_unnamed4295 {

  __cpu_mask __bits[1024 / (8 * sizeof(__cpu_mask ))];
} cpu_set_t;
# 61 "/usr/include/time.h"
typedef __clock_t clock_t;
# 134 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 162
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#line 232
struct tm;



struct tm;





struct tm;




struct tm;
# 29 "/usr/include/bits/setjmp.h"
typedef int __jmp_buf[6];
# 35 "/usr/include/pthread.h"
enum __nesc_unnamed4296 {

  PTHREAD_CREATE_JOINABLE, 

  PTHREAD_CREATE_DETACHED
};




enum __nesc_unnamed4297 {

  PTHREAD_MUTEX_TIMED_NP, 
  PTHREAD_MUTEX_RECURSIVE_NP, 
  PTHREAD_MUTEX_ERRORCHECK_NP, 
  PTHREAD_MUTEX_ADAPTIVE_NP
};
# 114 "/usr/include/pthread.h" 3
enum __nesc_unnamed4298 {

  PTHREAD_RWLOCK_PREFER_READER_NP, 
  PTHREAD_RWLOCK_PREFER_WRITER_NP, 
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP, 
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
#line 146
enum __nesc_unnamed4299 {

  PTHREAD_INHERIT_SCHED, 

  PTHREAD_EXPLICIT_SCHED
};




enum __nesc_unnamed4300 {

  PTHREAD_SCOPE_SYSTEM, 

  PTHREAD_SCOPE_PROCESS
};




enum __nesc_unnamed4301 {

  PTHREAD_PROCESS_PRIVATE, 

  PTHREAD_PROCESS_SHARED
};









struct _pthread_cleanup_buffer {

  void (*__routine)(void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum __nesc_unnamed4302 {

  PTHREAD_CANCEL_ENABLE, 

  PTHREAD_CANCEL_DISABLE
};

enum __nesc_unnamed4303 {

  PTHREAD_CANCEL_DEFERRED, 

  PTHREAD_CANCEL_ASYNCHRONOUS
};
#line 224
extern int pthread_create(pthread_t *__restrict __newthread, 
const pthread_attr_t *__restrict __attr, 
void *(*__start_routine)(void *), 
void *__restrict __arg) __attribute((__nothrow__)) __attribute((__nonnull__(1, 3))) ;
#line 502
#line 494
typedef struct __nesc_unnamed4304 {

  struct __nesc_unnamed4305 {

    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute((__aligned__)) ;








struct __pthread_cleanup_frame {

  void (*__cancel_routine)(void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
#line 711
struct __jmp_buf_tag;






extern int pthread_mutex_init(pthread_mutex_t *__mutex, 
const pthread_mutexattr_t *__mutexattr) 
__attribute((__nothrow__)) __attribute((__nonnull__(1))) ;










extern int pthread_mutex_lock(pthread_mutex_t *__mutex) 
__attribute((__nothrow__)) __attribute((__nonnull__(1))) ;









extern int pthread_mutex_unlock(pthread_mutex_t *__mutex) 
__attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 925
extern int pthread_cond_init(pthread_cond_t *__restrict __cond, 
const pthread_condattr_t *__restrict 
__cond_attr) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;






extern int pthread_cond_signal(pthread_cond_t *__cond) 
__attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int pthread_cond_broadcast(pthread_cond_t *__cond) 
__attribute((__nothrow__)) __attribute((__nonnull__(1))) ;






extern int pthread_cond_wait(pthread_cond_t *__restrict __cond, 
pthread_mutex_t *__restrict __mutex) 
__attribute((__nonnull__(1, 2))) ;
# 63 "/opt/tinyos-1.x/tos/platform/pc/event_queue.h"
struct TOS_state;





#line 65
typedef struct event_queue {
  int pause;
  heap_t heap;
  pthread_mutex_t lock;
} event_queue_t;
#line 81
#line 71
typedef struct event {
  long long time;
  int mote;
  int pause;
  int force;

  void *data;

  void (*handle)(struct event *, struct TOS_state *);
  void (*cleanup)(struct event *);
} event_t;


static inline void queue_init(event_queue_t *queue, int fpause);
static void queue_insert_event(event_queue_t *queue, event_t *event);
static inline event_t *queue_pop_event(event_queue_t *queue);
static inline void queue_handle_next_event(event_queue_t *queue);
static inline int queue_is_empty(event_queue_t *queue);
static inline long long queue_peek_event_time(event_queue_t *queue);
# 62 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.h"
enum __nesc_unnamed4306 {
  NUM_NODES_ALLOC = 200
};







#line 67
typedef struct link {
  int mote;
  double data;
  char bit;
  struct link *next_link;
} link_t;


link_t *free_list;
int num_free_links;

static link_t *allocate_link(int mote);

static int adjacency_list_init(void);
# 69 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.h"
#line 62
typedef struct __nesc_unnamed4307 {
  void (*init)(void);
  void (*transmit)(int , char );
  void (*stop_transmit)(int );
  char (*hears)(int );
  bool (*connected)(int , int );
  link_t *(*neighbors)(int );
} rfm_model;


static inline rfm_model *create_simple_model(void);





static inline rfm_model *create_lossy_model(char *file);

static void static_one_cell_init(void);



static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);



extern link_t *radio_connectivity[TOSNODES];
# 63 "/opt/tinyos-1.x/tos/platform/pc/adc_model.h"
#line 59
typedef struct __nesc_unnamed4308 {
  void (*init)(void);

  uint16_t (*read)(int , uint8_t , long long );
} adc_model;

static inline adc_model *create_random_adc_model(void);
static inline adc_model *create_generic_adc_model(void);
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 62 "/opt/tinyos-1.x/tos/platform/pc/spatial_model.h"
#line 58
typedef struct __nesc_unnamed4309 {
  double xCoordinate;
  double yCoordinate;
  double zCoordinate;
} point3D;






#line 64
typedef struct __nesc_unnamed4310 {
  void (*init)(void);
  void (*get_position)(int , long long , point3D *);
} 

spatial_model;



static inline spatial_model *create_simple_spatial_model(void);
# 64 "/opt/tinyos-1.x/tos/platform/pc/nido_eeprom.h"
static inline int anonymousEEPROM(int numMotes, int eepromSize);
static inline int namedEEPROM(char *name, int numMotes, int eepromSize);
# 60 "/opt/tinyos-1.x/tos/platform/pc/events.h"
#line 55
typedef struct __nesc_unnamed4311 {
  int interval;
  int mote;
  int valid;
  int disabled;
} clock_tick_data_t;




#line 62
typedef struct __nesc_unnamed4312 {
  int valid;
  char port;
} adc_tick_data_t;





#line 67
typedef struct __nesc_unnamed4313 {
  int interval;
  int mote;
  int valid;
} radio_tick_data_t;





#line 73
typedef struct __nesc_unnamed4314 {
  int interval;
  int mote;
  int valid;
} channel_mon_data_t;







#line 79
typedef struct __nesc_unnamed4315 {
  int interval;
  int mote;
  int valid;
  int count;
  int ending;
} spi_byte_data_t;





#line 87
typedef struct __nesc_unnamed4316 {
  int interval;
  int mote;
  int valid;
} radio_timing_data_t;





static inline void event_default_cleanup(event_t *event);

static void event_total_cleanup(event_t *event);

static void event_clocktick_create(event_t *event, 
int mote, 
long long eventTime, 
int interval);

static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state);

static inline void event_clocktick_invalidate(event_t *event);
#line 134
void event_spi_byte_create(event_t *event, int mote, long long ftime, int interval, int count);
#line 146
static inline void event_cleanup(event_t *fevent);
# 49 "/opt/tinyos-1.x/tos/types/AM.h"
enum __nesc_unnamed4317 {
  TOS_BCAST_ADDR = 0xffff, 
  TOS_UART_ADDR = 0x007e
};





enum __nesc_unnamed4318 {
  TOS_DEFAULT_AM_GROUP = 0x7d
};

uint8_t TOS_AM_GROUP = TOS_DEFAULT_AM_GROUP;
#line 105
#line 84
typedef struct TOS_Msg {


  uint16_t addr;
  uint8_t type;
  uint8_t group;
  uint8_t length;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg;
#line 129
#line 107
typedef struct TOS_Msg_TinySecCompat {


  uint16_t addr;
  uint8_t type;

  uint8_t length;
  uint8_t group;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg_TinySecCompat;
#line 150
#line 131
typedef struct TinySec_Msg {

  uint16_t addr;
  uint8_t type;
  uint8_t length;

  uint8_t iv[4];

  uint8_t enc[29];

  uint8_t mac[4];


  uint8_t calc_mac[4];
  uint8_t ack_byte;
  bool cryptoDone;
  bool receiveDone;

  bool MACcomputed;
} __attribute((packed))  TinySec_Msg;



enum __nesc_unnamed4319 {
  MSG_DATA_SIZE = (unsigned int )& ((struct TOS_Msg *)0)->crc + sizeof(uint16_t ), 
  TINYSEC_MSG_DATA_SIZE = (unsigned int )& ((struct TinySec_Msg *)0)->mac + 4, 
  DATA_LENGTH = 29, 
  LENGTH_BYTE_NUMBER = (unsigned int )& ((struct TOS_Msg *)0)->length + 1, 
  TINYSEC_NODE_ID_SIZE = sizeof(uint16_t )
};

enum __nesc_unnamed4320 {
  TINYSEC_AUTH_ONLY = 1, 
  TINYSEC_ENCRYPT_AND_AUTH = 2, 
  TINYSEC_DISABLED = 3, 
  TINYSEC_RECEIVE_AUTHENTICATED = 4, 
  TINYSEC_RECEIVE_CRC = 5, 
  TINYSEC_RECEIVE_ANY = 6, 
  TINYSEC_ENABLED_BIT = 128, 
  TINYSEC_ENCRYPT_ENABLED_BIT = 64
} __attribute((packed)) ;


typedef TOS_Msg *TOS_MsgPtr;
# 57 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.h"
static inline void packet_sim_init(void);

void packet_sim_transmit_done(TOS_MsgPtr msg)   ;
void packet_sim_receive_msg(TOS_MsgPtr msg)   ;
# 57 "/usr/include/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 90 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
#line 87
typedef struct TOS_node_state {
  long long time;
  int pot_setting;
} TOS_node_state_t;
#line 111
#line 92
typedef struct TOS_state {
  long long tos_time;
  int radio_kb_rate;
  short num_nodes;
  short current_node;
  TOS_node_state_t node_state[TOSNODES];
  event_queue_t queue;
  uint8_t radioModel;
  rfm_model *rfm;
  adc_model *adc;
  spatial_model *space;
  bool moteOn[TOSNODES];
  bool cancelBoot[TOSNODES];


  bool paused;
  pthread_mutex_t pause_lock;
  pthread_cond_t pause_cond;
  pthread_cond_t pause_ack_cond;
} TOS_state_t;






extern TOS_state_t tos_state;




void set_sim_rate(uint32_t );
uint32_t get_sim_rate(void);
static void __nesc_nido_initialise(int mote);
# 54 "/opt/tinyos-1.x/tos/types/dbg_modes.h"
typedef long long TOS_dbg_mode;



enum __nesc_unnamed4321 {
  DBG_ALL = ~0ULL, 


  DBG_BOOT = 1ULL << 0, 
  DBG_CLOCK = 1ULL << 1, 
  DBG_TASK = 1ULL << 2, 
  DBG_SCHED = 1ULL << 3, 
  DBG_SENSOR = 1ULL << 4, 
  DBG_LED = 1ULL << 5, 
  DBG_CRYPTO = 1ULL << 6, 


  DBG_ROUTE = 1ULL << 7, 
  DBG_AM = 1ULL << 8, 
  DBG_CRC = 1ULL << 9, 
  DBG_PACKET = 1ULL << 10, 
  DBG_ENCODE = 1ULL << 11, 
  DBG_RADIO = 1ULL << 12, 


  DBG_LOG = 1ULL << 13, 
  DBG_ADC = 1ULL << 14, 
  DBG_I2C = 1ULL << 15, 
  DBG_UART = 1ULL << 16, 
  DBG_PROG = 1ULL << 17, 
  DBG_SOUNDER = 1ULL << 18, 
  DBG_TIME = 1ULL << 19, 
  DBG_POWER = 1ULL << 20, 



  DBG_SIM = 1ULL << 21, 
  DBG_QUEUE = 1ULL << 22, 
  DBG_SIMRADIO = 1ULL << 23, 
  DBG_HARD = 1ULL << 24, 
  DBG_MEM = 1ULL << 25, 



  DBG_USR1 = 1ULL << 27, 
  DBG_USR2 = 1ULL << 28, 
  DBG_USR3 = 1ULL << 29, 
  DBG_TEMP = 1ULL << 30, 

  DBG_ERROR = 1ULL << 31, 
  DBG_NONE = 0, 

  DBG_DEFAULT = DBG_ALL
};
# 130 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
static inline void tos_state_model_init(void );
# 48 "/opt/tinyos-1.x/tos/platform/pc/hardware.nido.h"
static inline void init_hardware(void);
#line 219
enum __nesc_unnamed4322 {
  TOSH_period16 = 0x00, 
  TOSH_period32 = 0x01, 
  TOSH_period64 = 0x02, 
  TOSH_period128 = 0x03, 
  TOSH_period256 = 0x04, 
  TOSH_period512 = 0x05, 
  TOSH_period1024 = 0x06, 
  TOSH_period2048 = 0x07
};



enum __nesc_unnamed4323 {

  TOSH_ACTUAL_CC_RSSI_PORT = 0, 
  TOSH_ACTUAL_VOLTAGE_PORT = 7, 
  TOSH_ACTUAL_BANDGAP_PORT = 30, 
  TOSH_ACTUAL_GND_PORT = 31
};

enum __nesc_unnamed4324 {

  TOS_ADC_CC_RSSI_PORT = 0, 
  TOS_ADC_VOLTAGE_PORT = 7, 
  TOS_ADC_BANDGAP_PORT = 10, 
  TOS_ADC_GND_PORT = 11
};
# 44 "/usr/include/bits/uio.h"
struct iovec {

  void *iov_base;
  size_t iov_len;
};
# 36 "/usr/include/bits/socket.h"
typedef __socklen_t socklen_t;




enum __socket_type {

  SOCK_STREAM = 1, 


  SOCK_DGRAM = 2, 


  SOCK_RAW = 3, 

  SOCK_RDM = 4, 

  SOCK_SEQPACKET = 5, 


  SOCK_PACKET = 10
};
# 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short int sa_family_t;
# 145 "/usr/include/bits/socket.h"
struct sockaddr {

  sa_family_t sa_family;
  char sa_data[14];
};
#line 162
struct sockaddr_storage {

  sa_family_t ss_family;
  __uint32_t __ss_align;
  char __ss_padding[128 - 2 * sizeof(__uint32_t )];
};



enum __nesc_unnamed4325 {

  MSG_OOB = 0x01, 

  MSG_PEEK = 0x02, 

  MSG_DONTROUTE = 0x04, 






  MSG_CTRUNC = 0x08, 

  MSG_PROXY = 0x10, 

  MSG_TRUNC = 0x20, 

  MSG_DONTWAIT = 0x40, 

  MSG_EOR = 0x80, 

  MSG_WAITALL = 0x100, 

  MSG_FIN = 0x200, 

  MSG_SYN = 0x400, 

  MSG_CONFIRM = 0x800, 

  MSG_RST = 0x1000, 

  MSG_ERRQUEUE = 0x2000, 

  MSG_NOSIGNAL = 0x4000, 

  MSG_MORE = 0x8000
};





struct msghdr {

  void *msg_name;
  socklen_t msg_namelen;

  struct iovec *msg_iov;
  size_t msg_iovlen;

  void *msg_control;
  size_t msg_controllen;




  int msg_flags;
};


struct cmsghdr {

  size_t cmsg_len;




  int cmsg_level;
  int cmsg_type;

  __extension__ unsigned char __cmsg_data[];
};
#line 263
struct cmsghdr;
# 290 "/usr/include/bits/socket.h" 3
enum __nesc_unnamed4326 {

  SCM_RIGHTS = 0x01, 


  SCM_CREDENTIALS = 0x02
};





struct ucred {

  pid_t pid;
  uid_t uid;
  gid_t gid;
};
# 314 "/usr/include/bits/socket.h"
struct linger {

  int l_onoff;
  int l_linger;
};
# 40 "/usr/include/sys/socket.h"
struct osockaddr {

  unsigned short int sa_family;
  unsigned char sa_data[14];
};




enum __nesc_unnamed4327 {

  SHUT_RD = 0, 

  SHUT_WR, 

  SHUT_RDWR
};
# 100 "/usr/include/sys/socket.h" 3
extern int socket(int __domain, int __type, int __protocol) __attribute((__nothrow__)) ;









extern int bind(int __fd, const struct sockaddr *__addr, socklen_t __len) 
__attribute((__nothrow__)) ;
#line 136
extern ssize_t send(int __fd, const void *__buf, size_t __n, int __flags);
#line 192
extern int setsockopt(int __fd, int __level, int __optname, 
const void *__optval, socklen_t __optlen) __attribute((__nothrow__)) ;





extern int listen(int __fd, int __n) __attribute((__nothrow__)) ;









extern int accept(int __fd, struct sockaddr *__restrict __addr, 
socklen_t *__restrict __addr_len);
# 31 "/usr/include/netinet/in.h"
enum __nesc_unnamed4328 {

  IPPROTO_IP = 0, 

  IPPROTO_HOPOPTS = 0, 

  IPPROTO_ICMP = 1, 

  IPPROTO_IGMP = 2, 

  IPPROTO_IPIP = 4, 

  IPPROTO_TCP = 6, 

  IPPROTO_EGP = 8, 

  IPPROTO_PUP = 12, 

  IPPROTO_UDP = 17, 

  IPPROTO_IDP = 22, 

  IPPROTO_TP = 29, 

  IPPROTO_IPV6 = 41, 

  IPPROTO_ROUTING = 43, 

  IPPROTO_FRAGMENT = 44, 

  IPPROTO_RSVP = 46, 

  IPPROTO_GRE = 47, 

  IPPROTO_ESP = 50, 

  IPPROTO_AH = 51, 

  IPPROTO_ICMPV6 = 58, 

  IPPROTO_NONE = 59, 

  IPPROTO_DSTOPTS = 60, 

  IPPROTO_MTP = 92, 

  IPPROTO_ENCAP = 98, 

  IPPROTO_PIM = 103, 

  IPPROTO_COMP = 108, 

  IPPROTO_SCTP = 132, 

  IPPROTO_RAW = 255, 

  IPPROTO_MAX
};



typedef uint16_t in_port_t;


enum __nesc_unnamed4329 {

  IPPORT_ECHO = 7, 
  IPPORT_DISCARD = 9, 
  IPPORT_SYSTAT = 11, 
  IPPORT_DAYTIME = 13, 
  IPPORT_NETSTAT = 15, 
  IPPORT_FTP = 21, 
  IPPORT_TELNET = 23, 
  IPPORT_SMTP = 25, 
  IPPORT_TIMESERVER = 37, 
  IPPORT_NAMESERVER = 42, 
  IPPORT_WHOIS = 43, 
  IPPORT_MTP = 57, 

  IPPORT_TFTP = 69, 
  IPPORT_RJE = 77, 
  IPPORT_FINGER = 79, 
  IPPORT_TTYLINK = 87, 
  IPPORT_SUPDUP = 95, 


  IPPORT_EXECSERVER = 512, 
  IPPORT_LOGINSERVER = 513, 
  IPPORT_CMDSERVER = 514, 
  IPPORT_EFSSERVER = 520, 


  IPPORT_BIFFUDP = 512, 
  IPPORT_WHOSERVER = 513, 
  IPPORT_ROUTESERVER = 520, 


  IPPORT_RESERVED = 1024, 


  IPPORT_USERRESERVED = 5000
};



typedef uint32_t in_addr_t;
struct in_addr {

  in_addr_t s_addr;
};
#line 193
struct in6_addr {

  union __nesc_unnamed4330 {

    uint8_t u6_addr8[16];
    uint16_t u6_addr16[8];
    uint32_t u6_addr32[4];
  } in6_u;
};




struct in6_addr;
struct in6_addr;
#line 219
struct sockaddr_in {

  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;


  unsigned char sin_zero

  [
#line 226
  sizeof(struct sockaddr ) - 
  sizeof(unsigned short int ) - 
  sizeof(in_port_t ) - 
  sizeof(struct in_addr )];
};


struct sockaddr_in6 {

  sa_family_t sin6_family;
  in_port_t sin6_port;
  uint32_t sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t sin6_scope_id;
};



struct ip_mreq {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;
};

struct ip_mreq_source {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;


  struct in_addr imr_sourceaddr;
};


struct ipv6_mreq {


  struct in6_addr ipv6mr_multiaddr;


  unsigned int ipv6mr_interface;
};



struct group_req {


  uint32_t gr_interface;


  struct sockaddr_storage gr_group;
};

struct group_source_req {


  uint32_t gsr_interface;


  struct sockaddr_storage gsr_group;


  struct sockaddr_storage gsr_source;
};



struct ip_msfilter {


  struct in_addr imsf_multiaddr;


  struct in_addr imsf_interface;


  uint32_t imsf_fmode;


  uint32_t imsf_numsrc;

  struct in_addr imsf_slist[1];
};





struct group_filter {


  uint32_t gf_interface;


  struct sockaddr_storage gf_group;


  uint32_t gf_fmode;


  uint32_t gf_numsrc;

  struct sockaddr_storage gf_slist[1];
};
# 82 "/usr/include/bits/in.h"
struct ip_opts {

  struct in_addr ip_dst;
  char ip_opts[40];
};


struct ip_mreqn {

  struct in_addr imr_multiaddr;
  struct in_addr imr_address;
  int imr_ifindex;
};


struct in_pktinfo {

  int ipi_ifindex;
  struct in_addr ipi_spec_dst;
  struct in_addr ipi_addr;
};
# 355 "/usr/include/netinet/in.h"
extern uint16_t ntohs(uint16_t __netshort) 
__attribute((__nothrow__)) __attribute((const)) ;
extern uint32_t htonl(uint32_t __hostlong) 
__attribute((__nothrow__)) __attribute((const)) ;
extern uint16_t htons(uint16_t __hostshort) 
__attribute((__nothrow__)) __attribute((const)) ;
# 456 "/usr/include/netinet/in.h" 3
struct in6_pktinfo {

  struct in6_addr ipi6_addr;
  unsigned int ipi6_ifindex;
};


struct ip6_mtuinfo {

  struct sockaddr_in6 ip6m_addr;
  uint32_t ip6m_mtu;
};
# 226 "/usr/include/unistd.h" 3
typedef __useconds_t useconds_t;
#line 301
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute((__nothrow__)) ;
#line 320
extern int close(int __fd);






extern ssize_t read(int __fd, void *__buf, size_t __nbytes);





extern ssize_t write(int __fd, const void *__buf, size_t __n);
#line 405
extern unsigned int sleep(unsigned int __seconds);
#line 420
extern int usleep(__useconds_t __useconds);
# 26 "/usr/include/bits/confname.h"
enum __nesc_unnamed4331 {

  _PC_LINK_MAX, 

  _PC_MAX_CANON, 

  _PC_MAX_INPUT, 

  _PC_NAME_MAX, 

  _PC_PATH_MAX, 

  _PC_PIPE_BUF, 

  _PC_CHOWN_RESTRICTED, 

  _PC_NO_TRUNC, 

  _PC_VDISABLE, 

  _PC_SYNC_IO, 

  _PC_ASYNC_IO, 

  _PC_PRIO_IO, 

  _PC_SOCK_MAXBUF, 

  _PC_FILESIZEBITS, 

  _PC_REC_INCR_XFER_SIZE, 

  _PC_REC_MAX_XFER_SIZE, 

  _PC_REC_MIN_XFER_SIZE, 

  _PC_REC_XFER_ALIGN, 

  _PC_ALLOC_SIZE_MIN, 

  _PC_SYMLINK_MAX, 

  _PC_2_SYMLINKS
};



enum __nesc_unnamed4332 {

  _SC_ARG_MAX, 

  _SC_CHILD_MAX, 

  _SC_CLK_TCK, 

  _SC_NGROUPS_MAX, 

  _SC_OPEN_MAX, 

  _SC_STREAM_MAX, 

  _SC_TZNAME_MAX, 

  _SC_JOB_CONTROL, 

  _SC_SAVED_IDS, 

  _SC_REALTIME_SIGNALS, 

  _SC_PRIORITY_SCHEDULING, 

  _SC_TIMERS, 

  _SC_ASYNCHRONOUS_IO, 

  _SC_PRIORITIZED_IO, 

  _SC_SYNCHRONIZED_IO, 

  _SC_FSYNC, 

  _SC_MAPPED_FILES, 

  _SC_MEMLOCK, 

  _SC_MEMLOCK_RANGE, 

  _SC_MEMORY_PROTECTION, 

  _SC_MESSAGE_PASSING, 

  _SC_SEMAPHORES, 

  _SC_SHARED_MEMORY_OBJECTS, 

  _SC_AIO_LISTIO_MAX, 

  _SC_AIO_MAX, 

  _SC_AIO_PRIO_DELTA_MAX, 

  _SC_DELAYTIMER_MAX, 

  _SC_MQ_OPEN_MAX, 

  _SC_MQ_PRIO_MAX, 

  _SC_VERSION, 

  _SC_PAGESIZE, 


  _SC_RTSIG_MAX, 

  _SC_SEM_NSEMS_MAX, 

  _SC_SEM_VALUE_MAX, 

  _SC_SIGQUEUE_MAX, 

  _SC_TIMER_MAX, 




  _SC_BC_BASE_MAX, 

  _SC_BC_DIM_MAX, 

  _SC_BC_SCALE_MAX, 

  _SC_BC_STRING_MAX, 

  _SC_COLL_WEIGHTS_MAX, 

  _SC_EQUIV_CLASS_MAX, 

  _SC_EXPR_NEST_MAX, 

  _SC_LINE_MAX, 

  _SC_RE_DUP_MAX, 

  _SC_CHARCLASS_NAME_MAX, 


  _SC_2_VERSION, 

  _SC_2_C_BIND, 

  _SC_2_C_DEV, 

  _SC_2_FORT_DEV, 

  _SC_2_FORT_RUN, 

  _SC_2_SW_DEV, 

  _SC_2_LOCALEDEF, 


  _SC_PII, 

  _SC_PII_XTI, 

  _SC_PII_SOCKET, 

  _SC_PII_INTERNET, 

  _SC_PII_OSI, 

  _SC_POLL, 

  _SC_SELECT, 

  _SC_UIO_MAXIOV, 

  _SC_IOV_MAX = _SC_UIO_MAXIOV, 

  _SC_PII_INTERNET_STREAM, 

  _SC_PII_INTERNET_DGRAM, 

  _SC_PII_OSI_COTS, 

  _SC_PII_OSI_CLTS, 

  _SC_PII_OSI_M, 

  _SC_T_IOV_MAX, 



  _SC_THREADS, 

  _SC_THREAD_SAFE_FUNCTIONS, 

  _SC_GETGR_R_SIZE_MAX, 

  _SC_GETPW_R_SIZE_MAX, 

  _SC_LOGIN_NAME_MAX, 

  _SC_TTY_NAME_MAX, 

  _SC_THREAD_DESTRUCTOR_ITERATIONS, 

  _SC_THREAD_KEYS_MAX, 

  _SC_THREAD_STACK_MIN, 

  _SC_THREAD_THREADS_MAX, 

  _SC_THREAD_ATTR_STACKADDR, 

  _SC_THREAD_ATTR_STACKSIZE, 

  _SC_THREAD_PRIORITY_SCHEDULING, 

  _SC_THREAD_PRIO_INHERIT, 

  _SC_THREAD_PRIO_PROTECT, 

  _SC_THREAD_PROCESS_SHARED, 


  _SC_NPROCESSORS_CONF, 

  _SC_NPROCESSORS_ONLN, 

  _SC_PHYS_PAGES, 

  _SC_AVPHYS_PAGES, 

  _SC_ATEXIT_MAX, 

  _SC_PASS_MAX, 


  _SC_XOPEN_VERSION, 

  _SC_XOPEN_XCU_VERSION, 

  _SC_XOPEN_UNIX, 

  _SC_XOPEN_CRYPT, 

  _SC_XOPEN_ENH_I18N, 

  _SC_XOPEN_SHM, 


  _SC_2_CHAR_TERM, 

  _SC_2_C_VERSION, 

  _SC_2_UPE, 


  _SC_XOPEN_XPG2, 

  _SC_XOPEN_XPG3, 

  _SC_XOPEN_XPG4, 


  _SC_CHAR_BIT, 

  _SC_CHAR_MAX, 

  _SC_CHAR_MIN, 

  _SC_INT_MAX, 

  _SC_INT_MIN, 

  _SC_LONG_BIT, 

  _SC_WORD_BIT, 

  _SC_MB_LEN_MAX, 

  _SC_NZERO, 

  _SC_SSIZE_MAX, 

  _SC_SCHAR_MAX, 

  _SC_SCHAR_MIN, 

  _SC_SHRT_MAX, 

  _SC_SHRT_MIN, 

  _SC_UCHAR_MAX, 

  _SC_UINT_MAX, 

  _SC_ULONG_MAX, 

  _SC_USHRT_MAX, 


  _SC_NL_ARGMAX, 

  _SC_NL_LANGMAX, 

  _SC_NL_MSGMAX, 

  _SC_NL_NMAX, 

  _SC_NL_SETMAX, 

  _SC_NL_TEXTMAX, 


  _SC_XBS5_ILP32_OFF32, 

  _SC_XBS5_ILP32_OFFBIG, 

  _SC_XBS5_LP64_OFF64, 

  _SC_XBS5_LPBIG_OFFBIG, 


  _SC_XOPEN_LEGACY, 

  _SC_XOPEN_REALTIME, 

  _SC_XOPEN_REALTIME_THREADS, 


  _SC_ADVISORY_INFO, 

  _SC_BARRIERS, 

  _SC_BASE, 

  _SC_C_LANG_SUPPORT, 

  _SC_C_LANG_SUPPORT_R, 

  _SC_CLOCK_SELECTION, 

  _SC_CPUTIME, 

  _SC_THREAD_CPUTIME, 

  _SC_DEVICE_IO, 

  _SC_DEVICE_SPECIFIC, 

  _SC_DEVICE_SPECIFIC_R, 

  _SC_FD_MGMT, 

  _SC_FIFO, 

  _SC_PIPE, 

  _SC_FILE_ATTRIBUTES, 

  _SC_FILE_LOCKING, 

  _SC_FILE_SYSTEM, 

  _SC_MONOTONIC_CLOCK, 

  _SC_MULTI_PROCESS, 

  _SC_SINGLE_PROCESS, 

  _SC_NETWORKING, 

  _SC_READER_WRITER_LOCKS, 

  _SC_SPIN_LOCKS, 

  _SC_REGEXP, 

  _SC_REGEX_VERSION, 

  _SC_SHELL, 

  _SC_SIGNALS, 

  _SC_SPAWN, 

  _SC_SPORADIC_SERVER, 

  _SC_THREAD_SPORADIC_SERVER, 

  _SC_SYSTEM_DATABASE, 

  _SC_SYSTEM_DATABASE_R, 

  _SC_TIMEOUTS, 

  _SC_TYPED_MEMORY_OBJECTS, 

  _SC_USER_GROUPS, 

  _SC_USER_GROUPS_R, 

  _SC_2_PBS, 

  _SC_2_PBS_ACCOUNTING, 

  _SC_2_PBS_LOCATE, 

  _SC_2_PBS_MESSAGE, 

  _SC_2_PBS_TRACK, 

  _SC_SYMLOOP_MAX, 

  _SC_STREAMS, 

  _SC_2_PBS_CHECKPOINT, 


  _SC_V6_ILP32_OFF32, 

  _SC_V6_ILP32_OFFBIG, 

  _SC_V6_LP64_OFF64, 

  _SC_V6_LPBIG_OFFBIG, 


  _SC_HOST_NAME_MAX, 

  _SC_TRACE, 

  _SC_TRACE_EVENT_FILTER, 

  _SC_TRACE_INHERIT, 

  _SC_TRACE_LOG, 


  _SC_LEVEL1_ICACHE_SIZE, 

  _SC_LEVEL1_ICACHE_ASSOC, 

  _SC_LEVEL1_ICACHE_LINESIZE, 

  _SC_LEVEL1_DCACHE_SIZE, 

  _SC_LEVEL1_DCACHE_ASSOC, 

  _SC_LEVEL1_DCACHE_LINESIZE, 

  _SC_LEVEL2_CACHE_SIZE, 

  _SC_LEVEL2_CACHE_ASSOC, 

  _SC_LEVEL2_CACHE_LINESIZE, 

  _SC_LEVEL3_CACHE_SIZE, 

  _SC_LEVEL3_CACHE_ASSOC, 

  _SC_LEVEL3_CACHE_LINESIZE, 

  _SC_LEVEL4_CACHE_SIZE, 

  _SC_LEVEL4_CACHE_ASSOC, 

  _SC_LEVEL4_CACHE_LINESIZE, 



  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, 

  _SC_RAW_SOCKETS
};



enum __nesc_unnamed4333 {

  _CS_PATH, 


  _CS_V6_WIDTH_RESTRICTED_ENVS, 


  _CS_GNU_LIBC_VERSION, 

  _CS_GNU_LIBPTHREAD_VERSION, 


  _CS_LFS_CFLAGS = 1000, 

  _CS_LFS_LDFLAGS, 

  _CS_LFS_LIBS, 

  _CS_LFS_LINTFLAGS, 

  _CS_LFS64_CFLAGS, 

  _CS_LFS64_LDFLAGS, 

  _CS_LFS64_LIBS, 

  _CS_LFS64_LINTFLAGS, 


  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, 

  _CS_XBS5_ILP32_OFF32_LDFLAGS, 

  _CS_XBS5_ILP32_OFF32_LIBS, 

  _CS_XBS5_ILP32_OFF32_LINTFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_CFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LIBS, 

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, 

  _CS_XBS5_LP64_OFF64_CFLAGS, 

  _CS_XBS5_LP64_OFF64_LDFLAGS, 

  _CS_XBS5_LP64_OFF64_LIBS, 

  _CS_XBS5_LP64_OFF64_LINTFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LIBS, 

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LIBS, 

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LIBS, 

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
};
# 792 "/usr/include/unistd.h" 3
extern int unlink(const char *__name) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 43 "/usr/include/bits/errno.h"
extern int *__errno_location(void ) __attribute((__nothrow__)) __attribute((const)) ;
# 46 "/opt/tinyos-1.x/tos/platform/pc/external_comm.h"
 static int socketsInitialized = 0;
static inline void initializeSockets(void);
static inline int readTossimCommand(int clifd, int clidx);
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);
static int writeTossimEvent(void *data, int datalen, int clifd);




static inline char *currentTime(void);
static inline int printTime(char *buf, int len);
static int printOtherTime(char *buf, int len, long long int ftime);
# 105 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h" 3
typedef __gnuc_va_list va_list;
# 58 "/opt/tinyos-1.x/tos/platform/pc/GuiMsg.h"
enum __nesc_unnamed4334 {

  AM_DEBUGMSGEVENT = 1, 
  AM_RADIOMSGSENTEVENT = 1 << 1, 
  AM_UARTMSGSENTEVENT = 1 << 2, 
  AM_ADCDATAREADYEVENT = 1 << 3, 
  AM_TOSSIMINITEVENT = 1 << 4, 
  AM_INTERRUPTEVENT = 1 << 5, 
  AM_LEDEVENT = 1 << 6, 






  AM_TURNONMOTECOMMAND = 1 << 12, 
  AM_TURNOFFMOTECOMMAND, 
  AM_RADIOMSGSENDCOMMAND, 
  AM_UARTMSGSENDCOMMAND, 
  AM_SETLINKPROBCOMMAND, 
  AM_SETADCPORTVALUECOMMAND, 
  AM_INTERRUPTCOMMAND, 
  AM_SETRATECOMMAND, 
  AM_SETDBGCOMMAND, 
  AM_VARIABLERESOLVECOMMAND, 
  AM_VARIABLERESOLVERESPONSE, 
  AM_VARIABLEREQUESTCOMMAND, 
  AM_VARIABLEREQUESTRESPONSE, 
  AM_GETMOTECOUNTCOMMAND, 
  AM_GETMOTECOUNTRESPONSE, 
  AM_SETEVENTMASKCOMMAND, 
  AM_BEGINBATCHCOMMAND, 
  AM_ENDBATCHCOMMAND
};
#line 104
#line 99
typedef struct GuiMsg {
  uint16_t msgType;
  uint16_t moteID;
  long long time;
  uint16_t payLoadLen;
} GuiMsg;








#line 111
typedef struct DebugMsgEvent {
  char debugMessage[512];
} DebugMsgEvent;




#line 116
typedef struct RadioMsgSentEvent {
  TOS_Msg message;
} RadioMsgSentEvent;




#line 121
typedef struct UARTMsgSentEvent {
  TOS_Msg message;
} UARTMsgSentEvent;





#line 126
typedef struct ADCDataReadyEvent {
  uint8_t port;
  uint16_t data;
} ADCDataReadyEvent;





#line 132
typedef struct VariableResolveResponse {
  uint32_t addr;
  uint32_t length;
} VariableResolveResponse;





#line 138
typedef struct VariableRequestResponse {
  uint32_t length;
  char value[256];
} VariableRequestResponse;






#line 144
typedef struct TossimInitEvent {
  int numMotes;
  uint8_t radioModel;
  uint32_t rate;
} __attribute((packed))  TossimInitEvent;




#line 151
typedef struct InterruptEvent {
  uint32_t id;
} InterruptEvent;



#line 156
typedef struct TurnOnMoteCommand {
} TurnOnMoteCommand;



#line 160
typedef struct TurnOffMoteCommand {
} TurnOffMoteCommand;




#line 164
typedef struct RadioMsgSendCommand {
  TOS_Msg message;
} RadioMsgSendCommand;




#line 169
typedef struct UARTMsgSendCommand {
  TOS_Msg message;
} UARTMsgSendCommand;





#line 174
typedef struct SetLinkProbCommand {
  uint16_t moteReceiver;
  uint32_t scaledProb;
} SetLinkProbCommand;





#line 180
typedef struct SetADCPortValueCommand {
  uint8_t port;
  uint16_t value;
} SetADCPortValueCommand;




#line 186
typedef struct VariableResolveCommand {
  char name[256];
} VariableResolveCommand;





#line 191
typedef struct VariableRequestCommand {
  uint32_t addr;
  uint8_t length;
} VariableRequestCommand;



#line 196
typedef struct InterruptCommand {
  uint32_t id;
} InterruptCommand;



#line 200
typedef struct SetRateCommand {
  uint32_t rate;
} SetRateCommand;





#line 204
typedef struct LedEvent {
  uint8_t red : 1;
  uint8_t green : 1;
  uint8_t yellow : 1;
} LedEvent;



#line 210
typedef struct SetDBGCommand {
  long long dbg;
} SetDBGCommand;



#line 214
typedef struct GetMoteCountCommand {
  uint8_t placeholder;
} GetMoteCountCommand;




#line 218
typedef struct GetMoteCountResponse {
  uint16_t totalMotes;
  uint8_t bitmask[(TOSNODES + 7) / 8];
} GetMoteCountResponse;



#line 223
typedef struct SetEventMaskCommand {
  uint16_t mask;
} SetEventMaskCommand;


#line 227
typedef struct BeginBatchCommand {
} BeginBatchCommand;


#line 230
typedef struct EndBatchCommand {
} EndBatchCommand;
# 75 "/opt/tinyos-1.x/tos/types/dbg.h"
#line 72
typedef struct dbg_mode {
  char *d_name;
  unsigned long long d_mode;
} TOS_dbg_mode_names;

TOS_dbg_mode dbg_modes = 0;
 bool dbg_suppress_stdout = 0;

inline static bool dbg_active(TOS_dbg_mode mode);




inline static void dbg_add_mode(const char *mode);
inline static void dbg_add_modes(const char *modes);
inline static void dbg_init(void );
inline static void dbg_help(void );

inline static void dbg_set(TOS_dbg_mode );

static void dbg(TOS_dbg_mode mode, const char *format, ...);
#line 114
static void dbg_clear(TOS_dbg_mode mode, const char *format, ...);
# 66 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
extern  TOS_dbg_mode dbg_modes;


 TOS_state_t tos_state;









static inline void __nesc_atomic_sleep(void);






typedef uint8_t __nesc_atomic_t;

__inline __nesc_atomic_t __nesc_atomic_start(void )  ;




__inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;



static __inline void __nesc_enable_interrupt(void);



enum __nesc_unnamed4335 {
  TOSH_ADC_PORTMAPSIZE = 255
};
# 48 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
const int STARTING_SIZE = 511;






#line 52
typedef struct node {
  void *data;
  long long key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long heap_get_min_key(heap_t *heap);
#line 104
static void *heap_pop_min_data(heap_t *heap, long long *key);
#line 120
static inline void expand_heap(heap_t *heap);
#line 134
static inline void heap_insert(heap_t *heap, void *data, long long key);
#line 148
static void swap(node_t *first, node_t *second);
#line 161
static void down_heap(heap_t *heap, int findex);
#line 187
static void up_heap(heap_t *heap, int findex);
# 49 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
 
#line 41
struct __nesc_unnamed4336 {
  char status_register;
  char register_A;
  char register_B;
  char register_C;
  char register_D;
  char register_E;
  char register_default;
} TOSH_pc_hardware;

static inline void init_hardware(void);
# 47 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
struct timespec;



static inline void queue_init(event_queue_t *queue, int fpause);





static void queue_insert_event(event_queue_t *queue, event_t *event);





static inline event_t *queue_pop_event(event_queue_t *queue);
#line 86
static inline int queue_is_empty(event_queue_t *queue);







static inline long long queue_peek_event_time(event_queue_t *queue);
#line 109
static inline void queue_handle_next_event(event_queue_t *queue);
# 43 "/opt/tinyos-1.x/tos/platform/pc/events.c"
static inline void event_default_cleanup(event_t *event);




static void event_total_cleanup(event_t *event);







static inline void event_cleanup(event_t *fevent);
# 11 "/opt/tinyos-1.x/tos/platform/pc/powermod.h"
 double *cycles;
 int power_init;
 int prof_on;
 int cpu_prof_on;
# 39 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static int clockScales[8] = { -1, 122, 976, 3906, 7812, 15625, 31250, 125000 };

 static event_t *clockEvents[TOSNODES];
 static uint8_t intervals[TOSNODES];
 static uint8_t scales[TOSNODES];
 static long long setTime[TOSNODES];
 static uint8_t interruptPending[TOSNODES];

static inline void SIG_OUTPUT_COMPARE2_interrupt(void )  ;






static void TOSH_clock_set_interval(uint8_t interval);
#line 86
static void TOSH_clock_set_rate(char interval, char scale);
#line 115
static inline uint8_t TOSH_get_clock_interval(void);








static uint8_t TOSH_get_clock0_counter(void);
#line 154
struct timeval;

static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state);
#line 191
static void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval);
#line 211
static inline void event_clocktick_invalidate(event_t *event);










enum __nesc_unnamed4337 {
  ADC_LATENCY = 200
};
#line 345
enum __nesc_unnamed4338 {
  NOT_WAITING = 0, 
  WAITING_FOR_ONE_TO_PASS = 1, 
  WAITING_FOR_ONE_TO_CAPTURE = 2
};
#line 470
void event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)   ;
# 46 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
static TOS_dbg_mode_names dbg_nametab[34] = { 
{ "all", DBG_ALL }, { "boot", DBG_BOOT | DBG_ERROR }, { "clock", DBG_CLOCK | DBG_ERROR }, { "task", DBG_TASK | DBG_ERROR }, { "sched", DBG_SCHED | DBG_ERROR }, { "sensor", DBG_SENSOR | DBG_ERROR }, { "led", DBG_LED | DBG_ERROR }, { "crypto", DBG_CRYPTO | DBG_ERROR }, { "route", DBG_ROUTE | DBG_ERROR }, { "am", DBG_AM | DBG_ERROR }, { "crc", DBG_CRC | DBG_ERROR }, { "packet", DBG_PACKET | DBG_ERROR }, { "encode", DBG_ENCODE | DBG_ERROR }, { "radio", DBG_RADIO | DBG_ERROR }, { "logger", DBG_LOG | DBG_ERROR }, { "adc", DBG_ADC | DBG_ERROR }, { "i2c", DBG_I2C | DBG_ERROR }, { "uart", DBG_UART | DBG_ERROR }, { "prog", DBG_PROG | DBG_ERROR }, { "sounder", DBG_SOUNDER | DBG_ERROR }, { "time", DBG_TIME | DBG_ERROR }, { "power", DBG_POWER | DBG_ERROR }, { "sim", DBG_SIM | DBG_ERROR }, { "queue", DBG_QUEUE | DBG_ERROR }, { "simradio", DBG_SIMRADIO | DBG_ERROR }, { "hardware", DBG_HARD | DBG_ERROR }, { "simmem", DBG_MEM | DBG_ERROR }, { "usr1", DBG_USR1 | DBG_ERROR }, { "usr2", DBG_USR2 | DBG_ERROR }, { "usr3", DBG_USR3 | DBG_ERROR }, { "temp", DBG_TEMP | DBG_ERROR }, { "error", DBG_ERROR }, { "none", DBG_NONE }, { (void *)0, DBG_ERROR } };






inline void dbg_set(TOS_dbg_mode modes);



inline void dbg_add_mode(const char *name);
#line 84
inline void dbg_add_modes(const char *modes);








inline void dbg_init(void );
#line 107
inline void dbg_help(void );
# 42 "/usr/include/arpa/inet.h"
struct in_addr;
# 94 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
int commandServerSocket = -1;
int eventServerSocket = -1;
int commandClients[4];
uint8_t batchState[4];
 int eventClients[4];
 uint16_t eventMask;

pthread_t eventAcceptThread;
pthread_t commandReadThread;
pthread_mutex_t eventClientsLock;
pthread_cond_t eventClientsCond;


TOS_Msg external_comm_msgs_[TOSNODES];
TOS_MsgPtr external_comm_buffers_[TOSNODES];
 static int GUI_enabled;

static int createServerSocket(short port);
static inline void *eventAcceptThreadFunc(void *arg);
static inline void *commandReadThreadFunc(void *arg);



static int __nesc_nido_resolve(int __nesc_mote, 
char *varname, 
uintptr_t *addr, size_t *size);
#line 136
static inline void initializeSockets(void);
#line 163
static int acceptConnection(int servfd);
#line 179
static int createServerSocket(short port);
#line 236
static inline void waitForGuiConnection(void);
#line 256
static int printOtherTime(char *buf, int len, long long int ftime);
#line 273
static inline int printTime(char *buf, int len);



static inline char *currentTime(void);





static void addClient(int *clientSockets, int clifd);
#line 297
static inline void sendInitEvent(int clifd);
#line 316
static inline void *eventAcceptThreadFunc(void *arg);
#line 353
#line 350
typedef struct __nesc_unnamed4339 {
  GuiMsg *msg;
  char *payLoad;
} incoming_command_data_t;



void nido_start_mote(uint16_t moteID);
void nido_stop_mote(uint16_t moteID);
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet);
TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet);
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);

static inline void event_command_cleanup(event_t *event);





static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state);
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad);
#line 393
static inline int processCommand(int clifd, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen);
#line 523
static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state);
#line 594
static inline int readTossimCommand(int clifd, int clidx);
#line 690
static inline void *commandReadThreadFunc(void *arg);
#line 765
static int writeTossimEvent(void *data, int datalen, int clifd);
#line 796
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
#line 856
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);
# 32 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
int signaled = 0;

long long rate_checkpoint_time;
double rate_value;

struct timeval startTime;
struct timeval thisTime;

static inline void handle_signal(int sig);
#line 52
static inline void init_signals(void );
#line 72
static inline double get_rate_value(void);



static inline void set_rate_value(double rate);



static inline void rate_checkpoint(void);





static inline void rate_based_wait(void);
# 48 "/opt/tinyos-1.x/tos/platform/pc/adc_model.c"
static inline void random_adc_init(void);

static inline uint16_t random_adc_read(int moteID, uint8_t port, long long ftime);



static inline adc_model *create_random_adc_model(void);










enum __nesc_unnamed4340 {
  ADC_NUM_PORTS_PER_NODE = 256
};

uint16_t adcValues[TOSNODES][ADC_NUM_PORTS_PER_NODE];
pthread_mutex_t adcValuesLock;

static inline void generic_adc_init(void);










static inline uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime);
#line 99
static inline adc_model *create_generic_adc_model(void);






static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 49 "/opt/tinyos-1.x/tos/platform/pc/spatial_model.c"
point3D *points;

static inline void simple_spatial_init(void);
#line 63
static inline void simple_spatial_get_position(int moteID, long long ftime, point3D *point);






static inline spatial_model *create_simple_spatial_model(void);
# 36 "/usr/include/bits/stat.h"
struct stat {

  __dev_t st_dev;
  unsigned short int __pad1;

  __ino_t st_ino;



  __mode_t st_mode;
  __nlink_t st_nlink;
  __uid_t st_uid;
  __gid_t st_gid;
  __dev_t st_rdev;
  unsigned short int __pad2;

  __off_t st_size;



  __blksize_t st_blksize;


  __blkcnt_t st_blocks;










  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
# 85 "/usr/include/bits/stat.h" 3
  unsigned long int __unused4;
  unsigned long int __unused5;
};
# 141 "/usr/include/bits/fcntl.h" 3
struct flock {

  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;




  __pid_t l_pid;
};
# 85 "/usr/include/fcntl.h" 3
extern int open(const char *__file, int __oflag, ...) __attribute((__nonnull__(1))) ;
# 52 "/opt/tinyos-1.x/tos/platform/pc/eeprom.c"
static char *local_filename;
static int numMotes = 0;
static int moteSize = 0;
static int initialized = 0;
static int local_fd = -1;

static int createEEPROM(char *file, int motes, int eempromBytes);
#line 123
static inline int anonymousEEPROM(int fnumMotes, int eepromSize);
#line 136
static inline int namedEEPROM(char *name, int fnumMotes, int eepromSize);
# 61 "/opt/tinyos-1.x/tos/system/sched.c"
#line 59
typedef struct __nesc_unnamed4341 {
  void (*tp)(void);
} TOSH_sched_entry_T;

enum __nesc_unnamed4342 {






  TOSH_MAX_TASKS = 8, 

  TOSH_TASK_BITMASK = TOSH_MAX_TASKS - 1
};

volatile TOSH_sched_entry_T TOSH_queue[TOSH_MAX_TASKS];
uint8_t TOSH_sched_full;
volatile uint8_t TOSH_sched_free;










bool TOS_post(void (*tp)(void));
#line 102
bool TOS_post(void (*tp)(void))  ;
#line 136
static bool TOSH_run_next_task(void);
# 149 "/opt/tinyos-1.x/tos/system/tos.h"
static inline void *nmemcpy(void *to, const void *from, size_t n);
# 28 "/opt/tinyos-1.x/tos/system/Ident.h"
enum __nesc_unnamed4343 {

  IDENT_MAX_PROGRAM_NAME_LENGTH = 16
};






#line 33
typedef struct __nesc_unnamed4344 {

  uint32_t unix_time;
  uint32_t user_hash;
  char program_name[IDENT_MAX_PROGRAM_NAME_LENGTH];
} Ident_t;
# 36 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
#line 33
typedef struct __nesc_unnamed4345 {
  TOS_MsgPtr msg;
  int success;
} uart_send_done_data_t;

enum __nesc_unnamed4346 {
  UART_SEND_DELAY = 1600
};
# 47 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.c"
static link_t *allocate_link(int mote);
#line 78
static int adjacency_list_init(void);
# 61 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
char transmitting[TOSNODES];
int radio_active[TOSNODES];
link_t *radio_connectivity[TOSNODES];
pthread_mutex_t radioConnectivityLock;





short radio_heard[TOSNODES];

bool radio_idle_state[TOSNODES];
double noise_prob = 0;

short IDLE_STATE_MASK = 0xffff;
char *lossyFileName = "lossy.nss";

static inline bool simple_connected(int moteID1, int moteID2);



static inline void simple_init(void);









static inline void simple_transmit(int moteID, char bit);








static inline void simple_stops_transmit(int moteID);










static inline char simple_hears(int moteID);
#line 124
static inline link_t *simple_neighbors(int moteID);







static inline rfm_model *create_simple_model(void);
#line 194
static void static_one_cell_init(void);
#line 313
static inline bool lossy_connected(int moteID1, int moteID2);
#line 336
static inline void lossy_transmit(int moteID, char bit);
#line 357
static inline void lossy_stop_transmit(int moteID);
#line 371
static inline char lossy_hears(int moteID);
#line 392
static inline int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss);
#line 471
static inline void lossy_init(void);
#line 512
static inline link_t *lossy_neighbors(int moteID);







static inline rfm_model *create_lossy_model(char *file);
#line 550
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);
# 57 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
int byteTransmitTime = 8 * 104 * 2;


int backoffLow = 10 * (8 * 104);
int backoffHigh = 20 * (8 * 104);
int txChangeLatency = 30 * (8 * 104);
int preambleLength = 20;
int headerLength = 7;


struct IncomingMsg;




#line 69
typedef struct IncomingMsg {
  TOS_Msg msg;
  struct IncomingMsg *next;
} IncomingMsg;

TOS_MsgPtr packet_transmitting[TOSNODES];
IncomingMsg *incoming[TOSNODES];
link_t *cc1000_connectivity[TOSNODES];


static inline void event_backoff_create(event_t *event, int node, long long eventTime);
void event_backoff_handle(event_t *event, struct TOS_state *state)   ;

void event_start_transmit_handle(event_t *event, struct TOS_state *state)   ;
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);

void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg)   ;
void event_receive_packet_handle(event_t *event, struct TOS_state *state)   ;

void event_send_packet_done_create(event_t *event, int node, long long eventTime)   ;
void event_send_packet_done_handle(event_t *event, struct TOS_state *state)   ;

static inline void packet_sim_init(void);
#line 130
static inline void event_backoff_create(event_t *event, int node, long long eventTime);










void event_backoff_handle(event_t *event, struct TOS_state *state)   ;
#line 155
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);









static void corruptPacket(IncomingMsg *msg, int src, int dest);








void event_start_transmit_handle(event_t *event, struct TOS_state *state)   ;
#line 228
void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg)   ;










void event_receive_packet_handle(event_t *event, struct TOS_state *state)   ;
#line 266
void event_send_packet_done_create(event_t *event, int node, long long eventTime)   ;










void event_send_packet_done_handle(event_t *event, struct TOS_state *state)   ;
# 45 "/opt/tinyos-1.x/tos/sensorboards/micasb/sensorboard.h"
enum __nesc_unnamed4347 {
  TOSH_ACTUAL_PHOTO_PORT = 1, 
  TOSH_ACTUAL_TEMP_PORT = 1, 
  TOSH_ACTUAL_MIC_PORT = 2, 
  TOSH_ACTUAL_ACCEL_X_PORT = 3, 
  TOSH_ACTUAL_ACCEL_Y_PORT = 4, 
  TOSH_ACTUAL_MAG_X_PORT = 6, 
  TOSH_ACTUAL_MAG_Y_PORT = 5
};

enum __nesc_unnamed4348 {
  TOS_ADC_PHOTO_PORT = 1, 
  TOS_ADC_TEMP_PORT = 2, 
  TOS_ADC_MIC_PORT = 3, 
  TOS_ADC_ACCEL_X_PORT = 4, 
  TOS_ADC_ACCEL_Y_PORT = 5, 
  TOS_ADC_MAG_X_PORT = 6, 

  TOS_ADC_MAG_Y_PORT = 8
};

enum __nesc_unnamed4349 {
  TOS_MAG_POT_ADDR = 0, 
  TOS_MIC_POT_ADDR = 1
};
# 43 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.h"
typedef int8_t **Handle;
typedef Handle *HandlePtr;
# 39 "/opt/tinyos-1.x/tos/interfaces/Timer.h"
enum __nesc_unnamed4350 {
  TIMER_REPEAT = 0, 
  TIMER_ONE_SHOT = 1, 
  NUM_TIMERS = 1U
};
# 34 "/opt/tinyos-1.x/tos/interfaces/Clock.h"
enum __nesc_unnamed4351 {
  TOS_I1024PS = 0, TOS_S1024PS = 3, 
  TOS_I512PS = 1, TOS_S512PS = 3, 
  TOS_I256PS = 3, TOS_S256PS = 3, 
  TOS_I128PS = 7, TOS_S128PS = 3, 
  TOS_I64PS = 15, TOS_S64PS = 3, 
  TOS_I32PS = 31, TOS_S32PS = 3, 
  TOS_I16PS = 63, TOS_S16PS = 3, 
  TOS_I8PS = 127, TOS_S8PS = 3, 
  TOS_I4PS = 255, TOS_S4PS = 3, 
  TOS_I2PS = 15, TOS_S2PS = 7, 
  TOS_I1PS = 31, TOS_S1PS = 7, 
  TOS_I0PS = 0, TOS_S0PS = 0
};
enum __nesc_unnamed4352 {
  DEFAULT_SCALE = 3, DEFAULT_INTERVAL = 255
};
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$UARTReceiveMsg$default$receive(TOS_MsgPtr arg_0xb781ca20);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr arg_0xb7813190, result_t arg_0xb7813320);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$RadioReceiveMsg$default$receive(TOS_MsgPtr arg_0xb781ca20);
# 22 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
#line 40
static   void PowerStateM$PowerState$yellowOn(void);
#line 39
static   void PowerStateM$PowerState$greenOff(void);
#line 14
static   result_t PowerStateM$PowerState$init(int arg_0xb7800a38, int arg_0xb7800bc0);
#line 37
static   void PowerStateM$PowerState$redOff(void);
#line 36
static   void PowerStateM$PowerState$redOn(void);
#line 18
static   result_t PowerStateM$PowerState$stop(void);
#line 9
static   double PowerStateM$PowerState$get_mote_cycles(int arg_0xb7800590);
#line 38
static   void PowerStateM$PowerState$greenOn(void);
# 112 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
static  result_t TinyAlloc$MemAlloc$compact(void);
#line 73
static  result_t TinyAlloc$MemAlloc$reallocate(Handle arg_0xb76e9bc0, int16_t arg_0xb76e9d48);
#line 61
static  result_t TinyAlloc$MemAlloc$allocate(HandlePtr arg_0xb76e94c8, int16_t arg_0xb76e9650);
#line 104
static  int16_t TinyAlloc$MemAlloc$free(Handle arg_0xb76f2e28);
#line 179
static  result_t TestTinyAllocM$MemAlloc$compactComplete(void);
#line 170
static  result_t TestTinyAllocM$MemAlloc$reallocComplete(Handle arg_0xb76e7d50, result_t arg_0xb76e7ee0);
#line 157
static  result_t TestTinyAllocM$MemAlloc$allocComplete(HandlePtr arg_0xb76e7618, result_t arg_0xb76e77a8);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TestTinyAllocM$StdControl$init(void);






static  result_t TestTinyAllocM$StdControl$start(void);







static  result_t TestTinyAllocM$StdControl$stop(void);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TestTinyAllocM$Timer$fired(void);
# 114 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t LedsM$Leds$yellowOn(void);
#line 56
static   result_t LedsM$Leds$init(void);
#line 97
static   result_t LedsM$Leds$greenOff(void);
#line 72
static   result_t LedsM$Leds$redOff(void);
#line 106
static   result_t LedsM$Leds$greenToggle(void);
#line 81
static   result_t LedsM$Leds$redToggle(void);
#line 64
static   result_t LedsM$Leds$redOn(void);
#line 89
static   result_t LedsM$Leds$greenOn(void);
# 180 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t TimerM$Clock$fire(void);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TimerM$StdControl$init(void);






static  result_t TimerM$StdControl$start(void);







static  result_t TimerM$StdControl$stop(void);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$default$fired(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7609f00);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$start(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7609f00, 
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
char arg_0xb7662e80, uint32_t arg_0xb766b030);








static  result_t TimerM$Timer$stop(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7609f00);
# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   void HPLClock$Clock$setInterval(uint8_t arg_0xb75fdcd0);
#line 153
static   uint8_t HPLClock$Clock$readCounter(void);
#line 96
static   result_t HPLClock$Clock$setRate(char arg_0xb75fd0f8, char arg_0xb75fd278);
#line 121
static   uint8_t HPLClock$Clock$getInterval(void);
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0xb781ca20);
# 22 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void Nido$PowerState$CPUCycleCheckpoint(void);
#line 14
static   result_t Nido$PowerState$init(int arg_0xb7800a38, int arg_0xb7800bc0);



static   result_t Nido$PowerState$stop(void);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0xb7813190, result_t arg_0xb7813320);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0xb781ca20);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t Nido$StdControl$init(void);






static  result_t Nido$StdControl$start(void);







static  result_t Nido$StdControl$stop(void);
# 74 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
static inline void Nido$usage(char *progname);




static void Nido$help(char *progname);
#line 107
void event_boot_handle(event_t *fevent, 
struct TOS_state *fstate)   ;
#line 122
int main(int argc, char **argv)   ;
#line 387
void nido_start_mote(uint16_t moteID)   ;
#line 402
void nido_stop_mote(uint16_t moteID)   ;
#line 416
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet)   ;





static inline   TOS_MsgPtr Nido$RadioReceiveMsg$default$receive(TOS_MsgPtr msg);



TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)   ;





static inline   TOS_MsgPtr Nido$UARTReceiveMsg$default$receive(TOS_MsgPtr msg);









static inline   result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr msg, result_t success);



void packet_sim_transmit_done(TOS_MsgPtr msg)   ;




void packet_sim_receive_msg(TOS_MsgPtr msg)   ;



void set_sim_rate(uint32_t rate)   ;







uint32_t get_sim_rate(void)   ;
# 20 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline int PowerStateM$num_bbs(void);
static inline void PowerStateM$dump_power_details(void);

static inline   result_t PowerStateM$PowerState$init(int prof, int cpu_prof);
#line 54
static inline   result_t PowerStateM$PowerState$stop(void);
#line 130
static inline   void PowerStateM$PowerState$redOn(void);





static inline   void PowerStateM$PowerState$redOff(void);





static inline   void PowerStateM$PowerState$greenOn(void);





static inline   void PowerStateM$PowerState$greenOff(void);





static inline   void PowerStateM$PowerState$yellowOn(void);
#line 311
static inline int PowerStateM$num_bbs(void);





static inline int PowerStateM$bb_exec_count(int mote, int bb);




static   double PowerStateM$PowerState$get_mote_cycles(int mote);
#line 339
static inline void PowerStateM$print_power_info(void);
#line 361
static inline void PowerStateM$dump_power_details(void);
#line 389
static inline   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
# 179 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
static  result_t TinyAlloc$MemAlloc$compactComplete(void);
#line 170
static  result_t TinyAlloc$MemAlloc$reallocComplete(Handle arg_0xb76e7d50, result_t arg_0xb76e7ee0);
#line 157
static  result_t TinyAlloc$MemAlloc$allocComplete(HandlePtr arg_0xb76e7618, result_t arg_0xb76e77a8);
# 101 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
enum TinyAlloc$__nesc_unnamed4353 {
  TinyAlloc$FRAME_SIZE = 256, 
  TinyAlloc$FREE_SIZE = TinyAlloc$FRAME_SIZE >> 3, 
  TinyAlloc$MAX_SIZE = 32765, 
  TinyAlloc$HEADER_SIZE = 2, 
  TinyAlloc$MAX_HANDLES = 20
};

uint8_t TinyAlloc$mFrame[1000][TinyAlloc$FRAME_SIZE];
uint8_t TinyAlloc$mFree[1000][TinyAlloc$FREE_SIZE];
int8_t TinyAlloc$mAllocing[1000];
int8_t TinyAlloc$mCompacting[1000];
int16_t TinyAlloc$mSize[1000];
int16_t TinyAlloc$mLast[1000];
Handle *TinyAlloc$mHandle[1000];
int8_t **TinyAlloc$mTmpHandle[1000];
Handle TinyAlloc$mOldHandle[1000];
int8_t *TinyAlloc$mHandles[1000][TinyAlloc$MAX_HANDLES];
int8_t TinyAlloc$mReallocing[1000];
int8_t TinyAlloc$mCompacted[1000];
int8_t TinyAlloc$mNeedFree[1000];
int16_t TinyAlloc$mContig[1000];
int16_t TinyAlloc$mStartByte[1000];
uint16_t TinyAlloc$mFreeBytes[1000];






static void TinyAlloc$doAlloc(int16_t startByte, int16_t endByte);
static inline void TinyAlloc$shiftUp(Handle handle, int bytes);
static inline int16_t TinyAlloc$start_offset(int8_t *ptr);
static void TinyAlloc$setFreeBits(int16_t startByte, int16_t endByte, int8_t on);
static void TinyAlloc$remapAddr(int8_t *oldAddr, int8_t *newAddr);
static inline int8_t TinyAlloc$isValid(Handle h);
static inline int16_t TinyAlloc$getSize(int8_t *p);
static inline int8_t TinyAlloc$isLocked(int8_t *ptr);
static int8_t TinyAlloc$finish_realloc(Handle *handle, int8_t success);
static inline Handle TinyAlloc$getH(int8_t *p);
static inline int16_t TinyAlloc$getNewHandleIdx(void);
static void TinyAlloc$markHandleFree(Handle hand);


static __inline int8_t *TinyAlloc$deref(Handle h);

static  void TinyAlloc$compactTask(void);
static  void TinyAlloc$allocTask(void);
static inline  void TinyAlloc$reallocDone(void);

static inline  result_t TinyAlloc$MemAlloc$compact(void);
#line 180
static  result_t TinyAlloc$MemAlloc$allocate(HandlePtr handlePtr, int16_t size);
#line 198
static  void TinyAlloc$allocTask(void);
#line 285
static void TinyAlloc$doAlloc(int16_t startByte, int16_t endByte);
#line 313
static  void TinyAlloc$compactTask(void);
#line 412
static inline void TinyAlloc$shiftUp(Handle hand, int bytes);
#line 440
static inline  int16_t TinyAlloc$MemAlloc$free(Handle hand);
#line 476
static inline  result_t TinyAlloc$MemAlloc$reallocate(Handle hand, int16_t newSize);
#line 519
static inline  void TinyAlloc$reallocDone(void);




static int8_t TinyAlloc$finish_realloc(Handle *hand, int8_t success);
#line 573
static inline int8_t TinyAlloc$isLocked(int8_t *ptr);






static inline int8_t TinyAlloc$isLocked(int8_t *ptr);
#line 592
static inline int16_t TinyAlloc$getSize(int8_t *ptr);









static inline int8_t TinyAlloc$isValid(Handle h);
#line 617
static void TinyAlloc$remapAddr(int8_t *oldAddr, int8_t *newAddr);










static inline Handle TinyAlloc$getH(int8_t *p);










static inline int16_t TinyAlloc$getNewHandleIdx(void);










static void TinyAlloc$markHandleFree(Handle hand);
#line 668
static void TinyAlloc$setFreeBits(int16_t startByte, int16_t endByte, int8_t on);
#line 709
static inline int16_t TinyAlloc$start_offset(int8_t *ptr);
# 114 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t TestTinyAllocM$Leds$yellowOn(void);
#line 56
static   result_t TestTinyAllocM$Leds$init(void);
#line 106
static   result_t TestTinyAllocM$Leds$greenToggle(void);
#line 81
static   result_t TestTinyAllocM$Leds$redToggle(void);
#line 64
static   result_t TestTinyAllocM$Leds$redOn(void);
# 112 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
static  result_t TestTinyAllocM$MemAlloc$compact(void);
#line 73
static  result_t TestTinyAllocM$MemAlloc$reallocate(Handle arg_0xb76e9bc0, int16_t arg_0xb76e9d48);
#line 61
static  result_t TestTinyAllocM$MemAlloc$allocate(HandlePtr arg_0xb76e94c8, int16_t arg_0xb76e9650);
#line 104
static  int16_t TestTinyAllocM$MemAlloc$free(Handle arg_0xb76f2e28);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TestTinyAllocM$Timer$start(char arg_0xb7662e80, uint32_t arg_0xb766b030);








static  result_t TestTinyAllocM$Timer$stop(void);
# 55 "TestTinyAllocM.nc"
int8_t TestTinyAllocM$didFirst[1000];
Handle TestTinyAllocM$first[1000];
int8_t TestTinyAllocM$didSecond[1000];
Handle TestTinyAllocM$second[1000];
int8_t TestTinyAllocM$didThird[1000];
Handle TestTinyAllocM$third[1000];
int8_t TestTinyAllocM$compacted[1000];
int8_t TestTinyAllocM$didRealloc[1000];
int8_t TestTinyAllocM$didCompact[1000];

static inline int TestTinyAllocM$strcpy(int8_t *dest, const int8_t *src);








static inline int TestTinyAllocM$strcmp(int8_t *one, const int8_t *two);
#line 91
static inline  result_t TestTinyAllocM$StdControl$init(void);









static inline  result_t TestTinyAllocM$Timer$fired(void);
#line 126
static inline  result_t TestTinyAllocM$StdControl$start(void);




static inline  result_t TestTinyAllocM$StdControl$stop(void);




static  result_t TestTinyAllocM$MemAlloc$allocComplete(HandlePtr handle, result_t complete);
#line 180
static  result_t TestTinyAllocM$MemAlloc$reallocComplete(Handle h, result_t complete);
#line 193
static inline  result_t TestTinyAllocM$MemAlloc$compactComplete(void);
# 40 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void LedsM$PowerState$yellowOn(void);
#line 39
static   void LedsM$PowerState$greenOff(void);
#line 37
static   void LedsM$PowerState$redOff(void);
#line 36
static   void LedsM$PowerState$redOn(void);

static   void LedsM$PowerState$greenOn(void);
# 51 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
uint8_t LedsM$ledsOn[1000];

enum LedsM$__nesc_unnamed4354 {
  LedsM$RED_BIT = 1, 
  LedsM$GREEN_BIT = 2, 
  LedsM$YELLOW_BIT = 4
};

static void LedsM$updateLeds(void);








static inline   result_t LedsM$Leds$init(void);








static   result_t LedsM$Leds$redOn(void);
#line 90
static inline   result_t LedsM$Leds$redOff(void);
#line 102
static inline   result_t LedsM$Leds$redToggle(void);










static inline   result_t LedsM$Leds$greenOn(void);
#line 125
static inline   result_t LedsM$Leds$greenOff(void);
#line 137
static   result_t LedsM$Leds$greenToggle(void);










static   result_t LedsM$Leds$yellowOn(void);
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t TimerM$PowerManagement$adjustPower(void);
# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   void TimerM$Clock$setInterval(uint8_t arg_0xb75fdcd0);
#line 153
static   uint8_t TimerM$Clock$readCounter(void);
#line 96
static   result_t TimerM$Clock$setRate(char arg_0xb75fd0f8, char arg_0xb75fd278);
#line 121
static   uint8_t TimerM$Clock$getInterval(void);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$fired(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7609f00);









uint32_t TimerM$mState[1000];
uint8_t TimerM$setIntervalFlag[1000];
uint8_t TimerM$mScale[1000];
#line 61
uint8_t TimerM$mInterval[1000];
int8_t TimerM$queue_head[1000];
int8_t TimerM$queue_tail[1000];
uint8_t TimerM$queue_size[1000];
uint8_t TimerM$queue[1000][NUM_TIMERS];
volatile uint16_t TimerM$interval_outstanding[1000];





#line 68
struct TimerM$timer_s {
  uint8_t type;
  int32_t ticks;
  int32_t ticksLeft;
} TimerM$mTimerList[1000][NUM_TIMERS];

enum TimerM$__nesc_unnamed4355 {
  TimerM$maxTimerInterval = 230
};
static inline  result_t TimerM$StdControl$init(void);









static inline  result_t TimerM$StdControl$start(void);



static inline  result_t TimerM$StdControl$stop(void);






static inline  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval);
#line 129
inline static void TimerM$adjustInterval(void);
#line 168
static inline  result_t TimerM$Timer$stop(uint8_t id);
#line 182
static inline   result_t TimerM$Timer$default$fired(uint8_t id);



static inline void TimerM$enqueue(uint8_t value);







static inline uint8_t TimerM$dequeue(void);









static inline  void TimerM$signalOneTimer(void);





static inline  void TimerM$HandleFire(void);
#line 253
static inline   result_t TimerM$Clock$fire(void);
# 180 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t HPLClock$Clock$fire(void);
# 60 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
char HPLClock$set_flag[1000];
 unsigned char HPLClock$mscale[1000];
#line 61
 unsigned char HPLClock$nextScale[1000];
#line 61
 unsigned char HPLClock$minterval[1000];
#line 82
static inline   void HPLClock$Clock$setInterval(uint8_t value);








static inline   uint8_t HPLClock$Clock$getInterval(void);
#line 113
static inline   uint8_t HPLClock$Clock$readCounter(void);
#line 128
static inline   result_t HPLClock$Clock$setRate(char interval, char scale);







static inline void SIG_OUTPUT_COMPARE2_interrupt(void)  ;
# 50 "/opt/tinyos-1.x/tos/platform/pc/HPLPowerManagementM.nc"
enum HPLPowerManagementM$__nesc_unnamed4356 {
  HPLPowerManagementM$IDLE = 0
};

static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 442 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
static inline   result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr msg, result_t success)
#line 442
{
  return FAIL;
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0xb7813190, result_t arg_0xb7813320){
#line 67
  unsigned char result;
#line 67

#line 67
  result = Nido$RadioSendMsg$default$sendDone(arg_0xb7813190, arg_0xb7813320);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 422 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
static inline   TOS_MsgPtr Nido$RadioReceiveMsg$default$receive(TOS_MsgPtr msg)
#line 422
{
  return msg;
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0xb781ca20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = Nido$RadioReceiveMsg$default$receive(arg_0xb781ca20);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 88 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
 __inline __nesc_atomic_t __nesc_atomic_start(void )
{
  return 0;
}

 __inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)
{
}

# 130 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
static inline void event_backoff_create(event_t *event, int node, long long eventTime)
#line 130
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->data = (void *)0;
  event->time = eventTime;
  event->handle = event_backoff_handle;
  event->cleanup = event_total_cleanup;
}

# 120 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
static inline void expand_heap(heap_t *heap)
#line 120
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);

  dbg(DBG_SIM, "Resized heap from %i to %i.\n", heap->private_size, new_size);

  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long key)
#line 134
{
  int findex = heap->size;

#line 136
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

# 155 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime)
#line 155
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->data = (void *)0;
  event->time = eventTime;
  event->handle = event_start_transmit_handle;
  event->cleanup = event_total_cleanup;
}

# 149 "/opt/tinyos-1.x/tos/system/tos.h"
static inline void *nmemcpy(void *to, const void *from, size_t n)
{
  char *cto = to;
  const char *cfrom = from;

  while (n--) * cto++ = * cfrom++;

  return to;
}

#line 120
static inline result_t rcombine(result_t r1, result_t r2)



{
  return r1 == FAIL ? FAIL : r2;
}

# 128 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
static inline   result_t HPLClock$Clock$setRate(char interval, char scale)
#line 128
{
  HPLClock$mscale[tos_state.current_node] = scale;
  HPLClock$minterval[tos_state.current_node] = interval;
  TOSH_clock_set_rate(interval, scale);
  return SUCCESS;
}

# 96 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t TimerM$Clock$setRate(char arg_0xb75fd0f8, char arg_0xb75fd278){
#line 96
  unsigned char result;
#line 96

#line 96
  result = HPLClock$Clock$setRate(arg_0xb75fd0f8, arg_0xb75fd278);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 77 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$init(void)
#line 77
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  TimerM$queue_head[tos_state.current_node] = TimerM$queue_tail[tos_state.current_node] = -1;
  TimerM$queue_size[tos_state.current_node] = 0;
  TimerM$mScale[tos_state.current_node] = 3;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  return TimerM$Clock$setRate(TimerM$mInterval[tos_state.current_node], TimerM$mScale[tos_state.current_node]);
}

# 68 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static inline   result_t LedsM$Leds$init(void)
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      LedsM$ledsOn[tos_state.current_node] = 0;
      dbg(DBG_BOOT, "LEDS: initialized.\n");
      LedsM$updateLeds();
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t TestTinyAllocM$Leds$init(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = LedsM$Leds$init();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 91 "TestTinyAllocM.nc"
static inline  result_t TestTinyAllocM$StdControl$init(void)
#line 91
{
  TestTinyAllocM$didFirst[tos_state.current_node] = 0;
  TestTinyAllocM$didSecond[tos_state.current_node] = 0;
  TestTinyAllocM$didThird[tos_state.current_node] = 0;
  TestTinyAllocM$didRealloc[tos_state.current_node] = 0;
  TestTinyAllocM$compacted[tos_state.current_node] = 0;
  TestTinyAllocM$Leds$init();
  return SUCCESS;
}

# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TestTinyAllocM$StdControl$init();
#line 63
  result = rcombine(result, TimerM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 211 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static inline void event_clocktick_invalidate(event_t *event)
#line 211
{
  clock_tick_data_t *data = event->data;

#line 213
  data->valid = 0;
}

# 56 "/opt/tinyos-1.x/tos/platform/pc/events.c"
static inline void event_cleanup(event_t *fevent)
{
  dbg(DBG_MEM, "event_cleanup: freeing event: 0x%x\n", (unsigned int )fevent);
  fevent->cleanup(fevent);
}

# 115 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static inline uint8_t TOSH_get_clock_interval(void)
#line 115
{
  return intervals[tos_state.current_node] - 1;
}

# 91 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
static inline   uint8_t HPLClock$Clock$getInterval(void)
#line 91
{
  return TOSH_get_clock_interval();
}

# 121 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   uint8_t TimerM$Clock$getInterval(void){
#line 121
  unsigned char result;
#line 121

#line 121
  result = HPLClock$Clock$getInterval();
#line 121

#line 121
  return result;
#line 121
}
#line 121
# 54 "/opt/tinyos-1.x/tos/platform/pc/HPLPowerManagementM.nc"
static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void)
#line 54
{
  return HPLPowerManagementM$IDLE;
}

# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t TimerM$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 82 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
static inline   void HPLClock$Clock$setInterval(uint8_t value)
#line 82
{
  TOSH_clock_set_interval(value);
}

# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   void TimerM$Clock$setInterval(uint8_t arg_0xb75fdcd0){
#line 105
  HPLClock$Clock$setInterval(arg_0xb75fdcd0);
#line 105
}
#line 105
# 113 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
static inline   uint8_t HPLClock$Clock$readCounter(void)
#line 113
{
  return TOSH_get_clock0_counter();
}

# 153 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   uint8_t TimerM$Clock$readCounter(void){
#line 153
  unsigned char result;
#line 153

#line 153
  result = HPLClock$Clock$readCounter();
#line 153

#line 153
  return result;
#line 153
}
#line 153
# 129 "/opt/tinyos-1.x/tos/system/TimerM.nc"
inline static void TimerM$adjustInterval(void)
#line 129
{
  uint8_t i;
#line 130
  uint8_t val = TimerM$maxTimerInterval;

#line 131
  if (TimerM$mState[tos_state.current_node]) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState[tos_state.current_node] & (0x1L << i) && TimerM$mTimerList[tos_state.current_node][i].ticksLeft < val) {
              val = TimerM$mTimerList[tos_state.current_node][i].ticksLeft;
            }
        }
#line 148
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
        {
          i = TimerM$Clock$readCounter() + 3;
          if (val < i) {
              val = i;
            }
          TimerM$mInterval[tos_state.current_node] = val;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
        }
#line 156
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 159
        {
          TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
        }
#line 163
        __nesc_atomic_end(__nesc_atomic); }
    }
  TimerM$PowerManagement$adjustPower();
}

#line 186
static inline void TimerM$enqueue(uint8_t value)
#line 186
{
  if (TimerM$queue_tail[tos_state.current_node] == NUM_TIMERS - 1) {
    TimerM$queue_tail[tos_state.current_node] = -1;
    }
#line 189
  TimerM$queue_tail[tos_state.current_node]++;
  TimerM$queue_size[tos_state.current_node]++;
  TimerM$queue[tos_state.current_node][(uint8_t )TimerM$queue_tail[tos_state.current_node]] = value;
}

# 151 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static inline  result_t TinyAlloc$MemAlloc$compact(void)
#line 151
{
  if (!TinyAlloc$mCompacting[tos_state.current_node] && !TinyAlloc$mAllocing[tos_state.current_node]) {
      TOS_post(TinyAlloc$compactTask);
    }
  return SUCCESS;
}

# 112 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
inline static  result_t TestTinyAllocM$MemAlloc$compact(void){
#line 112
  unsigned char result;
#line 112

#line 112
  result = TinyAlloc$MemAlloc$compact();
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 592 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static inline int16_t TinyAlloc$getSize(int8_t *ptr)
#line 592
{
  return (int16_t )(((int16_t *)(ptr - TinyAlloc$HEADER_SIZE))[0] & 0x7FFF);
}

#line 580
static inline int8_t TinyAlloc$isLocked(int8_t *ptr)
#line 580
{
  return (((int16_t *)(ptr - TinyAlloc$HEADER_SIZE))[0] & 0x8000) != 0;
}

# 170 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
inline static  result_t TinyAlloc$MemAlloc$reallocComplete(Handle arg_0xb76e7d50, result_t arg_0xb76e7ee0){
#line 170
  unsigned char result;
#line 170

#line 170
  result = TestTinyAllocM$MemAlloc$reallocComplete(arg_0xb76e7d50, arg_0xb76e7ee0);
#line 170

#line 170
  return result;
#line 170
}
#line 170
# 519 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static inline  void TinyAlloc$reallocDone(void)
#line 519
{
  TinyAlloc$MemAlloc$reallocComplete(TinyAlloc$mOldHandle[tos_state.current_node], SUCCESS);
}

#line 709
static inline int16_t TinyAlloc$start_offset(int8_t *ptr)
#line 709
{
  if (sizeof(int8_t *) == sizeof(int32_t )) {
      int16_t len = (int16_t )(ptr - (int8_t *)&TinyAlloc$mFrame[tos_state.current_node][0] - TinyAlloc$HEADER_SIZE);

#line 712
      return (int16_t )len;
    }
  else {
#line 714
    if (sizeof(int8_t *) == sizeof(int16_t )) {
        int16_t len = (int16_t )(ptr - (int8_t *)&TinyAlloc$mFrame[tos_state.current_node][0] - TinyAlloc$HEADER_SIZE);

#line 716
        return len;
      }
    else {
        return -1;
      }
    }
}

#line 476
static inline  result_t TinyAlloc$MemAlloc$reallocate(Handle hand, int16_t newSize)
#line 476
{
  int16_t neededBytes = newSize + TinyAlloc$HEADER_SIZE;
  int8_t *p = *hand;

  if (TinyAlloc$mAllocing[tos_state.current_node]) {
#line 480
    return FAIL;
    }
#line 481
  if (neededBytes > TinyAlloc$MAX_SIZE) {
#line 481
    return FAIL;
    }
  TinyAlloc$mOldHandle[tos_state.current_node] = hand;

  if (neededBytes == TinyAlloc$getSize(*hand)) {
      TOS_post(TinyAlloc$reallocDone);
      return SUCCESS;
    }


  if (neededBytes < TinyAlloc$getSize(*hand)) {
      int16_t oldSize = TinyAlloc$getSize(*hand);

      (
      (int16_t *)(p - TinyAlloc$HEADER_SIZE))[0] = neededBytes & 0x7FFF;


      TinyAlloc$setFreeBits(TinyAlloc$start_offset(p) + neededBytes, TinyAlloc$start_offset(p) + oldSize, 0);

      TinyAlloc$mFreeBytes[tos_state.current_node] -= neededBytes;
      TinyAlloc$mFreeBytes[tos_state.current_node] += TinyAlloc$getSize(*hand);

      TOS_post(TinyAlloc$reallocDone);
      return SUCCESS;
    }
  else {
#line 506
    if (neededBytes > TinyAlloc$getSize(*hand) && !TinyAlloc$isLocked(*hand)) {


        TinyAlloc$mReallocing[tos_state.current_node] = 1;

        TinyAlloc$mFreeBytes[tos_state.current_node] += TinyAlloc$getSize(*hand);

        return TinyAlloc$MemAlloc$allocate(&TinyAlloc$mTmpHandle[tos_state.current_node], newSize);
      }
    }
#line 515
  return FAIL;
}

# 73 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
inline static  result_t TestTinyAllocM$MemAlloc$reallocate(Handle arg_0xb76e9bc0, int16_t arg_0xb76e9d48){
#line 73
  unsigned char result;
#line 73

#line 73
  result = TinyAlloc$MemAlloc$reallocate(arg_0xb76e9bc0, arg_0xb76e9d48);
#line 73

#line 73
  return result;
#line 73
}
#line 73
#line 61
inline static  result_t TestTinyAllocM$MemAlloc$allocate(HandlePtr arg_0xb76e94c8, int16_t arg_0xb76e9650){
#line 61
  unsigned char result;
#line 61

#line 61
  result = TinyAlloc$MemAlloc$allocate(arg_0xb76e94c8, arg_0xb76e9650);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 145 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static __inline int8_t *TinyAlloc$deref(Handle h)
#line 145
{
#line 145
  return (int8_t *)*h;
}

#line 602
static inline int8_t TinyAlloc$isValid(Handle h)
#line 602
{

  if (sizeof(int8_t *) == sizeof(int32_t )) {
      return *h >= (int8_t *)(&TinyAlloc$mFrame[tos_state.current_node])[0] && *h < (int8_t *)&TinyAlloc$mFrame[tos_state.current_node][TinyAlloc$FRAME_SIZE];
    }
  else {
#line 607
    if (sizeof(int8_t *) == sizeof(int16_t )) {
        return *h >= (int8_t *)(&TinyAlloc$mFrame[tos_state.current_node])[0] && *h < (int8_t *)&TinyAlloc$mFrame[tos_state.current_node][TinyAlloc$FRAME_SIZE];
      }
    else {
        return 0;
      }
    }
}

#line 440
static inline  int16_t TinyAlloc$MemAlloc$free(Handle hand)
#line 440
{
  int8_t *startPtr;
  int16_t start;
  int16_t end;

  if (TinyAlloc$mAllocing[tos_state.current_node]) {
#line 445
    return FAIL;
    }
  if (!TinyAlloc$isValid(hand)) {
#line 447
    return FAIL;
    }

  if (sizeof(int8_t *) == sizeof(int16_t )) {
      startPtr = TinyAlloc$deref(hand) - TinyAlloc$HEADER_SIZE;
      start = (int16_t )(startPtr - (int8_t *)&TinyAlloc$mFrame[tos_state.current_node]);
      end = start + TinyAlloc$getSize(TinyAlloc$deref(hand));
    }
  else {
    if (sizeof(int8_t *) == sizeof(int32_t )) {
        startPtr = TinyAlloc$deref(hand) - TinyAlloc$HEADER_SIZE;
        start = (int16_t )(startPtr - (int8_t *)&TinyAlloc$mFrame[tos_state.current_node]);
        end = start + TinyAlloc$getSize(TinyAlloc$deref(hand));
      }
    else 
      {
        return FAIL;
      }
    }

  TinyAlloc$mFreeBytes[tos_state.current_node] += TinyAlloc$getSize(TinyAlloc$deref(hand));

  TinyAlloc$setFreeBits(start, end, 0);

  TinyAlloc$markHandleFree(hand);

  return end - start;
}

# 104 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
inline static  int16_t TestTinyAllocM$MemAlloc$free(Handle arg_0xb76f2e28){
#line 104
  short result;
#line 104

#line 104
  result = TinyAlloc$MemAlloc$free(arg_0xb76f2e28);
#line 104

#line 104
  return result;
#line 104
}
#line 104
# 65 "TestTinyAllocM.nc"
static inline int TestTinyAllocM$strcpy(int8_t *dest, const int8_t *src)
#line 65
{
  int16_t cnt = 0;

#line 67
  do {
      dest[cnt] = src[cnt];
      cnt++;
    }
  while (
#line 70
  src[cnt - 1] != 0);
  return cnt - 1;
}

# 136 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$redOff(void)
#line 136
{
  if (!prof_on) {
#line 137
    return;
    }
#line 138
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE RED_OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 37 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void LedsM$PowerState$redOff(void){
#line 37
  PowerStateM$PowerState$redOff();
#line 37
}
#line 37
# 90 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static inline   result_t LedsM$Leds$redOff(void)
#line 90
{
  dbg(DBG_LED, "LEDS: Red off.\n");
  LedsM$PowerState$redOff();
  /* atomic removed: atomic calls only */
#line 93
  {
    if (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) {
        LedsM$ledsOn[tos_state.current_node] &= ~LedsM$RED_BIT;
        LedsM$updateLeds();
      }
  }
  return SUCCESS;
}

static inline   result_t LedsM$Leds$redToggle(void)
#line 102
{
  result_t rval;

#line 104
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 104
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) {
        rval = LedsM$Leds$redOff();
        }
      else {
#line 108
        rval = LedsM$Leds$redOn();
        }
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
#line 110
  return rval;
}

# 81 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t TestTinyAllocM$Leds$redToggle(void){
#line 81
  unsigned char result;
#line 81

#line 81
  result = LedsM$Leds$redToggle();
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 101 "TestTinyAllocM.nc"
static inline  result_t TestTinyAllocM$Timer$fired(void)
#line 101
{
  TestTinyAllocM$Leds$redToggle();
  if (!TestTinyAllocM$didFirst[tos_state.current_node]) {
      dbg(DBG_USR1, "TestTinyAlloc: Allocating 10 bytes for handle 1.\n");
      TestTinyAllocM$MemAlloc$allocate(&TestTinyAllocM$first[tos_state.current_node], 10);
    }
  else {
#line 106
    if (!TestTinyAllocM$didSecond[tos_state.current_node]) {
        dbg(DBG_USR1, "TestTinyAlloc: Allocating 20 bytes for handle 2.\n");
        TestTinyAllocM$MemAlloc$allocate(&TestTinyAllocM$second[tos_state.current_node], 20);
      }
    else {
#line 109
      if (!TestTinyAllocM$didThird[tos_state.current_node]) {
          dbg(DBG_USR1, "TestTinyAlloc: Copying \"Sam was here.\" into handle 2.\n");
          TestTinyAllocM$strcpy(*TestTinyAllocM$second[tos_state.current_node], "Sam was here.");
          dbg(DBG_USR1, "TestTinyAlloc: Freeing handle 1.\n");
          TestTinyAllocM$MemAlloc$free(TestTinyAllocM$first[tos_state.current_node]);
          dbg(DBG_USR1, "TestTinyAlloc: Allocating 30 bytes for handle 3.\n");
          TestTinyAllocM$MemAlloc$allocate(&TestTinyAllocM$third[tos_state.current_node], 30);
        }
      else {
#line 116
        if (!TestTinyAllocM$didRealloc[tos_state.current_node]) {
            dbg(DBG_USR1, "TestTinyAlloc: Reallocating 40 bytes for handle 2.\n");
            TestTinyAllocM$MemAlloc$reallocate(TestTinyAllocM$second[tos_state.current_node], 40);
          }
        else {
#line 119
          if (!TestTinyAllocM$didCompact[tos_state.current_node]) {
              dbg(DBG_USR1, "TestTinyAlloc: Compacting.\n");
              TestTinyAllocM$MemAlloc$compact();
            }
          }
        }
      }
    }
#line 123
  return SUCCESS;
}

# 182 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline   result_t TimerM$Timer$default$fired(uint8_t id)
#line 182
{
  return SUCCESS;
}

# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TimerM$Timer$fired(uint8_t arg_0xb7609f00){
#line 73
  unsigned char result;
#line 73

#line 73
  switch (arg_0xb7609f00) {
#line 73
    case 0U:
#line 73
      result = TestTinyAllocM$Timer$fired();
#line 73
      break;
#line 73
    default:
#line 73
      result = TimerM$Timer$default$fired(arg_0xb7609f00);
#line 73
      break;
#line 73
    }
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 194 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline uint8_t TimerM$dequeue(void)
#line 194
{
  if (TimerM$queue_size[tos_state.current_node] == 0) {
    return NUM_TIMERS;
    }
#line 197
  if (TimerM$queue_head[tos_state.current_node] == NUM_TIMERS - 1) {
    TimerM$queue_head[tos_state.current_node] = -1;
    }
#line 199
  TimerM$queue_head[tos_state.current_node]++;
  TimerM$queue_size[tos_state.current_node]--;
  return TimerM$queue[tos_state.current_node][(uint8_t )TimerM$queue_head[tos_state.current_node]];
}

static inline  void TimerM$signalOneTimer(void)
#line 204
{
  uint8_t itimer = TimerM$dequeue();

#line 206
  if (itimer < NUM_TIMERS) {
    TimerM$Timer$fired(itimer);
    }
}

#line 210
static inline  void TimerM$HandleFire(void)
#line 210
{
  uint8_t i;
  uint16_t int_out;

#line 213
  TimerM$setIntervalFlag[tos_state.current_node] = 1;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 216
    {
      int_out = TimerM$interval_outstanding[tos_state.current_node];
      TimerM$interval_outstanding[tos_state.current_node] = 0;
    }
#line 219
    __nesc_atomic_end(__nesc_atomic); }
  if (TimerM$mState[tos_state.current_node]) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState[tos_state.current_node] & (0x1L << i)) {
              TimerM$mTimerList[tos_state.current_node][i].ticksLeft -= int_out;
              if (TimerM$mTimerList[tos_state.current_node][i].ticksLeft <= 2) {


                  if (TOS_post(TimerM$signalOneTimer)) {
                      if (TimerM$mTimerList[tos_state.current_node][i].type == TIMER_REPEAT) {
                          TimerM$mTimerList[tos_state.current_node][i].ticksLeft += TimerM$mTimerList[tos_state.current_node][i].ticks;
                        }
                      else 
#line 230
                        {
                          TimerM$mState[tos_state.current_node] &= ~(0x1L << i);
                        }
                      TimerM$enqueue(i);
                    }
                  else {
                      dbg(DBG_ERROR, "TimerM: Have to wait another timer interval.\n");


                      TimerM$mTimerList[tos_state.current_node][i].ticksLeft = TimerM$mInterval[tos_state.current_node];
                    }
                }
            }
        }
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    int_out = TimerM$interval_outstanding[tos_state.current_node];
#line 247
    __nesc_atomic_end(__nesc_atomic); }
  if (int_out == 0) {
    TimerM$adjustInterval();
    }
}

static inline   result_t TimerM$Clock$fire(void)
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 254
    {



      if (TimerM$interval_outstanding[tos_state.current_node] == 0) {
        TOS_post(TimerM$HandleFire);
        }
      else {
#line 261
        dbg(DBG_ERROR, "Don't post handle fire, we're not ready\n");
        }
      TimerM$interval_outstanding[tos_state.current_node] += TimerM$Clock$getInterval() + 1;
    }
#line 264
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 180 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t HPLClock$Clock$fire(void){
#line 180
  unsigned char result;
#line 180

#line 180
  result = TimerM$Clock$fire();
#line 180

#line 180
  return result;
#line 180
}
#line 180
# 136 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
static inline  void SIG_OUTPUT_COMPARE2_interrupt(void)
#line 136
{
  if (HPLClock$set_flag[tos_state.current_node]) {
      HPLClock$mscale[tos_state.current_node] = HPLClock$nextScale[tos_state.current_node];
      HPLClock$nextScale[tos_state.current_node] |= 0x8;
      TOSH_clock_set_rate(HPLClock$minterval[tos_state.current_node], HPLClock$nextScale[tos_state.current_node]);
      HPLClock$set_flag[tos_state.current_node] = 0;
    }
  HPLClock$Clock$fire();
}

# 273 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline int printTime(char *buf, int len)
#line 273
{
  return printOtherTime(buf, len, tos_state.tos_time);
}

# 80 "/opt/tinyos-1.x/tos/types/dbg.h"
inline static bool dbg_active(TOS_dbg_mode mode)
{
  return (dbg_modes & mode) != 0;
}

# 156 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state)
#line 157
{

  event_queue_t *queue = & state->queue;
  clock_tick_data_t *data = (clock_tick_data_t *)event->data;

#line 161
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    TOS_LOCAL_ADDRESS = (short )(event->mote & 0xffff);
#line 161
    __nesc_atomic_end(__nesc_atomic); }

  if (TOS_LOCAL_ADDRESS != event->mote) {
      dbg(DBG_ERROR, "ERROR in clock tick event handler! Things are probably ver bad....\n");
    }

  if (data->valid) {
      if (dbg_active(DBG_CLOCK)) {
          char buf[1024];

#line 170
          printTime(buf, 1024);
          dbg(DBG_CLOCK, "CLOCK: event handled for mote %i at %s (%i ticks).\n", event->mote, buf, data->interval);
        }

      setTime[tos_state.current_node] = tos_state.tos_time;
      event->time = event->time + data->interval;
      queue_insert_event(queue, event);
      if (! data->disabled) {
          SIG_OUTPUT_COMPARE2_interrupt();
        }
      else {
          interruptPending[tos_state.current_node] = 1;
        }
    }
  else {


      event_cleanup(event);
    }
}

# 130 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$redOn(void)
#line 130
{
  if (!prof_on) {
#line 131
    return;
    }
#line 132
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE RED_ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 36 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void LedsM$PowerState$redOn(void){
#line 36
  PowerStateM$PowerState$redOn();
#line 36
}
#line 36
# 148 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$greenOff(void)
#line 148
{
  if (!prof_on) {
#line 149
    return;
    }
#line 150
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE GREEN_OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 39 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void LedsM$PowerState$greenOff(void){
#line 39
  PowerStateM$PowerState$greenOff();
#line 39
}
#line 39
# 125 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static inline   result_t LedsM$Leds$greenOff(void)
#line 125
{
  dbg(DBG_LED, "LEDS: Green off.\n");
  LedsM$PowerState$greenOff();
  /* atomic removed: atomic calls only */
#line 128
  {
    if (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) {
        LedsM$ledsOn[tos_state.current_node] &= ~LedsM$GREEN_BIT;
        LedsM$updateLeds();
      }
  }
  return SUCCESS;
}

# 142 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$greenOn(void)
#line 142
{
  if (!prof_on) {
#line 143
    return;
    }
#line 144
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE GREEN_ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 38 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void LedsM$PowerState$greenOn(void){
#line 38
  PowerStateM$PowerState$greenOn();
#line 38
}
#line 38
# 113 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static inline   result_t LedsM$Leds$greenOn(void)
#line 113
{
  dbg(DBG_LED, "LEDS: Green on.\n");
  LedsM$PowerState$greenOn();
  /* atomic removed: atomic calls only */
#line 116
  {
    if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT)) {
        LedsM$ledsOn[tos_state.current_node] |= LedsM$GREEN_BIT;
        LedsM$updateLeds();
      }
  }
  return SUCCESS;
}

# 154 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$yellowOn(void)
#line 154
{
  if (!prof_on) {
#line 155
    return;
    }
#line 156
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE YELLOW_ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 40 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void LedsM$PowerState$yellowOn(void){
#line 40
  PowerStateM$PowerState$yellowOn();
#line 40
}
#line 40
# 157 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
inline static  result_t TinyAlloc$MemAlloc$allocComplete(HandlePtr arg_0xb76e7618, result_t arg_0xb76e77a8){
#line 157
  unsigned char result;
#line 157

#line 157
  result = TestTinyAllocM$MemAlloc$allocComplete(arg_0xb76e7618, arg_0xb76e77a8);
#line 157

#line 157
  return result;
#line 157
}
#line 157
# 628 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static inline Handle TinyAlloc$getH(int8_t *p)
#line 628
{
  int16_t i;

#line 630
  for (i = 0; i < TinyAlloc$MAX_HANDLES; i++) {
      if (TinyAlloc$mHandles[tos_state.current_node][i] == p) {
          return &TinyAlloc$mHandles[tos_state.current_node][i];
        }
    }
  return 0;
}

#line 412
static inline void TinyAlloc$shiftUp(Handle hand, int bytes)
#line 412
{
  int16_t start = TinyAlloc$start_offset(TinyAlloc$deref(hand));
  int16_t end = start + TinyAlloc$getSize(TinyAlloc$deref(hand));
  int16_t newstart;
  int16_t newend;

  int8_t *p = TinyAlloc$deref(hand) - TinyAlloc$HEADER_SIZE;
  int8_t *startp = TinyAlloc$deref(hand) - TinyAlloc$HEADER_SIZE - bytes;
#line 419
  int8_t *q;
  int cnt = TinyAlloc$getSize(TinyAlloc$deref(hand));

  q = startp;
  while (cnt--) {
      * q++ = * p++;
    }

  TinyAlloc$remapAddr(*hand, startp + TinyAlloc$HEADER_SIZE);
  *hand = startp + TinyAlloc$HEADER_SIZE;

  newstart = TinyAlloc$start_offset(TinyAlloc$deref(hand));
  newend = newstart + TinyAlloc$getSize(TinyAlloc$deref(hand));



  TinyAlloc$setFreeBits(start, end, 0);
  TinyAlloc$setFreeBits(newstart, newend, 1);
}

# 114 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t TestTinyAllocM$Leds$yellowOn(void){
#line 114
  unsigned char result;
#line 114

#line 114
  result = LedsM$Leds$yellowOn();
#line 114

#line 114
  return result;
#line 114
}
#line 114
#line 106
inline static   result_t TestTinyAllocM$Leds$greenToggle(void){
#line 106
  unsigned char result;
#line 106

#line 106
  result = LedsM$Leds$greenToggle();
#line 106

#line 106
  return result;
#line 106
}
#line 106
# 74 "TestTinyAllocM.nc"
static inline int TestTinyAllocM$strcmp(int8_t *one, const int8_t *two)
#line 74
{
  int16_t cnt = 0;

#line 76
  do {
      if (one[cnt] < two[cnt]) {
          return -1;
        }
      else {
#line 80
        if (one[cnt] > two[cnt]) {
            return 1;
          }
        else {
#line 83
          if (one[cnt] == 0 && 
          two[cnt] == 0) {
              return 0;
            }
          }
        }
#line 87
      cnt++;
    }
  while (
#line 88
  1);
}

# 64 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t TestTinyAllocM$Leds$redOn(void){
#line 64
  unsigned char result;
#line 64

#line 64
  result = LedsM$Leds$redOn();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 193 "TestTinyAllocM.nc"
static inline  result_t TestTinyAllocM$MemAlloc$compactComplete(void)
#line 193
{






  TestTinyAllocM$Leds$redOn();
  if (TestTinyAllocM$strcmp(*TestTinyAllocM$second[tos_state.current_node], "Sam was here.") == 0) {
      TestTinyAllocM$Leds$greenToggle();
      TestTinyAllocM$didCompact[tos_state.current_node] = 1;
      dbg(DBG_USR1, "TestTinyAlloc: Compaction didn't corrupt handle 2.\n");
    }
  else {
      dbg(DBG_USR1, "TestTinyAlloc: Compaction corrupted handle 2.\n");
      TestTinyAllocM$didCompact[tos_state.current_node] = 1;
      TestTinyAllocM$Leds$yellowOn();
    }



  return SUCCESS;
}

# 179 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.nc"
inline static  result_t TinyAlloc$MemAlloc$compactComplete(void){
#line 179
  unsigned char result;
#line 179

#line 179
  result = TestTinyAllocM$MemAlloc$compactComplete();
#line 179

#line 179
  return result;
#line 179
}
#line 179
# 639 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static inline int16_t TinyAlloc$getNewHandleIdx(void)
#line 639
{
  int16_t i;

#line 641
  for (i = 0; i < TinyAlloc$MAX_HANDLES; i++) {
      if (TinyAlloc$mHandles[tos_state.current_node][i] == 0) {
#line 642
        return i;
        }
    }
#line 644
  return -1;
}

# 277 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline char *currentTime(void)
#line 277
{
  static char timeBuf[128];

#line 279
  printTime(timeBuf, 128);
  return timeBuf;
}

# 87 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$start(void)
#line 87
{
  return SUCCESS;
}








static inline  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval)
#line 99
{
  uint8_t diff;

#line 101
  if (id >= NUM_TIMERS) {
#line 101
    return FAIL;
    }
#line 102
  if (type > TIMER_ONE_SHOT) {
#line 102
    return FAIL;
    }





  if (type == TIMER_REPEAT && interval <= 2) {
#line 109
    return FAIL;
    }
  TimerM$mTimerList[tos_state.current_node][id].ticks = interval;
  TimerM$mTimerList[tos_state.current_node][id].type = type;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    {
      diff = TimerM$Clock$readCounter();
      interval += diff;
      TimerM$mTimerList[tos_state.current_node][id].ticksLeft = interval;
      TimerM$mState[tos_state.current_node] |= 0x1L << id;
      if (interval < TimerM$mInterval[tos_state.current_node]) {
          TimerM$mInterval[tos_state.current_node] = interval;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
          TimerM$PowerManagement$adjustPower();
        }
    }
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TestTinyAllocM$Timer$start(char arg_0xb7662e80, uint32_t arg_0xb766b030){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(0U, arg_0xb7662e80, arg_0xb766b030);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 126 "TestTinyAllocM.nc"
static inline  result_t TestTinyAllocM$StdControl$start(void)
#line 126
{
  TestTinyAllocM$Timer$start(TIMER_REPEAT, 1024);
  return SUCCESS;
}

# 70 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TestTinyAllocM$StdControl$start();
#line 70
  result = rcombine(result, TimerM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 79 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
static inline void __nesc_atomic_sleep(void)
{
}

# 107 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
inline void dbg_help(void )
#line 107
{
  int i = 0;

#line 109
  printf("Known dbg modes: ");

  while (dbg_nametab[i].d_name != (void *)0) {
      printf("%s", dbg_nametab[i].d_name);
      if (dbg_nametab[i + 1].d_name != (void *)0) {
          printf(", ");
        }
      i++;
    }

  printf("\n");
}

# 74 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
static inline void Nido$usage(char *progname)
#line 74
{
  fprintf(stderr, "Usage: %s [-h|--help] [options] num_nodes_total\n", progname);
  exit(-1);
}

# 58 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
inline void dbg_add_mode(const char *name)
#line 58
{
  int cancel;
  TOS_dbg_mode_names *mode;

  if (*name == '-') {
      cancel = 1;
      name++;
    }
  else {
    cancel = 0;
    }
  for (mode = dbg_nametab; mode->d_name != (void *)0; mode++) 
    if (strcmp(name, mode->d_name) == 0) {
      break;
      }
#line 72
  if (mode->d_name == (void *)0) {
      fprintf(stderr, "Warning: Unknown debug option: "
      "\"%s\"\n", name);
      return;
    }

  if (cancel) {
    dbg_modes &= ~ mode->d_mode;
    }
  else {
#line 81
    dbg_modes |= mode->d_mode;
    }
}

#line 84
inline void dbg_add_modes(const char *modes)
#line 84
{
  char env[256];
  char *name;

  strncpy(env, modes, sizeof env);
  for (name = strtok(env, ","); name; name = strtok((void *)0, ",")) 
    dbg_add_mode(name);
}

inline void dbg_init(void )
#line 93
{
  const char *dbg_env;

  dbg_modes = DBG_NONE;

  dbg_env = getenv("DBG");
  if (!dbg_env) {
      dbg_modes = DBG_DEFAULT;
      return;
    }

  dbg_add_modes(dbg_env);
}

# 76 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
static inline void set_rate_value(double rate)
#line 76
{
  rate_value = rate;
}

#line 72
static inline double get_rate_value(void)
#line 72
{
  return rate_value;
}

# 311 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline int PowerStateM$num_bbs(void)
#line 311
{

  int POWERPROF_NUM_BBS;

#line 314
  return POWERPROF_NUM_BBS;
}

#line 23
static inline   result_t PowerStateM$PowerState$init(int prof, int cpu_prof)
#line 23
{
  FILE *cycle_file;
  char cycle_map[13] = "bb_cycle_map";
  int bb;
  double bbcyc;

#line 28
  if (power_init == 1) {
      fprintf(stderr, "PowerState.init() called twice...\n");
      return SUCCESS;
    }
  power_init = 1;
  prof_on = prof;
  cpu_prof_on = cpu_prof;

  if (cpu_prof_on) {
      cycle_file = fopen(cycle_map, "r");
      if (!cycle_file) {
          fprintf(stderr, "Couldn't open '%s', exiting\n", cycle_map);
          exit(-1);
        }

      cycles = calloc(PowerStateM$num_bbs(), sizeof(double ));

      while (-1 != fscanf(cycle_file, " %d %lf", &bb, &bbcyc)) {
          cycles[bb] = bbcyc;
        }
      fclose(cycle_file);
    }
  return SUCCESS;
}

# 14 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   result_t Nido$PowerState$init(int arg_0xb7800a38, int arg_0xb7800bc0){
#line 14
  unsigned char result;
#line 14

#line 14
  result = PowerStateM$PowerState$init(arg_0xb7800a38, arg_0xb7800bc0);
#line 14

#line 14
  return result;
#line 14
}
#line 14
# 40 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
static inline void handle_signal(int sig)
#line 40
{
  if ((sig == 2 || sig == 19) && signaled == 0) {
      char ftime[128];

#line 43
      printTime(ftime, 128);
      printf("Exiting on SIGINT at %s.\n", ftime);


      signaled = 1;
      exit(0);
    }
}

static inline void init_signals(void )
#line 52
{
  struct sigaction action;

#line 54
  action.__sigaction_handler.sa_handler = handle_signal;
  sigemptyset(& action.sa_mask);
  action.sa_flags = 0;
  sigaction(2, &action, (void *)0);
  signal(13, (__sighandler_t )1);
}

# 124 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
static inline link_t *simple_neighbors(int moteID)
#line 124
{
  link_t *thelink;

#line 126
  pthread_mutex_lock(&radioConnectivityLock);
  thelink = radio_connectivity[moteID];
  pthread_mutex_unlock(&radioConnectivityLock);
  return thelink;
}

#line 78
static inline bool simple_connected(int moteID1, int moteID2)
#line 78
{
  return TRUE;
}

#line 112
static inline char simple_hears(int moteID)
#line 112
{







  return radio_active[moteID] > 0 ? 1 : 0;
}

#line 101
static inline void simple_stops_transmit(int moteID)
#line 101
{
  int i;

  if (transmitting[moteID]) {
      transmitting[moteID] = 0;
      for (i = 0; i < tos_state.num_nodes; i++) {
          radio_active[i]--;
        }
    }
}

#line 92
static inline void simple_transmit(int moteID, char bit)
#line 92
{
  int i;

  transmitting[moteID] = bit;
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] += bit;
    }
}

#line 82
static inline void simple_init(void)
#line 82
{
  int i;

#line 84
  pthread_mutex_init(&radioConnectivityLock, (void *)0);
  adjacency_list_init();
  static_one_cell_init();
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] = 0;
    }
}

#line 132
static inline rfm_model *create_simple_model(void)
#line 132
{
  rfm_model *model = (rfm_model *)malloc(sizeof(rfm_model ));

#line 134
  model->init = simple_init;
  model->transmit = simple_transmit;
  model->stop_transmit = simple_stops_transmit;
  model->hears = simple_hears;
  model->connected = simple_connected;
  model->neighbors = simple_neighbors;
  return model;
}

#line 512
static inline link_t *lossy_neighbors(int moteID)
#line 512
{
  link_t *thelink;

#line 514
  pthread_mutex_lock(&radioConnectivityLock);
  thelink = radio_connectivity[moteID];
  pthread_mutex_unlock(&radioConnectivityLock);
  return thelink;
}

#line 313
static inline bool lossy_connected(int moteID1, int moteID2)
#line 313
{




  link_t *current_link;

  pthread_mutex_lock(&radioConnectivityLock);
  current_link = radio_connectivity[moteID1];
  dbg(DBG_TEMP, "connections for %i\n", moteID1);
  while (current_link) {
      if (current_link->mote == moteID2 && 
      current_link->data < 1.0) {
          dbg(DBG_TEMP, "connected to %i\n", moteID2);
          pthread_mutex_unlock(&radioConnectivityLock);
          return TRUE;
        }
      current_link = current_link->next_link;
    }
  pthread_mutex_unlock(&radioConnectivityLock);
  return FALSE;
}

#line 371
static inline char lossy_hears(int moteID)
#line 371
{
  char bit_heard = radio_active[moteID] > 0 ? 1 : 0;

#line 373
  if (radio_idle_state[moteID]) {
      int r = rand() % 100000;
      double prob = (double )r / 100000.0;

#line 376
      if (prob < noise_prob) {
          bit_heard = bit_heard ? 0 : 1;
        }
    }
  else {
      short temp_heard = radio_heard[moteID];

#line 382
      temp_heard <<= 1;
      temp_heard |= bit_heard;
      radio_heard[moteID] = temp_heard;
      if ((radio_heard[moteID] & IDLE_STATE_MASK) == 0) {
          radio_idle_state[moteID] = 1;
        }
    }
  return bit_heard;
}

#line 357
static inline void lossy_stop_transmit(int moteID)
#line 357
{
  link_t *current_link;

  pthread_mutex_lock(&radioConnectivityLock);
  current_link = radio_connectivity[moteID];
  transmitting[moteID] = 0;
  while (current_link) {
      radio_active[current_link->mote] -= current_link->bit;
      current_link->bit = 0;
      current_link = current_link->next_link;
    }
  pthread_mutex_unlock(&radioConnectivityLock);
}

#line 336
static inline void lossy_transmit(int moteID, char bit)
#line 336
{
  link_t *current_link;

  pthread_mutex_lock(&radioConnectivityLock);
  current_link = radio_connectivity[moteID];
  transmitting[moteID] = bit;
  while (current_link) {
      int r = rand() % 100000;
      double prob = (double )r / 100000.0;
      int tmp_bit = bit;

#line 346
      if (prob < current_link->data) {
          tmp_bit = tmp_bit ? 0 : 1;
        }
      radio_active[current_link->mote] += tmp_bit;
      radio_idle_state[current_link->mote] = 0;
      current_link->bit = tmp_bit;
      current_link = current_link->next_link;
    }
  pthread_mutex_unlock(&radioConnectivityLock);
}

#line 392
static inline int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss)
#line 392
{
  char buf[128];
  int findex = 0;
  int ch;


  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 400
          return 0;
        }
      else {
#line 401
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 405
          if (ch == ':') {
              buf[findex] = 0;
              break;
            }
          else {
#line 409
            if ((ch == '\n' || ch == ' ') || ch == '\t') {
                if (findex > 0) {
#line 410
                    return 0;
                  }
              }
            else 
#line 412
              {
                return 0;
              }
            }
          }
        }
    }
#line 417
  *mote_one = atoi(buf);
  findex = 0;

  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 422
          return 0;
        }
      else {
#line 423
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 427
          if (ch == ':') {
              buf[findex] = 0;
              break;
            }
          else {
#line 431
            if ((ch == '\n' || ch == ' ') || ch == '\t') {
                if (findex == 0) {
#line 432
                    return 0;
                  }
                else 
#line 433
                  {
                    buf[findex] = 0;
                    break;
                  }
              }
            else {
                return 0;
              }
            }
          }
        }
    }
#line 443
  *mote_two = atoi(buf);

  findex = 0;

  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 449
          return 0;
        }
      else {
#line 451
        if (((((
#line 450
        ch >= '0' && ch <= '9') || ch == '.') || ch == '-') || ch == 'E')
         || ch == 'e') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 455
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
#line 456
                  return 0;
                }
              else 
#line 457
                {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return 0;
            }
          }
        }
    }
#line 466
  *loss = atof(buf);

  return 1;
}

static inline void lossy_init(void)
#line 471
{
  int sfd = open(lossyFileName, 00);
  int i;
  FILE *file = fdopen(sfd, "r");
  link_t *new_link;

  dbg_clear(DBG_SIM, "Initializing lossy model from %s.\n", lossyFileName);
  pthread_mutex_init(&radioConnectivityLock, (void *)0);
  adjacency_list_init();

  if (sfd < 0) {
      dbg(DBG_SIM, "Cannot open %s - assuming single radio cell\n", lossyFileName);
      static_one_cell_init();
      return;
    }

  for (i = 0; i < TOSNODES; i++) {
      radio_connectivity[i] = (void *)0;
      radio_idle_state[i] = 0;
      radio_heard[i] = 0;
    }
  while (1) {
      int mote_one;
      int mote_two;
      double loss;

#line 496
      if (read_lossy_entry(file, &mote_one, &mote_two, &loss)) {
          if (mote_one != mote_two) {
              new_link = allocate_link(mote_two);
              new_link->data = loss;
              new_link->next_link = radio_connectivity[mote_one];
              radio_connectivity[mote_one] = new_link;
            }
        }
      else {
          break;
        }
    }
  dbg(DBG_BOOT, "RFM connectivity graph constructed.\n");
}










static inline rfm_model *create_lossy_model(char *file)
#line 520
{
  rfm_model *model = (rfm_model *)malloc(sizeof(rfm_model ));

#line 522
  if (file != (void *)0) {
      lossyFileName = file;
    }
  model->init = lossy_init;
  model->transmit = lossy_transmit;
  model->stop_transmit = lossy_stop_transmit;
  model->hears = lossy_hears;
  model->connected = lossy_connected;
  model->neighbors = lossy_neighbors;
  return model;
}

# 83 "/opt/tinyos-1.x/tos/platform/pc/adc_model.c"
static inline uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime)
#line 83
{
  uint16_t value;

  if (moteID >= TOSNODES || moteID < 0) {
      dbg(DBG_ERROR, "GENERIC_ADC_MODEL: trying to read value with invalid parameters: [moteID = %d] [port = %d]", moteID, port);
      return -1;
    }
  pthread_mutex_lock(&adcValuesLock);
  value = adcValues[moteID][(int )port];
  pthread_mutex_unlock(&adcValuesLock);
  if (value == 0xffff) {
    return (short )(rand() & 0x3ff);
    }
  else {
#line 96
    return value;
    }
}

#line 72
static inline void generic_adc_init(void)
#line 72
{
  int i;
#line 73
  int j;

#line 74
  for (i = 0; i < TOSNODES; i++) {
      for (j = 0; j < ADC_NUM_PORTS_PER_NODE; j++) {
          adcValues[i][j] = 0xffff;
        }
    }
  pthread_mutex_init(&adcValuesLock, (void *)0);
}

#line 99
static inline adc_model *create_generic_adc_model(void)
#line 99
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 101
  model->init = generic_adc_init;
  model->read = generic_adc_read;
  return model;
}

#line 50
static inline uint16_t random_adc_read(int moteID, uint8_t port, long long ftime)
#line 50
{
  return (uint16_t )(rand() & 0x3ff);
}

#line 48
static inline void random_adc_init(void)
#line 48
{
}




static inline adc_model *create_random_adc_model(void)
#line 54
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 56
  model->init = random_adc_init;
  model->read = random_adc_read;
  return model;
}

# 136 "/opt/tinyos-1.x/tos/platform/pc/eeprom.c"
static inline int namedEEPROM(char *name, int fnumMotes, int eepromSize)
#line 136
{
  int filedes = createEEPROM(name, fnumMotes, eepromSize);

#line 138
  if (filedes >= 0) {
      return 0;
    }
  else {
      dbg(DBG_ERROR, "ERROR: Unable to create named EEPROM region: %s.\n", name);
      return -1;
    }
}

#line 123
static inline int anonymousEEPROM(int fnumMotes, int eepromSize)
#line 123
{
  int filedes;

#line 125
  filedes = createEEPROM("/tmp/anonymous", fnumMotes, eepromSize);
  if (filedes >= 0) {
      unlink("/tmp/anonymous");
      return 0;
    }
  else {
      dbg(DBG_ERROR, "ERROR: Unable to create anonymous EEPROM region.\n");
      return -1;
    }
}

# 63 "/opt/tinyos-1.x/tos/platform/pc/spatial_model.c"
static inline void simple_spatial_get_position(int moteID, long long ftime, point3D *point)
#line 63
{
  point->xCoordinate = points[moteID].xCoordinate;
  point->yCoordinate = points[moteID].yCoordinate;
  point->zCoordinate = points[moteID].zCoordinate;
}

#line 51
static inline void simple_spatial_init(void)
#line 51
{
  int i;

#line 53
  points = (point3D *)malloc(sizeof(point3D ) * TOSNODES);

  for (i = 0; i < TOSNODES; i++) {
      points[i].xCoordinate = (double )(rand() % 1000);
      points[i].yCoordinate = (double )(rand() % 1000);
      points[i].zCoordinate = (double )(rand() % 1000);
    }
}









static inline spatial_model *create_simple_spatial_model(void)
#line 70
{
  spatial_model *model = (spatial_model *)malloc(sizeof(spatial_model ));

#line 72
  model->init = simple_spatial_init;
  model->get_position = simple_spatial_get_position;

  return model;
}

# 130 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
static inline void tos_state_model_init(void )
{
  tos_state.space->init();
  tos_state.rfm->init();
  tos_state.adc->init();
}

# 91 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
static inline void packet_sim_init(void)
#line 91
{
  int i;

#line 93
  for (i = 0; i < TOSNODES; i++) {
      packet_transmitting[i] = (void *)0;
      incoming[i] = (void *)0;
      cc1000_connectivity[i] = (void *)0;
    }
  cc1000_connectivity[0] = (link_t *)malloc(sizeof(link_t ));
  cc1000_connectivity[0]->mote = 1;
  cc1000_connectivity[0]->next_link = (void *)0;
  cc1000_connectivity[2] = (link_t *)malloc(sizeof(link_t ));
  cc1000_connectivity[2]->mote = 1;
  cc1000_connectivity[2]->next_link = (void *)0;
}

# 51 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
static inline void init_hardware(void)
#line 51
{
  int i;

#line 53
  for (i = 0; i < tos_state.num_nodes; i++) {
      tos_state.current_node = i;
      TOSH_pc_hardware.status_register = 0xff;
    }
}

# 68 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
static inline void init_heap(heap_t *heap)
#line 68
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

# 51 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
static inline void queue_init(event_queue_t *queue, int fpause)
#line 51
{
  init_heap(& queue->heap);
  queue->pause = fpause;
  pthread_mutex_init(& queue->lock, (void *)0);
}

# 363 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline void event_command_cleanup(event_t *event)
#line 363
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;

#line 365
  free(cmdData->msg);
  free(cmdData->payLoad);
  event_total_cleanup(event);
}

#line 523
static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state)
#line 524
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;
  GuiMsg *msg = cmdData->msg;

#line 527
  dbg_clear(DBG_SIM, "SIM: Handling incoming command type %d for mote %d\n", msg->msgType, msg->moteID);

  switch (msg->msgType) {

      case AM_TURNONMOTECOMMAND: 
        dbg_clear(DBG_SIM, "SIM: Turning on mote %d\n", msg->moteID);
      nido_start_mote(msg->moteID);
      break;

      case AM_TURNOFFMOTECOMMAND: 
        dbg_clear(DBG_SIM, "SIM: Turning off mote %d\n", msg->moteID);
      nido_stop_mote(msg->moteID);
      break;

      case AM_RADIOMSGSENDCOMMAND: 
        {
          RadioMsgSendCommand *rmsg = (RadioMsgSendCommand *)cmdData->payLoad;
          TOS_MsgPtr buffer;

          dbg_clear(DBG_SIM, "SIM: Enqueueing radio message for mote %d (payloadlen %d)\n", msg->moteID, msg->payLoadLen);
          if (external_comm_buffers_[msg->moteID] == (void *)0) {
            external_comm_buffers_[msg->moteID] = &external_comm_msgs_[msg->moteID];
            }
#line 549
          buffer = external_comm_buffers_[msg->moteID];
          memcpy(buffer, & rmsg->message, msg->payLoadLen);
          buffer->group = TOS_AM_GROUP;
          external_comm_buffers_[msg->moteID] = NIDO_received_radio(buffer);
        }
      break;

      case AM_UARTMSGSENDCOMMAND: 
        {
          UARTMsgSendCommand *umsg = (UARTMsgSendCommand *)cmdData->payLoad;
          TOS_MsgPtr buffer;
          int len = msg->payLoadLen > sizeof(TOS_Msg ) ? sizeof(TOS_Msg ) : msg->payLoadLen;

          dbg_clear(DBG_SIM, "SIM: Enqueueing UART message for mote %d (payloadlen %d)\n", msg->moteID, msg->payLoadLen);
          if (external_comm_buffers_[msg->moteID] == (void *)0) {
            external_comm_buffers_[msg->moteID] = &external_comm_msgs_[msg->moteID];
            }
#line 565
          buffer = external_comm_buffers_[msg->moteID];

          memcpy(buffer, & umsg->message, len);
          buffer->group = TOS_AM_GROUP;
          external_comm_buffers_[msg->moteID] = NIDO_received_uart(buffer);
        }
      break;

      case AM_INTERRUPTCOMMAND: 
        {
          InterruptEvent interruptEvent;
          InterruptCommand *pcmd = (InterruptCommand *)cmdData->payLoad;

#line 577
          interruptEvent.id = pcmd->id;
          dbg_clear(DBG_TEMP, "\nSIM: Interrupt command, id: %i.\n\n", pcmd->id);
          sendTossimEvent(TOS_BCAST_ADDR, AM_INTERRUPTEVENT, 
          tos_state.tos_time, &interruptEvent);
          break;
        }

      default: 
        dbg_clear(DBG_SIM, "SIM: Unrecognizable command type received from TinyViz %i\n", msg->msgType);
      break;
    }

  event_cleanup(event);
}

#line 371
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad)
#line 373
{
  incoming_command_data_t *data = (incoming_command_data_t *)malloc(sizeof(incoming_command_data_t ));

#line 375
  data->msg = msg;
  data->payLoad = payLoad;

  event->mote = (int )(msg->moteID & 0xffff);
  if (event->mote < TOSNODES && 
  event->mote >= 0) {
      event->force = 1;
    }
  event->pause = 1;
  event->data = data;
  event->time = msg->time;
  event->handle = event_command_in_handle;
  event->cleanup = event_command_cleanup;
}

# 54 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
inline void dbg_set(TOS_dbg_mode modes)
#line 54
{
  dbg_modes = modes;
}

# 106 "/opt/tinyos-1.x/tos/platform/pc/adc_model.c"
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value)
#line 106
{
  if (moteID >= TOSNODES || moteID < 0) {
      dbg(DBG_ERROR, "GENERIC_ADC_MODEL: trying to set value with invalid parameters: [moteID = %d] [port = %d]", moteID, port);
      return;
    }
  pthread_mutex_lock(&adcValuesLock);
  adcValues[moteID][(int )port] = value;
  pthread_mutex_unlock(&adcValuesLock);
}

# 550 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob)
#line 550
{
  link_t *current_link;
  link_t *new_link;

  pthread_mutex_lock(&radioConnectivityLock);
  current_link = radio_connectivity[moteID1];
  dbg(DBG_SIM, "RFM: MDW: Setting loss prob %d->%d to %0.3f\n", moteID1, moteID2, prob);
  while (current_link) {
      if (current_link->mote == moteID2) {
          current_link->data = prob;
          pthread_mutex_unlock(&radioConnectivityLock);
          return;
        }
      current_link = current_link->next_link;
    }
  new_link = allocate_link(moteID2);
  new_link->next_link = radio_connectivity[moteID1];
  new_link->data = prob;
  radio_connectivity[moteID1] = new_link;
  pthread_mutex_unlock(&radioConnectivityLock);
}

# 393 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline int processCommand(int clifd, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen)
#line 394
{
  int ret = 0;

#line 396
  switch (msg->msgType) {

      case AM_SETLINKPROBCOMMAND: 
        {
          SetLinkProbCommand *linkmsg = (SetLinkProbCommand *)payLoad;
          double prob = (double )linkmsg->scaledProb / 10000;

#line 402
          set_link_prob_value(msg->moteID, linkmsg->moteReceiver, prob);
          break;
        }
      case AM_SETADCPORTVALUECOMMAND: 
        {
          SetADCPortValueCommand *adcmsg = (SetADCPortValueCommand *)payLoad;

#line 408
          set_adc_value(msg->moteID, adcmsg->port, adcmsg->value);
          break;
        }
      case AM_SETRATECOMMAND: 
        {
          SetRateCommand *ratemsg = (SetRateCommand *)payLoad;

#line 414
          set_sim_rate(ratemsg->rate);
          break;
        }
      case AM_VARIABLERESOLVECOMMAND: 
        {
          VariableResolveResponse varResult;
          VariableResolveCommand *rmsg = (VariableResolveCommand *)payLoad;







          if (
#line 426
          __nesc_nido_resolve(msg->moteID, (char *)rmsg->name, 
          (uintptr_t *)& varResult.addr, 
          (size_t *)& varResult.length) != 0) 
            {
              varResult.addr = 0;
              varResult.length = -1;
            }

          dbg_clear(DBG_SIM, "SIM: Resolving variable %s for mote %d: 0x%x %d\n", 
          rmsg->name, msg->moteID, varResult.addr, varResult.length);

          buildTossimEvent(TOS_BCAST_ADDR, AM_VARIABLERESOLVERESPONSE, 
          tos_state.tos_time, &varResult, replyMsg, replyLen);
          ret = 1;
          break;
        }
      case AM_VARIABLEREQUESTCOMMAND: 
        {
          VariableRequestResponse varResult;
          VariableRequestCommand *rmsg = (VariableRequestCommand *)payLoad;
          uint8_t *ptr = (uint8_t *)rmsg->addr;

#line 447
          varResult.length = rmsg->length;

          if (varResult.length == 0) {
            varResult.length = 256;
            }
          memcpy(varResult.value, ptr, varResult.length);

          buildTossimEvent(TOS_BCAST_ADDR, AM_VARIABLEREQUESTRESPONSE, 
          tos_state.tos_time, &varResult, replyMsg, replyLen);
          ret = 1;
          break;
        }

      case AM_GETMOTECOUNTCOMMAND: 
        {
          int i;
          GetMoteCountResponse countResponse;

          countResponse.totalMotes = tos_state.num_nodes;
          bzero(& countResponse.bitmask, sizeof  countResponse.bitmask);

          for (i = 0; i < TOSNODES; i++) {
              countResponse.bitmask[i / 8] |= 1 << (7 - i % 8);
            }

          buildTossimEvent(TOS_BCAST_ADDR, AM_GETMOTECOUNTRESPONSE, 
          tos_state.tos_time, &countResponse, replyMsg, replyLen);
          ret = 1;
          break;
        }
      case AM_SETDBGCOMMAND: 
        {
          SetDBGCommand *cmd = (SetDBGCommand *)payLoad;

#line 480
          dbg_set(cmd->dbg);
          break;
        }
      case AM_SETEVENTMASKCOMMAND: 
        {
          SetEventMaskCommand *setMaskCommand = (SetEventMaskCommand *)payLoad;

#line 486
          eventMask = setMaskCommand->mask;
          break;
        }
      case AM_BEGINBATCHCOMMAND: 
        {
          if (batchState[clidx] != 0) {
              dbg(DBG_SIM | DBG_ERROR, "SIM: duplicate begin batch");
            }
          dbg(DBG_SIM, "SIM: begin batch");
          batchState[clidx] = 1;
          break;
        }
      case AM_ENDBATCHCOMMAND: 
        {
          if (batchState[clidx] == 0) {
              dbg(DBG_SIM | DBG_ERROR, "SIM: end batch without begin");
            }
          dbg(DBG_SIM, "SIM: end batch");
          batchState[clidx] = 0;
          break;
        }

      default: 
        {


          event_t *event = (event_t *)malloc(sizeof(event_t ));

#line 513
          event_command_in_create(event, msg, payLoad);
          dbg(DBG_SIM, "SIM: Enqueuing command event 0x%lx\n", (unsigned long )event);
          queue_insert_event(& tos_state.queue, event);
#line 515
          ;
        }
    }

  return ret;
}

#line 594
static inline int readTossimCommand(int clifd, int clidx)
#line 594
{
  GuiMsg *msg;
  unsigned char *header;
  char *payLoad = (void *)0;
  int curlen = 0;
  int rval;
  unsigned char ack;
  int reply;
  unsigned char *replyMsg = 0;
  int replyLen = 0;

  dbg_clear(DBG_SIM, "SIM: Reading command from client fd %d\n", clifd);

  header = (unsigned char *)malloc(14);
  msg = (GuiMsg *)malloc(sizeof(GuiMsg ));

  curlen = 0;
  while (curlen < 14) {
      dbg_clear(DBG_SIM, "SIM: Reading in GuiMsg header of size %d with length %d\n", 14, curlen);
      rval = read(clifd, header + curlen, 14 - curlen);
      if (rval <= 0) {
          dbg_clear(DBG_SIM, "SIM: Closing client socket %d.\n", clifd);
          free(msg);
          close(clifd);
          goto done;
        }
      else 
#line 619
        {
          curlen += rval;
        }
    }


  msg->msgType = ntohs(* (unsigned short *)&header[0]);
  msg->moteID = ntohs(* (unsigned short *)&header[2]);
  msg->time = __extension__ ({
#line 627
    union __nesc_unnamed4357 {
#line 627
      __extension__ unsigned long long int __ll;
#line 627
      unsigned long int __l[2];
    } 
#line 627
    __w;
#line 627
    union __nesc_unnamed4357 __r;

#line 627
    if (__builtin_constant_p(* (long long *)&header[4])) {
#line 627
      __r.__ll = ((((((((* (long long *)&header[4] & 0xff00000000000000ull) >> 56) | ((* (long long *)&header[4] & 0x00ff000000000000ull) >> 40)) | ((* (long long *)&header[4] & 0x0000ff0000000000ull) >> 24)) | ((* (long long *)&header[4] & 0x000000ff00000000ull) >> 8)) | ((* (long long *)&header[4] & 0x00000000ff000000ull) << 8)) | ((* (long long *)&header[4] & 0x0000000000ff0000ull) << 24)) | ((* (long long *)&header[4] & 0x000000000000ff00ull) << 40)) | ((* (long long *)&header[4] & 0x00000000000000ffull) << 56);
      }
    else 
#line 627
      {
#line 627
        __w.__ll = * (long long *)&header[4];
#line 627
        __r.__l[0] = __extension__ ({
#line 627
          register unsigned int __v;
#line 627
          register unsigned int __x = __w.__l[1];

#line 627
          if (__builtin_constant_p(__x)) {
#line 627
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 627
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 627
          __v;
        }
        );
#line 627
        __r.__l[1] = __extension__ ({
#line 627
          register unsigned int __v;
#line 627
          register unsigned int __x = __w.__l[0];

#line 627
          if (__builtin_constant_p(__x)) {
#line 627
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 627
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 627
          __v;
        }
        );
      }
#line 627
    __r.__ll;
  }
  );
#line 628
  msg->payLoadLen = ntohs(* (unsigned short *)&header[12]);
  dbg_clear(DBG_SIM, "SIM: Command type %d mote %d time 0x%lx payloadlen %d\n", msg->msgType, msg->moteID, msg->time, msg->payLoadLen);
  if (msg->time < tos_state.tos_time) {
      msg->time = tos_state.tos_time;
    }


  if (msg->payLoadLen > 0) {
      payLoad = (char *)malloc(msg->payLoadLen);
      curlen = 0;
      while (curlen < msg->payLoadLen) {
          dbg(DBG_SIM, "SIM: Reading in GuiMsg payload of size %d with length %d\n", msg->payLoadLen, curlen);
          rval = read(clifd, payLoad + curlen, msg->payLoadLen - curlen);
          if (rval <= 0) {
              dbg(DBG_SIM, "SIM: Closing client socket %d.\n", clifd);
              free(msg);
              free(payLoad);
              goto done;
            }
          else 
#line 646
            {
              curlen += rval;
              dbg(DBG_SIM, "SIM: Read from command port, total: %d, need %d\n", curlen, msg->payLoadLen - curlen);
            }
        }
    }

  if (msg->moteID < tos_state.num_nodes) {
      reply = processCommand(clifd, clidx, msg, payLoad, &replyMsg, &replyLen);
    }
  else {
      dbg(DBG_SIM | DBG_ERROR, "SIM: Received command for invalid mote: %i\n", (int )msg->moteID);
    }


  if (batchState[clidx] != 0) {
      if (reply) {
          dbg(DBG_SIM | DBG_ERROR, "SIM: unexpected command response in batch!!\n");
        }
      return 0;
    }

  do {
      rval = write(clifd, &ack, 1);
      if (rval < 0) {
          dbg(DBG_SIM, "SIM: Closing client socket %d.\n", clifd);
          goto done;
        }
    }
  while (
#line 674
  rval != 1);

  if (reply) {
      dbg(DBG_SIM, "SIM: Sending %d byte reply.\n", replyLen);
      writeTossimEvent(replyMsg, replyLen, clifd);
      free(replyMsg);
    }

  done: 
    return 0;
}





static inline void *commandReadThreadFunc(void *arg)
#line 690
{
  int i;
  fd_set readset;
#line 692
  fd_set exceptset;
  int highest;
  int numclients;

  dbg_clear(DBG_SIM, "SIM: commandReadThread running.\n");

  while (1) {

      do {
#line 700
          int __d0;
#line 700
          int __d1;

#line 700
           __asm volatile ("cld; rep; stosl" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(fd_set ) / sizeof(__fd_mask )), "1"(&(&readset)->__fds_bits[0]) : "memory");}
      while (
#line 700
      0);
      do {
#line 701
          int __d0;
#line 701
          int __d1;

#line 701
           __asm volatile ("cld; rep; stosl" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(fd_set ) / sizeof(__fd_mask )), "1"(&(&exceptset)->__fds_bits[0]) : "memory");}
      while (
#line 701
      0);
       __asm volatile ("btsl %1,%0" : "=m"((&readset)->__fds_bits[commandServerSocket / (8 * sizeof(__fd_mask ))]) : "r"((int )commandServerSocket % (8 * sizeof(__fd_mask ))) : "cc", "memory");
       __asm volatile ("btsl %1,%0" : "=m"((&exceptset)->__fds_bits[commandServerSocket / (8 * sizeof(__fd_mask ))]) : "r"((int )commandServerSocket % (8 * sizeof(__fd_mask ))) : "cc", "memory");
      highest = commandServerSocket;
      numclients = 0;

      for (i = 0; i < 4; i++) {
          if (commandClients[i] != -1) {
              if (commandClients[i] > highest) {
#line 709
                highest = commandClients[i];
                }
#line 710
              ;

               __asm volatile ("btsl %1,%0" : "=m"((&readset)->__fds_bits[commandClients[i] / (8 * sizeof(__fd_mask ))]) : "r"((int )commandClients[i] % (8 * sizeof(__fd_mask ))) : "cc", "memory");
               __asm volatile ("btsl %1,%0" : "=m"((&exceptset)->__fds_bits[commandClients[i] / (8 * sizeof(__fd_mask ))]) : "r"((int )commandClients[i] % (8 * sizeof(__fd_mask ))) : "cc", "memory");
              numclients++;
            }
        }

      ;


      if (select(highest + 1, &readset, (void *)0, &exceptset, 0) < 0) {
          dbg_clear(DBG_SIM, "SIM: commandReadThreadFunc: error in select(): %s\n", strerror(*__errno_location()));
        }
      ;


      for (i = 0; i < 4; i++) {






          if (commandClients[i] != -1 && __extension__ ({
#line 734
            register char __result;

#line 734
             __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )commandClients[i] % (8 * sizeof(__fd_mask ))), "m"((&readset)->__fds_bits[commandClients[i] / (8 * sizeof(__fd_mask ))]) : "cc");__result;
          }
          )) 
#line 734
            {
              if (readTossimCommand(commandClients[i], i) < 0) {
                  close(commandClients[i]);
                  commandClients[i] = -1;
                }
            }
          if (commandClients[i] != -1 && __extension__ ({
#line 740
            register char __result;

#line 740
             __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )commandClients[i] % (8 * sizeof(__fd_mask ))), "m"((&exceptset)->__fds_bits[commandClients[i] / (8 * sizeof(__fd_mask ))]) : "cc");__result;
          }
          )) 
#line 740
            {

              close(commandClients[i]);
              commandClients[i] = -1;
            }
        }


      if (__extension__ ({
#line 748
        register char __result;

#line 748
         __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )commandServerSocket % (8 * sizeof(__fd_mask ))), "m"((&readset)->__fds_bits[commandServerSocket / (8 * sizeof(__fd_mask ))]) : "cc");__result;
      }
      )) 
#line 748
        {
          int clifd;

#line 750
          ;
          clifd = acceptConnection(commandServerSocket);
          ;
          addClient(commandClients, clifd);
        }
    }
  return 0;
}

#line 297
static inline void sendInitEvent(int clifd)
#line 297
{
  TossimInitEvent initEv;
  unsigned char *msg;
  int total_size;

  memset((char *)&initEv, 0, sizeof(TossimInitEvent ));
  initEv.numMotes = tos_state.num_nodes;
  initEv.radioModel = tos_state.radioModel;
  initEv.rate = get_sim_rate();
  buildTossimEvent(0, AM_TOSSIMINITEVENT, 
  tos_state.tos_time, &initEv, &msg, &total_size);
  writeTossimEvent(msg, total_size, clifd);
  free(msg);
}





static inline void *eventAcceptThreadFunc(void *arg)
#line 316
{
  int clifd;
  fd_set acceptset;

  dbg_clear(DBG_SIM, "SIM: eventAcceptThread running.\n");

  while (1) {
      do {
#line 323
          int __d0;
#line 323
          int __d1;

#line 323
           __asm volatile ("cld; rep; stosl" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(fd_set ) / sizeof(__fd_mask )), "1"(&(&acceptset)->__fds_bits[0]) : "memory");}
      while (
#line 323
      0);
       __asm volatile ("btsl %1,%0" : "=m"((&acceptset)->__fds_bits[eventServerSocket / (8 * sizeof(__fd_mask ))]) : "r"((int )eventServerSocket % (8 * sizeof(__fd_mask ))) : "cc", "memory");
      ;
      if (select(eventServerSocket + 1, &acceptset, (void *)0, (void *)0, (void *)0) < 0) {
          ;
        }
      ;

      if (__extension__ ({
#line 331
        register char __result;

#line 331
         __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )eventServerSocket % (8 * sizeof(__fd_mask ))), "m"((&acceptset)->__fds_bits[eventServerSocket / (8 * sizeof(__fd_mask ))]) : "cc");__result;
      }
      )) 
#line 331
        {
          ;
          clifd = acceptConnection(eventServerSocket);
          ;
          pthread_mutex_lock(&eventClientsLock);
          addClient(eventClients, clifd);
          sendInitEvent(clifd);
          pthread_cond_broadcast(&eventClientsCond);
          pthread_mutex_unlock(&eventClientsLock);
        }
    }
  return 0;
}

#line 136
static inline void initializeSockets(void)
#line 136
{
  int i;

#line 138
  dbg_clear(DBG_SIM, "SIM: Initializing sockets\n");

  pthread_mutex_init(& tos_state.pause_lock, (void *)0);
  pthread_cond_init(& tos_state.pause_cond, (void *)0);
  pthread_cond_init(& tos_state.pause_ack_cond, (void *)0);

  for (i = 0; i < 4; i++) {
      commandClients[i] = -1;
      eventClients[i] = -1;
      batchState[i] = 0;
    }
  eventMask = 0xffff;
  commandServerSocket = createServerSocket(10584);
  eventServerSocket = createServerSocket(10585);
  pthread_mutex_init(&eventClientsLock, (void *)0);
  pthread_cond_init(&eventClientsCond, (void *)0);
  pthread_create(&eventAcceptThread, (void *)0, eventAcceptThreadFunc, (void *)0);
  pthread_create(&commandReadThread, (void *)0, commandReadThreadFunc, (void *)0);
  socketsInitialized = 1;
}

# 80 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
static inline void rate_checkpoint(void)
#line 80
{
  rate_checkpoint_time = tos_state.tos_time;
  gettimeofday(&startTime, (void *)0);
}

# 91 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$stop(void)
#line 91
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 168
static inline  result_t TimerM$Timer$stop(uint8_t id)
#line 168
{

  if (id >= NUM_TIMERS) {
#line 170
    return FAIL;
    }
#line 171
  if (TimerM$mState[tos_state.current_node] & (0x1L << id)) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
        TimerM$mState[tos_state.current_node] &= ~(0x1L << id);
#line 172
        __nesc_atomic_end(__nesc_atomic); }
      if (!TimerM$mState[tos_state.current_node]) {
          TimerM$setIntervalFlag[tos_state.current_node] = 1;
        }
      return SUCCESS;
    }
  return FAIL;
}

# 68 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TestTinyAllocM$Timer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(0U);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 131 "TestTinyAllocM.nc"
static inline  result_t TestTinyAllocM$StdControl$stop(void)
#line 131
{
  TestTinyAllocM$Timer$stop();
  return SUCCESS;
}

# 78 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = TestTinyAllocM$StdControl$stop();
#line 78
  result = rcombine(result, TimerM$StdControl$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 432 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
static inline   TOS_MsgPtr Nido$UARTReceiveMsg$default$receive(TOS_MsgPtr msg)
#line 432
{
  return msg;
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0xb781ca20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = Nido$UARTReceiveMsg$default$receive(arg_0xb781ca20);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 236 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline void waitForGuiConnection(void)
#line 236
{
  int numclients = 0;
  int n;

  dbg_clear(DBG_SIM, "SIM: Waiting for connection from GUI...\n");
  pthread_mutex_lock(&eventClientsLock);
  while (numclients == 0) {
      for (n = 0; n < 4; n++) {
          if (eventClients[n] != -1) {
              dbg_clear(DBG_SIM, "SIM: Got client connection fd %d\n", eventClients[n]);
              numclients++;
            }
        }
      if (numclients == 0) {
          pthread_cond_wait(&eventClientsCond, &eventClientsLock);
        }
    }
  pthread_mutex_unlock(&eventClientsLock);
}

# 43 "/opt/tinyos-1.x/tos/platform/pc/events.c"
static inline void event_default_cleanup(event_t *event)
#line 43
{
  free(event->data);
  dbg(DBG_MEM, "event_default_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

# 78 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
static inline int is_empty(heap_t *heap)
#line 78
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 82
{
  return is_empty(heap);
}

# 86 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
static inline int queue_is_empty(event_queue_t *queue)
#line 86
{
  int rval;

#line 88
  pthread_mutex_lock(& queue->lock);
  rval = heap_is_empty(& queue->heap);
  pthread_mutex_unlock(& queue->lock);
  return rval;
}

# 86 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
static inline long long heap_get_min_key(heap_t *heap)
#line 86
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 94 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
static inline long long queue_peek_event_time(event_queue_t *queue)
#line 94
{
  long long rval;

  pthread_mutex_lock(& queue->lock);
  if (heap_is_empty(& queue->heap)) {
      rval = -1;
    }
  else {
      rval = heap_get_min_key(& queue->heap);
    }

  pthread_mutex_unlock(& queue->lock);
  return rval;
}

#line 63
static inline event_t *queue_pop_event(event_queue_t *queue)
#line 63
{
  long long ftime;
  event_t *event;

  pthread_mutex_lock(& queue->lock);
  event = (event_t *)heap_pop_min_data(& queue->heap, &ftime);
  pthread_mutex_unlock(& queue->lock);

  if (dbg_active(DBG_QUEUE)) {
      char timeStr[128];

#line 73
      timeStr[0] = 0;
      printOtherTime(timeStr, 128, ftime);
      dbg(DBG_QUEUE, "Popping event for mote %i with time %s.\n", event->mote, timeStr);
    }

  if (queue->pause > 0 && event->pause) {
      sleep(queue->pause);
    }


  return event;
}

#line 109
static inline void queue_handle_next_event(event_queue_t *queue)
#line 109
{
  event_t *event = queue_pop_event(queue);

#line 111
  if (event != (void *)0) {
      if (tos_state.moteOn[event->mote] || event->force) {
          tos_state.current_node = event->mote;
          dbg(DBG_QUEUE, "Setting TOS_LOCAL_ADDRESS to %hi\n", (short )(event->mote & 0xffff));
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
            TOS_LOCAL_ADDRESS = (short )(event->mote & 0xffff);
#line 115
            __nesc_atomic_end(__nesc_atomic); }
          event->handle(event, &tos_state);
        }
    }
}

# 86 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
static inline void rate_based_wait(void)
#line 86
{
  long long rtElapsed;
  long long diffVal;
  long long secondVal;

#line 90
  gettimeofday(&thisTime, (void *)0);
  rtElapsed = thisTime.tv_usec - startTime.tv_usec;
  secondVal = thisTime.tv_sec - startTime.tv_sec;
  secondVal *= (long long )1000000;
  rtElapsed += secondVal;
  rtElapsed *= (long long )4;
  rtElapsed = (long long )((double )rtElapsed * rate_value);
  if (rtElapsed + 10000 < tos_state.tos_time - rate_checkpoint_time) {
      diffVal = tos_state.tos_time - rate_checkpoint_time - rtElapsed;
      diffVal /= 4;
      usleep(diffVal);
    }
}

# 339 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline void PowerStateM$print_power_info(void)
#line 339
{
  int mote;

#line 341
  if (!cpu_prof_on) {
      fprintf(stderr, "print_power_info() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }


  if (!power_init) {
      fprintf(stderr, "print_power_info() called before init_power_info()! Should never happen!\n");
      exit(-1);
    }

  for (mote = 0; mote < tos_state.num_nodes; mote++) {

      dbg(DBG_POWER, "POWER: Mote %d CPU_CYCLES %.1lf at %lld\n", mote, 
      PowerStateM$PowerState$get_mote_cycles(mote), 
      tos_state.tos_time);
    }
}

#line 389
static inline   void PowerStateM$PowerState$CPUCycleCheckpoint(void)
#line 389
{
  if (!cpu_prof_on) {
      fprintf(stderr, "CPUCycleCheckpoint() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }


  PowerStateM$print_power_info();
}

# 22 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void Nido$PowerState$CPUCycleCheckpoint(void){
#line 22
  PowerStateM$PowerState$CPUCycleCheckpoint();
#line 22
}
#line 22
# 317 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline int PowerStateM$bb_exec_count(int mote, int bb)
#line 317
{
  int POWERPROF_BB_EXEC_COUNT;

#line 319
  return POWERPROF_BB_EXEC_COUNT;
}

#line 361
static inline void PowerStateM$dump_power_details(void)
#line 361
{
  char exec_cnts[12] = "bb_exec_cnt";
  FILE *f;
  int mote;
#line 364
  int bb;

  if (!cpu_prof_on) {
      fprintf(stderr, "dump_power_details() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }

  f = fopen(exec_cnts, "w");
  if (!f) {
      fprintf(stderr, "Couldn't open '%s', exiting\n", exec_cnts);
      exit(-1);
    }
  for (mote = 0; mote < tos_state.num_nodes; mote++) {
      fprintf(f, "mote %d total cycles: %.1lf\n", mote, PowerStateM$PowerState$get_mote_cycles(mote));
      dbg(DBG_POWER, "POWER: Mote %d CPU_CYCLES %.1lf at %lld\n", mote, PowerStateM$PowerState$get_mote_cycles(mote), tos_state.tos_time);

      for (bb = 1; bb < PowerStateM$num_bbs(); bb++) {
          fprintf(f, "%6d %6d %8d\n", mote, bb, PowerStateM$bb_exec_count(mote, bb));
        }
    }

  fclose(f);
}

#line 54
static inline   result_t PowerStateM$PowerState$stop(void)
#line 54
{
  if (cpu_prof_on) {
    PowerStateM$dump_power_details();
    }
#line 57
  return SUCCESS;
}

# 18 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   result_t Nido$PowerState$stop(void){
#line 18
  unsigned char result;
#line 18

#line 18
  result = PowerStateM$PowerState$stop();
#line 18

#line 18
  return result;
#line 18
}
#line 18
# 97 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
static __inline void __nesc_enable_interrupt(void)
{
}

# 446 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
  void packet_sim_transmit_done(TOS_MsgPtr msg)
#line 446
{
  dbg(DBG_PACKET, "TossimPacketMica2M: Send done.\n");
  Nido$RadioSendMsg$sendDone(msg, SUCCESS);
}

# 92 "/opt/tinyos-1.x/tos/types/dbg.h"
static void dbg(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

#line 95
  if (dbg_active(mode)) {
      va_list args;

      if (!(mode & DBG_SIM)) {
          __builtin_va_start(args, format);
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
          __builtin_va_end(args);
        }
      if (!dbg_suppress_stdout) {
          __builtin_va_start(args, format);

          fprintf(stdout, "%i: ", tos_state.current_node);
          vfprintf(stdout, format, args);
          __builtin_va_end(args);
        }
    }
}

# 856 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data)
#line 856
{
  unsigned char *msg;
  int total_size;
  int n;
  int numclients = 0;
  int clients[4];

  if (!socketsInitialized) {
#line 863
    return;
    }
  pthread_mutex_lock(&eventClientsLock);
  while (numclients == 0) {
      for (n = 0; n < 4; n++) {
          clients[n] = -1;
          if (eventClients[n] != -1) {
              clients[n] = eventClients[n];
              numclients++;
            }
        }

      if (numclients == 0 && GUI_enabled) {
          ;
          pthread_cond_wait(&eventClientsCond, &eventClientsLock);
          ;
        }
      else {
#line 879
        if (numclients == 0) {

            pthread_mutex_unlock(&eventClientsLock);
            return;
          }
        }
    }
#line 885
  pthread_mutex_unlock(&eventClientsLock);

  ;

  buildTossimEvent(moteID, type, ftime, data, &msg, &total_size);

  for (n = 0; n < 4; n++) {
      if (clients[n] != -1 && (type & eventMask) != 0) {
          if (writeTossimEvent(msg, total_size, clients[n]) < 0) {

              pthread_mutex_lock(&eventClientsLock);
              eventClients[n] = -1;
              pthread_mutex_unlock(&eventClientsLock);
            }
        }
    }
  ;
  free(msg);
}

#line 796
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp)
#line 797
{
  unsigned char *msg;
  int payload_size;
#line 799
  int total_size;



  switch (type) {
      case AM_DEBUGMSGEVENT: 
        payload_size = sizeof(DebugMsgEvent );
      break;
      case AM_RADIOMSGSENTEVENT: 
        payload_size = sizeof(RadioMsgSentEvent );
      break;
      case AM_UARTMSGSENTEVENT: 
        payload_size = sizeof(RadioMsgSentEvent );
      break;
      case AM_ADCDATAREADYEVENT: 
        payload_size = sizeof(ADCDataReadyEvent );
      break;
      case AM_TOSSIMINITEVENT: 
        payload_size = sizeof(TossimInitEvent );
      break;
      case AM_VARIABLERESOLVERESPONSE: 
        payload_size = sizeof(VariableResolveResponse );
      break;
      case AM_VARIABLEREQUESTRESPONSE: 
        payload_size = sizeof(VariableRequestResponse );
      break;
      case AM_INTERRUPTEVENT: 
        payload_size = sizeof(InterruptEvent );
      dbg(DBG_TEMP, "SIM: Sending InterruptEvent, payload is %i\n", (int )payload_size);
      break;
      case AM_LEDEVENT: 
        payload_size = sizeof(LedEvent );
      break;
      default: 
        ;
      return;
    }

  total_size = 14 + payload_size;
  msg = (unsigned char *)malloc(total_size);

  * (unsigned short *)&msg[0] = htons(type);
  * (unsigned short *)&msg[2] = htons(moteID);
  * (long long *)&msg[4] = __extension__ ({
#line 842
    union __nesc_unnamed4358 {
#line 842
      __extension__ unsigned long long int __ll;
#line 842
      unsigned long int __l[2];
    } 
#line 842
    __w;
#line 842
    union __nesc_unnamed4358 __r;

#line 842
    if (__builtin_constant_p(ftime)) {
#line 842
      __r.__ll = ((((((((ftime & 0xff00000000000000ull) >> 56) | ((ftime & 0x00ff000000000000ull) >> 40)) | ((ftime & 0x0000ff0000000000ull) >> 24)) | ((ftime & 0x000000ff00000000ull) >> 8)) | ((ftime & 0x00000000ff000000ull) << 8)) | ((ftime & 0x0000000000ff0000ull) << 24)) | ((ftime & 0x000000000000ff00ull) << 40)) | ((ftime & 0x00000000000000ffull) << 56);
      }
    else 
#line 842
      {
#line 842
        __w.__ll = ftime;
#line 842
        __r.__l[0] = __extension__ ({
#line 842
          register unsigned int __v;
#line 842
          register unsigned int __x = __w.__l[1];

#line 842
          if (__builtin_constant_p(__x)) {
#line 842
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 842
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 842
          __v;
        }
        );
#line 842
        __r.__l[1] = __extension__ ({
#line 842
          register unsigned int __v;
#line 842
          register unsigned int __x = __w.__l[0];

#line 842
          if (__builtin_constant_p(__x)) {
#line 842
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 842
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 842
          __v;
        }
        );
      }
#line 842
    __r.__ll;
  }
  );
#line 843
  * (unsigned short *)&msg[12] = htons(payload_size);
  memcpy((unsigned char *)msg + 14, data, payload_size);

  ;


  *msgp = msg;
  *lenp = total_size;
}

#line 765
static int writeTossimEvent(void *data, int datalen, int clifd)
#line 765
{
  unsigned char ack;
  int i;
#line 767
  int j;









  ;
  j = 0;


  i = send(clifd, data, datalen, 0);
  ;
  if (i >= 0) {
#line 783
    j = read(clifd, &ack, 1);
    }
#line 784
  ;
  if (i < 0 || j < 0) {
      ;
      close(clifd);
      return -1;
    }


  ;
  return 0;
}

# 451 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
  void packet_sim_receive_msg(TOS_MsgPtr msg)
#line 451
{
  msg = Nido$RadioReceiveMsg$receive(msg);
}

# 102 "/opt/tinyos-1.x/tos/system/sched.c"
 bool TOS_post(void (*tp)(void))
#line 102
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t tmp;



  fInterruptFlags = __nesc_atomic_start();

  tmp = TOSH_sched_free;

  if (TOSH_queue[tmp].tp == (void *)0) {
      TOSH_sched_free = (tmp + 1) & TOSH_TASK_BITMASK;
      TOSH_queue[tmp].tp = tp;
      __nesc_atomic_end(fInterruptFlags);

      return TRUE;
    }
  else {
      __nesc_atomic_end(fInterruptFlags);

      return FALSE;
    }
}

# 141 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
  void event_backoff_handle(event_t *event, struct TOS_state *state)
#line 141
{
  if (incoming[tos_state.current_node] != (void *)0) {
      int backoffAmount = backoffLow;

#line 144
      backoffAmount += rand() % (backoffHigh - backoffLow);
      event_backoff_create(event, tos_state.current_node, tos_state.tos_time + backoffAmount);
      dbg(DBG_PACKET, "SIM_PACKET: Backoff more: %i.\n", backoffAmount);
      queue_insert_event(& tos_state.queue, event);
#line 147
      ;
    }
  else {
      event_start_transmit_create(event, tos_state.current_node, tos_state.tos_time + txChangeLatency);
      queue_insert_event(& tos_state.queue, event);
#line 151
      ;
    }
}

# 48 "/opt/tinyos-1.x/tos/platform/pc/events.c"
static void event_total_cleanup(event_t *event)
#line 48
{
  free(event->data);
  dbg(DBG_MEM, "event_total_cleanup: freeing event data: 0x%x\n", (unsigned int )event->data);
  event->data = (void *)0;
  free(event);
  dbg(DBG_MEM, "event_total_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

# 57 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
static void queue_insert_event(event_queue_t *queue, event_t *event)
#line 57
{
  pthread_mutex_lock(& queue->lock);
  heap_insert(& queue->heap, event, event->time);
  pthread_mutex_unlock(& queue->lock);
}

# 187 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
static void up_heap(heap_t *heap, int findex)
#line 187
{
  int parent_index;

#line 189
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 148
static void swap(node_t *first, node_t *second)
#line 148
{
  long long key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 174 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
  void event_start_transmit_handle(event_t *event, struct TOS_state *state)
#line 174
{
  link_t *connectLink;
  TOS_MsgPtr msg = packet_transmitting[tos_state.current_node];
  int transmitTime = preambleLength + msg->length + headerLength;

#line 178
  transmitTime *= byteTransmitTime;
  connectLink = cc1000_connectivity[tos_state.current_node];

  dbg(DBG_PACKET, "SIM_PACKET: Transmitting, transmit time is %i.\n", transmitTime);

  while (connectLink != (void *)0) {
      int mote = connectLink->mote;

#line 185
      if (mote >= tos_state.num_nodes || 
      !tos_state.moteOn[mote]) {
          connectLink = connectLink->next_link;
          continue;
        }

      if (packet_transmitting[mote] == (void *)0) {
          event_t *recvEvent = (event_t *)malloc(sizeof(event_t ));

          IncomingMsg *msgEvent = (IncomingMsg *)malloc(sizeof(IncomingMsg ));

#line 195
          nmemcpy(& msgEvent->msg, msg, sizeof(TOS_Msg ));
          dbg(DBG_PACKET, "SIM_PACKET: Mote %i sending to mote %i\n", (int )tos_state.current_node, (int )mote);


          if (incoming[mote] != (void *)0) {
              IncomingMsg *incomingMsg = incoming[mote];

#line 201
              corruptPacket(msgEvent, tos_state.current_node, mote);
              while (incomingMsg != (void *)0) {
                  corruptPacket(incomingMsg, tos_state.current_node, mote);
                  incomingMsg = incomingMsg->next;
                }
            }

          msgEvent->next = incoming[mote];
          incoming[mote] = msgEvent;


          event_receive_packet_create(recvEvent, mote, tos_state.tos_time + transmitTime, msgEvent);
          queue_insert_event(& tos_state.queue, recvEvent);
#line 213
          ;
        }
      else {
          dbg(DBG_PACKET, "SIM_PACKET: Mote %i would send to mote %i, but it is transmitting.\n", (int )tos_state.current_node, (int )mote);
        }
      connectLink = connectLink->next_link;
    }

  dbg(DBG_PACKET, "SIM_PACKET: Enqueueing send done.\n");
  event_send_packet_done_create(event, tos_state.current_node, tos_state.tos_time + transmitTime);
  queue_insert_event(& tos_state.queue, event);
#line 223
  ;
}

#line 165
static void corruptPacket(IncomingMsg *msg, int src, int dest)
#line 165
{
  int i;
  uint8_t *buf = (uint8_t *)& msg->msg;

#line 168
  dbg(DBG_PACKET, "SIM_PACKET: Corrupting message from %i to %i\n", src, dest);
  for (i = 0; i < 29 + 7; i++) {
      buf[i] = (uint8_t )(rand() & 0xff);
    }
}

#line 228
  void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg)
#line 228
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->time = eventTime;
  event->handle = event_receive_packet_handle;
  event->cleanup = event_total_cleanup;
  event->data = msg;
}


  void event_receive_packet_handle(event_t *event, struct TOS_state *state)
#line 239
{
  IncomingMsg *receivedPacket;
  IncomingMsg *prevPacket = (void *)0;
  IncomingMsg *nextPacket = (void *)0;

  receivedPacket = (IncomingMsg *)event->data;

  prevPacket = incoming[tos_state.current_node];
  if (prevPacket == receivedPacket) {
      incoming[tos_state.current_node] = prevPacket->next;
    }
  else {
      while (prevPacket->next != (void *)0) {
          nextPacket = prevPacket->next;
          if (nextPacket == receivedPacket) {
              prevPacket->next = nextPacket->next;
              break;
            }
          prevPacket = nextPacket;
        }
    }

  dbg(DBG_PACKET, "SIM_PACKET: Receiving\n");
  packet_sim_receive_msg(& receivedPacket->msg);
  event_cleanup(event);
}

  void event_send_packet_done_create(event_t *event, int node, long long eventTime)
#line 266
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->time = eventTime;
  event->handle = event_send_packet_done_handle;
  event->cleanup = event_total_cleanup;
  event->data = (void *)0;
}


  void event_send_packet_done_handle(event_t *event, struct TOS_state *state)
#line 277
{
  TOS_MsgPtr bufferPtr = packet_transmitting[tos_state.current_node];

#line 279
  if (dbg_active(DBG_PACKET)) {
      char timeBuf[128];

#line 281
      printTime(timeBuf, 128);
      dbg(DBG_PACKET, "SIM_PACKET: Send done @%s\n", timeBuf);
    }
  packet_transmitting[tos_state.current_node] = (void *)0;
  packet_sim_transmit_done(bufferPtr);
  event_cleanup(event);
}

# 256 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static int printOtherTime(char *buf, int len, long long int ftime)
#line 256
{
  int hours;
  int minutes;
  int seconds;
  int secondBillionths;

  secondBillionths = (int )(ftime % (long long )4000000);
  seconds = (int )(ftime / (long long )4000000);
  minutes = seconds / 60;
  hours = minutes / 60;
  secondBillionths *= (long long )25;
  seconds %= 60;
  minutes %= 60;

  return snprintf(buf, len, "%i:%i:%i.%08i", hours, minutes, seconds, secondBillionths);
}

# 107 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
  void event_boot_handle(event_t *fevent, 
struct TOS_state *fstate)
#line 108
{
  char timeVal[128];

#line 110
  printTime(timeVal, 128);


  if (!tos_state.cancelBoot[tos_state.current_node]) {
      dbg(DBG_BOOT, "BOOT: Mote booting at time %s.\n", timeVal);
      nido_start_mote((uint16_t )tos_state.current_node);
    }
  else 
#line 116
    {
      dbg(DBG_BOOT, "BOOT: Boot cancelled at time %s since mote turned off.\n", 
      timeVal);
    }
}

#line 387
  void nido_start_mote(uint16_t moteID)
#line 387
{
  if (!tos_state.moteOn[moteID] && moteID < tos_state.num_nodes) {
      __nesc_nido_initialise(moteID);
      tos_state.moteOn[moteID] = 1;
      tos_state.current_node = moteID;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 392
        TOS_LOCAL_ADDRESS = tos_state.current_node;
#line 392
        __nesc_atomic_end(__nesc_atomic); }
      tos_state.node_state[moteID].time = tos_state.tos_time;
      Nido$StdControl$init();
      Nido$StdControl$start();
      tos_state.node_state[moteID].pot_setting = 73;
      while (TOSH_run_next_task()) {
        }
    }
}

# 59 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static void LedsM$updateLeds(void)
#line 59
{
  LedEvent e;

#line 61
  e.red = (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) > 0;
  e.green = (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) > 0;
  e.yellow = (LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT) > 0;
  sendTossimEvent(tos_state.current_node, AM_LEDEVENT, tos_state.tos_time, &e);
}

# 86 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static void TOSH_clock_set_rate(char interval, char scale)
{
  long long ticks;
  event_t *event = (void *)0;

#line 90
  interval = interval + 1;

  dbg(DBG_CLOCK, "CLOCK: Setting clock rate to interval %u, scale %u\n", (unsigned int )(interval & 0xff), (unsigned int )(scale & 0xff));
  if (clockEvents[tos_state.current_node] != (void *)0) {
      event_clocktick_invalidate(clockEvents[tos_state.current_node]);
    }

  ticks = clockScales[(int )(scale & 0xff)] * (int )(interval & 0xff);

  if (ticks > 0) {
      ticks = clockScales[(int )(scale & 0xff)] * (int )(interval & 0xff);


      event = (event_t *)malloc(sizeof(event_t ));

      event_clocktick_create(event, tos_state.current_node, tos_state.tos_time, ticks);
      queue_insert_event(& tos_state.queue, event);
#line 106
      ;
    }
  intervals[tos_state.current_node] = interval;
  scales[tos_state.current_node] = scale;
  clockEvents[tos_state.current_node] = event;
  setTime[tos_state.current_node] = tos_state.tos_time;
  return;
}

#line 191
static void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval)
#line 191
{


  clock_tick_data_t *data = malloc(sizeof(clock_tick_data_t ));

#line 195
  dbg(DBG_MEM, "malloc data entry for clock event: 0x%x\n", (int )data);
  data->interval = interval;
  data->mote = mote;
  data->valid = 1;
  data->disabled = 0;

  event->mote = mote;
  event->force = 0;
  event->pause = 1;
  event->data = data;
  event->time = eventTime + interval;
  event->handle = event_clocktick_handle;
  event->cleanup = event_total_cleanup;
}

# 77 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static   result_t LedsM$Leds$redOn(void)
#line 77
{
  dbg(DBG_LED, "LEDS: Red on.\n");
  LedsM$PowerState$redOn();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 80
    {
      if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT)) {
          LedsM$ledsOn[tos_state.current_node] |= LedsM$RED_BIT;
          LedsM$updateLeds();
        }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 180 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static  result_t TinyAlloc$MemAlloc$allocate(HandlePtr handlePtr, int16_t size)
#line 180
{
  if (size > TinyAlloc$MAX_SIZE || TinyAlloc$mAllocing[tos_state.current_node]) {

      return FAIL;
    }
  TinyAlloc$mAllocing[tos_state.current_node] = 1;
  TinyAlloc$mSize[tos_state.current_node] = size + TinyAlloc$HEADER_SIZE;
  TinyAlloc$mHandle[tos_state.current_node] = handlePtr;
  TinyAlloc$mCompacted[tos_state.current_node] = 0;
  TinyAlloc$mNeedFree[tos_state.current_node] = 0;
  TinyAlloc$mContig[tos_state.current_node] = 0;
  TinyAlloc$mLast[tos_state.current_node] = 0;
  TinyAlloc$mStartByte[tos_state.current_node] = 0;
  TinyAlloc$mFreeBytes[tos_state.current_node] -= TinyAlloc$mSize[tos_state.current_node];
  TOS_post(TinyAlloc$allocTask);
  return SUCCESS;
}

static  void TinyAlloc$allocTask(void)
#line 198
{
  int16_t endByte;
  int16_t i;
#line 200
  int16_t j;

  i = TinyAlloc$mLast[tos_state.current_node]++;
  if (i == TinyAlloc$FREE_SIZE) {
      if (TinyAlloc$mCompacted[tos_state.current_node]) {

          TinyAlloc$mAllocing[tos_state.current_node] = 0;
          if (TinyAlloc$mReallocing[tos_state.current_node]) {
              TinyAlloc$finish_realloc(TinyAlloc$mHandle[tos_state.current_node], 0);
            }
          else {
              TinyAlloc$MemAlloc$allocComplete(TinyAlloc$mHandle[tos_state.current_node], FAIL);
            }
        }
      else {
          TinyAlloc$mCompacted[tos_state.current_node] = 1;


          TOS_post(TinyAlloc$compactTask);
        }
      return;
    }

  if (TinyAlloc$mNeedFree[tos_state.current_node] && TinyAlloc$mFree[tos_state.current_node][i] != 0xFF) {
      TinyAlloc$mStartByte[tos_state.current_node] = i << 3;
      for (j = 0; j < 8; j++) {
          if (TinyAlloc$mFree[tos_state.current_node][i] & (1 << j)) {
              if (TinyAlloc$mContig[tos_state.current_node] >= TinyAlloc$mSize[tos_state.current_node]) {

                  endByte = TinyAlloc$mStartByte[tos_state.current_node] + TinyAlloc$mSize[tos_state.current_node];
                  TinyAlloc$doAlloc(TinyAlloc$mStartByte[tos_state.current_node], endByte);
                  return;
                }
              else {
                  TinyAlloc$mStartByte[tos_state.current_node] += TinyAlloc$mContig[tos_state.current_node] + 1;
                  TinyAlloc$mContig[tos_state.current_node] = 0;
                }
            }
          else {
              TinyAlloc$mContig[tos_state.current_node]++;
            }
        }

      if (TinyAlloc$mContig[tos_state.current_node] >= TinyAlloc$mSize[tos_state.current_node]) {
          endByte = TinyAlloc$mStartByte[tos_state.current_node] + TinyAlloc$mSize[tos_state.current_node];
          TinyAlloc$doAlloc(TinyAlloc$mStartByte[tos_state.current_node], endByte);

          return;
        }
      else {

          TinyAlloc$mNeedFree[tos_state.current_node] = 0;
        }
    }
  else {
#line 254
    if (TinyAlloc$mNeedFree[tos_state.current_node] == 0) {


        if (TinyAlloc$mFree[tos_state.current_node][i] == 0) {
            TinyAlloc$mContig[tos_state.current_node] += 8;
          }
        else {
            for (j = 0; j < 8; j++) {
                if ((TinyAlloc$mFree[tos_state.current_node][i] & (1 << j)) == 0) {
                    TinyAlloc$mContig[tos_state.current_node]++;
                  }
                else {
                    break;
                  }
              }
          }
        if (TinyAlloc$mContig[tos_state.current_node] >= TinyAlloc$mSize[tos_state.current_node]) {
            endByte = TinyAlloc$mStartByte[tos_state.current_node] + TinyAlloc$mSize[tos_state.current_node];
            TinyAlloc$doAlloc(TinyAlloc$mStartByte[tos_state.current_node], endByte);

            return;
          }
        else {
#line 276
          if (TinyAlloc$mFree[tos_state.current_node][i] != 0) {
              TinyAlloc$mContig[tos_state.current_node] = 0;
              TinyAlloc$mNeedFree[tos_state.current_node] = 1;
              TinyAlloc$mLast[tos_state.current_node]--;
            }
          }
      }
    }
#line 282
  TOS_post(TinyAlloc$allocTask);
}

#line 524
static int8_t TinyAlloc$finish_realloc(Handle *hand, int8_t success)
#line 524
{


  if (success) {
      int8_t *p = * *hand;
      int8_t *q = *TinyAlloc$mOldHandle[tos_state.current_node];
      int16_t cnt = TinyAlloc$getSize(*TinyAlloc$mOldHandle[tos_state.current_node]);

      while (cnt--) {
          * p++ = * q++;
        }

      TinyAlloc$setFreeBits(TinyAlloc$start_offset(*TinyAlloc$mOldHandle[tos_state.current_node]), 
      TinyAlloc$start_offset(*TinyAlloc$mOldHandle[tos_state.current_node]) + TinyAlloc$getSize(*TinyAlloc$mOldHandle[tos_state.current_node]), 0);

      TinyAlloc$remapAddr(*TinyAlloc$mOldHandle[tos_state.current_node], * *hand);



      TinyAlloc$markHandleFree(*hand);

      TinyAlloc$mReallocing[tos_state.current_node] = 0;
      TinyAlloc$MemAlloc$reallocComplete(TinyAlloc$mOldHandle[tos_state.current_node], SUCCESS);
    }
  else {
      TinyAlloc$mReallocing[tos_state.current_node] = 0;
      TinyAlloc$MemAlloc$reallocComplete(TinyAlloc$mOldHandle[tos_state.current_node], FAIL);
      return FAIL;
    }
  return SUCCESS;
}

#line 668
static void TinyAlloc$setFreeBits(int16_t startByte, int16_t endByte, int8_t on)
#line 668
{
  int16_t leadInBits = startByte - ((startByte >> 3) << 3);
  int16_t leadOutBits = endByte - ((endByte >> 3) << 3);
  int16_t i;
  int16_t startFree = startByte >> 3;
  int16_t endFree = endByte >> 3;

  dbg(DBG_USR1, "Setting bits from %d to %d to %d\n", startByte, endByte, on);
  if (startFree == endFree) {
      leadInBits = 8;
    }


  if (on) {
      for (i = leadInBits; i < 8; i++) {
          TinyAlloc$mFree[tos_state.current_node][startFree] |= 1 << i;
        }
      for (i = 0; i < leadOutBits; i++) {
          TinyAlloc$mFree[tos_state.current_node][endFree] |= 1 << i;
        }
      startFree++;
      for (i = startFree; i < endFree; i++) {
          TinyAlloc$mFree[tos_state.current_node][i] = 0xFF;
        }
    }
  else 
#line 692
    {
      for (i = leadInBits; i < 8; i++) {
          TinyAlloc$mFree[tos_state.current_node][startFree] &= 0xFF ^ (1 << i);
        }
      for (i = 0; i < leadOutBits; i++) {
          TinyAlloc$mFree[tos_state.current_node][endFree] &= 0xFF ^ (1 << i);
        }
      startFree++;
      for (i = startFree; i < endFree; i++) {
          TinyAlloc$mFree[tos_state.current_node][i] = 0x00;
        }
    }
}

#line 617
static void TinyAlloc$remapAddr(int8_t *oldAddr, int8_t *newAddr)
#line 617
{
  int16_t i;

#line 619
  for (i = 0; i < TinyAlloc$MAX_HANDLES; i++) {
      if (TinyAlloc$mHandles[tos_state.current_node][i] == oldAddr) {
          TinyAlloc$mHandles[tos_state.current_node][i] = newAddr;
        }
    }
}

#line 650
static void TinyAlloc$markHandleFree(Handle hand)
#line 650
{
  int i;

#line 652
  for (i = 0; i < TinyAlloc$MAX_HANDLES; i++) {
      if (&TinyAlloc$mHandles[tos_state.current_node][i] == hand) {





          TinyAlloc$mHandles[tos_state.current_node][i] = 0;
          break;
        }
    }
}

# 180 "TestTinyAllocM.nc"
static  result_t TestTinyAllocM$MemAlloc$reallocComplete(Handle h, result_t complete)
#line 180
{
  if (h == TestTinyAllocM$first[tos_state.current_node]) {
      TestTinyAllocM$MemAlloc$allocComplete(&TestTinyAllocM$first[tos_state.current_node], complete);
    }
  if (h == TestTinyAllocM$second[tos_state.current_node]) {
      TestTinyAllocM$MemAlloc$allocComplete(&TestTinyAllocM$second[tos_state.current_node], complete);
    }
  if (h == TestTinyAllocM$third[tos_state.current_node]) {
      TestTinyAllocM$MemAlloc$allocComplete(&TestTinyAllocM$third[tos_state.current_node], complete);
    }
  return SUCCESS;
}

#line 136
static  result_t TestTinyAllocM$MemAlloc$allocComplete(HandlePtr handle, result_t complete)
#line 136
{

  if (complete) {
      if (handle == &TestTinyAllocM$first[tos_state.current_node]) {
          TestTinyAllocM$Leds$greenToggle();
          dbg(DBG_USR1, "TestTinyAlloc: Alloc on handle 1 completed.\n");

          TestTinyAllocM$didFirst[tos_state.current_node] = 1;
        }
      else {
#line 145
        if (handle == &TestTinyAllocM$second[tos_state.current_node]) {
            if (TestTinyAllocM$didSecond[tos_state.current_node]) {

                TestTinyAllocM$Leds$greenToggle();
                dbg(DBG_USR1, "TestTinyAlloc: Realloc on handle 2 completed.\n");
                TestTinyAllocM$didRealloc[tos_state.current_node] = 1;
              }
            else 
              {
                TestTinyAllocM$Leds$greenToggle();
                dbg(DBG_USR1, "TestTinyAlloc: Alloc on handle 2 completed.\n");

                TestTinyAllocM$didSecond[tos_state.current_node] = 1;
              }
          }
        else {
#line 160
          if (handle == &TestTinyAllocM$third[tos_state.current_node]) {
              TestTinyAllocM$Leds$greenToggle();
              dbg(DBG_USR1, "TestTinyAlloc: Alloc on handle 3 completed.\n");

              TestTinyAllocM$didThird[tos_state.current_node] = 1;
            }
          else {
              TestTinyAllocM$Leds$yellowOn();
              dbg(DBG_USR1, "TestTinyAlloc: Unknown handle returned.\n");
            }
          }
        }
    }
  else 
#line 172
    {
      TestTinyAllocM$Leds$yellowOn();
      dbg(DBG_USR1, "TestTinyAlloc: Operation failed..\n");
    }

  return SUCCESS;
}

# 137 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static   result_t LedsM$Leds$greenToggle(void)
#line 137
{
  result_t rval;

#line 139
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 139
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) {
        rval = LedsM$Leds$greenOff();
        }
      else {
#line 143
        rval = LedsM$Leds$greenOn();
        }
    }
#line 145
    __nesc_atomic_end(__nesc_atomic); }
#line 145
  return rval;
}

static   result_t LedsM$Leds$yellowOn(void)
#line 148
{
  dbg(DBG_LED, "LEDS: Yellow on.\n");
  LedsM$PowerState$yellowOn();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT)) {
          LedsM$ledsOn[tos_state.current_node] |= LedsM$YELLOW_BIT;
          LedsM$updateLeds();
        }
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 313 "/opt/tinyos-1.x/tos/lib/Util/TinyAlloc.nc"
static  void TinyAlloc$compactTask(void)
#line 313
{
  int16_t i;
  uint8_t c;
  int8_t *p;
  int8_t endFree = 0;

  if (TinyAlloc$mCompacting[tos_state.current_node] == 0) {
      TinyAlloc$mContig[tos_state.current_node] = 0;
      TinyAlloc$mLast[tos_state.current_node] = 0;
      TinyAlloc$mCompacting[tos_state.current_node] = 1;
      TinyAlloc$mStartByte[tos_state.current_node] = 0;
    }
  c = TinyAlloc$mFree[tos_state.current_node][TinyAlloc$mLast[tos_state.current_node]++];
  if (TinyAlloc$mLast[tos_state.current_node] == TinyAlloc$FREE_SIZE) {
    goto done_compact;
    }




  if (c == 0) {
      TinyAlloc$mContig[tos_state.current_node] += 8;
    }
  else {
      if (c != 0xFF) {
          for (i = 0; i < 8; i++) {
              if ((c & (1 << i)) == 0) {
                  TinyAlloc$mContig[tos_state.current_node]++;
                  endFree = 1;
                }
              else {
#line 343
                if (TinyAlloc$mContig[tos_state.current_node] == 0) {
                    TinyAlloc$mStartByte[tos_state.current_node]++;
                    endFree = 0;
                  }
                else {
                    endFree = 0;
                    break;
                  }
                }
            }
        }
      if (TinyAlloc$mContig[tos_state.current_node] > 0 && !endFree) {
          p = (int8_t *)&TinyAlloc$mFrame[tos_state.current_node][TinyAlloc$mStartByte[tos_state.current_node] + TinyAlloc$mContig[tos_state.current_node] + TinyAlloc$HEADER_SIZE];
          if (!TinyAlloc$isLocked(p)) {
              Handle h = TinyAlloc$getH(p);

              if (h == (void *)0) {
                  dbg(DBG_USR1, "BAD NEWS -- INVALID HANDLE START IN COMPACT.\n");
                  goto done_compact;
                }
              dbg(DBG_USR1, "compacting, from %d, %d bytes\n", TinyAlloc$mStartByte[tos_state.current_node] + TinyAlloc$mContig[tos_state.current_node] + TinyAlloc$HEADER_SIZE, TinyAlloc$mContig[tos_state.current_node]);
              TinyAlloc$shiftUp((Handle )h, TinyAlloc$mContig[tos_state.current_node]);
              TinyAlloc$mStartByte[tos_state.current_node] += (TinyAlloc$getSize(*h) >> 3) << 3;
            }
          else 
#line 366
            {


              TinyAlloc$mStartByte[tos_state.current_node] += ((TinyAlloc$getSize(p) + TinyAlloc$mContig[tos_state.current_node]) >> 3) << 3;




              if (TinyAlloc$mStartByte[tos_state.current_node] >> 3 == TinyAlloc$mLast[tos_state.current_node] - 1) {
                  TinyAlloc$mStartByte[tos_state.current_node] += 8;
                }
            }

          TinyAlloc$mLast[tos_state.current_node] = TinyAlloc$mStartByte[tos_state.current_node] >> 3;
          TinyAlloc$mStartByte[tos_state.current_node] = TinyAlloc$mLast[tos_state.current_node] << 3;

          TinyAlloc$mContig[tos_state.current_node] = 0;
        }
      else {
#line 384
        if (!endFree) {
            TinyAlloc$mStartByte[tos_state.current_node] += 8;
            TinyAlloc$mContig[tos_state.current_node] = 0;
          }
        }
    }
  done_compact: 

    if (TinyAlloc$mLast[tos_state.current_node] >= TinyAlloc$FREE_SIZE) {
        TinyAlloc$mCompacting[tos_state.current_node] = 0;
        TinyAlloc$mLast[tos_state.current_node] = 0;
        TinyAlloc$mContig[tos_state.current_node] = 0;
        TinyAlloc$mNeedFree[tos_state.current_node] = 0;
        TinyAlloc$mStartByte[tos_state.current_node] = 0;
        if (TinyAlloc$mAllocing[tos_state.current_node]) {
            TOS_post(TinyAlloc$allocTask);
          }
        else {
            TinyAlloc$MemAlloc$compactComplete();
          }
      }
    else {


        TOS_post(TinyAlloc$compactTask);
      }
}

#line 285
static void TinyAlloc$doAlloc(int16_t startByte, int16_t endByte)
#line 285
{
  int16_t newIdx = TinyAlloc$getNewHandleIdx();

#line 287
  if (newIdx == -1) {
      TinyAlloc$mAllocing[tos_state.current_node] = 0;
      TinyAlloc$MemAlloc$allocComplete(TinyAlloc$mHandle[tos_state.current_node], FAIL);
      return;
    }


  * (int16_t *)&TinyAlloc$mFrame[tos_state.current_node][startByte] = (endByte - startByte) & 0x7FFF;



  TinyAlloc$mHandles[tos_state.current_node][newIdx] = (int8_t *)(&TinyAlloc$mFrame[tos_state.current_node][startByte] + TinyAlloc$HEADER_SIZE);
  *TinyAlloc$mHandle[tos_state.current_node] = &TinyAlloc$mHandles[tos_state.current_node][newIdx];


  TinyAlloc$setFreeBits(startByte, endByte, 1);

  TinyAlloc$mAllocing[tos_state.current_node] = 0;
  if (TinyAlloc$mReallocing[tos_state.current_node]) {
      TinyAlloc$finish_realloc(TinyAlloc$mHandle[tos_state.current_node], 1);
    }
  else {
      TinyAlloc$MemAlloc$allocComplete(TinyAlloc$mHandle[tos_state.current_node], SUCCESS);
    }
}

# 124 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static uint8_t TOSH_get_clock0_counter(void)
#line 124
{

  if (scales[tos_state.current_node] == 0 || 
  intervals[tos_state.current_node] == 0) {
#line 127
      return 0;
    }
  else 
#line 128
    {
      long long timeDiff = tos_state.tos_time - setTime[tos_state.current_node];

#line 130
      timeDiff /= (long long )clockScales[scales[tos_state.current_node]];
      timeDiff %= 256;
      return (uint8_t )timeDiff;
    }
}

#line 54
static void TOSH_clock_set_interval(uint8_t interval)
#line 54
{
  long long elapsed_time;
  long long ticks;
  int elapsedTicks;
  int realInterval;

  event_t *event = (void *)0;

#line 61
  interval = interval + 1;

  dbg(DBG_CLOCK, "CLOCK: Setting clock interval to %u @ %s\n", (unsigned int )(interval & 0xff), currentTime());
  if (clockEvents[tos_state.current_node] != (void *)0) {
      event_clocktick_invalidate(clockEvents[tos_state.current_node]);
    }


  elapsed_time = tos_state.tos_time - setTime[tos_state.current_node];
  elapsedTicks = elapsed_time / (long long )clockScales[scales[tos_state.current_node]];

  realInterval = interval - elapsedTicks;
  if (realInterval <= 0) {
      realInterval += 256;
    }

  ticks = clockScales[(int )(scales[tos_state.current_node] & 0xff)] * realInterval;
  event = (event_t *)malloc(sizeof(event_t ));

  event_clocktick_create(event, tos_state.current_node, tos_state.tos_time, ticks);
  queue_insert_event(& tos_state.queue, event);
#line 81
  ;
  intervals[tos_state.current_node] = interval;
  clockEvents[tos_state.current_node] = event;
}

# 136 "/opt/tinyos-1.x/tos/system/sched.c"
static bool TOSH_run_next_task(void)
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t old_full;
  void (*func)(void );

  fInterruptFlags = __nesc_atomic_start();
  old_full = TOSH_sched_full;
  func = TOSH_queue[old_full].tp;
  if (func == (void *)0) 
    {
      __nesc_atomic_sleep();
      return 0;
    }

  TOSH_queue[old_full].tp = (void *)0;
  TOSH_sched_full = (old_full + 1) & TOSH_TASK_BITMASK;
  __nesc_atomic_end(fInterruptFlags);
  func();

  return 1;
}

# 122 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
  int main(int argc, char **argv)
#line 122
{
  long long i;
  long long last_power_time = 0;

  int power_profiling = 0;
  int cpu_profiling = 0;
  int num_nodes_total;
  int num_nodes_start = -1;
  int random_seed = 0;
  int random_seed_set = 0;

  unsigned long long max_run_time = 0;

  char *adc_model_name = (void *)0;
  char *model_name = (void *)0;
  char *eeprom_name = (void *)0;

  int start_time = 0;
  int pause_time = 0;
  int start_interval = 10;
  char *rate_constant = "1000.0";
  char *lossy_file = (void *)0;

  int radio_kb_rate = 40;

  int currentArg;

  if (argc == 2 && (strcmp(argv[1], "-h") == 0 || 
  strcmp(argv[1], "--help") == 0)) {
      Nido$help(argv[0]);
    }

  if (argc < 2) {
#line 154
      Nido$usage(argv[0]);
    }
  dbg_init();

  for (currentArg = 1; currentArg < argc - 1; currentArg++) {
      char *arg = argv[currentArg];

#line 160
      if (strcmp(arg, "-h") == 0 || 
      strcmp(arg, "--help") == 0) {
          Nido$help(argv[0]);
        }
      else {
#line 164
        if (strcmp(argv[currentArg], "--help") == 0) {
            Nido$help(argv[0]);
          }
        else {
#line 167
          if (strcmp(arg, "-gui") == 0) {
              GUI_enabled = 1;
            }
          else {
#line 170
            if (strcmp(arg, "-nodbgout") == 0) {
                dbg_suppress_stdout = 1;
              }
            else {
#line 173
              if (strncmp(arg, "-a=", 3) == 0) {
                  arg += 3;
                  adc_model_name = arg;
                }
              else {
#line 177
                if (strncmp(arg, "-b=", 3) == 0) {
                    arg += 3;
                    start_interval = atoi(arg);
                    if (start_interval < 0) {
                        fprintf(stderr, "SIM: boot time value must be a positive integer, not %s\n", arg);
                        exit(-1);
                      }
                  }
                else {
#line 185
                  if (strncmp(arg, "-ef=", 3) == 0) {
                      arg += 4;
                      eeprom_name = arg;
                    }
                  else {
#line 189
                    if (strncmp(arg, "-l=", 3) == 0) {
                        arg += 3;
                        rate_constant = arg;
                      }
                    else {
#line 193
                      if (strncmp(arg, "-r=", 3) == 0) {
                          arg += 3;
                          model_name = arg;
                        }
                      else {
#line 197
                        if (strncmp(arg, "-rf=", 4) == 0) {
                            arg += 4;
                            model_name = "lossy";
                            lossy_file = arg;
                          }
                        else {
#line 202
                          if (strncmp(arg, "-s=", 3) == 0) {
                              arg += 3;
                              num_nodes_start = atoi(arg);
                            }
                          else {
#line 206
                            if (strncmp(arg, "-t=", 3) == 0) {
                                arg += 3;
                                max_run_time = (unsigned long long )atoi(arg);
                                max_run_time *= 4000000;
                              }
                            else {
#line 211
                              if (strncmp(arg, "-seed=", 6) == 0) {
                                  arg += 6;
                                  random_seed = atoi(arg);
                                  random_seed_set = 1;
                                }
                              else {
#line 216
                                if (strcmp(arg, "-p") == 0) {
                                    power_profiling = 1;
                                  }
                                else {
#line 219
                                  if (strcmp(arg, "-cpuprof") == 0) {
                                      cpu_profiling = 1;
                                    }
                                  else {
                                      Nido$usage(argv[0]);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
    }
#line 227
  set_rate_value(atof(rate_constant));
  if (get_rate_value() <= 0.0) {
      fprintf(stderr, "SIM: Invalid rate constant: %s.\n", rate_constant);
      exit(-1);
    }

  num_nodes_total = atoi(argv[argc - 1]);
  if (num_nodes_total <= 0) {
#line 234
      Nido$usage(argv[0]);
    }
  if (num_nodes_start < 0 || num_nodes_start > num_nodes_total) {
      num_nodes_start = num_nodes_total;
    }



  Nido$PowerState$init(power_profiling, cpu_profiling);


  if (num_nodes_total > TOSNODES) {
      fprintf(stderr, "Nido: I am compiled for maximum of %d nodes and you have specified %d nodes.\n", TOSNODES, num_nodes_total);
      fprintf(stderr, "Nido: Exiting...\n");
      exit(-1);
    }

  init_signals();

  tos_state.num_nodes = num_nodes_total;



  if (model_name == (void *)0 || strcmp(model_name, "simple") == 0) {
      tos_state.rfm = create_simple_model();
      tos_state.radioModel = TOSSIM_RADIO_MODEL_SIMPLE;
    }
  else {
#line 261
    if (strcmp(model_name, "lossy") == 0) {
        tos_state.rfm = create_lossy_model(lossy_file);
        tos_state.radioModel = TOSSIM_RADIO_MODEL_LOSSY;
      }
    else {
        fprintf(stderr, "SIM: Don't recognize RFM model type %s.\n", model_name);
        exit(-1);
      }
    }


  if (adc_model_name == (void *)0 || strcmp(adc_model_name, "generic") == 0) {
      tos_state.adc = create_generic_adc_model();
    }
  else {
#line 275
    if (strcmp(adc_model_name, "random") == 0) {
        tos_state.adc = create_random_adc_model();
      }
    else {
        fprintf(stderr, "SIM: Bad ADC model name: %s\n", adc_model_name);
        exit(-1);
      }
    }
#line 282
  if (eeprom_name != (void *)0) {
      namedEEPROM(eeprom_name, num_nodes_total, 512 * 1024);
    }
  else {
      anonymousEEPROM(num_nodes_total, 512 * 1024);
    }
  dbg_clear(DBG_SIM | DBG_BOOT, "SIM: EEPROM system initialized.\n");

  tos_state.space = create_simple_spatial_model();

  tos_state.radio_kb_rate = radio_kb_rate;
  tos_state_model_init();
  packet_sim_init();

  init_hardware();

  queue_init(& tos_state.queue, pause_time);
  dbg_clear(DBG_SIM, "SIM: event queue initialized.\n");

  if (!random_seed_set) {
      struct timeval tv;

#line 303
      gettimeofday(&tv, (void *)0);
      random_seed = tv.tv_usec;
    }


  dbg_clear(DBG_ALL, "SIM: Random seed is %i\n", random_seed);
  srand(random_seed);

  initializeSockets();

  if (GUI_enabled) {
      waitForGuiConnection();
    }

  for (i = 0; i < num_nodes_start; i++) {

      int rval = rand();

#line 320
      if (start_interval > 0) {
          rval %= 4000000 * start_interval;
          start_time = rval + i;
        }
      else {
#line 323
        if (start_interval == 0) {
            start_time = i;
          }
        }
      tos_state.node_state[i].time = start_time;
      dbg_clear(DBG_SIM | DBG_USR3, "SIM: Time for mote %lli initialized to %lli.\n", 
      i, tos_state.node_state[i].time);
    }

  for (i = 0; i < num_nodes_start; i++) {
      char timeVal[128];
      event_t *fevent = (event_t *)malloc(sizeof(event_t ));

#line 335
      fevent->mote = i;
      fevent->time = tos_state.node_state[i].time;
      fevent->handle = event_boot_handle;
      fevent->cleanup = event_default_cleanup;
      fevent->pause = 0;
      fevent->force = 1;
      queue_insert_event(& tos_state.queue, fevent);
#line 341
      ;
      printOtherTime(timeVal, 128, tos_state.node_state[i].time);
      dbg(DBG_BOOT, "BOOT: Scheduling for boot at %s.\n", timeVal);
    }

  rate_checkpoint();

  for (; ; ) {
      if (max_run_time > 0 && tos_state.tos_time >= max_run_time) {
          break;
        }

      pthread_mutex_lock(& tos_state.pause_lock);
      if (tos_state.paused == TRUE) {
          pthread_cond_signal(& tos_state.pause_ack_cond);
          pthread_cond_wait(& tos_state.pause_cond, & tos_state.pause_lock);
        }
      pthread_mutex_unlock(& tos_state.pause_lock);

      while (TOSH_run_next_task()) {
        }
#line 361
      if (!queue_is_empty(& tos_state.queue)) {
          tos_state.tos_time = queue_peek_event_time(& tos_state.queue);
          queue_handle_next_event(& tos_state.queue);



          rate_based_wait();
        }
      if (cpu_profiling) {



          if (tos_state.tos_time - last_power_time > (long long )4000000 / 5) 
            {
              Nido$PowerState$CPUCycleCheckpoint();
              last_power_time = tos_state.tos_time;
            }
        }
    }
  if (power_profiling || cpu_profiling) {
      Nido$PowerState$stop();
    }
  printf("Simulation of %i motes completed.\n", num_nodes_total);
  return 0;
}

#line 79
static void Nido$help(char *progname)
#line 79
{
  fprintf(stderr, "Usage: %s [options] num_nodes\n", progname);
  fprintf(stderr, "  [options] are:\n");
  fprintf(stderr, "  -h, --help        Display this message.\n");
  fprintf(stderr, "  -gui              pauses simulation waiting for GUI to connect\n");
  fprintf(stderr, "  -nodbgout	 only send dbg messages to GUI, not to stdout\n");
  fprintf(stderr, "  -a=<model>        specifies ADC model (generic is default)\n");
  fprintf(stderr, "                    options: generic random\n");
  fprintf(stderr, "  -b=<sec>          motes boot over first <sec> seconds (default 10)\n");
  fprintf(stderr, "  -ef=<file>        use <file> for eeprom; otherwise anonymous file is used\n");
  fprintf(stderr, "  -l=<scale>        run sim at <scale> times real time (fp constant)\n");
  fprintf(stderr, "  -r=<model>        specifies a radio model (simple is default)\n");
  fprintf(stderr, "                    options: simple lossy\n");
  fprintf(stderr, "  -rf=<file>        specifies file for lossy mode (lossy.nss is default)\n");
  fprintf(stderr, "                    implicitly selects lossy model\n");
  fprintf(stderr, "  -s=<num>          only boot <num> of nodes\n");
  fprintf(stderr, "  -t=<sec>          run simulation for <sec> virtual seconds\n");
  fprintf(stderr, "  -seed=<seed>      use random seed <seed>\n");
  fprintf(stderr, "  -p                do power profiling\n");
  fprintf(stderr, "  -cpuprof          do cpu profiling (only if compiled with cilly!)\n");
  fprintf(stderr, "  num_nodes         number of nodes to simulate\n");

  fprintf(stderr, "\n");
  dbg_help();
  fprintf(stderr, "\n");
  exit(-1);
}

# 78 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.c"
static int adjacency_list_init(void)
#line 78
{
  int i;

#line 80
  free_list = (link_t *)malloc(sizeof(link_t ) * NUM_NODES_ALLOC);
  for (i = 0; i < NUM_NODES_ALLOC - 1; i++) {
      free_list[i].next_link = &free_list[i + 1];
    }
  free_list[NUM_NODES_ALLOC - 1].next_link = (void *)0;
  num_free_links = NUM_NODES_ALLOC;
  return SUCCESS;
}

# 194 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
static void static_one_cell_init(void)
#line 194
{
  int i;
#line 195
  int j;
  link_t *new_link;

  pthread_mutex_init(&radioConnectivityLock, (void *)0);
  radio_connectivity[0] = (void *)0;

  for (i = 0; i < tos_state.num_nodes; i++) {
      for (j = 0; j < tos_state.num_nodes; j++) {
          if (i != j) {
              new_link = allocate_link(j);
              new_link->data = 0.0;

              new_link->next_link = radio_connectivity[i];
              radio_connectivity[i] = new_link;
            }
        }
    }
}

# 47 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.c"
static link_t *allocate_link(int mote)
#line 47
{
  link_t *alloc_link;
  int i;

#line 50
  if (0 == num_free_links) {
      alloc_link = (link_t *)malloc(sizeof(link_t ) * NUM_NODES_ALLOC);
      for (i = 0; i < NUM_NODES_ALLOC - 1; i++) {
          alloc_link[i].next_link = &alloc_link[i + 1];
        }
      alloc_link[NUM_NODES_ALLOC - 1].next_link = free_list;
      free_list = alloc_link;
      num_free_links += NUM_NODES_ALLOC;
    }
  else {
      alloc_link = free_list;
    }

  free_list = free_list->next_link;
  alloc_link->mote = mote;
  alloc_link->next_link = (void *)0;
  num_free_links--;
  return alloc_link;
}

# 114 "/opt/tinyos-1.x/tos/types/dbg.h"
static void dbg_clear(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

#line 117
  if (dbg_active(mode)) {
      va_list args;

#line 119
      if (!(mode & DBG_SIM)) {
          __builtin_va_start(args, format);
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
          __builtin_va_end(args);
        }
      if (!dbg_suppress_stdout) {
          __builtin_va_start(args, format);

          vfprintf(stdout, format, args);
          __builtin_va_end(args);
        }
    }
}

# 58 "/opt/tinyos-1.x/tos/platform/pc/eeprom.c"
static int createEEPROM(char *file, int motes, int eempromBytes)
#line 58
{
  int rval;
  char val = 0;

  uint8_t buf[1024];
  uint32_t addr;

  memset(buf, 0xff, 1024);

  local_filename = file;
  numMotes = motes;
  moteSize = eempromBytes;

  if (initialized) {
      dbg(DBG_ERROR, "ERROR: Trying to initialize EEPROM twice.\n");
      return -1;
    }
  local_fd = open(file, 02 | 0100, (((0400 | 0200) | 0100) | (0400 >> 3)) | ((0400 >> 3) >> 3));

  if (local_fd < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to create EEPROM backing store file.\n");
      return -1;
    }
#line 93
  rval = (int )lseek(local_fd, moteSize * numMotes, 0);
  if (rval < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
    }

  rval = read(local_fd, &val, 1);
  if (rval < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
    }

  if (!val) {

      rval = (int )lseek(local_fd, 0, 0);
      if (rval < 0) {
          dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
        }

      for (addr = 0; addr <= moteSize * numMotes; addr += 1024) {
          rval = write(local_fd, buf, 1024);
          if (rval < 0) {
              dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
            }
        }
    }

  initialized = 1;

  return local_fd;
}

# 179 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static int createServerSocket(short port)
#line 179
{
  struct sockaddr_in sock;
  int sfd;
  int rval = -1;
  long enable = 1;

  memset(&sock, 0, sizeof sock);
  sock.sin_family = 2;
  sock.sin_port = htons(port);
  sock.sin_addr.s_addr = htonl((in_addr_t )0x7f000001);

  sfd = socket(2, SOCK_STREAM, 0);
  if (sfd < 0) {
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Could not create server socket: %s\n", strerror(*__errno_location()));
      exit(-1);
    }
  setsockopt(sfd, 1, 2, (char *)&enable, sizeof(int ));

  while (rval < 0) {
      rval = bind(sfd, (struct sockaddr *)&sock, sizeof sock);
      if (rval < 0) {
          dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Could not bind server socket to port %d: %s\n", port, strerror(*__errno_location()));
          dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Perhaps another copy of TOSSIM is already running?\n");
          dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Will retry in 10 seconds.\n");
          sleep(10);
        }
    }

  if (listen(sfd, 1) < 0) {
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Could not listen on server socket: %s\n", strerror(*__errno_location()));
      exit(-1);
    }
  dbg_clear(DBG_SIM, "SIM: Created server socket listening on port %d.\n", port);
  return sfd;
}

#line 163
static int acceptConnection(int servfd)
#line 163
{
  struct sockaddr_in cli_addr;
  unsigned int clilen = sizeof cli_addr;
  int clifd;

  ;
  clifd = accept(servfd, (struct sockaddr *)&cli_addr, &clilen);
  if (clifd < 0) {
      ;

      exit(-1);
    }
  ;
  return clifd;
}

#line 283
static void addClient(int *clientSockets, int clifd)
#line 283
{
  int i;

  for (i = 0; i < 4; i++) {
      if (clientSockets[i] == -1) {
          clientSockets[i] = clifd;
          return;
        }
    }


  close(clifd);
}

# 463 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
  uint32_t get_sim_rate(void)
#line 463
{
  return (uint32_t )(1000.0 * get_rate_value());
}

#line 455
  void set_sim_rate(uint32_t rate)
#line 455
{
  double realRate = (double )rate;

#line 457
  realRate /= 1000.0;
  dbg_clear(DBG_SIM, "SIM: Setting rate to %lf\n", realRate);
  set_rate_value(realRate);
  rate_checkpoint();
}

#line 402
  void nido_stop_mote(uint16_t moteID)
#line 402
{

  tos_state.cancelBoot[moteID] = 1;

  if (tos_state.moteOn[moteID] && moteID < tos_state.num_nodes) {
      tos_state.moteOn[moteID] = 0;
      tos_state.current_node = moteID;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 409
        TOS_LOCAL_ADDRESS = tos_state.current_node;
#line 409
        __nesc_atomic_end(__nesc_atomic); }
      tos_state.node_state[moteID].time = tos_state.tos_time;
      Nido$StdControl$stop();
    }
}


  TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet)
#line 416
{
  packet->crc = 1;
  return Nido$RadioReceiveMsg$receive(packet);
}






  TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)
#line 426
{
  packet->crc = 1;
  return Nido$UARTReceiveMsg$receive(packet);
}

# 104 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
static void *heap_pop_min_data(heap_t *heap, long long *key)
#line 104
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 107
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 161
static void down_heap(heap_t *heap, int findex)
#line 161
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long left_key = ((node_t *)heap->data)[left_index].key;
      long long right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 175
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long left_key = ((node_t *)heap->data)[left_index].key;

#line 180
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 322 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static   double PowerStateM$PowerState$get_mote_cycles(int mote)
#line 322
{
  int bb;
  double total;

#line 325
  if (!cpu_prof_on) {
      fprintf(stderr, "get_mote_cycles() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }

  total = 0;
  for (bb = 1; bb < PowerStateM$num_bbs(); bb++) {
      total += PowerStateM$bb_exec_count(mote, bb) * cycles[bb];
    }
  return total;
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module Nido */

  /* Module PotM */

  /* Module HPLPotC */

  /* Module PowerStateM */

  /* Module TinyAlloc */
  if (!strcmp(varname, "TinyAlloc$mFrame"))
  {
    *addr = (uintptr_t)&TinyAlloc$mFrame[__nesc_mote];
    *size = sizeof(TinyAlloc$mFrame[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mFree"))
  {
    *addr = (uintptr_t)&TinyAlloc$mFree[__nesc_mote];
    *size = sizeof(TinyAlloc$mFree[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mAllocing"))
  {
    *addr = (uintptr_t)&TinyAlloc$mAllocing[__nesc_mote];
    *size = sizeof(TinyAlloc$mAllocing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mCompacting"))
  {
    *addr = (uintptr_t)&TinyAlloc$mCompacting[__nesc_mote];
    *size = sizeof(TinyAlloc$mCompacting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mSize"))
  {
    *addr = (uintptr_t)&TinyAlloc$mSize[__nesc_mote];
    *size = sizeof(TinyAlloc$mSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mLast"))
  {
    *addr = (uintptr_t)&TinyAlloc$mLast[__nesc_mote];
    *size = sizeof(TinyAlloc$mLast[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mHandle"))
  {
    *addr = (uintptr_t)&TinyAlloc$mHandle[__nesc_mote];
    *size = sizeof(TinyAlloc$mHandle[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mTmpHandle"))
  {
    *addr = (uintptr_t)&TinyAlloc$mTmpHandle[__nesc_mote];
    *size = sizeof(TinyAlloc$mTmpHandle[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mOldHandle"))
  {
    *addr = (uintptr_t)&TinyAlloc$mOldHandle[__nesc_mote];
    *size = sizeof(TinyAlloc$mOldHandle[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mHandles"))
  {
    *addr = (uintptr_t)&TinyAlloc$mHandles[__nesc_mote];
    *size = sizeof(TinyAlloc$mHandles[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mReallocing"))
  {
    *addr = (uintptr_t)&TinyAlloc$mReallocing[__nesc_mote];
    *size = sizeof(TinyAlloc$mReallocing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mCompacted"))
  {
    *addr = (uintptr_t)&TinyAlloc$mCompacted[__nesc_mote];
    *size = sizeof(TinyAlloc$mCompacted[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mNeedFree"))
  {
    *addr = (uintptr_t)&TinyAlloc$mNeedFree[__nesc_mote];
    *size = sizeof(TinyAlloc$mNeedFree[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mContig"))
  {
    *addr = (uintptr_t)&TinyAlloc$mContig[__nesc_mote];
    *size = sizeof(TinyAlloc$mContig[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mStartByte"))
  {
    *addr = (uintptr_t)&TinyAlloc$mStartByte[__nesc_mote];
    *size = sizeof(TinyAlloc$mStartByte[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TinyAlloc$mFreeBytes"))
  {
    *addr = (uintptr_t)&TinyAlloc$mFreeBytes[__nesc_mote];
    *size = sizeof(TinyAlloc$mFreeBytes[__nesc_mote]);
    return 0;
  }

  /* Module TestTinyAllocM */
  if (!strcmp(varname, "TestTinyAllocM$didFirst"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$didFirst[__nesc_mote];
    *size = sizeof(TestTinyAllocM$didFirst[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$first"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$first[__nesc_mote];
    *size = sizeof(TestTinyAllocM$first[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$didSecond"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$didSecond[__nesc_mote];
    *size = sizeof(TestTinyAllocM$didSecond[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$second"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$second[__nesc_mote];
    *size = sizeof(TestTinyAllocM$second[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$didThird"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$didThird[__nesc_mote];
    *size = sizeof(TestTinyAllocM$didThird[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$third"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$third[__nesc_mote];
    *size = sizeof(TestTinyAllocM$third[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$compacted"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$compacted[__nesc_mote];
    *size = sizeof(TestTinyAllocM$compacted[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$didRealloc"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$didRealloc[__nesc_mote];
    *size = sizeof(TestTinyAllocM$didRealloc[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestTinyAllocM$didCompact"))
  {
    *addr = (uintptr_t)&TestTinyAllocM$didCompact[__nesc_mote];
    *size = sizeof(TestTinyAllocM$didCompact[__nesc_mote]);
    return 0;
  }

  /* Module LedsM */
  if (!strcmp(varname, "LedsM$ledsOn"))
  {
    *addr = (uintptr_t)&LedsM$ledsOn[__nesc_mote];
    *size = sizeof(LedsM$ledsOn[__nesc_mote]);
    return 0;
  }

  /* Module TimerM */
  if (!strcmp(varname, "TimerM$mState"))
  {
    *addr = (uintptr_t)&TimerM$mState[__nesc_mote];
    *size = sizeof(TimerM$mState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$setIntervalFlag"))
  {
    *addr = (uintptr_t)&TimerM$setIntervalFlag[__nesc_mote];
    *size = sizeof(TimerM$setIntervalFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mScale"))
  {
    *addr = (uintptr_t)&TimerM$mScale[__nesc_mote];
    *size = sizeof(TimerM$mScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mInterval"))
  {
    *addr = (uintptr_t)&TimerM$mInterval[__nesc_mote];
    *size = sizeof(TimerM$mInterval[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_head"))
  {
    *addr = (uintptr_t)&TimerM$queue_head[__nesc_mote];
    *size = sizeof(TimerM$queue_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_tail"))
  {
    *addr = (uintptr_t)&TimerM$queue_tail[__nesc_mote];
    *size = sizeof(TimerM$queue_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_size"))
  {
    *addr = (uintptr_t)&TimerM$queue_size[__nesc_mote];
    *size = sizeof(TimerM$queue_size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue"))
  {
    *addr = (uintptr_t)&TimerM$queue[__nesc_mote];
    *size = sizeof(TimerM$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$interval_outstanding"))
  {
    *addr = (uintptr_t)&TimerM$interval_outstanding[__nesc_mote];
    *size = sizeof(TimerM$interval_outstanding[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mTimerList"))
  {
    *addr = (uintptr_t)&TimerM$mTimerList[__nesc_mote];
    *size = sizeof(TimerM$mTimerList[__nesc_mote]);
    return 0;
  }

  /* Module HPLClock */
  if (!strcmp(varname, "HPLClock$set_flag"))
  {
    *addr = (uintptr_t)&HPLClock$set_flag[__nesc_mote];
    *size = sizeof(HPLClock$set_flag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$mscale"))
  {
    *addr = (uintptr_t)&HPLClock$mscale[__nesc_mote];
    *size = sizeof(HPLClock$mscale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$nextScale"))
  {
    *addr = (uintptr_t)&HPLClock$nextScale[__nesc_mote];
    *size = sizeof(HPLClock$nextScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$minterval"))
  {
    *addr = (uintptr_t)&HPLClock$minterval[__nesc_mote];
    *size = sizeof(HPLClock$minterval[__nesc_mote]);
    return 0;
  }

  /* Module NoLeds */

  /* Module HPLPowerManagementM */

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module Nido */

  /* Module PotM */

  /* Module HPLPotC */

  /* Module PowerStateM */

  /* Module TinyAlloc */
  memset(&TinyAlloc$mFrame[__nesc_mote], 0, sizeof TinyAlloc$mFrame[__nesc_mote]);
  memset(&TinyAlloc$mFree[__nesc_mote], 0, sizeof TinyAlloc$mFree[__nesc_mote]);
  memset(&TinyAlloc$mAllocing[__nesc_mote], 0, sizeof TinyAlloc$mAllocing[__nesc_mote]);
  memset(&TinyAlloc$mCompacting[__nesc_mote], 0, sizeof TinyAlloc$mCompacting[__nesc_mote]);
  memset(&TinyAlloc$mSize[__nesc_mote], 0, sizeof TinyAlloc$mSize[__nesc_mote]);
  memset(&TinyAlloc$mLast[__nesc_mote], 0, sizeof TinyAlloc$mLast[__nesc_mote]);
  memset(&TinyAlloc$mHandle[__nesc_mote], 0, sizeof TinyAlloc$mHandle[__nesc_mote]);
  memset(&TinyAlloc$mTmpHandle[__nesc_mote], 0, sizeof TinyAlloc$mTmpHandle[__nesc_mote]);
  memset(&TinyAlloc$mOldHandle[__nesc_mote], 0, sizeof TinyAlloc$mOldHandle[__nesc_mote]);
  memset(&TinyAlloc$mHandles[__nesc_mote], 0, sizeof TinyAlloc$mHandles[__nesc_mote]);
  memset(&TinyAlloc$mReallocing[__nesc_mote], 0, sizeof TinyAlloc$mReallocing[__nesc_mote]);
  memset(&TinyAlloc$mCompacted[__nesc_mote], 0, sizeof TinyAlloc$mCompacted[__nesc_mote]);
  memset(&TinyAlloc$mNeedFree[__nesc_mote], 0, sizeof TinyAlloc$mNeedFree[__nesc_mote]);
  memset(&TinyAlloc$mContig[__nesc_mote], 0, sizeof TinyAlloc$mContig[__nesc_mote]);
  memset(&TinyAlloc$mStartByte[__nesc_mote], 0, sizeof TinyAlloc$mStartByte[__nesc_mote]);
  memset(&TinyAlloc$mFreeBytes[__nesc_mote], 0, sizeof TinyAlloc$mFreeBytes[__nesc_mote]);

  /* Module TestTinyAllocM */
  memset(&TestTinyAllocM$didFirst[__nesc_mote], 0, sizeof TestTinyAllocM$didFirst[__nesc_mote]);
  memset(&TestTinyAllocM$first[__nesc_mote], 0, sizeof TestTinyAllocM$first[__nesc_mote]);
  memset(&TestTinyAllocM$didSecond[__nesc_mote], 0, sizeof TestTinyAllocM$didSecond[__nesc_mote]);
  memset(&TestTinyAllocM$second[__nesc_mote], 0, sizeof TestTinyAllocM$second[__nesc_mote]);
  memset(&TestTinyAllocM$didThird[__nesc_mote], 0, sizeof TestTinyAllocM$didThird[__nesc_mote]);
  memset(&TestTinyAllocM$third[__nesc_mote], 0, sizeof TestTinyAllocM$third[__nesc_mote]);
  memset(&TestTinyAllocM$compacted[__nesc_mote], 0, sizeof TestTinyAllocM$compacted[__nesc_mote]);
  memset(&TestTinyAllocM$didRealloc[__nesc_mote], 0, sizeof TestTinyAllocM$didRealloc[__nesc_mote]);
  memset(&TestTinyAllocM$didCompact[__nesc_mote], 0, sizeof TestTinyAllocM$didCompact[__nesc_mote]);

  /* Module LedsM */
  memset(&LedsM$ledsOn[__nesc_mote], 0, sizeof LedsM$ledsOn[__nesc_mote]);

  /* Module TimerM */
  memset(&TimerM$mState[__nesc_mote], 0, sizeof TimerM$mState[__nesc_mote]);
  memset(&TimerM$setIntervalFlag[__nesc_mote], 0, sizeof TimerM$setIntervalFlag[__nesc_mote]);
  memset(&TimerM$mScale[__nesc_mote], 0, sizeof TimerM$mScale[__nesc_mote]);
  memset(&TimerM$mInterval[__nesc_mote], 0, sizeof TimerM$mInterval[__nesc_mote]);
  memset(&TimerM$queue_head[__nesc_mote], 0, sizeof TimerM$queue_head[__nesc_mote]);
  memset(&TimerM$queue_tail[__nesc_mote], 0, sizeof TimerM$queue_tail[__nesc_mote]);
  memset(&TimerM$queue_size[__nesc_mote], 0, sizeof TimerM$queue_size[__nesc_mote]);
  memset(&TimerM$queue[__nesc_mote], 0, sizeof TimerM$queue[__nesc_mote]);
  memset(&TimerM$interval_outstanding[__nesc_mote], 0, sizeof TimerM$interval_outstanding[__nesc_mote]);
  memset(&TimerM$mTimerList[__nesc_mote], 0, sizeof TimerM$mTimerList[__nesc_mote]);

  /* Module HPLClock */
  memset(&HPLClock$set_flag[__nesc_mote], 0, sizeof HPLClock$set_flag[__nesc_mote]);
  memset(&HPLClock$mscale[__nesc_mote], 0, sizeof HPLClock$mscale[__nesc_mote]);
  memset(&HPLClock$nextScale[__nesc_mote], 0, sizeof HPLClock$nextScale[__nesc_mote]);
  memset(&HPLClock$minterval[__nesc_mote], 0, sizeof HPLClock$minterval[__nesc_mote]);

  /* Module NoLeds */

  /* Module HPLPowerManagementM */

}
