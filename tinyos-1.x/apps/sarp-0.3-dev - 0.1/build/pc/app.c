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
# 288 "/usr/include/inttypes.h" 3
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
# 213 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 3
typedef unsigned int size_t;
# 38 "/usr/include/string.h"
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n);
#line 58
extern void *memset(void *__s, int __c, size_t __n);
# 85 "/usr/include/string.h" 3
extern char *strncpy(char *__restrict __dest, 
const char *__restrict __src, size_t __n);









extern int 
__attribute((__pure__)) 
#line 96
strcmp(const char *__s1, const char *__s2);


extern int 
__attribute((__pure__)) 
#line 99
strncmp(const char *__s1, const char *__s2, size_t __n);
#line 191
extern char *strtok(char *__restrict __s, const char *__restrict __delim);
#line 230
extern size_t __attribute((__pure__)) strlen(const char *__s);
#line 243
extern char *strerror(int __errnum);
#line 260
extern void bzero(void *__s, size_t __n);
# 325 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 3
typedef long int wchar_t;
# 95 "/usr/include/stdlib.h" 3
typedef struct __nesc_unnamed4243 {

  int quot;
  int rem;
} div_t;



typedef struct __nesc_unnamed4244 {

  long int quot;
  long int rem;
} ldiv_t;
#line 142
extern double __attribute((__pure__)) atof(const char *__nptr);

extern int __attribute((__pure__)) atoi(const char *__nptr);







__extension__ 
#line 186
__extension__ 



__extension__ 








__extension__ 



__extension__ 
#line 287
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
#line 57
typedef long long int __quad_t;
__extension__ 
#line 58
typedef unsigned long long int __u_quad_t;
#line 131
typedef unsigned long long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4245 {
#line 141
  int __val[2];
} 
#line 141
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef int __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long long int __fsfilcnt64_t;




typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef int __intptr_t;


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
# 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h"
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 197 "/usr/include/sys/types.h" 3
typedef unsigned int __attribute((__mode__(__QI__))) u_int8_t;
typedef unsigned int __attribute((__mode__(__HI__))) u_int16_t;
typedef unsigned int __attribute((__mode__(__SI__))) u_int32_t;
typedef unsigned int __attribute((__mode__(__DI__))) u_int64_t;

typedef int __attribute((__mode__(__word__))) register_t;
# 23 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;




typedef struct __nesc_unnamed4246 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 118 "/usr/include/time.h" 3
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
#line 67
typedef struct __nesc_unnamed4247 {







  __fd_mask __fds_bits[1024 / (8 * sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
#line 106
extern int select(int __nfds, fd_set *__restrict __readfds, 
fd_set *__restrict __writefds, 
fd_set *__restrict __exceptfds, 
struct timeval *__restrict __timeout);
# 231 "/usr/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 83 "/usr/include/bits/sched.h" 3
struct __sched_param {

  int __sched_priority;
};
# 26 "/usr/include/bits/pthreadtypes.h"
struct _pthread_fastlock {

  long int __status;
  int __spinlock;
};




typedef struct _pthread_descr_struct *_pthread_descr;





typedef struct __pthread_attr_s {

  int __detachstate;
  int __schedpolicy;
  struct __sched_param __schedparam;
  int __inheritsched;
  int __scope;
  size_t __guardsize;
  int __stackaddr_set;
  void *__stackaddr;
  size_t __stacksize;
} pthread_attr_t;





__extension__ 
#line 58
typedef long long __pthread_cond_align_t;




typedef struct __nesc_unnamed4248 {

  struct _pthread_fastlock __c_lock;
  _pthread_descr __c_waiting;
  char __padding
  [
#line 67
  48 - sizeof(struct _pthread_fastlock )
   - sizeof(_pthread_descr ) - sizeof(__pthread_cond_align_t )];
  __pthread_cond_align_t __align;
} pthread_cond_t;



typedef struct __nesc_unnamed4249 {

  int __dummy;
} pthread_condattr_t;


typedef unsigned int pthread_key_t;





typedef struct __nesc_unnamed4250 {

  int __m_reserved;
  int __m_count;
  _pthread_descr __m_owner;
  int __m_kind;
  struct _pthread_fastlock __m_lock;
} pthread_mutex_t;



typedef struct __nesc_unnamed4251 {

  int __mutexkind;
} pthread_mutexattr_t;



typedef int pthread_once_t;
# 150 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;
# 445 "/usr/include/stdlib.h"
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 473
extern int rand(void );

extern void srand(unsigned int __seed);
#line 508
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 556
extern void __attribute((__malloc__)) *malloc(size_t __size);

extern void 
__attribute((__malloc__)) *
#line 558
calloc(size_t __nmemb, size_t __size);










extern void free(void *__ptr);
# 612 "/usr/include/stdlib.h" 3
extern void __attribute((__noreturn__)) exit(int __status);
#line 626
extern char *getenv(const char *__name);
#line 722
typedef int (*__compar_fn_t)(const void *, const void *);
# 252 "/usr/include/math.h" 3
typedef enum __nesc_unnamed4252 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 277
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 151 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 3
typedef int ptrdiff_t;
# 48 "/usr/include/ctype.h"
enum __nesc_unnamed4253 {

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






enum __nesc_unnamed4254 {
  FALSE = 0, 
  TRUE = 1
};

uint16_t TOS_LOCAL_ADDRESS = 1;

enum __nesc_unnamed4255 {
  FAIL = 0, 
  SUCCESS = 1
};
static inline 

uint8_t rcombine(uint8_t r1, uint8_t r2);
typedef uint8_t  result_t;
static inline 






result_t rcombine(result_t r1, result_t r2);
static inline 






result_t rcombine3(result_t r1, result_t r2, result_t r3);
static inline 



result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4);





enum __nesc_unnamed4256 {
  NULL = 0x0
};
# 46 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 62
typedef struct _IO_FILE __FILE;
# 354 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stddef.h" 3
typedef unsigned int wint_t;
# 71 "/usr/include/wchar.h" 3
typedef struct __nesc_unnamed4257 {

  int __count;
  union __nesc_unnamed4258 {

    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h"
typedef struct __nesc_unnamed4259 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct __nesc_unnamed4260 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 37 "/usr/include/gconv.h"
enum __nesc_unnamed4261 {

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



enum __nesc_unnamed4262 {

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



typedef struct __gconv_info {

  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data[];
} *__gconv_t;
# 45 "/usr/include/_G_config.h"
typedef union __nesc_unnamed4263 {

  struct __gconv_info __cd;
  struct __nesc_unnamed4264 {

    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int __attribute((__mode__(__HI__))) _G_int16_t;
typedef int __attribute((__mode__(__SI__))) _G_int32_t;
typedef unsigned int __attribute((__mode__(__HI__))) _G_uint16_t;
typedef unsigned int __attribute((__mode__(__SI__))) _G_uint32_t;
# 43 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 162 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 162
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 198
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 263
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

  int _mode;

  char _unused2[15 * sizeof(int ) - 2 * sizeof(void *)];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 350
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
#line 432
extern int _IO_getc(_IO_FILE *__fp);
# 88 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t;
# 142 "/usr/include/stdio.h"
struct _IO_FILE;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 202 "/usr/include/stdio.h" 3
extern int fclose(FILE *__stream);
#line 221
extern FILE *fopen(const char *__restrict __filename, 
const char *__restrict __modes);
#line 252
extern FILE *fdopen(int __fd, const char *__modes);
#line 297
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);

extern int printf(const char *__restrict __format, ...);

extern int sprintf(char *__restrict __s, 
const char *__restrict __format, ...);


extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 319
extern int 

__attribute((__format__(__printf__, 3, 4))) 
#line 319
snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...);


extern int 

__attribute((__format__(__printf__, 3, 0))) 
#line 323
vsnprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, __gnuc_va_list __arg);
#line 353
extern int fscanf(FILE *__restrict __stream, 
const char *__restrict __format, ...);
# 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
# 73 "/usr/include/signal.h" 3
typedef void (*__sighandler_t)(int );
#line 90
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
#line 194
typedef __sighandler_t sig_t;
# 33 "/usr/include/bits/siginfo.h"
typedef union sigval {

  int sival_int;
  void *sival_ptr;
} sigval_t;
#line 51
typedef struct siginfo {

  int si_signo;
  int si_errno;

  int si_code;

  union __nesc_unnamed4265 {

    int _pad[128 / sizeof(int ) - 3];


    struct __nesc_unnamed4266 {

      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;


    struct __nesc_unnamed4267 {

      unsigned int _timer1;
      unsigned int _timer2;
    } _timer;


    struct __nesc_unnamed4268 {

      __pid_t si_pid;
      __uid_t si_uid;
      sigval_t si_sigval;
    } _rt;


    struct __nesc_unnamed4269 {

      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __clock_t si_utime;
      __clock_t si_stime;
    } _sigchld;


    struct __nesc_unnamed4270 {

      void *si_addr;
    } _sigfault;


    struct __nesc_unnamed4271 {

      long int si_band;
      int si_fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
#line 128
enum __nesc_unnamed4272 {

  SI_ASYNCNL = -6, 

  SI_SIGIO, 

  SI_ASYNCIO, 

  SI_MESGQ, 

  SI_TIMER, 

  SI_QUEUE, 

  SI_USER, 

  SI_KERNEL = 0x80
};




enum __nesc_unnamed4273 {

  ILL_ILLOPC = 1, 

  ILL_ILLOPN, 

  ILL_ILLADR, 

  ILL_ILLTRP, 

  ILL_PRVOPC, 

  ILL_PRVREG, 

  ILL_COPROC, 

  ILL_BADSTK
};



enum __nesc_unnamed4274 {

  FPE_INTDIV = 1, 

  FPE_INTOVF, 

  FPE_FLTDIV, 

  FPE_FLTOVF, 

  FPE_FLTUND, 

  FPE_FLTRES, 

  FPE_FLTINV, 

  FPE_FLTSUB
};



enum __nesc_unnamed4275 {

  SEGV_MAPERR = 1, 

  SEGV_ACCERR
};



enum __nesc_unnamed4276 {

  BUS_ADRALN = 1, 

  BUS_ADRERR, 

  BUS_OBJERR
};



enum __nesc_unnamed4277 {

  TRAP_BRKPT = 1, 

  TRAP_TRACE
};



enum __nesc_unnamed4278 {

  CLD_EXITED = 1, 

  CLD_KILLED, 

  CLD_DUMPED, 

  CLD_TRAPPED, 

  CLD_STOPPED, 

  CLD_CONTINUED
};



enum __nesc_unnamed4279 {

  POLL_IN = 1, 

  POLL_OUT, 

  POLL_MSG, 

  POLL_ERR, 

  POLL_PRI, 

  POLL_HUP
};
#line 271
struct __pthread_attr_s;

typedef struct sigevent {

  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;

  union __nesc_unnamed4280 {

    int _pad[64 / sizeof(int ) - 3];

    struct __nesc_unnamed4281 {

      void (*_function)(sigval_t );
      void *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;






enum __nesc_unnamed4282 {

  SIGEV_SIGNAL = 0, 

  SIGEV_NONE, 

  SIGEV_THREAD
};
# 209 "/usr/include/signal.h"
extern int sigemptyset(sigset_t *__set);
# 25 "/usr/include/bits/sigaction.h"
struct sigaction {



  union __nesc_unnamed4283 {


    __sighandler_t sa_handler;

    void (*sa_sigaction)(int , siginfo_t *, void *);
  } 
  __sigaction_handler;







  __sigset_t sa_mask;


  int sa_flags;


  void (*sa_restorer)(void );
};
# 249 "/usr/include/signal.h"
extern int sigaction(int __sig, const struct sigaction *__restrict __act, 
struct sigaction *__restrict __oact);
#line 288
struct sigvec {

  __sighandler_t sv_handler;
  int sv_mask;

  int sv_flags;
};
# 18 "/usr/include/asm/sigcontext.h"
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



enum __nesc_unnamed4284 {

  SS_ONSTACK = 1, 

  SS_DISABLE
};










typedef struct sigaltstack {

  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
# 62 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
enum __nesc_unnamed4285 {
  TOSNODES = 1000
};





enum __nesc_unnamed4286 {
  TOSSIM_RADIO_MODEL_SIMPLE = 0, 
  TOSSIM_RADIO_MODEL_LOSSY = 1, 
  TOSSIM_RADIO_MODEL_PACKET = 2
};
# 51 "/opt/tinyos-1.x/tos/platform/pc/heap_array.h"
typedef struct __nesc_unnamed4287 {
  int size;
  void *data;
  int private_size;
} heap_t;
static inline 
void init_heap(heap_t *heap);
static inline 
int heap_is_empty(heap_t *heap);
static inline 
long long heap_get_min_key(heap_t *heap);
static 
void *heap_pop_min_data(heap_t *heap, long long *key);
static inline void heap_insert(heap_t *heap, void *data, long long key);
# 62 "/usr/include/bits/sched.h" 3
struct sched_param {

  int __sched_priority;
};
# 60 "/usr/include/time.h"
typedef __clock_t clock_t;
# 131 "/usr/include/time.h" 3
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
#line 159
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#line 229
struct tm;



struct tm;





struct tm;




struct tm;
# 59 "/usr/include/pthread.h" 3
enum __nesc_unnamed4288 {

  PTHREAD_CREATE_JOINABLE, 

  PTHREAD_CREATE_DETACHED
};


enum __nesc_unnamed4289 {

  PTHREAD_INHERIT_SCHED, 

  PTHREAD_EXPLICIT_SCHED
};


enum __nesc_unnamed4290 {

  PTHREAD_SCOPE_SYSTEM, 

  PTHREAD_SCOPE_PROCESS
};


enum __nesc_unnamed4291 {

  PTHREAD_MUTEX_TIMED_NP, 
  PTHREAD_MUTEX_RECURSIVE_NP, 
  PTHREAD_MUTEX_ERRORCHECK_NP, 
  PTHREAD_MUTEX_ADAPTIVE_NP
};
#line 102
enum __nesc_unnamed4292 {

  PTHREAD_PROCESS_PRIVATE, 

  PTHREAD_PROCESS_SHARED
};
#line 131
struct _pthread_cleanup_buffer {

  void (*__routine)(void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};



enum __nesc_unnamed4293 {

  PTHREAD_CANCEL_ENABLE, 

  PTHREAD_CANCEL_DISABLE
};

enum __nesc_unnamed4294 {

  PTHREAD_CANCEL_DEFERRED, 

  PTHREAD_CANCEL_ASYNCHRONOUS
};









extern int pthread_create(pthread_t *__restrict __threadp, 
const pthread_attr_t *__restrict __attr, 
void *(*__start_routine)(void *), 
void *__restrict __arg);
#line 331
extern int pthread_mutex_init(pthread_mutex_t *__restrict __mutex, 
const pthread_mutexattr_t *__restrict 
__mutex_attr);








extern int pthread_mutex_lock(pthread_mutex_t *__mutex);









extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);
#line 390
extern int pthread_cond_init(pthread_cond_t *__restrict __cond, 
const pthread_condattr_t *__restrict 
__cond_attr);





extern int pthread_cond_signal(pthread_cond_t *__cond);


extern int pthread_cond_broadcast(pthread_cond_t *__cond);



extern int pthread_cond_wait(pthread_cond_t *__restrict __cond, 
pthread_mutex_t *__restrict __mutex);
# 63 "/opt/tinyos-1.x/tos/platform/pc/event_queue.h"
struct TOS_state;

typedef struct event_queue {
  int pause;
  heap_t heap;
  pthread_mutex_t lock;
} event_queue_t;

typedef struct event {
  long long time;
  int mote;
  int pause;
  int force;

  void *data;

  void (*handle)(struct event *, struct TOS_state *);
  void (*cleanup)(struct event *);
} event_t;
static inline 

void queue_init(event_queue_t *queue, int fpause);
static void queue_insert_event(event_queue_t *queue, event_t *event);
static inline event_t *queue_pop_event(event_queue_t *queue);
static inline void queue_handle_next_event(event_queue_t *queue);
static inline int queue_is_empty(event_queue_t *queue);
static inline long long queue_peek_event_time(event_queue_t *queue);
# 62 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.h"
enum __nesc_unnamed4295 {
  NUM_NODES_ALLOC = 200
};


typedef struct link {
  int mote;
  double data;
  char bit;
  struct link *next_link;
} link_t;


link_t *free_list;
int num_free_links;
static 
link_t *allocate_link(int mote);
static 
int adjacency_list_init(void);
# 62 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.h"
typedef struct __nesc_unnamed4296 {
  void (*init)(void);
  void (*transmit)(int , char );
  void (*stop_transmit)(int );
  char (*hears)(int );
  bool (*connected)(int , int );
  link_t *(*neighbors)(int );
} rfm_model;
static inline 

rfm_model *create_simple_model(void);
static inline 




rfm_model *create_lossy_model(char *file);
static 
void static_one_cell_init(void);
static inline 


void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);



extern link_t *radio_connectivity[TOSNODES];
# 59 "/opt/tinyos-1.x/tos/platform/pc/adc_model.h"
typedef struct __nesc_unnamed4297 {
  void (*init)(void);

  uint16_t (*read)(int , uint8_t , long long );
} adc_model;
static inline 
adc_model *create_random_adc_model(void);
static inline adc_model *create_generic_adc_model(void);
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 58 "/opt/tinyos-1.x/tos/platform/pc/spatial_model.h"
typedef struct __nesc_unnamed4298 {
  double xCoordinate;
  double yCoordinate;
  double zCoordinate;
} point3D;

typedef struct __nesc_unnamed4299 {
  void (*init)(void);
  void (*get_position)(int , long long , point3D *);
} 

spatial_model;
static inline 


spatial_model *create_simple_spatial_model(void);
static inline 
# 64 "/opt/tinyos-1.x/tos/platform/pc/nido_eeprom.h"
int anonymousEEPROM(int numMotes, int eepromSize);
static inline int namedEEPROM(char *name, int numMotes, int eepromSize);
# 55 "/opt/tinyos-1.x/tos/platform/pc/events.h"
typedef struct __nesc_unnamed4300 {
  int interval;
  int mote;
  int valid;
  int disabled;
} clock_tick_data_t;

typedef struct __nesc_unnamed4301 {
  int valid;
  char port;
} adc_tick_data_t;

typedef struct __nesc_unnamed4302 {
  int interval;
  int mote;
  int valid;
} radio_tick_data_t;

typedef struct __nesc_unnamed4303 {
  int interval;
  int mote;
  int valid;
} channel_mon_data_t;

typedef struct __nesc_unnamed4304 {
  int interval;
  int mote;
  int valid;
  int count;
  int ending;
} spi_byte_data_t;

typedef struct __nesc_unnamed4305 {
  int interval;
  int mote;
  int valid;
} radio_timing_data_t;
static inline 




void event_default_cleanup(event_t *event);
static 
void event_total_cleanup(event_t *event);
static 
void event_clocktick_create(event_t *event, 
int mote, 
long long eventTime, 
int interval);
static inline 
void event_clocktick_handle(event_t *event, 
struct TOS_state *state);
static inline 
void event_clocktick_invalidate(event_t *event);
#line 128
void event_channel_mon_create(event_t *event, int mote, long long ftime, int interval);

void event_channel_mon_invalidate(event_t *event);

void event_spi_byte_handle(event_t *event, struct TOS_state *state);

void event_spi_byte_create(event_t *event, int mote, long long ftime, int interval, int count);

void event_spi_byte_invalidate(event_t *event);

void event_spi_byte_end(event_t *fevent);



void event_radio_timing_create(event_t *fevent, int mote, long long ftime, int interval);

void event_radio_timing_invalidate(event_t *fevent);
static inline 
void event_cleanup(event_t *fevent);
# 49 "/opt/tinyos-1.x/tos/types/AM.h"
enum __nesc_unnamed4306 {
  TOS_BCAST_ADDR = 0xffff, 
  TOS_UART_ADDR = 0x007e
};





enum __nesc_unnamed4307 {
  TOS_DEFAULT_AM_GROUP = 0x7d
};

uint8_t TOS_AM_GROUP = TOS_DEFAULT_AM_GROUP;
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



enum __nesc_unnamed4308 {
  MSG_DATA_SIZE = (size_t )& ((struct TOS_Msg *)0)->crc + sizeof(uint16_t ), 
  TINYSEC_MSG_DATA_SIZE = (size_t )& ((struct TinySec_Msg *)0)->mac + 4, 
  DATA_LENGTH = 29, 
  LENGTH_BYTE_NUMBER = (size_t )& ((struct TOS_Msg *)0)->length + 1, 
  TINYSEC_NODE_ID_SIZE = sizeof(uint16_t )
};

enum __nesc_unnamed4309 {
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
static inline 
# 57 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.h"
void packet_sim_init(void);

void   packet_sim_transmit_done(TOS_MsgPtr msg);
void   packet_sim_receive_msg(TOS_MsgPtr msg);
# 57 "/usr/include/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz);
#line 92
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
# 87 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
typedef struct TOS_node_state {
  long long time;
  int pot_setting;
} TOS_node_state_t;

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



enum __nesc_unnamed4310 {
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
static inline 
# 130 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
void tos_state_model_init(void );
static inline 
# 48 "/opt/tinyos-1.x/tos/platform/pc/hardware.nido.h"
void init_hardware(void);
static 
short set_io_bit(char port, char bit);
static inline short clear_io_bit(char port, char bit);
#line 219
enum __nesc_unnamed4311 {
  TOSH_period16 = 0x00, 
  TOSH_period32 = 0x01, 
  TOSH_period64 = 0x02, 
  TOSH_period128 = 0x03, 
  TOSH_period256 = 0x04, 
  TOSH_period512 = 0x05, 
  TOSH_period1024 = 0x06, 
  TOSH_period2048 = 0x07
};



enum __nesc_unnamed4312 {

  TOSH_ACTUAL_CC_RSSI_PORT = 0, 
  TOSH_ACTUAL_VOLTAGE_PORT = 7, 
  TOSH_ACTUAL_BANDGAP_PORT = 30, 
  TOSH_ACTUAL_GND_PORT = 31
};

enum __nesc_unnamed4313 {

  TOS_ADC_CC_RSSI_PORT = 0, 
  TOS_ADC_VOLTAGE_PORT = 7, 
  TOS_ADC_BANDGAP_PORT = 10, 
  TOS_ADC_GND_PORT = 11
};
#line 270
static __inline void TOSH_CLR_RFM_TXD_PIN(void);
#line 270
static __inline void TOSH_MAKE_RFM_TXD_INPUT(void);
static __inline void TOSH_SET_RFM_CTL0_PIN(void);
#line 271
static __inline void TOSH_CLR_RFM_CTL0_PIN(void);
static __inline void TOSH_SET_RFM_CTL1_PIN(void);
# 42 "/usr/include/bits/uio.h"
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



enum __nesc_unnamed4314 {

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
#line 257
struct cmsghdr;
# 284 "/usr/include/bits/socket.h" 3
enum __nesc_unnamed4315 {

  SCM_RIGHTS = 0x01, 


  SCM_CREDENTIALS = 0x02, 


  __SCM_CONNECT = 0x03
};



struct ucred {

  pid_t pid;
  uid_t uid;
  gid_t gid;
};
# 309 "/usr/include/bits/socket.h"
struct linger {

  int l_onoff;
  int l_linger;
};
# 40 "/usr/include/sys/socket.h"
struct osockaddr {

  unsigned short int sa_family;
  unsigned char sa_data[14];
};




enum __nesc_unnamed4316 {

  SHUT_RD = 0, 

  SHUT_WR, 

  SHUT_RDWR
};
# 100 "/usr/include/sys/socket.h" 3
extern int socket(int __domain, int __type, int __protocol);









extern int bind(int __fd, const struct sockaddr *__addr, socklen_t __len);










extern int connect(int __fd, const struct sockaddr *__addr, socklen_t __len);









extern ssize_t send(int __fd, const void *__buf, size_t __n, int __flags);
#line 175
extern int setsockopt(int __fd, int __level, int __optname, 
const void *__optval, socklen_t __optlen);





extern int listen(int __fd, int __n);






extern int accept(int __fd, struct sockaddr *__restrict __addr, 
socklen_t *__restrict __addr_len);
# 30 "/usr/include/netinet/in.h"
enum __nesc_unnamed4317 {

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

  IPPROTO_RAW = 255, 

  IPPROTO_MAX
};



typedef uint16_t in_port_t;


enum __nesc_unnamed4318 {

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
#line 190
struct in6_addr {

  union __nesc_unnamed4319 {

    uint8_t u6_addr8[16];
    uint16_t u6_addr16[8];
    uint32_t u6_addr32[4];
  } in6_u;
};




struct in6_addr;
struct in6_addr;
#line 216
struct sockaddr_in {

  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;


  unsigned char sin_zero

  [
#line 223
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


struct ipv6_mreq {


  struct in6_addr ipv6mr_multiaddr;


  unsigned int ipv6mr_interface;
};
# 66 "/usr/include/bits/in.h"
struct ip_opts {

  struct in_addr ip_dst;
  char ip_opts[40];
};


struct ip_mreq {

  struct in_addr imr_multiaddr;
  struct in_addr imr_interface;
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
# 260 "/usr/include/netinet/in.h"
extern uint16_t 
__attribute((const)) 
#line 260
ntohs(uint16_t __netshort);

extern uint32_t 
__attribute((const)) 
#line 262
htonl(uint32_t __hostlong);

extern uint16_t 
__attribute((const)) 
#line 264
htons(uint16_t __hostshort);
# 361 "/usr/include/netinet/in.h" 3
struct in6_pktinfo {

  struct in6_addr ipi6_addr;
  unsigned int ipi6_ifindex;
};
# 290 "/usr/include/unistd.h" 3
extern __off_t lseek(int __fd, __off_t __offset, int __whence);
#line 306
extern int close(int __fd);



extern ssize_t read(int __fd, void *__buf, size_t __nbytes);


extern ssize_t write(int __fd, const void *__buf, size_t __n);
#line 371
extern unsigned int sleep(unsigned int __seconds);
#line 383
extern int usleep(__useconds_t __useconds);
# 25 "/usr/include/bits/confname.h"
enum __nesc_unnamed4320 {

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

  _PC_SYMLINK_MAX
};



enum __nesc_unnamed4321 {

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

  _SC_TRACE_LOG
};



enum __nesc_unnamed4322 {

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
# 711 "/usr/include/unistd.h" 3
extern int unlink(const char *__name);
# 38 "/usr/include/bits/errno.h"
extern int __attribute((const)) *__errno_location(void );
 
# 46 "/opt/tinyos-1.x/tos/platform/pc/external_comm.h"
static int socketsInitialized = 0;
static inline void initializeSockets(void);
static inline int readTossimCommand(int clifd, int clidx);
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);
static int writeTossimEvent(void *data, int datalen, int clifd);
static inline 



char *currentTime(void);
static inline int printTime(char *buf, int len);
static int printOtherTime(char *buf, int len, long long int ftime);
# 110 "/usr/lib/gcc-lib/i386-redhat-linux/3.2.2/include/stdarg.h" 3
typedef __gnuc_va_list va_list;
# 58 "/opt/tinyos-1.x/tos/platform/pc/GuiMsg.h"
enum __nesc_unnamed4323 {

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







typedef struct GuiMsg {
  uint16_t msgType;
  uint16_t moteID;
  long long time;
  uint16_t payLoadLen;
} GuiMsg;






typedef struct DebugMsgEvent {
  char debugMessage[512];
} DebugMsgEvent;


typedef struct RadioMsgSentEvent {
  TOS_Msg message;
} RadioMsgSentEvent;


typedef struct UARTMsgSentEvent {
  TOS_Msg message;
} UARTMsgSentEvent;


typedef struct ADCDataReadyEvent {
  uint8_t port;
  uint16_t data;
} ADCDataReadyEvent;


typedef struct VariableResolveResponse {
  uint32_t addr;
  uint32_t length;
} VariableResolveResponse;


typedef struct VariableRequestResponse {
  uint32_t length;
  char value[256];
} VariableRequestResponse;


typedef struct TossimInitEvent {
  int numMotes;
  uint8_t radioModel;
  uint32_t rate;
} __attribute((packed))  TossimInitEvent;


typedef struct InterruptEvent {
  uint32_t id;
} InterruptEvent;


typedef struct TurnOnMoteCommand {
} TurnOnMoteCommand;


typedef struct TurnOffMoteCommand {
} TurnOffMoteCommand;


typedef struct RadioMsgSendCommand {
  TOS_Msg message;
} RadioMsgSendCommand;


typedef struct UARTMsgSendCommand {
  TOS_Msg message;
} UARTMsgSendCommand;


typedef struct SetLinkProbCommand {
  uint16_t moteReceiver;
  uint32_t scaledProb;
} SetLinkProbCommand;


typedef struct SetADCPortValueCommand {
  uint8_t port;
  uint16_t value;
} SetADCPortValueCommand;


typedef struct VariableResolveCommand {
  char name[256];
} VariableResolveCommand;


typedef struct VariableRequestCommand {
  uint32_t addr;
  uint8_t length;
} VariableRequestCommand;

typedef struct InterruptCommand {
  uint32_t id;
} InterruptCommand;

typedef struct SetRateCommand {
  uint32_t rate;
} SetRateCommand;

typedef struct LedEvent {
  uint8_t red : 1;
  uint8_t green : 1;
  uint8_t yellow : 1;
} LedEvent;

typedef struct SetDBGCommand {
  long long dbg;
} SetDBGCommand;

typedef struct GetMoteCountCommand {
  uint8_t placeholder;
} GetMoteCountCommand;

typedef struct GetMoteCountResponse {
  uint16_t totalMotes;
  uint8_t bitmask[(TOSNODES + 7) / 8];
} GetMoteCountResponse;

typedef struct SetEventMaskCommand {
  uint16_t mask;
} SetEventMaskCommand;

typedef struct BeginBatchCommand {
} BeginBatchCommand;

typedef struct EndBatchCommand {
} EndBatchCommand;
# 72 "/opt/tinyos-1.x/tos/types/dbg.h"
typedef struct dbg_mode {
  char *d_name;
  unsigned long long d_mode;
} TOS_dbg_mode_names;

TOS_dbg_mode dbg_modes = 0;
 bool dbg_suppress_stdout = 0;

static bool dbg_active(TOS_dbg_mode mode);




static void dbg_add_mode(const char *mode);
static void dbg_add_modes(const char *modes);
static void dbg_init(void );
static void dbg_help(void );

static void dbg_set(TOS_dbg_mode );

static void dbg(TOS_dbg_mode mode, const char *format, ...);
#line 114
static void dbg_clear(TOS_dbg_mode mode, const char *format, ...);
# 66 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
extern  TOS_dbg_mode dbg_modes;
 

TOS_state_t tos_state;
static inline 








void __nesc_atomic_sleep(void);






typedef uint8_t __nesc_atomic_t;

__inline __nesc_atomic_t  __nesc_atomic_start(void );




__inline void  __nesc_atomic_end(__nesc_atomic_t oldSreg);







enum __nesc_unnamed4324 {
  TOSH_ADC_PORTMAPSIZE = 255
};
# 48 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
const int STARTING_SIZE = 511;



typedef struct node {
  void *data;
  long long key;
} node_t;
static 
void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);
static inline 







void init_heap(heap_t *heap);
static inline 








int is_empty(heap_t *heap);
static inline 


int heap_is_empty(heap_t *heap);
static inline 


long long heap_get_min_key(heap_t *heap);
static 
#line 104
void *heap_pop_min_data(heap_t *heap, long long *key);
static inline 
#line 120
void expand_heap(heap_t *heap);
static inline 
#line 134
void heap_insert(heap_t *heap, void *data, long long key);
static 
#line 148
void swap(node_t *first, node_t *second);
static 
#line 161
void down_heap(heap_t *heap, int findex);
static 
#line 187
void up_heap(heap_t *heap, int findex);
 
# 41 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
struct __nesc_unnamed4325 {
  char status_register;
  char register_A;
  char register_B;
  char register_C;
  char register_D;
  char register_E;
  char register_default;
} TOSH_pc_hardware;
static inline 
void init_hardware(void);
static 






short set_io_bit(char port, char bit);
static inline 
#line 98
short clear_io_bit(char port, char bit);
# 47 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
struct timespec;
static inline 


void queue_init(event_queue_t *queue, int fpause);
static 




void queue_insert_event(event_queue_t *queue, event_t *event);
static inline 




event_t *queue_pop_event(event_queue_t *queue);
static inline 
#line 86
int queue_is_empty(event_queue_t *queue);
static inline 






long long queue_peek_event_time(event_queue_t *queue);
static inline 
#line 109
void queue_handle_next_event(event_queue_t *queue);
static inline 
# 43 "/opt/tinyos-1.x/tos/platform/pc/events.c"
void event_default_cleanup(event_t *event);
static 



void event_total_cleanup(event_t *event);
static inline 






void event_cleanup(event_t *fevent);
 
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
static inline 
void  SIG_OUTPUT_COMPARE2_interrupt(void );
static 





void TOSH_clock_set_interval(uint8_t interval);
static 
#line 86
void TOSH_clock_set_rate(char interval, char scale);
static inline 
#line 115
uint8_t TOSH_get_clock_interval(void);
static 







uint8_t TOSH_get_clock0_counter(void);
#line 154
struct timeval;
static inline 
void event_clocktick_handle(event_t *event, 
struct TOS_state *state);
static 
#line 191
void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval);
static inline 
#line 211
void event_clocktick_invalidate(event_t *event);










enum __nesc_unnamed4326 {
  ADC_LATENCY = 200
};
#line 342
uint8_t radioWaitingState[TOSNODES];
char TOSH_MHSR_start[12] = { 0xf0, 0xf0, 0xf0, 0xff, 0x00, 0xff, 0x0f, 0x00, 0xff, 0x0f, 0x0f, 0x0f };

enum __nesc_unnamed4327 {
  NOT_WAITING = 0, 
  WAITING_FOR_ONE_TO_PASS = 1, 
  WAITING_FOR_ONE_TO_CAPTURE = 2
};
static 
#line 389
uint8_t TOSH_rfm_rx_bit(void );
static inline 







void TOSH_rfm_tx_bit(uint8_t data);
#line 470
void   event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count);

event_t *spiByteEvents[TOSNODES];

int RADIO_TICKS_PER_EVENT = 100;
# 46 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
static TOS_dbg_mode_names dbg_nametab[34] = { 
{ "all", DBG_ALL }, { "boot", DBG_BOOT | DBG_ERROR }, { "clock", DBG_CLOCK | DBG_ERROR }, { "task", DBG_TASK | DBG_ERROR }, { "sched", DBG_SCHED | DBG_ERROR }, { "sensor", DBG_SENSOR | DBG_ERROR }, { "led", DBG_LED | DBG_ERROR }, { "crypto", DBG_CRYPTO | DBG_ERROR }, { "route", DBG_ROUTE | DBG_ERROR }, { "am", DBG_AM | DBG_ERROR }, { "crc", DBG_CRC | DBG_ERROR }, { "packet", DBG_PACKET | DBG_ERROR }, { "encode", DBG_ENCODE | DBG_ERROR }, { "radio", DBG_RADIO | DBG_ERROR }, { "logger", DBG_LOG | DBG_ERROR }, { "adc", DBG_ADC | DBG_ERROR }, { "i2c", DBG_I2C | DBG_ERROR }, { "uart", DBG_UART | DBG_ERROR }, { "prog", DBG_PROG | DBG_ERROR }, { "sounder", DBG_SOUNDER | DBG_ERROR }, { "time", DBG_TIME | DBG_ERROR }, { "power", DBG_POWER | DBG_ERROR }, { "sim", DBG_SIM | DBG_ERROR }, { "queue", DBG_QUEUE | DBG_ERROR }, { "simradio", DBG_SIMRADIO | DBG_ERROR }, { "hardware", DBG_HARD | DBG_ERROR }, { "simmem", DBG_MEM | DBG_ERROR }, { "usr1", DBG_USR1 | DBG_ERROR }, { "usr2", DBG_USR2 | DBG_ERROR }, { "usr3", DBG_USR3 | DBG_ERROR }, { "temp", DBG_TEMP | DBG_ERROR }, { "error", DBG_ERROR }, { "none", DBG_NONE }, { (void *)0, DBG_ERROR } };






void dbg_set(TOS_dbg_mode modes);



void dbg_add_mode(const char *name);
#line 84
void dbg_add_modes(const char *modes);








void dbg_init(void );
#line 107
void dbg_help(void );
# 35 "/usr/include/arpa/inet.h"
extern in_addr_t inet_addr(const char *__cp);






struct in_addr;
# 90 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
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
static 
int createServerSocket(short port);
static inline void *eventAcceptThreadFunc(void *arg);
static inline void *commandReadThreadFunc(void *arg);



static int __nesc_nido_resolve(int __nesc_mote, 
char *varname, 
uintptr_t *addr, size_t *size);
static inline 
#line 132
void initializeSockets(void);
static 
#line 159
int acceptConnection(int servfd);
static 
#line 175
int createServerSocket(short port);
static inline 
#line 232
void waitForGuiConnection(void);
static 
#line 252
int printOtherTime(char *buf, int len, long long int ftime);
static inline 
#line 269
int printTime(char *buf, int len);
static inline 


char *currentTime(void);
static 




void addClient(int *clientSockets, int clifd);
static inline 
#line 293
void sendInitEvent(int clifd);
static inline 
#line 312
void *eventAcceptThreadFunc(void *arg);
#line 346
typedef struct __nesc_unnamed4328 {
  GuiMsg *msg;
  char *payLoad;
} incoming_command_data_t;



void nido_start_mote(uint16_t moteID);
void nido_stop_mote(uint16_t moteID);
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet);
TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet);
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);
static inline 
void event_command_cleanup(event_t *event);
static inline 




void event_command_in_handle(event_t *event, 
struct TOS_state *state);
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad);
static inline 
#line 389
int processCommand(int clifd, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen);
static inline 
#line 519
void event_command_in_handle(event_t *event, 
struct TOS_state *state);
static inline 
#line 590
int readTossimCommand(int clifd, int clidx);
static inline 
#line 686
void *commandReadThreadFunc(void *arg);
static 
#line 761
int writeTossimEvent(void *data, int datalen, int clifd);
static 
#line 792
void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
static 
#line 852
void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);
static inline 
#line 906
void sendSarpThroughput(uint32_t transaction, uint16_t sent, uint16_t receivedIn, uint16_t dataSource);
static inline 
#line 937
long getMyTime(void);
static 


void sendSarpTrust(uint32_t transaction, uint16_t source, uint16_t target, uint16_t gfb, uint16_t bfb, uint16_t grb, uint16_t brb, uint16_t gab, uint16_t bab, uint16_t glb, uint16_t blb, uint16_t gpb, uint16_t bpb, float trustFP, float trustRH, float trustAV, float trustLP, float trustPR, float overallTrust);
static inline 
#line 979
void sendSarpParent(uint16_t myID, uint16_t parentID);
# 32 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
int signaled = 0;

long long rate_checkpoint_time;
double rate_value;

struct timeval startTime;
struct timeval thisTime;
static inline 
void handle_signal(int sig);
static inline 
#line 52
void init_signals(void );
static inline 
#line 72
double get_rate_value(void);
static inline 


void set_rate_value(double rate);
static inline 


void rate_checkpoint(void);
static inline 




void rate_based_wait(void);
static inline 
# 48 "/opt/tinyos-1.x/tos/platform/pc/adc_model.c"
void random_adc_init(void);
static inline 
uint16_t random_adc_read(int moteID, uint8_t port, long long ftime);
static inline 


adc_model *create_random_adc_model(void);










enum __nesc_unnamed4329 {
  ADC_NUM_PORTS_PER_NODE = 256
};

uint16_t adcValues[TOSNODES][ADC_NUM_PORTS_PER_NODE];
pthread_mutex_t adcValuesLock;
static inline 
void generic_adc_init(void);
static inline 









uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime);
static inline 
#line 99
adc_model *create_generic_adc_model(void);
static inline 





void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 49 "/opt/tinyos-1.x/tos/platform/pc/spatial_model.c"
point3D *points;
static inline 
void simple_spatial_init(void);
static inline 
#line 63
void simple_spatial_get_position(int moteID, long long ftime, point3D *point);
static inline 





spatial_model *create_simple_spatial_model(void);
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
# 136 "/usr/include/bits/fcntl.h" 3
struct flock {

  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;




  __pid_t l_pid;
};
# 66 "/usr/include/fcntl.h" 3
extern int open(const char *__file, int __oflag, ...);
# 52 "/opt/tinyos-1.x/tos/platform/pc/eeprom.c"
static char *local_filename;
static int numMotes = 0;
static int moteSize = 0;
static int initialized = 0;
static int local_fd = -1;
static 
int createEEPROM(char *file, int motes, int eempromBytes);
static inline 
#line 123
int anonymousEEPROM(int fnumMotes, int eepromSize);
static inline 
#line 136
int namedEEPROM(char *name, int fnumMotes, int eepromSize);
# 59 "/opt/tinyos-1.x/tos/system/sched.c"
typedef struct __nesc_unnamed4330 {
  void (*tp)(void);
} TOSH_sched_entry_T;

enum __nesc_unnamed4331 {






  TOSH_MAX_TASKS = 8, 

  TOSH_TASK_BITMASK = TOSH_MAX_TASKS - 1
};

volatile TOSH_sched_entry_T TOSH_queue[TOSH_MAX_TASKS];
uint8_t TOSH_sched_full;
volatile uint8_t TOSH_sched_free;










bool TOS_post(void (*tp)(void));
#line 102
bool  TOS_post(void (*tp)(void));
static 
#line 136
bool TOSH_run_next_task(void);
static 
# 149 "/opt/tinyos-1.x/tos/system/tos.h"
void *nmemcpy(void *to, const void *from, size_t n);
# 28 "/opt/tinyos-1.x/tos/system/Ident.h"
enum __nesc_unnamed4332 {

  IDENT_MAX_PROGRAM_NAME_LENGTH = 16
};

typedef struct __nesc_unnamed4333 {

  uint32_t unix_time;
  uint32_t user_hash;
  char program_name[IDENT_MAX_PROGRAM_NAME_LENGTH];
} Ident_t;
# 46 "/opt/tinyos-1.x/tos/lib/Counters/IntMsg.h"
typedef struct IntMsg {
  uint16_t val;
  uint16_t src;
} IntMsg;

enum __nesc_unnamed4334 {
  AM_INTMSG = 4
};
# 33 "/opt/tinyos-1.x/tos/interfaces/TimeSync.h"
enum __nesc_unnamed4335 {

  TIME_OFFSET = 32, 


  TIME_MAX_ERR = 32, 

  TIME_SYNC_INTERVAL = 61440U
};
# 32 "/opt/tinyos-1.x/tos/interfaces/TimeSyncMsg.h"
enum __nesc_unnamed4336 {
#line 32
  AM_TIMESYNCMSG = 37
};

struct TimeSyncMsg {
  uint16_t source_addr;
  uint32_t timeH;
  uint32_t timeL;
  uint8_t level;
  uint8_t phase;
};




enum __nesc_unnamed4337 {
  MASTER = 1, 
  SLAVE_SYNCED = 2, 
  SLAVE_UNSYNCED = 0
};
# 14 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/MessagingH.h"
enum __nesc_unnamed4338 {
  ROOT = 0, 
  INNER = 1, 
  LEAF = 2, 
  NO_TYPE = 3
};



enum __nesc_unnamed4339 {
  DISCOVERY_MSG_TYPE = 20, 
  CONTROL_MSG_TYPE = 21, 
  READY_MSG_TYPE = 22, 
  READY_ACK_MSG_TYPE = 23, 
  DATA_MSG_TYPE = 24, 
  REPORT_MSG_TYPE = 25, 
  REPORT_REQUEST_MSG_TYPE = 26, 
  REPORT_RESPONSE_NO_FORWARD_MSG_TYPE = 27, 
  REPORT_RESPONSE_FORWARD_MSG_TYPE = 28, 
  END_TO_END_REPORT_RESPONSE_MSG_TYPE = 29, 
  SPECIFIC_REPORT_REQUEST_MSG_TYPE = 30, 
  SPECIFIC_REPORT_RESPONSE_MSG_TYPE = 31
};



enum __nesc_unnamed4340 {
  CONTROL_START_TYPE = 0, 
  CONTROL_NEIGHBOR_DISCOVERY_TYPE = 1, 
  CONTROL_PARENT_CHOICE_TYPE = 2, 
  CONTROL_TRUST_CHANGE_TYPE = 3
};


typedef struct Disc_Rec_t {
  uint16_t node_id;
  uint16_t level;
} Disc_Rec_t;


typedef struct DiscoveryMsg {
  uint16_t node_id;
  uint16_t level;
  uint16_t parent_id;
  uint16_t num_neighbors;
  Disc_Rec_t neighbors[5];
} DiscoveryMsg;


typedef struct ReadyMsg {
  uint16_t node_id;
  uint16_t dest;
  uint16_t parent;
  uint8_t num_children;
} __attribute((packed))  ReadyMsg;


typedef struct DataMsg {
  uint16_t dst_node_id;
  uint16_t src_node_id;
  uint32_t transaction_id;
  uint16_t orig_node_id;
  uint16_t sequenceNumber;
  uint16_t lastToFindLoop;
  uint16_t cantFixIt;
  uint16_t dontSendTo;
  uint16_t data;
} __attribute((packed))  DataMsg;


typedef struct ReportRequestMsg {
  uint16_t destination;
  uint16_t requestor;
  uint16_t originator;
  uint16_t originatorPacketCount;
  uint32_t transaction_id;
} __attribute((packed))  ReportRequestMsg;


typedef struct SpecificReportRequestMsg {
  uint16_t destination;
  uint16_t requestor;
  uint16_t originator;
  uint16_t originatorPacketCount;
  uint32_t transaction_id;
} __attribute((packed))  SpecificReportRequestMsg;


typedef struct SpecificReportResponseMsg {
  uint16_t responder;
  uint16_t originator;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} __attribute((packed))  SpecificReportResponseMsg;


typedef struct ReportResponseNoForwardMsg {
  uint16_t responder;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} __attribute((packed))  ReportResponseNoForwardMsg;


typedef struct ReportResponseForwardMsg {
  uint16_t responder;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} __attribute((packed))  ReportResponseForwardMsg;


typedef struct EndToEndReportResponseMsg {
  uint16_t responder;
  uint16_t originator;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
} __attribute((packed))  EndToEndReportResponseMsg;


typedef struct BaseReportRequestMsg {
  uint16_t requestor;
  uint16_t segment_id;
  uint8_t hopsRemaining;
  uint16_t route[20];
} __attribute((packed))  BaseReportRequestMsg;


typedef struct BaseReportResponseMsg {
  uint16_t responder;
  uint16_t segment_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
} __attribute((packed))  BaseReportResponseMsg;


typedef struct StartMsg {
  uint16_t node_id;
} StartMsg;

typedef struct ControlMsg {
  uint16_t msgType;
  uint16_t data[13];
} ControlMsg;








DataMsg *dataMsgOut;
DiscoveryMsg *disc_msg_out;
ReportRequestMsg *reportReqMsgOut;
SpecificReportRequestMsg *specificReportReqMsgOut;
SpecificReportResponseMsg *specificReportResponseMsgOut;

ReportResponseForwardMsg *reportRespForwardMsgOut;
EndToEndReportResponseMsg *endToEndRepRespMsgOut;
ControlMsg *controlMsgOut;
# 33 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
typedef struct __nesc_unnamed4341 {
  TOS_MsgPtr msg;
  int success;
} uart_send_done_data_t;

enum __nesc_unnamed4342 {
  UART_SEND_DELAY = 1600
};



void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess);
static inline 
void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success);
static inline 
void event_uart_write_handle(event_t *uevent, 
struct TOS_state *state);
static inline 
#line 61
void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success);
static 
#line 77
void TOSH_uart_send(TOS_MsgPtr msg);
static 
# 47 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.c"
link_t *allocate_link(int mote);
static 
#line 78
int adjacency_list_init(void);
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
static inline 
bool simple_connected(int moteID1, int moteID2);
static inline 


void simple_init(void);
static inline 








void simple_transmit(int moteID, char bit);
static inline 







void simple_stops_transmit(int moteID);
static inline 









char simple_hears(int moteID);
static inline 
#line 124
link_t *simple_neighbors(int moteID);
static inline 






rfm_model *create_simple_model(void);
static 
#line 194
void static_one_cell_init(void);
static inline 
#line 313
bool lossy_connected(int moteID1, int moteID2);
static inline 
#line 336
void lossy_transmit(int moteID, char bit);
static inline 
#line 357
void lossy_stop_transmit(int moteID);
static inline 
#line 371
char lossy_hears(int moteID);
static inline 
#line 392
int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss);
static inline 
#line 471
void lossy_init(void);
static inline 
#line 512
link_t *lossy_neighbors(int moteID);
static inline 






rfm_model *create_lossy_model(char *file);
static inline 
#line 550
void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);
# 57 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
int byteTransmitTime = 8 * 104 * 2;


int backoffLow = 10 * (8 * 104);
int backoffHigh = 20 * (8 * 104);
int txChangeLatency = 30 * (8 * 104);
int preambleLength = 20;
int headerLength = 7;


struct IncomingMsg;

typedef struct IncomingMsg {
  TOS_Msg msg;
  struct IncomingMsg *next;
} IncomingMsg;

TOS_MsgPtr packet_transmitting[TOSNODES];
IncomingMsg *incoming[TOSNODES];
link_t *cc1000_connectivity[TOSNODES];
static 

void event_backoff_create(event_t *event, int node, long long eventTime);
void   event_backoff_handle(event_t *event, struct TOS_state *state);

void   event_start_transmit_handle(event_t *event, struct TOS_state *state);
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);

void   event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg);
void   event_receive_packet_handle(event_t *event, struct TOS_state *state);

void   event_send_packet_done_create(event_t *event, int node, long long eventTime);
void   event_send_packet_done_handle(event_t *event, struct TOS_state *state);
static inline 
void packet_sim_init(void);
static 
#line 130
void event_backoff_create(event_t *event, int node, long long eventTime);










void   event_backoff_handle(event_t *event, struct TOS_state *state);
static inline 
#line 155
void event_start_transmit_create(event_t *event, int node, long long eventTime);
static 








void corruptPacket(IncomingMsg *msg, int src, int dest);








void   event_start_transmit_handle(event_t *event, struct TOS_state *state);
#line 228
void   event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg);










void   event_receive_packet_handle(event_t *event, struct TOS_state *state);
#line 266
void   event_send_packet_done_create(event_t *event, int node, long long eventTime);










void   event_send_packet_done_handle(event_t *event, struct TOS_state *state);
# 45 "/opt/tinyos-1.x/tos/sensorboards/micasb/sensorboard.h"
enum __nesc_unnamed4343 {
  TOSH_ACTUAL_PHOTO_PORT = 1, 
  TOSH_ACTUAL_TEMP_PORT = 1, 
  TOSH_ACTUAL_MIC_PORT = 2, 
  TOSH_ACTUAL_ACCEL_X_PORT = 3, 
  TOSH_ACTUAL_ACCEL_Y_PORT = 4, 
  TOSH_ACTUAL_MAG_X_PORT = 6, 
  TOSH_ACTUAL_MAG_Y_PORT = 5
};

enum __nesc_unnamed4344 {
  TOS_ADC_PHOTO_PORT = 1, 
  TOS_ADC_TEMP_PORT = 2, 
  TOS_ADC_MIC_PORT = 3, 
  TOS_ADC_ACCEL_X_PORT = 4, 
  TOS_ADC_ACCEL_Y_PORT = 5, 
  TOS_ADC_MAG_X_PORT = 6, 

  TOS_ADC_MAG_Y_PORT = 8
};

enum __nesc_unnamed4345 {
  TOS_MAG_POT_ADDR = 0, 
  TOS_MIC_POT_ADDR = 1
};
# 33 "/opt/tinyos-1.x/tos/interfaces/TosTime.h"
typedef struct __nesc_unnamed4346 {
  uint32_t high32;
  uint32_t low32;
} tos_time_t;
# 39 "/opt/tinyos-1.x/tos/interfaces/Timer.h"
enum __nesc_unnamed4347 {
  TIMER_REPEAT = 0, 
  TIMER_ONE_SHOT = 1, 
  NUM_TIMERS = 12
};
# 34 "/opt/tinyos-1.x/tos/interfaces/Clock.h"
enum __nesc_unnamed4348 {
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
enum __nesc_unnamed4349 {
  DEFAULT_SCALE = 3, DEFAULT_INTERVAL = 255
};
# 32 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.h"
enum __nesc_unnamed4350 {

  MAX_NUM_TIMERS = 0
};
# 4 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/Globals.h"
enum __nesc_unnamed4351 {
  CIRCULAR_BUFFER_SIZE = 32, 
  MAX_NEIGHBORS = 50, 
  MAX_ONE_HOP_NEIGHBORS = MAX_NEIGHBORS, 
  MAX_OTHER_NEIGHBORS = MAX_NEIGHBORS
};
# 14 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/TransactionTableH.h"
enum __nesc_unnamed4352 {
  GOOD_REPORTING_BEHAVIOR_INCREMENT = 1, 
  BAD_REPORTING_BEHAVIOR_INCREMENT = 2, 
  GOOD_AVAILABILITY_BEHAVIOR_INCREMENT = 1, 
  BAD_AVAILABILITY_BEHAVIOR_INCREMENT = 2, 
  MAX_NUMBER_OTHER_POSSIBLE_PARENTS = 10
};
#line 33
uint16_t one_gfb_inc = 0;
uint16_t one_bfb_inc = 0;
uint16_t one_grb_inc = 0;
uint16_t one_brb_inc = 0;
uint16_t one_gab_inc = 0;
uint16_t one_bab_inc = 0;
uint16_t one_glb_inc = 0;
uint16_t one_blb_inc = 0;
uint16_t two_gfb_inc = 0;
uint16_t two_bfb_inc = 0;
uint16_t two_grb_inc = 0;
uint16_t two_brb_inc = 0;
uint16_t two_gab_inc = 0;
uint16_t two_bab_inc = 0;
uint16_t two_glb_inc = 0;
uint16_t two_blb_inc = 0;

typedef struct Transaction_Record_t {
  uint32_t transaction_id;
  uint16_t originatingNode;
  uint16_t originatorPacketCount;
  uint16_t receivedFrom;
  uint16_t sequenceNumber;
  uint8_t isValid;
  uint16_t packetsReceived;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
  uint16_t originalPacketsForwardedTo;
  uint8_t oneHopReported;
  uint16_t oneHopReportedPacketsReceived;
  uint16_t oneHopReportedPacketsForwarded;
  uint16_t oneHopReportedPacketsForwardedTo;
  uint8_t twoHopReported;
  uint16_t twoHopReportedPacketsReceived;
  uint8_t processed;
  uint16_t isALoop;
  uint16_t lastParentTried;
  uint16_t numberPossibleOtherParents;
  uint16_t numberPossibleOtherParentsTried;
  uint16_t possibleOtherParents[MAX_NUMBER_OTHER_POSSIBLE_PARENTS];
} Transaction_Record_t;


typedef Transaction_Record_t *Transaction_Record_Ptr;

typedef struct Check_Transaction_Record_t {
  Transaction_Record_Ptr transactionPtr;
  uint16_t oneTimes;
  uint16_t twoTimes;
} Check_Transaction_Record_t;




uint8_t tLoopCounter;
#line 87
uint8_t tnLoopCounter;
int8_t tIndex;
# 12 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/NeighborTableH.h"
enum __nesc_unnamed4353 {
  NO_LEVEL = 255, 
  NO_PARENT = 255, 
  NO_NEIGHBOR = 255, 
  MAX_CHILDREN = 32, 

  TRUST_FP_START = 1, 
  TRUST_GFB_START = 1, 
  TRUST_BFB_START = 0, 
  TRUST_RH_START = 1, 
  TRUST_GRB_START = 1, 
  TRUST_BRB_START = 0, 
  TRUST_AV_START = 1, 
  TRUST_GAB_START = 1, 
  TRUST_BAB_START = 0, 
  TRUST_LP_START = 1, 
  TRUST_GLB_START = 1, 
  TRUST_BLB_START = 0, 
  TRUST_PR_START = 1, 
  TRUST_GPB_START = 1, 
  TRUST_BPB_START = 0, 
  TRUST_OV_START = 1
};





typedef struct Trust_Rec_t {
  float trustFP;
  uint32_t GFB;
  uint32_t BFB;
  float trustRH;
  uint32_t GRB;
  uint32_t BRB;
  float trustAV;
  uint32_t GAB;
  uint32_t BAB;
  float trustLP;
  uint32_t GLB;
  uint32_t BLB;
  float trustPR;
  uint32_t GPB;
  uint32_t BPB;
  float overallTrust;
} Trust_Rec_t;

typedef struct Neighbor_Rec_t {
  uint16_t node_id;
  uint8_t level;
  uint16_t parent_id;
} Neighbor_Rec_t;


typedef struct Neighbor_Rec_withTrust_t {
  uint16_t node_id;
  uint8_t level;
  uint16_t parent_id;
  uint8_t isOne;
  Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;

typedef struct Neighbor_Msg_Rec_t {
  uint16_t node_id;
  uint8_t level;
} Neighbor_Msg_Rec_t;
#line 107
uint8_t neighborFound;
#line 107
uint8_t oneHopFound;



float parent_peer_threshold = 0.9;
float peer_child_threshold = 0.2;
# 14 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/TrustH.h"
float FP_WEIGHT = 0.20;
float RH_WEIGHT = 0.20;
float AV_WEIGHT = 0.20;
float LP_WEIGHT = 0.20;
float PR_WEIGHT = 0.20;
# 24 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/AttackH.h"
uint16_t aCounter;

uint16_t selectiveForwardAttackers[2] = { 1, 3 };
uint16_t selectiveForwardVictims[2] = { 4, 4 };
uint16_t selectiveForwardNumerators[2] = { 1, 7 };
uint16_t selectiveForwardDenomenators[2] = { 10, 10 };

uint16_t numSFAttackers = 2;


typedef struct selectiveForwarder {
  uint16_t attacker_id;
  uint16_t victim_id;
  uint16_t numerator;
  uint16_t demonenator;
} selectiveForwarder;




uint16_t loopCreationAttackers[0] = {  };
uint16_t loopCreationAttackersParents[0] = {  };



uint16_t numLoopCreationAttackers = 0;




uint16_t noResponseAttackers[0] = {  };
uint16_t numNoResponseAttackers = 0;




uint16_t onOffAttackers[0] = {  };
uint16_t numThirtySeconds[0] = {  };
uint16_t numOnOffAttackers = 0;
# 10 "/opt/tinyos-1.x/apps/sarp-0.3-dev/includes/TrafficGeneratorH.h"
uint16_t tfLoopCounter;
uint16_t trafficGenerators[1] = { 4 };
uint16_t numTrafficGenerators = 1;
static  result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710);
static   void PowerStateM$PowerState$radioStop(void);
static   void PowerStateM$PowerState$radioStart(void);
static   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
static   void PowerStateM$PowerState$yellowOff(void);
static   void PowerStateM$PowerState$greenOff(void);
static   result_t PowerStateM$PowerState$init(int arg_0x898a520, int arg_0x898a668);
static   void PowerStateM$PowerState$radioRxMode(void);
static   void PowerStateM$PowerState$redOff(void);
static   void PowerStateM$PowerState$radioTxMode(void);
static   void PowerStateM$PowerState$redOn(void);
static   result_t PowerStateM$PowerState$stop(void);
static   double PowerStateM$PowerState$get_mote_cycles(int arg_0x898a110);
static   void PowerStateM$PowerState$greenOn(void);
static   result_t TimerM$Clock$fire(void);
static  result_t TimerM$StdControl$init(void);
static  result_t TimerM$StdControl$start(void);
static  result_t TimerM$StdControl$stop(void);
static  result_t TimerM$Timer$default$fired(uint8_t arg_0x8a2c2c8);
static  result_t TimerM$Timer$start(uint8_t arg_0x8a2c2c8, char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  result_t TimerM$Timer$stop(uint8_t arg_0x8a2c2c8);
static   void HPLClock$Clock$setInterval(uint8_t arg_0x8a494d0);
static   uint8_t HPLClock$Clock$readCounter(void);
static   result_t HPLClock$Clock$setRate(char arg_0x8a489d0, char arg_0x8a48b10);
static   uint8_t HPLClock$Clock$getInterval(void);
static   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
static  result_t SimpleTimeM$AbsoluteTimer$default$fired(uint8_t arg_0x8aa5918);
static  result_t SimpleTimeM$Timer$fired(void);
static   tos_time_t TimeUtilC$TimeUtil$addUint32(tos_time_t arg_0x8a3af78, uint32_t arg_0x8a3b0c8);
static   char TimeUtilC$TimeUtil$compare(tos_time_t arg_0x8a3bcd0, tos_time_t arg_0x8a3be20);
static  result_t SarpM$SendDisc$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$SendReportNoForwardResponse$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$SendReportForwardResponse$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$SendReportRequest$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$SendUDisc$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$Timer6$fired(void);
static  result_t SarpM$Timer9$fired(void);
static  result_t SarpM$Timer1$fired(void);
static  result_t SarpM$SendSpecificReportRequest$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$SendSpecificReportResponse$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  TOS_MsgPtr SarpM$Receive$receive(TOS_MsgPtr arg_0x896da10);
static  result_t SarpM$Timer4$fired(void);
static  result_t SarpM$SendStart$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$Timer7$fired(void);
static  result_t SarpM$Timer10$fired(void);
static  result_t SarpM$SendReport$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$Timer2$fired(void);
static  result_t SarpM$SendEndToEndReportResponse$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  result_t SarpM$StdControl$init(void);
static  result_t SarpM$StdControl$start(void);
static  result_t SarpM$StdControl$stop(void);
static  result_t SarpM$Timer8$fired(void);
static  result_t SarpM$SendData$sendDone(TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t arg_0x8bcbc98, TOS_MsgPtr arg_0x896da10);
static  result_t AMStandard$ActivityTimer$fired(void);
static  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710);
static  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr arg_0x896da10);
static  result_t AMStandard$Control$init(void);
static  result_t AMStandard$Control$start(void);
static  result_t AMStandard$Control$stop(void);
static  result_t AMStandard$default$sendDone(void);
static  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710);
static  result_t AMStandard$SendMsg$send(uint8_t arg_0x8bcb6e0, uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  result_t AMStandard$SendMsg$default$sendDone(uint8_t arg_0x8bcb6e0, TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
static  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr arg_0x896da10);
static  result_t MicaHighSpeedRadioM$Send$send(TOS_MsgPtr arg_0x88cd0a8);
static  result_t MicaHighSpeedRadioM$Code$decodeDone(char arg_0x8bbb7a0, char arg_0x8bbb8e0);
static  result_t MicaHighSpeedRadioM$Code$encodeDone(char arg_0x8bbbce8);
static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr arg_0x8bb6f98, uint8_t arg_0x8bb70e8);
static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(uint8_t arg_0x8bb6888, uint8_t arg_0x8bb69d0, TOS_MsgPtr arg_0x8bb6b20);
static  result_t MicaHighSpeedRadioM$SpiByteFifo$dataReady(uint8_t arg_0x8be7b30);
static  result_t MicaHighSpeedRadioM$Control$init(void);
static  result_t MicaHighSpeedRadioM$Control$start(void);
static  result_t MicaHighSpeedRadioM$Control$stop(void);
static   void MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(TOS_MsgPtr arg_0x8bb6f98, uint8_t arg_0x8bb70e8);
static   void MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(uint8_t arg_0x8bb6888, uint8_t arg_0x8bb69d0, TOS_MsgPtr arg_0x8bb6b20);
static  result_t MicaHighSpeedRadioM$ChannelMon$idleDetect(void);
static  result_t MicaHighSpeedRadioM$ChannelMon$startSymDetect(void);
static  result_t SecDedEncoding$Code$encode_flush(void);
static  result_t SecDedEncoding$Code$decode(char arg_0x8bbb3a0);
static  result_t SecDedEncoding$Code$encode(char arg_0x8bbafa8);
static   uint16_t RandomLFSR$Random$rand(void);
static   result_t RandomLFSR$Random$init(void);
static  result_t ChannelMonC$ChannelMon$macDelay(void);
static  result_t ChannelMonC$ChannelMon$startSymbolSearch(void);
static  result_t ChannelMonC$ChannelMon$init(void);
static  result_t ChannelMonC$ChannelMon$stopMonitorChannel(void);
static   uint16_t RadioTimingC$RadioTiming$currentTime(void);
static   uint16_t RadioTimingC$RadioTiming$getTiming(void);
static  result_t SpiByteFifoC$SpiByteFifo$send(uint8_t arg_0x8be6850);
static  result_t SpiByteFifoC$SpiByteFifo$phaseShift(void);
static  result_t SpiByteFifoC$SpiByteFifo$startReadBytes(uint16_t arg_0x8be6f10);
static  result_t SpiByteFifoC$SpiByteFifo$idle(void);
static  result_t SpiByteFifoC$SpiByteFifo$txMode(void);
static  result_t SpiByteFifoC$SpiByteFifo$rxMode(void);
static  TOS_MsgPtr CrcFilter$LowerReceive$receive(TOS_MsgPtr arg_0x896da10);
static  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr arg_0x88cd0a8);
static  result_t UARTNoCRCPacketM$Control$init(void);
static  result_t UARTNoCRCPacketM$Control$start(void);
static  result_t UARTNoCRCPacketM$Control$stop(void);
static  result_t PacketSink$Send$send(TOS_MsgPtr arg_0x88cd0a8);
static  result_t PacketSink$Control$init(void);
static  result_t PacketSink$Control$start(void);
static  result_t PacketSink$Control$stop(void);
static   result_t LedsM$Leds$yellowOff(void);
static   result_t LedsM$Leds$init(void);
static   result_t LedsM$Leds$greenOff(void);
static   result_t LedsM$Leds$redOff(void);
static   result_t LedsM$Leds$greenToggle(void);
static   result_t LedsM$Leds$redToggle(void);
static   result_t LedsM$Leds$redOn(void);
static   result_t LedsM$Leds$greenOn(void);
static  float TrustM$Trust$calculateLP(uint32_t arg_0x8aeb970, uint32_t arg_0x8aebac0);
static  float TrustM$Trust$calculateAV(uint32_t arg_0x8aeb418, uint32_t arg_0x8aeb568);
static  float TrustM$Trust$calculateRH(uint32_t arg_0x8aeaec0, uint32_t arg_0x8aeb010);
static  float TrustM$Trust$calculateOverallTrust(float arg_0x8b16430, float arg_0x8b16570, float arg_0x8b166b0, float arg_0x8b167f0, float arg_0x8b16930);
static  float TrustM$Trust$calculatePR(uint32_t arg_0x8aebec8, uint32_t arg_0x8b16030);
static  float TrustM$Trust$calculateFP(uint32_t arg_0x8aea968, uint32_t arg_0x8aeaab8);
static  uint16_t NeighborTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *arg_0x8acf798[], uint16_t arg_0x8acf8f8, uint8_t arg_0x8acfa48, Neighbor_Rec_withTrust_t *arg_0x8acfbe0[], uint16_t arg_0x8acfd38, Neighbor_Rec_withTrust_t *arg_0x8acfed8[], uint16_t arg_0x8acc060, uint16_t arg_0x8acc1b8, uint16_t arg_0x8acc318, uint16_t arg_0x8acc478, uint16_t arg_0x8acc5c8);
static  result_t NeighborTableM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t arg_0x8ace198[], Neighbor_Rec_withTrust_t *arg_0x8ace340[], uint16_t *arg_0x8ace4b0, uint16_t *arg_0x8ace628, uint16_t arg_0x8ace780, uint8_t arg_0x8ace8c8, uint16_t arg_0x8acea28, uint16_t *arg_0x8aceb98);
static  result_t NeighborTableM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t arg_0x8acf010[], uint16_t arg_0x8acf170, Neighbor_Rec_withTrust_t *arg_0x8acf318[]);
static  result_t NeighborTableM$StdControl$init(void);
static  result_t NeighborTableM$StdControl$start(void);
static  result_t NeighborTableM$StdControl$stop(void);
static  uint16_t TransactionTableM$TransactionTable$isALoop(Transaction_Record_t arg_0x8aec010[], uint32_t arg_0x8aec168, uint16_t arg_0x8aec2c0, uint16_t arg_0x8aec420);
static  void TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t arg_0x8af3c38[], uint16_t arg_0x8af3d88, uint16_t arg_0x8af3ee0, uint16_t arg_0x8af0060, uint32_t arg_0x8af01c0, uint32_t arg_0x8af0310, uint32_t arg_0x8af0460, uint32_t arg_0x8af05b0, uint32_t arg_0x8af0700, uint32_t arg_0x8af0850, uint32_t arg_0x8af09a0, uint32_t arg_0x8af0af0, uint32_t arg_0x8af0c40);
static  uint8_t TransactionTableM$TransactionTable$transactionExistsAlready(Transaction_Record_t arg_0x8ac50d0[], uint32_t arg_0x8ac5228, uint16_t arg_0x8ac5378);
static  void TransactionTableM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t arg_0x8af1158[], Transaction_Record_Ptr arg_0x8af12b0, uint16_t arg_0x8af1400, uint16_t arg_0x8af1550, uint16_t *arg_0x8af16c0, uint16_t arg_0x8af1818, uint16_t *arg_0x8af1988);
static  uint16_t TransactionTableM$TransactionTable$getTransactionParent(Transaction_Record_t arg_0x8af6b98[], uint32_t arg_0x8af6cf0);
static  void TransactionTableM$TransactionTable$incrementSequenceNumber(Transaction_Record_t arg_0x8ac57c8[], uint32_t arg_0x8ac5920);
static  Transaction_Record_Ptr TransactionTableM$TransactionTable$getThisTransactionPtr(Transaction_Record_t arg_0x8ac5d78[], uint32_t arg_0x8ac5ed0);
static  result_t TransactionTableM$TransactionTable$initializeTransaction(Transaction_Record_t arg_0x8acda88[], uint32_t arg_0x8acdbe0, uint16_t arg_0x8acdd38, uint16_t arg_0x8acde90, Neighbor_Rec_withTrust_t *arg_0x8ac4060[], uint16_t arg_0x8ac41c0, uint16_t arg_0x8ac4310, uint16_t arg_0x8ac4468, Neighbor_Rec_withTrust_t *arg_0x8ac4600[], uint16_t arg_0x8ac4758, Neighbor_Rec_withTrust_t *arg_0x8ac48f8[], uint16_t arg_0x8ac4a50, uint16_t arg_0x8ac4ba0);
static  void TransactionTableM$TransactionTable$markAsLoop(Transaction_Record_Ptr arg_0x8af37f0);
static  uint16_t TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t arg_0x8aef2b0[], uint32_t arg_0x8aef408, TOS_Msg arg_0x8aef570[], uint16_t *arg_0x8aef6e0, uint16_t arg_0x8aef838, uint16_t *arg_0x8aef9a8, uint16_t arg_0x8aefaf8);
static  uint16_t TransactionTableM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t arg_0x8af1e88[], Transaction_Record_Ptr *arg_0x8aee010, uint16_t *arg_0x8aee178, uint16_t *arg_0x8aee2e0, uint16_t *arg_0x8aee450, uint16_t arg_0x8aee5a8, uint16_t *arg_0x8aee718);
static  void TransactionTableM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t arg_0x8aeeb90[], uint32_t arg_0x8aeece8, uint16_t arg_0x8aeee40);
static  void TransactionTableM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t arg_0x8aec878[], uint16_t arg_0x8aec9d0, uint16_t arg_0x8aecb20);
static  void TransactionTableM$TransactionTable$processThisTransaction(Transaction_Record_Ptr arg_0x8af6308, Neighbor_Rec_withTrust_t arg_0x8af6490[], uint16_t arg_0x8af65e8, uint16_t arg_0x8af6738);
static  void MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg arg_0x8ae3ee8[], uint16_t *arg_0x8ae0078, uint16_t arg_0x8ae01d0, uint16_t *arg_0x8ae0340, uint16_t arg_0x8ae0498, uint32_t arg_0x8ae05f0, uint16_t arg_0x8ae0748, uint16_t arg_0x8ae08a8, uint16_t arg_0x8ae0a08, uint16_t arg_0x8ae0b68, uint16_t arg_0x8ae0cc0);
static  void MessagingM$Messaging$putStartMsgInOutQ(TOS_Msg arg_0x8adf2f0[], uint16_t *arg_0x8adf460, uint16_t arg_0x8adf5b8, uint16_t *arg_0x8adf728, uint16_t arg_0x8adf878);
static  void MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg arg_0x8ae2b48[], uint16_t *arg_0x8ae2cb8, uint16_t arg_0x8ae2e10, uint16_t *arg_0x8ae2f80, uint16_t arg_0x8ae30d8, uint16_t arg_0x8ae3230, uint32_t arg_0x8ae3388, uint16_t arg_0x8ae34e0, uint16_t arg_0x8ae3640, uint16_t arg_0x8ae37a0, uint16_t arg_0x8ae3900, uint16_t arg_0x8ae3a60);
static  void MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg arg_0x8ae5a00[], uint16_t *arg_0x8ae5b70, uint16_t arg_0x8ae5cc8, uint16_t *arg_0x8ae5e38, uint16_t arg_0x8ae2010, uint16_t arg_0x8ae2168, uint16_t arg_0x8ae22c0, uint16_t arg_0x8ae2418, uint16_t arg_0x8ae2578, uint32_t arg_0x8ae26d0);
static  void MessagingM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg arg_0x8ae9ae0[], uint16_t *arg_0x8ae9c50, uint16_t arg_0x8ae9da8, uint16_t *arg_0x8ae9f18, uint16_t arg_0x8ae4080, uint16_t arg_0x8ae41d0, uint16_t arg_0x8ae4328, uint16_t arg_0x8ae4488, Neighbor_Rec_withTrust_t *arg_0x8ae4630[]);
static  void MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg arg_0x8adfcc8[], uint16_t *arg_0x8adfe38, uint16_t arg_0x8b14010, uint16_t *arg_0x8b14180, uint16_t arg_0x8b142d0, uint16_t arg_0x8b14428, uint16_t arg_0x8b14578);
static  void MessagingM$Messaging$putDataMessageInOutQ(TOS_Msg arg_0x8ae8590[], uint16_t *arg_0x8ae8700, uint16_t arg_0x8ae8858, uint16_t *arg_0x8ae89c8, uint16_t arg_0x8ae8b20, uint16_t arg_0x8ae8c78, uint32_t arg_0x8ae8dd0, uint16_t arg_0x8ae8f28, uint16_t arg_0x8ae9078, uint16_t arg_0x8ae91d0, uint16_t arg_0x8ae9328, uint16_t arg_0x8ae9480, uint16_t arg_0x8ae95e0);
static  void MessagingM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0x8ae4a98[], uint16_t *arg_0x8ae4c08, uint16_t arg_0x8ae4d60, uint16_t *arg_0x8ae4ed0, uint16_t arg_0x8ae5028, uint16_t arg_0x8ae5180, uint16_t arg_0x8ae52d8, uint16_t arg_0x8ae5438, uint32_t arg_0x8ae5590);
static  void MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg arg_0x8ade238[], uint16_t *arg_0x8ade3a8, uint16_t arg_0x8ade500, uint16_t *arg_0x8ade670, uint16_t arg_0x8ade7c8, uint16_t arg_0x8ade920, uint32_t arg_0x8adea78, uint16_t arg_0x8adebd0, uint16_t arg_0x8aded30, uint16_t arg_0x8adee88);
static  uint16_t AttackM$Attack$sfDropThis(uint16_t arg_0x8b15de0, uint16_t arg_0x8b15f38, uint16_t *arg_0x8b120c8);
static  uint16_t AttackM$Attack$ifLoopCreatorGetParent(uint16_t arg_0x8b124f8);
static  uint16_t AttackM$Attack$getNumThirtySeconds(uint16_t arg_0x8b13560);
static  uint16_t AttackM$Attack$isNoResponder(uint16_t arg_0x8b12d28);
static  uint16_t AttackM$Attack$isOnOffAttacker(uint16_t arg_0x8b13140);
static  uint16_t AttackM$Attack$isLoopCreator(uint16_t arg_0x8b12910);
static  float TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(uint16_t arg_0x8ad0c70);
static  
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0x896da10);
static   
# 22 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
void Nido$PowerState$CPUCycleCheckpoint(void);
static   
#line 14
result_t Nido$PowerState$init(int arg_0x898a520, int arg_0x898a668);
static   


result_t Nido$PowerState$stop(void);
static  
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710);
static  
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0x896da10);
static  
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t Nido$StdControl$init(void);
static  





result_t Nido$StdControl$start(void);
static  






result_t Nido$StdControl$stop(void);
static inline 
# 74 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void Nido$usage(char *progname);
static 



void Nido$help(char *progname);
#line 107
void   event_boot_handle(event_t *fevent, 
struct TOS_state *fstate);
#line 122
int   main(int argc, char **argv);
#line 387
void   nido_start_mote(uint16_t moteID);
#line 402
void   nido_stop_mote(uint16_t moteID);
#line 416
TOS_MsgPtr   NIDO_received_radio(TOS_MsgPtr packet);









TOS_MsgPtr   NIDO_received_uart(TOS_MsgPtr packet);
static inline   
#line 442
result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr msg, result_t success);



void   packet_sim_transmit_done(TOS_MsgPtr msg);




void   packet_sim_receive_msg(TOS_MsgPtr msg);



void   set_sim_rate(uint32_t rate);







uint32_t   get_sim_rate(void);
static inline 
# 20 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
int PowerStateM$num_bbs(void);
static inline void PowerStateM$dump_power_details(void);
static inline   
result_t PowerStateM$PowerState$init(int prof, int cpu_prof);
static inline   
#line 54
result_t PowerStateM$PowerState$stop(void);
static inline   
#line 130
void PowerStateM$PowerState$redOn(void);
static inline   




void PowerStateM$PowerState$redOff(void);
static inline   




void PowerStateM$PowerState$greenOn(void);
static inline   




void PowerStateM$PowerState$greenOff(void);
static inline   
#line 160
void PowerStateM$PowerState$yellowOff(void);
static inline   





void PowerStateM$PowerState$radioTxMode(void);
static inline   




void PowerStateM$PowerState$radioRxMode(void);
static inline   
#line 185
void PowerStateM$PowerState$radioStart(void);
static inline   




void PowerStateM$PowerState$radioStop(void);
static inline 
#line 311
int PowerStateM$num_bbs(void);
static inline 




int PowerStateM$bb_exec_count(int mote, int bb);
static   



double PowerStateM$PowerState$get_mote_cycles(int mote);
static inline 
#line 339
void PowerStateM$print_power_info(void);
static inline 
#line 361
void PowerStateM$dump_power_details(void);
static inline   
#line 389
void PowerStateM$PowerState$CPUCycleCheckpoint(void);
static   
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
uint8_t TimerM$PowerManagement$adjustPower(void);
static   
# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
void TimerM$Clock$setInterval(uint8_t arg_0x8a494d0);
static   
#line 153
uint8_t TimerM$Clock$readCounter(void);
static   
#line 96
result_t TimerM$Clock$setRate(char arg_0x8a489d0, char arg_0x8a48b10);
static   
#line 121
uint8_t TimerM$Clock$getInterval(void);
static  
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t TimerM$Timer$fired(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x8a2c2c8);









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

struct TimerM$timer_s {
  uint8_t type;
  int32_t ticks;
  int32_t ticksLeft;
} TimerM$mTimerList[1000][NUM_TIMERS];

enum TimerM$__nesc_unnamed4354 {
  TimerM$maxTimerInterval = 230
};
static  result_t TimerM$StdControl$init(void);
static inline  








result_t TimerM$StdControl$start(void);
static inline  


result_t TimerM$StdControl$stop(void);
static  





result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval);
#line 129
static void TimerM$adjustInterval(void);
static  
#line 168
result_t TimerM$Timer$stop(uint8_t id);
static inline   
#line 182
result_t TimerM$Timer$default$fired(uint8_t id);
static inline 


void TimerM$enqueue(uint8_t value);
static inline 






uint8_t TimerM$dequeue(void);
static inline  








void TimerM$signalOneTimer(void);
static inline  




void TimerM$HandleFire(void);
static inline   
#line 253
result_t TimerM$Clock$fire(void);
static   
# 180 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
result_t HPLClock$Clock$fire(void);
# 60 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
char HPLClock$set_flag[1000];
 unsigned char HPLClock$mscale[1000];
 
#line 61
unsigned char HPLClock$nextScale[1000];
 
#line 61
unsigned char HPLClock$minterval[1000];
static inline   
#line 82
void HPLClock$Clock$setInterval(uint8_t value);
static inline   







uint8_t HPLClock$Clock$getInterval(void);
static inline   
#line 113
uint8_t HPLClock$Clock$readCounter(void);
static inline   
#line 128
result_t HPLClock$Clock$setRate(char interval, char scale);
static inline 






void  SIG_OUTPUT_COMPARE2_interrupt(void);
# 50 "/opt/tinyos-1.x/tos/platform/pc/HPLPowerManagementM.nc"
enum HPLPowerManagementM$__nesc_unnamed4355 {
  HPLPowerManagementM$IDLE = 0
};
static inline   
uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
static  
# 61 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.nc"
result_t SimpleTimeM$AbsoluteTimer$fired(
# 54 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
uint8_t arg_0x8aa5918);
static   
# 65 "/opt/tinyos-1.x/tos/interfaces/TimeUtil.nc"
tos_time_t SimpleTimeM$TimeUtil$addUint32(tos_time_t arg_0x8a3af78, uint32_t arg_0x8a3b0c8);
static   
#line 82
char SimpleTimeM$TimeUtil$compare(tos_time_t arg_0x8a3bcd0, tos_time_t arg_0x8a3be20);
# 65 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
enum SimpleTimeM$__nesc_unnamed4356 {
  SimpleTimeM$INTERVAL = 32
};
tos_time_t SimpleTimeM$time[1000];
tos_time_t SimpleTimeM$aTimer[1000][MAX_NUM_TIMERS];
static inline   
#line 147
result_t SimpleTimeM$AbsoluteTimer$default$fired(uint8_t id);
static inline  


result_t SimpleTimeM$Timer$fired(void);
static inline   
# 53 "/opt/tinyos-1.x/tos/system/TimeUtilC.nc"
char TimeUtilC$TimeUtil$compare(tos_time_t a, tos_time_t b);
static inline   
#line 99
tos_time_t TimeUtilC$TimeUtil$addUint32(tos_time_t a, uint32_t ms);
static  
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t SarpM$SendDisc$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
#line 48
result_t SarpM$SendReportNoForwardResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
#line 48
result_t SarpM$SendReportForwardResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
# 39 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
void SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg arg_0x8ae3ee8[], uint16_t *arg_0x8ae0078, uint16_t arg_0x8ae01d0, uint16_t *arg_0x8ae0340, uint16_t arg_0x8ae0498, uint32_t arg_0x8ae05f0, uint16_t arg_0x8ae0748, uint16_t arg_0x8ae08a8, uint16_t arg_0x8ae0a08, uint16_t arg_0x8ae0b68, uint16_t arg_0x8ae0cc0);
static  
#line 54
void SarpM$Messaging$putStartMsgInOutQ(TOS_Msg arg_0x8adf2f0[], uint16_t *arg_0x8adf460, uint16_t arg_0x8adf5b8, uint16_t *arg_0x8adf728, uint16_t arg_0x8adf878);
static  
#line 34
void SarpM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg arg_0x8ae2b48[], uint16_t *arg_0x8ae2cb8, uint16_t arg_0x8ae2e10, uint16_t *arg_0x8ae2f80, uint16_t arg_0x8ae30d8, uint16_t arg_0x8ae3230, uint32_t arg_0x8ae3388, uint16_t arg_0x8ae34e0, uint16_t arg_0x8ae3640, uint16_t arg_0x8ae37a0, uint16_t arg_0x8ae3900, uint16_t arg_0x8ae3a60);
static  
#line 29
void SarpM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg arg_0x8ae5a00[], uint16_t *arg_0x8ae5b70, uint16_t arg_0x8ae5cc8, uint16_t *arg_0x8ae5e38, uint16_t arg_0x8ae2010, uint16_t arg_0x8ae2168, uint16_t arg_0x8ae22c0, uint16_t arg_0x8ae2418, uint16_t arg_0x8ae2578, uint32_t arg_0x8ae26d0);
static  
#line 19
void SarpM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg arg_0x8ae9ae0[], uint16_t *arg_0x8ae9c50, uint16_t arg_0x8ae9da8, uint16_t *arg_0x8ae9f18, uint16_t arg_0x8ae4080, uint16_t arg_0x8ae41d0, uint16_t arg_0x8ae4328, uint16_t arg_0x8ae4488, Neighbor_Rec_withTrust_t *arg_0x8ae4630[]);
static  
#line 60
void SarpM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg arg_0x8adfcc8[], uint16_t *arg_0x8adfe38, uint16_t arg_0x8b14010, uint16_t *arg_0x8b14180, uint16_t arg_0x8b142d0, uint16_t arg_0x8b14428, uint16_t arg_0x8b14578);
static  
#line 14
void SarpM$Messaging$putDataMessageInOutQ(TOS_Msg arg_0x8ae8590[], uint16_t *arg_0x8ae8700, uint16_t arg_0x8ae8858, uint16_t *arg_0x8ae89c8, uint16_t arg_0x8ae8b20, uint16_t arg_0x8ae8c78, uint32_t arg_0x8ae8dd0, uint16_t arg_0x8ae8f28, uint16_t arg_0x8ae9078, uint16_t arg_0x8ae91d0, uint16_t arg_0x8ae9328, uint16_t arg_0x8ae9480, uint16_t arg_0x8ae95e0);
static  








void SarpM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0x8ae4a98[], uint16_t *arg_0x8ae4c08, uint16_t arg_0x8ae4d60, uint16_t *arg_0x8ae4ed0, uint16_t arg_0x8ae5028, uint16_t arg_0x8ae5180, uint16_t arg_0x8ae52d8, uint16_t arg_0x8ae5438, uint32_t arg_0x8ae5590);
static  
#line 49
void SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg arg_0x8ade238[], uint16_t *arg_0x8ade3a8, uint16_t arg_0x8ade500, uint16_t *arg_0x8ade670, uint16_t arg_0x8ade7c8, uint16_t arg_0x8ade920, uint32_t arg_0x8adea78, uint16_t arg_0x8adebd0, uint16_t arg_0x8aded30, uint16_t arg_0x8adee88);
static  
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t SarpM$SendReportRequest$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t SarpM$Timer6$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  
# 10 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
uint16_t SarpM$Attack$sfDropThis(uint16_t arg_0x8b15de0, uint16_t arg_0x8b15f38, uint16_t *arg_0x8b120c8);
static  
#line 45
uint16_t SarpM$Attack$getNumThirtySeconds(uint16_t arg_0x8b13560);
static  
#line 34
uint16_t SarpM$Attack$isNoResponder(uint16_t arg_0x8b12d28);
static  







uint16_t SarpM$Attack$isOnOffAttacker(uint16_t arg_0x8b13140);
static  
#line 26
uint16_t SarpM$Attack$isLoopCreator(uint16_t arg_0x8b12910);
static  
# 12 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TrafficGenerator.nc"
float SarpM$TrafficGenerator$isTrafficGenerator(uint16_t arg_0x8ad0c70);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t SarpM$Timer9$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  
#line 59
result_t SarpM$Timer1$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  







result_t SarpM$Timer1$stop(void);
static  
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t SarpM$SendSpecificReportRequest$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
#line 48
result_t SarpM$SendSpecificReportResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t SarpM$SubControl$init(void);
static  





result_t SarpM$SubControl$start(void);
static  






result_t SarpM$SubControl$stop(void);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t SarpM$Timer4$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t SarpM$SendStart$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t SarpM$CommControl$init(void);
static  





result_t SarpM$CommControl$start(void);
static  






result_t SarpM$CommControl$stop(void);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t SarpM$Timer7$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  
#line 59
result_t SarpM$Timer10$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static   
# 122 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
result_t SarpM$Leds$yellowOff(void);
static   
#line 56
result_t SarpM$Leds$init(void);
static   
#line 97
result_t SarpM$Leds$greenOff(void);
static   
#line 72
result_t SarpM$Leds$redOff(void);
static   
#line 106
result_t SarpM$Leds$greenToggle(void);
static   
#line 81
result_t SarpM$Leds$redToggle(void);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t SarpM$Timer2$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  
# 17 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/NeighborTable.nc"
result_t SarpM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t arg_0x8ace198[], Neighbor_Rec_withTrust_t *arg_0x8ace340[], uint16_t *arg_0x8ace4b0, uint16_t *arg_0x8ace628, uint16_t arg_0x8ace780, uint8_t arg_0x8ace8c8, uint16_t arg_0x8acea28, uint16_t *arg_0x8aceb98);
static  
# 97 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
uint16_t SarpM$TransactionTable$isALoop(Transaction_Record_t arg_0x8aec010[], uint32_t arg_0x8aec168, uint16_t arg_0x8aec2c0, uint16_t arg_0x8aec420);
static  
#line 22
uint8_t SarpM$TransactionTable$transactionExistsAlready(Transaction_Record_t arg_0x8ac50d0[], uint32_t arg_0x8ac5228, uint16_t arg_0x8ac5378);
static  
#line 77
void SarpM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t arg_0x8af1158[], Transaction_Record_Ptr arg_0x8af12b0, uint16_t arg_0x8af1400, uint16_t arg_0x8af1550, uint16_t *arg_0x8af16c0, uint16_t arg_0x8af1818, uint16_t *arg_0x8af1988);
static  
#line 42
uint16_t SarpM$TransactionTable$getTransactionParent(Transaction_Record_t arg_0x8af6b98[], uint32_t arg_0x8af6cf0);
static  
#line 27
void SarpM$TransactionTable$incrementSequenceNumber(Transaction_Record_t arg_0x8ac57c8[], uint32_t arg_0x8ac5920);
static  



Transaction_Record_Ptr SarpM$TransactionTable$getThisTransactionPtr(Transaction_Record_t arg_0x8ac5d78[], uint32_t arg_0x8ac5ed0);
static  
#line 16
result_t SarpM$TransactionTable$initializeTransaction(Transaction_Record_t arg_0x8acda88[], uint32_t arg_0x8acdbe0, uint16_t arg_0x8acdd38, uint16_t arg_0x8acde90, Neighbor_Rec_withTrust_t *arg_0x8ac4060[], uint16_t arg_0x8ac41c0, uint16_t arg_0x8ac4310, uint16_t arg_0x8ac4468, Neighbor_Rec_withTrust_t *arg_0x8ac4600[], uint16_t arg_0x8ac4758, Neighbor_Rec_withTrust_t *arg_0x8ac48f8[], uint16_t arg_0x8ac4a50, uint16_t arg_0x8ac4ba0);
static  
#line 67
void SarpM$TransactionTable$markAsLoop(Transaction_Record_Ptr arg_0x8af37f0);
static  
#line 92
uint16_t SarpM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t arg_0x8aef2b0[], uint32_t arg_0x8aef408, TOS_Msg arg_0x8aef570[], uint16_t *arg_0x8aef6e0, uint16_t arg_0x8aef838, uint16_t *arg_0x8aef9a8, uint16_t arg_0x8aefaf8);
static  
#line 82
uint16_t SarpM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t arg_0x8af1e88[], Transaction_Record_Ptr *arg_0x8aee010, uint16_t *arg_0x8aee178, uint16_t *arg_0x8aee2e0, uint16_t *arg_0x8aee450, uint16_t arg_0x8aee5a8, uint16_t *arg_0x8aee718);
static  



void SarpM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t arg_0x8aeeb90[], uint32_t arg_0x8aeece8, uint16_t arg_0x8aeee40);
static  
#line 102
void SarpM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t arg_0x8aec878[], uint16_t arg_0x8aec9d0, uint16_t arg_0x8aecb20);
static  
#line 37
void SarpM$TransactionTable$processThisTransaction(Transaction_Record_Ptr arg_0x8af6308, Neighbor_Rec_withTrust_t arg_0x8af6490[], uint16_t arg_0x8af65e8, uint16_t arg_0x8af6738);
static  
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t SarpM$SendEndToEndReportResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t SarpM$Timer8$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t SarpM$SendData$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98);
# 83 "SarpM.nc"
uint16_t SarpM$DFCounter[1000];
uint32_t SarpM$DFThreshold[1000];



uint16_t SarpM$myLevel[1000];
uint16_t SarpM$outIndex[1000];
uint16_t SarpM$myAddr[1000];
bool SarpM$OkToStart[1000];
uint32_t SarpM$TRANSACTION_ID[1000];

uint16_t SarpM$myOne[1000];
#line 94
uint16_t SarpM$myZero[1000];


TOS_Msg SarpM$inQ[1000][CIRCULAR_BUFFER_SIZE];
#line 97
TOS_Msg SarpM$outQ[1000][CIRCULAR_BUFFER_SIZE];
#line 97
TOS_Msg SarpM$outMsg[1000];
uint16_t SarpM$readInQHere[1000];
#line 98
uint16_t SarpM$writeInQHere[1000];
#line 98
uint16_t SarpM$readOutQHere[1000];
#line 98
uint16_t SarpM$writeOutQHere[1000];
#line 98
uint16_t SarpM$readReportQHere[1000];
#line 98
uint16_t SarpM$writeReportQHere[1000];
uint16_t SarpM$numMsgInQ[1000];
#line 99
uint16_t SarpM$numMsgOutQ[1000];

uint16_t SarpM$numDataMessagesInTrial[1000];
#line 124
TOS_Msg SarpM$this_dmesg[1000];
DiscoveryMsg *SarpM$disc_msg_in[1000];


DataMsg *SarpM$dataMsgIn[1000];
ReportRequestMsg *SarpM$reportReqMsgIn[1000];
ReportResponseNoForwardMsg *SarpM$reportRespNoForwardMsgIn[1000];

ReportResponseForwardMsg *SarpM$reportForwardMsgIn[1000];
EndToEndReportResponseMsg *SarpM$endToEndRepRespMsgIn[1000];
SpecificReportRequestMsg *SarpM$specificReportReqMsgIn[1000];
SpecificReportResponseMsg *SarpM$specificReportResponseMsgIn[1000];
ControlMsg *SarpM$controlMsgIn[1000];

Neighbor_Rec_withTrust_t SarpM$myStaticParent[1000];


uint16_t SarpM$transactionCounter[1000];




Neighbor_Rec_withTrust_t SarpM$neighbors[1000][MAX_NEIGHBORS];
Neighbor_Rec_withTrust_t *SarpM$myOneHopNeighbors[1000][MAX_ONE_HOP_NEIGHBORS];

Neighbor_Rec_withTrust_t *SarpM$myChildren[1000][MAX_CHILDREN];
#line 149
Neighbor_Rec_withTrust_t *SarpM$myPeers[1000][MAX_CHILDREN];

uint16_t SarpM$numOneHopNeighbors[1000];
#line 151
uint16_t SarpM$numChildren[1000];
#line 151
uint16_t SarpM$numPeers[1000];
#line 151
uint16_t SarpM$numNeighbors[1000];






Transaction_Record_t SarpM$transactionRecords[1000][CIRCULAR_BUFFER_SIZE];
uint32_t SarpM$reportQ[1000][CIRCULAR_BUFFER_SIZE];
Check_Transaction_Record_t SarpM$transactionsToCheckQ[1000][CIRCULAR_BUFFER_SIZE];

Transaction_Record_Ptr SarpM$checkThisTransaction[1000];
#line 162
Transaction_Record_Ptr SarpM$thisTransaction[1000];


uint16_t SarpM$oneTimesTID[1000];
#line 165
uint16_t SarpM$twoTimesTID[1000];

uint16_t SarpM$transactionFound[1000];
#line 167
uint16_t SarpM$sending[1000];
uint16_t SarpM$readTransactionCheckHere[1000];
#line 168
uint16_t SarpM$writeTransactionCheckHere[1000];
#line 168
uint16_t SarpM$numTransactionsToCheck[1000];

uint16_t SarpM$tFoundHere[1000];
uint32_t SarpM$nodeCounter[1000];
#line 171
uint32_t SarpM$nodeCounter2[1000];


uint16_t SarpM$lastToFindLoop[1000];
uint16_t SarpM$cantFixIt[1000];
uint16_t SarpM$dontSendTo[1000];
uint16_t SarpM$newTransactionParent[1000];

uint16_t SarpM$isOff_onoff[1000];
#line 179
uint16_t SarpM$onOffThirtySecondCounter[1000];


uint16_t SarpM$selectiveCounter[1000];

unsigned long SarpM$oneHopQuickGlance[1000];
#line 184
unsigned long SarpM$twoHopQuickGlance[1000];
static  
void SarpM$startApp(void);
static inline  
#line 213
result_t SarpM$StdControl$init(void);
static inline  
#line 260
result_t SarpM$StdControl$start(void);
static inline  
#line 277
result_t SarpM$StdControl$stop(void);
static inline  
#line 289
result_t SarpM$SendDisc$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendUDisc$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendStart$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendData$sendDone(TOS_MsgPtr masg, result_t success);
static inline  




result_t SarpM$SendReport$sendDone(TOS_MsgPtr masg, result_t success);
static inline  




result_t SarpM$SendReportRequest$sendDone(TOS_MsgPtr masg, result_t success);
static inline  




result_t SarpM$SendReportNoForwardResponse$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendReportForwardResponse$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendEndToEndReportResponse$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendSpecificReportRequest$sendDone(TOS_MsgPtr masg, result_t success);
static inline  



result_t SarpM$SendSpecificReportResponse$sendDone(TOS_MsgPtr masg, result_t success);
static  





void SarpM$processOutMsg(void);
static inline  
#line 441
void SarpM$sendReport(void);
static inline  
#line 472
void SarpM$processInMsg(void);
static  
#line 1073
TOS_MsgPtr SarpM$Receive$receive(TOS_MsgPtr n);
static inline  
#line 1124
void SarpM$sendDiscovery(void);
static inline  
#line 1149
void SarpM$sendDataMsg(void);
static inline  
#line 1237
result_t SarpM$Timer1$fired(void);
static inline  






result_t SarpM$Timer2$fired(void);
static inline  
#line 1304
result_t SarpM$Timer4$fired(void);
static inline  
#line 1338
result_t SarpM$Timer6$fired(void);
static inline  








result_t SarpM$Timer7$fired(void);
static inline  







result_t SarpM$Timer8$fired(void);
static inline  
#line 1455
result_t SarpM$Timer9$fired(void);
static inline  
#line 1471
result_t SarpM$Timer10$fired(void);
static  
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr AMStandard$ReceiveMsg$receive(
# 56 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x8bcbc98, 
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x896da10);
static  
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
result_t AMStandard$ActivityTimer$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70);
static  







result_t AMStandard$ActivityTimer$stop(void);
static  
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t AMStandard$UARTSend$send(TOS_MsgPtr arg_0x88cd0a8);
static   
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
uint8_t AMStandard$PowerManagement$adjustPower(void);
static  
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t AMStandard$RadioControl$init(void);
static  





result_t AMStandard$RadioControl$start(void);
static  






result_t AMStandard$RadioControl$stop(void);
static  
#line 63
result_t AMStandard$TimerControl$init(void);
static  





result_t AMStandard$TimerControl$start(void);
static  
#line 63
result_t AMStandard$UARTControl$init(void);
static  





result_t AMStandard$UARTControl$start(void);
static  






result_t AMStandard$UARTControl$stop(void);
static  
# 65 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$sendDone(void);
static  
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t AMStandard$RadioSend$send(TOS_MsgPtr arg_0x88cd0a8);
static  
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t AMStandard$SendMsg$sendDone(
# 55 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x8bcb6e0, 
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108);
# 81 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
bool AMStandard$state[1000];
TOS_MsgPtr AMStandard$buffer[1000];
uint16_t AMStandard$lastCount[1000];
uint16_t AMStandard$counter[1000];
static  

result_t AMStandard$Control$init(void);
static  
#line 103
result_t AMStandard$Control$start(void);
static  
#line 119
result_t AMStandard$Control$stop(void);
static 
#line 132
void AMStandard$dbgPacket(TOS_MsgPtr data);
static 









result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success);
static inline  






result_t AMStandard$ActivityTimer$fired(void);
static inline   




result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success);
static inline   

result_t AMStandard$default$sendDone(void);
static inline  



void AMStandard$sendTask(void);
static  
#line 179
result_t AMStandard$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data);
static inline  
#line 207
result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success);
static inline  

result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success);




TOS_MsgPtr   received(TOS_MsgPtr packet);
static inline   
#line 242
TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg);
static inline  


TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet);
static inline  




TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet);
static   
# 34 "/opt/tinyos-1.x/tos/platform/pc/RadioTiming.nc"
uint16_t MicaHighSpeedRadioM$RadioTiming$currentTime(void);
static   
#line 33
uint16_t MicaHighSpeedRadioM$RadioTiming$getTiming(void);
static  
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t MicaHighSpeedRadioM$Send$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710);
static   
# 57 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
result_t MicaHighSpeedRadioM$Random$init(void);
static  
# 33 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
result_t MicaHighSpeedRadioM$Code$encode_flush(void);
static  
result_t MicaHighSpeedRadioM$Code$decode(char arg_0x8bbb3a0);
static  
#line 34
result_t MicaHighSpeedRadioM$Code$encode(char arg_0x8bbafa8);
static  
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr MicaHighSpeedRadioM$Receive$receive(TOS_MsgPtr arg_0x896da10);
static   
# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
void MicaHighSpeedRadioM$RadioReceiveCoordinator$byte(TOS_MsgPtr arg_0x8bb6f98, uint8_t arg_0x8bb70e8);
static   
#line 33
void MicaHighSpeedRadioM$RadioReceiveCoordinator$startSymbol(uint8_t arg_0x8bb6888, uint8_t arg_0x8bb69d0, TOS_MsgPtr arg_0x8bb6b20);
static  
# 33 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
result_t MicaHighSpeedRadioM$SpiByteFifo$send(uint8_t arg_0x8be6850);
static  



result_t MicaHighSpeedRadioM$SpiByteFifo$phaseShift(void);
static  
#line 35
result_t MicaHighSpeedRadioM$SpiByteFifo$startReadBytes(uint16_t arg_0x8be6f10);
static  
#line 34
result_t MicaHighSpeedRadioM$SpiByteFifo$idle(void);
static  
result_t MicaHighSpeedRadioM$SpiByteFifo$txMode(void);
static  result_t MicaHighSpeedRadioM$SpiByteFifo$rxMode(void);
static   
# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
void MicaHighSpeedRadioM$RadioSendCoordinator$byte(TOS_MsgPtr arg_0x8bb6f98, uint8_t arg_0x8bb70e8);
static   
#line 33
void MicaHighSpeedRadioM$RadioSendCoordinator$startSymbol(uint8_t arg_0x8bb6888, uint8_t arg_0x8bb69d0, TOS_MsgPtr arg_0x8bb6b20);
static  
# 36 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
result_t MicaHighSpeedRadioM$ChannelMon$macDelay(void);
static  
#line 34
result_t MicaHighSpeedRadioM$ChannelMon$startSymbolSearch(void);
static  
#line 33
result_t MicaHighSpeedRadioM$ChannelMon$init(void);
static   
# 49 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
void MicaHighSpeedRadioM$PowerState$radioStop(void);
static   
#line 48
void MicaHighSpeedRadioM$PowerState$radioStart(void);
# 51 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
enum MicaHighSpeedRadioM$__nesc_unnamed4357 {
  MicaHighSpeedRadioM$IDLE_STATE, 
  MicaHighSpeedRadioM$SEND_WAITING, 
  MicaHighSpeedRadioM$RX_STATE, 
  MicaHighSpeedRadioM$TRANSMITTING, 
  MicaHighSpeedRadioM$WAITING_FOR_ACK, 
  MicaHighSpeedRadioM$SENDING_STRENGTH_PULSE, 
  MicaHighSpeedRadioM$TRANSMITTING_START, 
  MicaHighSpeedRadioM$RX_DONE_STATE, 
  MicaHighSpeedRadioM$ACK_SEND_STATE
};

enum MicaHighSpeedRadioM$__nesc_unnamed4358 {
  MicaHighSpeedRadioM$ACK_CNT = 4, 
  MicaHighSpeedRadioM$ENCODE_PACKET_LENGTH_DEFAULT = MSG_DATA_SIZE * 3
};






char MicaHighSpeedRadioM$state[1000];
char MicaHighSpeedRadioM$send_state[1000];
char MicaHighSpeedRadioM$tx_count[1000];
unsigned short MicaHighSpeedRadioM$calc_crc[1000];
uint8_t MicaHighSpeedRadioM$ack_count[1000];
char MicaHighSpeedRadioM$rec_count[1000];
TOS_Msg MicaHighSpeedRadioM$buffer[1000];
TOS_Msg *MicaHighSpeedRadioM$rec_ptr[1000];
TOS_Msg *MicaHighSpeedRadioM$send_ptr[1000];
unsigned char MicaHighSpeedRadioM$rx_count[1000];
char MicaHighSpeedRadioM$msg_length[1000];
char MicaHighSpeedRadioM$buf_head[1000];
char MicaHighSpeedRadioM$buf_end[1000];
char MicaHighSpeedRadioM$encoded_buffer[1000][4];
char MicaHighSpeedRadioM$enc_count[1000];
static 


short MicaHighSpeedRadioM$add_crc_byte(char new_byte, short crc);
static inline  
void MicaHighSpeedRadioM$packetReceived(void);
static inline  






void MicaHighSpeedRadioM$packetSent(void);
static inline  









result_t MicaHighSpeedRadioM$Send$send(TOS_MsgPtr msg);
static inline  
#line 124
result_t MicaHighSpeedRadioM$Control$stop(void);
static inline  



result_t MicaHighSpeedRadioM$Control$start(void);
static inline  





result_t MicaHighSpeedRadioM$Control$init(void);
static inline  








result_t MicaHighSpeedRadioM$ChannelMon$startSymDetect(void);










result_t   finishedTiming(void);
static inline  









result_t MicaHighSpeedRadioM$ChannelMon$idleDetect(void);
static inline  
#line 187
result_t MicaHighSpeedRadioM$Code$decodeDone(char data, char error);
static  
#line 224
result_t MicaHighSpeedRadioM$Code$encodeDone(char data1);
static  






result_t MicaHighSpeedRadioM$SpiByteFifo$dataReady(uint8_t data);
static 
#line 324
short MicaHighSpeedRadioM$add_crc_byte(char new_byte, short crc);
static inline    
#line 341
void MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff);
static inline    void MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount);
static inline    void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff);
static inline    void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount);
static  
# 37 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
result_t SecDedEncoding$Code$decodeDone(char arg_0x8bbb7a0, char arg_0x8bbb8e0);
static  result_t SecDedEncoding$Code$encodeDone(char arg_0x8bbbce8);
# 44 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
enum SecDedEncoding$__nesc_unnamed4359 {


  SecDedEncoding$IDLE_STATE = 0, 
  SecDedEncoding$DECODING_BYTE_3 = 1, 
  SecDedEncoding$DECODING_BYTE_2 = 2, 
  SecDedEncoding$DECODING_BYTE_1 = 3, 
  SecDedEncoding$ENCODING_BYTE = 4
};

char SecDedEncoding$data1[1000];
char SecDedEncoding$data2[1000];
char SecDedEncoding$data3[1000];
char SecDedEncoding$state[1000];
static inline 
void SecDedEncoding$radio_decode_thread(void);
static inline void SecDedEncoding$radio_encode_thread(void);
static inline  
result_t SecDedEncoding$Code$decode(char d1);
static inline  
#line 81
result_t SecDedEncoding$Code$encode_flush(void);
static  



result_t SecDedEncoding$Code$encode(char d);
static inline 









void SecDedEncoding$radio_encode_thread(void);
static inline 
#line 155
void SecDedEncoding$radio_decode_thread(void);
# 54 "/opt/tinyos-1.x/tos/system/RandomLFSR.nc"
uint16_t RandomLFSR$shiftReg[1000];
uint16_t RandomLFSR$initSeed[1000];
uint16_t RandomLFSR$mask[1000];
static inline   

result_t RandomLFSR$Random$init(void);
static   









uint16_t RandomLFSR$Random$rand(void);
static   
# 63 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
uint16_t ChannelMonC$Random$rand(void);
static  
# 39 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
result_t ChannelMonC$ChannelMon$idleDetect(void);
static  
#line 38
result_t ChannelMonC$ChannelMon$startSymDetect(void);
# 39 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
enum ChannelMonC$__nesc_unnamed4360 {
  ChannelMonC$IDLE_STATE, 
  ChannelMonC$START_SYMBOL_SEARCH, 
  ChannelMonC$PACKET_START, 
  ChannelMonC$DISABLED_STATE
};

enum ChannelMonC$__nesc_unnamed4361 {
  ChannelMonC$SAMPLE_RATE = 100 / 2 * 4
};
event_t  *channelMonEvents[TOSNODES];
unsigned short ChannelMonC$CM_search[1000][2];
char ChannelMonC$CM_state[1000];
unsigned char ChannelMonC$CM_lastBit[1000];
unsigned char ChannelMonC$CM_startSymBits[1000];
short ChannelMonC$CM_waiting[1000];
static inline  
result_t ChannelMonC$ChannelMon$init(void);
static  



result_t ChannelMonC$ChannelMon$startSymbolSearch(void);
static inline 
#line 88
void  SIG_OUTPUT_COMPARE2B_signal(void);
static  
#line 136
result_t ChannelMonC$ChannelMon$stopMonitorChannel(void);
static inline  







result_t ChannelMonC$ChannelMon$macDelay(void);
static inline 






void ChannelMonC$event_channel_mon_handle(event_t *fevent, 
struct TOS_state *state);
#line 178
void   event_channel_mon_create(event_t *fevent, int mote, long long ftime, int interval);
#line 195
void   event_channel_mon_invalidate(event_t *fevent);
 
# 41 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
event_t  *radioTimingEvents[TOSNODES];
static inline   
uint16_t RadioTimingC$RadioTiming$getTiming(void);
static inline   
#line 76
uint16_t RadioTimingC$RadioTiming$currentTime(void);





result_t   finishedTiming(void);
static inline 
void RadioTimingC$event_radio_timing_handle(event_t *fevent, 
struct TOS_state *state);
#line 130
void   event_radio_timing_create(event_t *fevent, int mote, long long ftime, int interval);
#line 147
void   event_radio_timing_invalidate(event_t *fevent);
static   
# 46 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
void SpiByteFifoC$PowerState$radioRxMode(void);
static   
#line 45
void SpiByteFifoC$PowerState$radioTxMode(void);
static  
# 40 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
result_t SpiByteFifoC$SpiByteFifo$dataReady(uint8_t arg_0x8be7b30);
# 39 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
uint8_t SpiByteFifoC$nextByte[1000];
uint8_t SpiByteFifoC$state[1000];
uint8_t SpiByteFifoC$spdr[1000];
uint8_t SpiByteFifoC$radioState[1000];


enum SpiByteFifoC$__nesc_unnamed4362 {
  SpiByteFifoC$IDLE, 
  SpiByteFifoC$FULL, 
  SpiByteFifoC$OPEN, 
  SpiByteFifoC$READING
};

enum SpiByteFifoC$__nesc_unnamed4363 {
  SpiByteFifoC$RADIO_RECEIVING, 
  SpiByteFifoC$RADIO_SENDING, 
  SpiByteFifoC$RADIO_IDLE
};

enum SpiByteFifoC$__nesc_unnamed4364 {
  SpiByteFifoC$TOSH_BIT_RATE = 20 * 4 / 2 * 5 / 4
};
static inline 

void  SIG_SPI_signal(void);
static  





result_t SpiByteFifoC$SpiByteFifo$send(uint8_t data);
static  
#line 101
result_t SpiByteFifoC$SpiByteFifo$idle(void);
static inline  
#line 120
result_t SpiByteFifoC$SpiByteFifo$startReadBytes(uint16_t timing);
static inline  
#line 134
result_t SpiByteFifoC$SpiByteFifo$txMode(void);
static inline  






result_t SpiByteFifoC$SpiByteFifo$rxMode(void);
static inline  








result_t SpiByteFifoC$SpiByteFifo$phaseShift(void);
#line 170
void   event_spi_byte_handle(event_t *fevent, 
struct TOS_state *fstate);
#line 252
void   event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count);
#line 271
void   event_spi_byte_invalidate(event_t *fevent);




void   event_spi_byte_end(event_t *fevent);
static  
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr CrcFilter$UpperReceive$receive(TOS_MsgPtr arg_0x896da10);
static inline  
# 52 "/opt/tinyos-1.x/tos/system/CrcFilter.nc"
TOS_MsgPtr CrcFilter$LowerReceive$receive(TOS_MsgPtr msg);
static  
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710);
static inline  
# 55 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
result_t UARTNoCRCPacketM$Control$init(void);
static inline  



result_t UARTNoCRCPacketM$Control$start(void);
static inline  



result_t UARTNoCRCPacketM$Control$stop(void);
static inline  



result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr msg);
#line 82
void   NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess);
static inline  
# 60 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
result_t PacketSink$Control$init(void);
static inline  


result_t PacketSink$Control$start(void);
static inline  


result_t PacketSink$Control$stop(void);
static inline  







result_t PacketSink$Send$send(TOS_MsgPtr msg);
static   
# 41 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
void LedsM$PowerState$yellowOff(void);
static   
#line 39
void LedsM$PowerState$greenOff(void);
static   
#line 37
void LedsM$PowerState$redOff(void);
static   
#line 36
void LedsM$PowerState$redOn(void);
static   
void LedsM$PowerState$greenOn(void);
# 51 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
uint8_t LedsM$ledsOn[1000];

enum LedsM$__nesc_unnamed4365 {
  LedsM$RED_BIT = 1, 
  LedsM$GREEN_BIT = 2, 
  LedsM$YELLOW_BIT = 4
};
static 
void LedsM$updateLeds(void);
static inline   







result_t LedsM$Leds$init(void);
static inline   







result_t LedsM$Leds$redOn(void);
static   
#line 90
result_t LedsM$Leds$redOff(void);
static inline   
#line 102
result_t LedsM$Leds$redToggle(void);
static inline   









result_t LedsM$Leds$greenOn(void);
static   
#line 125
result_t LedsM$Leds$greenOff(void);
static inline   
#line 137
result_t LedsM$Leds$greenToggle(void);
static inline   
#line 160
result_t LedsM$Leds$yellowOff(void);
static inline  
# 22 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculateFP(uint32_t GFB_l, uint32_t BFB_l);
static inline  
#line 35
float TrustM$Trust$calculateRH(uint32_t GRB_l, uint32_t BRB_l);
static inline  
#line 48
float TrustM$Trust$calculateAV(uint32_t GAB_l, uint32_t BAB_l);
static inline  
#line 61
float TrustM$Trust$calculateLP(uint32_t GLB_l, uint32_t BLB_l);
static inline  
#line 74
float TrustM$Trust$calculatePR(uint32_t GPB_l, uint32_t BPB_l);
static  
#line 87
float TrustM$Trust$calculateOverallTrust(float trustFP, float trustRH, float trustAV, float trustLP, float trustPR);
# 25 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
uint16_t NeighborTableM$nLoopCounter[1000];
uint16_t NeighborTableM$highestParentTrustIndex[1000];
#line 26
uint16_t NeighborTableM$highestPeerTrustIndex[1000];
#line 26
uint16_t NeighborTableM$highestChildTrustIndex[1000];
uint16_t NeighborTableM$maxParentPeerTrustIndex[1000];
#line 27
uint16_t NeighborTableM$maxOverallTrustIndex[1000];
#line 27
uint16_t NeighborTableM$chosenParentTrustIndex[1000];
static inline  
result_t NeighborTableM$StdControl$init(void);
static inline  





result_t NeighborTableM$StdControl$start(void);
static inline  




result_t NeighborTableM$StdControl$stop(void);
static  







result_t NeighborTableM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parent_l, uint16_t *isOneHop);
static inline  
#line 148
result_t NeighborTableM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[]);
static inline  
#line 182
uint16_t NeighborTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t dontPickMe, uint16_t dontPickMeEither, uint16_t reallyDontPickMe, uint16_t whoIAm);
static  
# 24 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
void TransactionTableM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0x8ae4a98[], uint16_t *arg_0x8ae4c08, uint16_t arg_0x8ae4d60, uint16_t *arg_0x8ae4ed0, uint16_t arg_0x8ae5028, uint16_t arg_0x8ae5180, uint16_t arg_0x8ae52d8, uint16_t arg_0x8ae5438, uint32_t arg_0x8ae5590);
static  
# 17 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
float TransactionTableM$Trust$calculateLP(uint32_t arg_0x8aeb970, uint32_t arg_0x8aebac0);
static  
#line 16
float TransactionTableM$Trust$calculateAV(uint32_t arg_0x8aeb418, uint32_t arg_0x8aeb568);
static  
#line 15
float TransactionTableM$Trust$calculateRH(uint32_t arg_0x8aeaec0, uint32_t arg_0x8aeb010);
static  


float TransactionTableM$Trust$calculateOverallTrust(float arg_0x8b16430, float arg_0x8b16570, float arg_0x8b166b0, float arg_0x8b167f0, float arg_0x8b16930);
static  
#line 18
float TransactionTableM$Trust$calculatePR(uint32_t arg_0x8aebec8, uint32_t arg_0x8b16030);
static  
#line 14
float TransactionTableM$Trust$calculateFP(uint32_t arg_0x8aea968, uint32_t arg_0x8aeaab8);
static  
# 18 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
uint16_t TransactionTableM$Attack$ifLoopCreatorGetParent(uint16_t arg_0x8b124f8);
static  
# 28 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/NeighborTable.nc"
uint16_t TransactionTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *arg_0x8acf798[], uint16_t arg_0x8acf8f8, uint8_t arg_0x8acfa48, Neighbor_Rec_withTrust_t *arg_0x8acfbe0[], uint16_t arg_0x8acfd38, Neighbor_Rec_withTrust_t *arg_0x8acfed8[], uint16_t arg_0x8acc060, uint16_t arg_0x8acc1b8, uint16_t arg_0x8acc318, uint16_t arg_0x8acc478, uint16_t arg_0x8acc5c8);
static  
# 55 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
uint8_t TransactionTableM$TransactionTable$transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr);
static inline  
#line 78
void TransactionTableM$TransactionTable$incrementSequenceNumber(Transaction_Record_t transactionRecords[], uint32_t transaction_id);
static  
#line 96
result_t TransactionTableM$TransactionTable$initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr);
static  
#line 179
Transaction_Record_Ptr TransactionTableM$TransactionTable$getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id);
static  








uint16_t TransactionTableM$TransactionTable$getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id);
static  
#line 298
void TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GRBinc, uint32_t BRBinc, uint32_t GABinc, uint32_t BABinc, uint32_t GLBinc, uint32_t BLBinc);
static inline  
#line 350
void TransactionTableM$TransactionTable$markAsLoop(Transaction_Record_Ptr thisTransaction);
static inline  







void TransactionTableM$TransactionTable$processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm);
static  
#line 571
void TransactionTableM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue);
static inline  
#line 611
uint16_t TransactionTableM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue);
static inline  
#line 632
void TransactionTableM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount);
static inline  
#line 646
uint16_t TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, TOS_Msg outQ[], uint16_t *writeOutQHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t myAddr);
static inline  
#line 669
uint16_t TransactionTableM$TransactionTable$isALoop(Transaction_Record_t transactions[], uint32_t transaction_id, uint16_t senderNow, uint16_t sequenceNumberIn);
static inline  
#line 689
void TransactionTableM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm);
static  
# 23 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/NeighborTable.nc"
result_t MessagingM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t arg_0x8acf010[], uint16_t arg_0x8acf170, Neighbor_Rec_withTrust_t *arg_0x8acf318[]);
static  
# 24 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data, uint16_t lastToFindLoop, uint16_t canFixIt, uint16_t dontSendTo, uint16_t sequenceNumberIn);
static inline  
#line 50
void MessagingM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t node_id, uint16_t level, uint16_t parent_id, uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[]);
static  
#line 72
void MessagingM$Messaging$putReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id);
static  
#line 98
void MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t transactionParent, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id);
static  
#line 121
void MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent);
static  
#line 146
void MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t originatingNode);
static  
#line 178
void MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsSent);
static  
#line 206
void MessagingM$Messaging$putStartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t sender);
static  
#line 228
void MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t whoIAm, uint16_t whoIHeard, uint16_t parent);
static inline  
# 22 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$sfDropThis(uint16_t myNodeId, uint16_t potentialVictim, uint16_t *mySelectiveCounter);
static  
#line 46
uint16_t AttackM$Attack$ifLoopCreatorGetParent(uint16_t myNodeId);
static inline  
#line 61
uint16_t AttackM$Attack$isLoopCreator(uint16_t myNodeId);
static  
#line 76
uint16_t AttackM$Attack$isNoResponder(uint16_t myNodeId);
static inline  
#line 91
uint16_t AttackM$Attack$isOnOffAttacker(uint16_t myNodeId);
static  









uint16_t AttackM$Attack$getNumThirtySeconds(uint16_t myNodeId);
static  
# 22 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrafficGeneratorM.nc"
float TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(uint16_t node_id);
static inline   
# 242 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg)
#line 242
{
  return msg;
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr AMStandard$ReceiveMsg$receive(uint8_t arg_0x8bcbc98, TOS_MsgPtr arg_0x896da10){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  switch (arg_0x8bcbc98) {
#line 75
    case DISCOVERY_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case CONTROL_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case DATA_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case REPORT_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case REPORT_REQUEST_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case REPORT_RESPONSE_FORWARD_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case END_TO_END_REPORT_RESPONSE_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case SPECIFIC_REPORT_REQUEST_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    case SPECIFIC_REPORT_RESPONSE_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0x896da10);
#line 75
      break;
#line 75
    default:
#line 75
      result = AMStandard$ReceiveMsg$default$receive(arg_0x8bcbc98, arg_0x896da10);
#line 75
    }
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 34 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg arg_0x8ae2b48[], uint16_t *arg_0x8ae2cb8, uint16_t arg_0x8ae2e10, uint16_t *arg_0x8ae2f80, uint16_t arg_0x8ae30d8, uint16_t arg_0x8ae3230, uint32_t arg_0x8ae3388, uint16_t arg_0x8ae34e0, uint16_t arg_0x8ae3640, uint16_t arg_0x8ae37a0, uint16_t arg_0x8ae3900, uint16_t arg_0x8ae3a60){
#line 34
  MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(arg_0x8ae2b48, arg_0x8ae2cb8, arg_0x8ae2e10, arg_0x8ae2f80, arg_0x8ae30d8, arg_0x8ae3230, arg_0x8ae3388, arg_0x8ae34e0, arg_0x8ae3640, arg_0x8ae37a0, arg_0x8ae3900, arg_0x8ae3a60);
#line 34
}
#line 34
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer8$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(5, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 77 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t arg_0x8af1158[], Transaction_Record_Ptr arg_0x8af12b0, uint16_t arg_0x8af1400, uint16_t arg_0x8af1550, uint16_t *arg_0x8af16c0, uint16_t arg_0x8af1818, uint16_t *arg_0x8af1988){
#line 77
  TransactionTableM$TransactionTable$addToTransactionCheckQ(arg_0x8af1158, arg_0x8af12b0, arg_0x8af1400, arg_0x8af1550, arg_0x8af16c0, arg_0x8af1818, arg_0x8af1988);
#line 77
}
#line 77
# 29 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg arg_0x8ae5a00[], uint16_t *arg_0x8ae5b70, uint16_t arg_0x8ae5cc8, uint16_t *arg_0x8ae5e38, uint16_t arg_0x8ae2010, uint16_t arg_0x8ae2168, uint16_t arg_0x8ae22c0, uint16_t arg_0x8ae2418, uint16_t arg_0x8ae2578, uint32_t arg_0x8ae26d0){
#line 29
  MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(arg_0x8ae5a00, arg_0x8ae5b70, arg_0x8ae5cc8, arg_0x8ae5e38, arg_0x8ae2010, arg_0x8ae2168, arg_0x8ae22c0, arg_0x8ae2418, arg_0x8ae2578, arg_0x8ae26d0);
#line 29
}
#line 29
# 32 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  Transaction_Record_Ptr SarpM$TransactionTable$getThisTransactionPtr(Transaction_Record_t arg_0x8ac5d78[], uint32_t arg_0x8ac5ed0){
#line 32
  struct Transaction_Record_t *result;
#line 32

#line 32
  result = TransactionTableM$TransactionTable$getThisTransactionPtr(arg_0x8ac5d78, arg_0x8ac5ed0);
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 49 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg arg_0x8ade238[], uint16_t *arg_0x8ade3a8, uint16_t arg_0x8ade500, uint16_t *arg_0x8ade670, uint16_t arg_0x8ade7c8, uint16_t arg_0x8ade920, uint32_t arg_0x8adea78, uint16_t arg_0x8adebd0, uint16_t arg_0x8aded30, uint16_t arg_0x8adee88){
#line 49
  MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(arg_0x8ade238, arg_0x8ade3a8, arg_0x8ade500, arg_0x8ade670, arg_0x8ade7c8, arg_0x8ade920, arg_0x8adea78, arg_0x8adebd0, arg_0x8aded30, arg_0x8adee88);
#line 49
}
#line 49
#line 39
inline static  void SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg arg_0x8ae3ee8[], uint16_t *arg_0x8ae0078, uint16_t arg_0x8ae01d0, uint16_t *arg_0x8ae0340, uint16_t arg_0x8ae0498, uint32_t arg_0x8ae05f0, uint16_t arg_0x8ae0748, uint16_t arg_0x8ae08a8, uint16_t arg_0x8ae0a08, uint16_t arg_0x8ae0b68, uint16_t arg_0x8ae0cc0){
#line 39
  MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(arg_0x8ae3ee8, arg_0x8ae0078, arg_0x8ae01d0, arg_0x8ae0340, arg_0x8ae0498, arg_0x8ae05f0, arg_0x8ae0748, arg_0x8ae08a8, arg_0x8ae0a08, arg_0x8ae0b68, arg_0x8ae0cc0);
#line 39
}
#line 39
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer7$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(4, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 42 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$getTransactionParent(Transaction_Record_t arg_0x8af6b98[], uint32_t arg_0x8af6cf0){
#line 42
  unsigned short result;
#line 42

#line 42
  result = TransactionTableM$TransactionTable$getTransactionParent(arg_0x8af6b98, arg_0x8af6cf0);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 24 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0x8ae4a98[], uint16_t *arg_0x8ae4c08, uint16_t arg_0x8ae4d60, uint16_t *arg_0x8ae4ed0, uint16_t arg_0x8ae5028, uint16_t arg_0x8ae5180, uint16_t arg_0x8ae52d8, uint16_t arg_0x8ae5438, uint32_t arg_0x8ae5590){
#line 24
  MessagingM$Messaging$putReportRequestMsgInOutQ(arg_0x8ae4a98, arg_0x8ae4c08, arg_0x8ae4d60, arg_0x8ae4ed0, arg_0x8ae5028, arg_0x8ae5180, arg_0x8ae52d8, arg_0x8ae5438, arg_0x8ae5590);
#line 24
}
#line 24
static inline  
# 632 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactionRecords[tLoopCounter].transaction_id == transaction_id) 
        {
          transactionRecords[tLoopCounter].originatorPacketCount = packetCount;
          break;
        }
    }
}

# 87 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t arg_0x8aeeb90[], uint32_t arg_0x8aeece8, uint16_t arg_0x8aeee40){
#line 87
  TransactionTableM$TransactionTable$setOriginatorPacketCount(arg_0x8aeeb90, arg_0x8aeece8, arg_0x8aeee40);
#line 87
}
#line 87
static inline 
# 906 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void sendSarpThroughput(uint32_t transaction, uint16_t sent, uint16_t receivedIn, uint16_t dataSource)
{
  int sock;
#line 908
  int n;
  struct sockaddr_in name;

  char message[90];

#line 912
  sprintf(message, "<sarp><throughput sent=\"%d\" received=\"%d\" transaction=\"%d\" dataSource=\"%d\"/></sarp>", sent, receivedIn, transaction, dataSource);
  sock = socket(2, SOCK_DGRAM, IPPROTO_UDP);
  if (sock < 0) 
    {
      printf("Socket failure.\r\n");
      exit(0);
    }

  name.sin_family = 2;
  name.sin_port = htons(12000);
  name.sin_addr.s_addr = inet_addr("192.168.10.5");

  n = connect(sock, (struct sockaddr *)&name, sizeof name);
  if (n < 0) 
    {
      printf("Connection failed\r\n");
    }

  n = write(sock, message, strlen(message) + 1);

  if (n < 0) {
    printf("Message not sent.  Trying again. \r\n");
    }
#line 934
  close(sock);
}

# 14 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putDataMessageInOutQ(TOS_Msg arg_0x8ae8590[], uint16_t *arg_0x8ae8700, uint16_t arg_0x8ae8858, uint16_t *arg_0x8ae89c8, uint16_t arg_0x8ae8b20, uint16_t arg_0x8ae8c78, uint32_t arg_0x8ae8dd0, uint16_t arg_0x8ae8f28, uint16_t arg_0x8ae9078, uint16_t arg_0x8ae91d0, uint16_t arg_0x8ae9328, uint16_t arg_0x8ae9480, uint16_t arg_0x8ae95e0){
#line 14
  MessagingM$Messaging$putDataMessageInOutQ(arg_0x8ae8590, arg_0x8ae8700, arg_0x8ae8858, arg_0x8ae89c8, arg_0x8ae8b20, arg_0x8ae8c78, arg_0x8ae8dd0, arg_0x8ae8f28, arg_0x8ae9078, arg_0x8ae91d0, arg_0x8ae9328, arg_0x8ae9480, arg_0x8ae95e0);
#line 14
}
#line 14
static inline  
# 350 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$markAsLoop(Transaction_Record_Ptr thisTransaction)
{
  thisTransaction->isALoop = 1;
}

# 67 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$markAsLoop(Transaction_Record_Ptr arg_0x8af37f0){
#line 67
  TransactionTableM$TransactionTable$markAsLoop(arg_0x8af37f0);
#line 67
}
#line 67
static inline  
# 61 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$isLoopCreator(uint16_t myNodeId)
{
  for (aCounter = 0; aCounter < numLoopCreationAttackers; aCounter++) 
    {
      if (loopCreationAttackers[aCounter] == myNodeId) {
        return 1;
        }
    }
#line 68
  return 0;
}

# 26 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$isLoopCreator(uint16_t arg_0x8b12910){
#line 26
  unsigned short result;
#line 26

#line 26
  result = AttackM$Attack$isLoopCreator(arg_0x8b12910);
#line 26

#line 26
  return result;
#line 26
}
#line 26
static inline  
# 669 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
uint16_t TransactionTableM$TransactionTable$isALoop(Transaction_Record_t transactions[], uint32_t transaction_id, uint16_t senderNow, uint16_t sequenceNumberIn)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id) 
        {
          if (transactions[tLoopCounter].receivedFrom != senderNow || transactions[tLoopCounter].sequenceNumber > sequenceNumberIn) {
            return 1;
            }
          else {

              transactions[tLoopCounter].sequenceNumber = sequenceNumberIn;
              return 0;
            }
        }
    }
  return 0;
}

# 97 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$isALoop(Transaction_Record_t arg_0x8aec010[], uint32_t arg_0x8aec168, uint16_t arg_0x8aec2c0, uint16_t arg_0x8aec420){
#line 97
  unsigned short result;
#line 97

#line 97
  result = TransactionTableM$TransactionTable$isALoop(arg_0x8aec010, arg_0x8aec168, arg_0x8aec2c0, arg_0x8aec420);
#line 97

#line 97
  return result;
#line 97
}
#line 97
static inline  
# 22 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$sfDropThis(uint16_t myNodeId, uint16_t potentialVictim, uint16_t *mySelectiveCounter)
{
  for (aCounter = 0; aCounter < numSFAttackers; aCounter++) 
    {
      if (selectiveForwardAttackers[aCounter] == myNodeId && selectiveForwardVictims[aCounter] == potentialVictim) 
        {

          if ((*mySelectiveCounter)++ >= selectiveForwardNumerators[aCounter]) 
            {
              if (*mySelectiveCounter == selectiveForwardDenomenators[aCounter]) {
                *mySelectiveCounter = 0;
                }
              return 1;
            }
          break;
        }
    }
  return 0;
}

# 10 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$sfDropThis(uint16_t arg_0x8b15de0, uint16_t arg_0x8b15f38, uint16_t *arg_0x8b120c8){
#line 10
  unsigned short result;
#line 10

#line 10
  result = AttackM$Attack$sfDropThis(arg_0x8b15de0, arg_0x8b15f38, arg_0x8b120c8);
#line 10

#line 10
  return result;
#line 10
}
#line 10
static inline   
# 142 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$greenOn(void)
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
static inline   
# 113 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
result_t LedsM$Leds$greenOn(void)
#line 113
{
  dbg(DBG_LED, "LEDS: Green on.\n");
  LedsM$PowerState$greenOn();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT)) {
          LedsM$ledsOn[tos_state.current_node] |= LedsM$GREEN_BIT;
          LedsM$updateLeds();
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static inline   
#line 137
result_t LedsM$Leds$greenToggle(void)
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

# 106 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t SarpM$Leds$greenToggle(void){
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
# 16 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  result_t SarpM$TransactionTable$initializeTransaction(Transaction_Record_t arg_0x8acda88[], uint32_t arg_0x8acdbe0, uint16_t arg_0x8acdd38, uint16_t arg_0x8acde90, Neighbor_Rec_withTrust_t *arg_0x8ac4060[], uint16_t arg_0x8ac41c0, uint16_t arg_0x8ac4310, uint16_t arg_0x8ac4468, Neighbor_Rec_withTrust_t *arg_0x8ac4600[], uint16_t arg_0x8ac4758, Neighbor_Rec_withTrust_t *arg_0x8ac48f8[], uint16_t arg_0x8ac4a50, uint16_t arg_0x8ac4ba0){
#line 16
  unsigned char result;
#line 16

#line 16
  result = TransactionTableM$TransactionTable$initializeTransaction(arg_0x8acda88, arg_0x8acdbe0, arg_0x8acdd38, arg_0x8acde90, arg_0x8ac4060, arg_0x8ac41c0, arg_0x8ac4310, arg_0x8ac4468, arg_0x8ac4600, arg_0x8ac4758, arg_0x8ac48f8, arg_0x8ac4a50, arg_0x8ac4ba0);
#line 16

#line 16
  return result;
#line 16
}
#line 16






inline static  uint8_t SarpM$TransactionTable$transactionExistsAlready(Transaction_Record_t arg_0x8ac50d0[], uint32_t arg_0x8ac5228, uint16_t arg_0x8ac5378){
#line 22
  unsigned char result;
#line 22

#line 22
  result = TransactionTableM$TransactionTable$transactionExistsAlready(arg_0x8ac50d0, arg_0x8ac5228, arg_0x8ac5378);
#line 22

#line 22
  return result;
#line 22
}
#line 22
static inline   
# 130 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$redOn(void)
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
static inline   
# 77 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
result_t LedsM$Leds$redOn(void)
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

static inline   
#line 102
result_t LedsM$Leds$redToggle(void)
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
inline static   result_t SarpM$Leds$redToggle(void){
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
# 60 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg arg_0x8adfcc8[], uint16_t *arg_0x8adfe38, uint16_t arg_0x8b14010, uint16_t *arg_0x8b14180, uint16_t arg_0x8b142d0, uint16_t arg_0x8b14428, uint16_t arg_0x8b14578){
#line 60
  MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(arg_0x8adfcc8, arg_0x8adfe38, arg_0x8b14010, arg_0x8b14180, arg_0x8b142d0, arg_0x8b14428, arg_0x8b14578);
#line 60
}
#line 60
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer4$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(2, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 54 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putStartMsgInOutQ(TOS_Msg arg_0x8adf2f0[], uint16_t *arg_0x8adf460, uint16_t arg_0x8adf5b8, uint16_t *arg_0x8adf728, uint16_t arg_0x8adf878){
#line 54
  MessagingM$Messaging$putStartMsgInOutQ(arg_0x8adf2f0, arg_0x8adf460, arg_0x8adf5b8, arg_0x8adf728, arg_0x8adf878);
#line 54
}
#line 54
# 17 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/NeighborTable.nc"
inline static  result_t SarpM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t arg_0x8ace198[], Neighbor_Rec_withTrust_t *arg_0x8ace340[], uint16_t *arg_0x8ace4b0, uint16_t *arg_0x8ace628, uint16_t arg_0x8ace780, uint8_t arg_0x8ace8c8, uint16_t arg_0x8acea28, uint16_t *arg_0x8aceb98){
#line 17
  unsigned char result;
#line 17

#line 17
  result = NeighborTableM$NeighborTable$processNeighborFromDiscMsg(arg_0x8ace198, arg_0x8ace340, arg_0x8ace4b0, arg_0x8ace628, arg_0x8ace780, arg_0x8ace8c8, arg_0x8acea28, arg_0x8aceb98);
#line 17

#line 17
  return result;
#line 17
}
#line 17
static inline  
# 472 "SarpM.nc"
void SarpM$processInMsg(void)
{
  uint8_t loopCounter;
#line 474
  uint8_t type;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      type = SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].type;
    }
#line 479
    __nesc_atomic_end(__nesc_atomic); }




  SarpM$disc_msg_in[tos_state.current_node] = (DiscoveryMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;

  if (1) 
    {
      if (type == DISCOVERY_MSG_TYPE && SarpM$disc_msg_in[tos_state.current_node]->node_id != SarpM$myAddr[tos_state.current_node]) 
        {

          dbg(DBG_USR1, "%d heard Discovery message from %d with a level of %d.\r\n", SarpM$myAddr[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->node_id, SarpM$disc_msg_in[tos_state.current_node]->level);

          SarpM$NeighborTable$processNeighborFromDiscMsg(SarpM$neighbors[tos_state.current_node], SarpM$myOneHopNeighbors[tos_state.current_node], &SarpM$numNeighbors[tos_state.current_node], &SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->node_id, SarpM$disc_msg_in[tos_state.current_node]->level, SarpM$disc_msg_in[tos_state.current_node]->parent_id, &SarpM$myOne[tos_state.current_node]);
          for (loopCounter = 0; loopCounter < SarpM$disc_msg_in[tos_state.current_node]->num_neighbors; loopCounter++) 
            {
              if (SarpM$disc_msg_in[tos_state.current_node]->neighbors[loopCounter].node_id != SarpM$myAddr[tos_state.current_node]) {
                SarpM$NeighborTable$processNeighborFromDiscMsg(SarpM$neighbors[tos_state.current_node], SarpM$myOneHopNeighbors[tos_state.current_node], &SarpM$numNeighbors[tos_state.current_node], &SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->neighbors[loopCounter].node_id, SarpM$disc_msg_in[tos_state.current_node]->neighbors[loopCounter].level, SarpM$disc_msg_in[tos_state.current_node]->node_id, &SarpM$myZero[tos_state.current_node]);
                }
            }
          if (SarpM$disc_msg_in[tos_state.current_node]->node_id == 0) 
            {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                {

                  SarpM$myLevel[tos_state.current_node] = 1;
                  SarpM$myStaticParent[tos_state.current_node].node_id = 0;
                  SarpM$myStaticParent[tos_state.current_node].level = 0;
                }
#line 508
                __nesc_atomic_end(__nesc_atomic); }
            }
          else 
            {
              if (SarpM$myAddr[tos_state.current_node] != 0) 
                {


                  if (SarpM$disc_msg_in[tos_state.current_node]->level < SarpM$myLevel[tos_state.current_node] - 1) 
                    {

                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                        {
                          SarpM$myLevel[tos_state.current_node] = SarpM$disc_msg_in[tos_state.current_node]->level + 1;
                          SarpM$myStaticParent[tos_state.current_node].node_id = SarpM$disc_msg_in[tos_state.current_node]->node_id;
                          SarpM$myStaticParent[tos_state.current_node].level = SarpM$disc_msg_in[tos_state.current_node]->level;
                        }
#line 524
                        __nesc_atomic_end(__nesc_atomic); }
                    }
                }
            }


          if (SarpM$myStaticParent[tos_state.current_node].node_id != NO_PARENT) 
            {

              dbg(DBG_USR1, "Adding %d heard %d to ouQ\r\n", SarpM$myAddr[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->node_id);

              SarpM$Messaging$putNeighborDiscoveryControlMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->node_id, SarpM$myStaticParent[tos_state.current_node].node_id);
              TOS_post(SarpM$processOutMsg);
            }
        }
      else {


        if (type == CONTROL_MSG_TYPE) 
          {


            SarpM$controlMsgIn[tos_state.current_node] = (ControlMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;

            dbg(DBG_USR1, "%d heard a CONTROL MSG, type: %d, from %d\n", SarpM$myAddr[tos_state.current_node], SarpM$controlMsgIn[tos_state.current_node]->msgType, SarpM$controlMsgIn[tos_state.current_node]->data[0]);

            if (SarpM$controlMsgIn[tos_state.current_node]->msgType == 0) 
              {
                if (SarpM$OkToStart[tos_state.current_node]) 
                  {

                    dbg(DBG_USR1, "%d heard a START MSG, and OkToStart == true\r\n", SarpM$myAddr[tos_state.current_node]);

                    SarpM$Messaging$putStartMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
                    TOS_post(SarpM$processOutMsg);
                    TOS_post(SarpM$startApp);
                    SarpM$OkToStart[tos_state.current_node] = FALSE;
                    SarpM$Timer4$start(TIMER_ONE_SHOT, 2005 + 2 * TOS_LOCAL_ADDRESS);
                  }
                else 
                  {

                    dbg(DBG_USR1, "%d heard a START MSG, and OkToStart == true\r\n", SarpM$myAddr[tos_state.current_node]);
                  }
              }
            else {
              if (SarpM$controlMsgIn[tos_state.current_node]->msgType == 1) 
                {
                  if (SarpM$myAddr[tos_state.current_node] == 0) 
                    {

                      dbg(DBG_USR1, "ROOT heard CONTROL_MSG, and it said %d heard %d\r\n", SarpM$controlMsgIn[tos_state.current_node]->data[0], SarpM$controlMsgIn[tos_state.current_node]->data[1]);
                    }
                  else {
                    if (SarpM$myStaticParent[tos_state.current_node].node_id != 255) 
                      {


                        dbg(DBG_USR1, "%d heard a NEIGHBOR DISCOVERY MSG that %d heard %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$controlMsgIn[tos_state.current_node]->data[0], SarpM$controlMsgIn[tos_state.current_node]->data[1]);

                        SarpM$Messaging$putNeighborDiscoveryControlMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$controlMsgIn[tos_state.current_node]->data[0], SarpM$controlMsgIn[tos_state.current_node]->data[1], SarpM$myStaticParent[tos_state.current_node].node_id);
                        TOS_post(SarpM$processOutMsg);
                      }
                    }
                }
              }
          }
        else {
#line 589
          if (type == DATA_MSG_TYPE) 
            {
              SarpM$dataMsgIn[tos_state.current_node] = (DataMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;
              SarpM$transactionFound[tos_state.current_node] = 0;
              SarpM$lastToFindLoop[tos_state.current_node] = 255;
              SarpM$cantFixIt[tos_state.current_node] = 255;
              SarpM$dontSendTo[tos_state.current_node] = 255;
              SarpM$Leds$redToggle();

              if (SarpM$dataMsgIn[tos_state.current_node]->lastToFindLoop != 255) {
                SarpM$lastToFindLoop[tos_state.current_node] = SarpM$dataMsgIn[tos_state.current_node]->lastToFindLoop;
                }
#line 600
              if (SarpM$dataMsgIn[tos_state.current_node]->cantFixIt != 255) {
                SarpM$cantFixIt[tos_state.current_node] = SarpM$dataMsgIn[tos_state.current_node]->cantFixIt;
                }
#line 602
              if (SarpM$dataMsgIn[tos_state.current_node]->dontSendTo != 255) {
                SarpM$dontSendTo[tos_state.current_node] = SarpM$dataMsgIn[tos_state.current_node]->dontSendTo;
                }
#line 604
              dbg(DBG_USR1, "reports lastToFindLoop: %d, cantFixIt: %d, dontSendTo: %d\r\n", SarpM$dataMsgIn[tos_state.current_node]->lastToFindLoop, SarpM$dataMsgIn[tos_state.current_node]->cantFixIt, SarpM$dataMsgIn[tos_state.current_node]->dontSendTo);
              dbg(DBG_USR2, "reports lastToFindLoop: %d, cantFixIt: %d, dontSendTo: %d\r\n", SarpM$dataMsgIn[tos_state.current_node]->lastToFindLoop, SarpM$dataMsgIn[tos_state.current_node]->cantFixIt, SarpM$dataMsgIn[tos_state.current_node]->dontSendTo);

              if (SarpM$dataMsgIn[tos_state.current_node]->dst_node_id == SarpM$myAddr[tos_state.current_node]) 
                {

                  dbg(DBG_USR1, "%d heard DATA_PACKET from %d with sequenceNumber %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);
                  dbg(DBG_USR2, "%d heard DATA_PACKET from %d with sequenceNumber %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);



                  SarpM$transactionFound[tos_state.current_node] = SarpM$TransactionTable$transactionExistsAlready(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$myAddr[tos_state.current_node]);


                  if (SarpM$transactionFound[tos_state.current_node] == 0) {
                    SarpM$TransactionTable$initializeTransaction(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$dataMsgIn[tos_state.current_node]->orig_node_id, SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$myOneHopNeighbors[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$myLevel[tos_state.current_node], 0, SarpM$myPeers[tos_state.current_node], SarpM$numPeers[tos_state.current_node], SarpM$myChildren[tos_state.current_node], SarpM$numChildren[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
                    }
                  SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);
                  SarpM$Leds$greenToggle();


                  if (SarpM$Attack$sfDropThis(SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->src_node_id, &SarpM$selectiveCounter[tos_state.current_node]) == 0) 
                    {

                      if (((SarpM$TransactionTable$isALoop(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber) == 1 && SarpM$Attack$isLoopCreator(SarpM$myAddr[tos_state.current_node]) != 1) || (SarpM$lastToFindLoop[tos_state.current_node] == SarpM$myAddr[tos_state.current_node] && SarpM$cantFixIt[tos_state.current_node] == 0)) || SarpM$cantFixIt[tos_state.current_node] == 1) 
                        {
                          dbg(DBG_USR1, "FOUND A LOOP !\r\n");
                          dbg(DBG_USR2, "FOUND A LOOP !\r\n");



                          if (SarpM$lastToFindLoop[tos_state.current_node] == 255) {
                            SarpM$TransactionTable$markAsLoop(SarpM$thisTransaction[tos_state.current_node]);
                            }

                          if (SarpM$myAddr[tos_state.current_node] != 0) 
                            {
                              if (SarpM$lastToFindLoop[tos_state.current_node] == 255 || (SarpM$lastToFindLoop[tos_state.current_node] != SarpM$myAddr[tos_state.current_node] && SarpM$cantFixIt[tos_state.current_node] == 1)) 
                                {
                                  dbg(DBG_USR1, "is going to try to fix it\r\n");
                                  dbg(DBG_USR2, "is going to try to fix it\r\n");



                                  SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents = 0;
                                  SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried = 0;







                                  for (loopCounter = 0; loopCounter < SarpM$numOneHopNeighbors[tos_state.current_node]; loopCounter++) 
                                    {
                                      if (SarpM$myOneHopNeighbors[tos_state.current_node][loopCounter]->node_id != SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo && SarpM$myOneHopNeighbors[tos_state.current_node][loopCounter]->node_id != SarpM$thisTransaction[tos_state.current_node]->receivedFrom && SarpM$myOneHopNeighbors[tos_state.current_node][loopCounter]->node_id != SarpM$dataMsgIn[tos_state.current_node]->src_node_id) 
                                        {
                                          SarpM$thisTransaction[tos_state.current_node]->possibleOtherParents[SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents] = SarpM$myOneHopNeighbors[tos_state.current_node][loopCounter]->node_id;
                                          SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents = SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents + 1;
                                        }
                                    }

                                  dbg(DBG_USR1, "reports %d possible other parents\r\n", SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents);
                                  dbg(DBG_USR2, "reports %d possible other parents\r\n", SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents);
                                  if (SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents > 0) 
                                    {
                                      dbg(DBG_USR1, "is trying possible other parent number %d\r\n", SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried);
                                      dbg(DBG_USR2, "is trying possible other parent number %d\r\n", SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried);
                                      SarpM$newTransactionParent[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->possibleOtherParents[SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried];
                                      SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried = SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried + 1;
                                    }
                                  else 
                                    {
                                      dbg(DBG_USR1, "there are no other possible parents for me to try\r\n");
                                      dbg(DBG_USR2, "there are no other possible parents for me to try\r\n");
                                      SarpM$newTransactionParent[tos_state.current_node] = 255;
                                    }


                                  if (SarpM$newTransactionParent[tos_state.current_node] == 255) 
                                    {
                                      dbg(DBG_USR1, "can't fit it !\r\n");
                                      dbg(DBG_USR2, "can't fit it !\r\n");
                                      SarpM$cantFixIt[tos_state.current_node] = 1;
                                    }
                                  else 
                                    {
                                      SarpM$cantFixIt[tos_state.current_node] = 0;
                                      SarpM$dontSendTo[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo;
                                      SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo = SarpM$newTransactionParent[tos_state.current_node];
                                      SarpM$lastToFindLoop[tos_state.current_node] = SarpM$myAddr[tos_state.current_node];
                                      dbg(DBG_USR1, "will try %d instead of %d\r\n", SarpM$newTransactionParent[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node]);
                                      dbg(DBG_USR2, "will try %d instead of %d\r\n", SarpM$newTransactionParent[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node]);
                                    }
                                }
                              else {
#line 699
                                if (SarpM$lastToFindLoop[tos_state.current_node] == SarpM$myAddr[tos_state.current_node] && SarpM$cantFixIt[tos_state.current_node] == 0) 
                                  {
                                    SarpM$cantFixIt[tos_state.current_node] = 1;
                                    dbg(DBG_USR1, "can't fit it either !\r\n");
                                    dbg(DBG_USR2, "can't fit it either !\r\n");
                                    SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);
                                    if (SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents > 0) 
                                      {
                                        if (SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried >= SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents) 
                                          {

                                            if (SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried >= 2 * SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents) 
                                              {
                                                SarpM$newTransactionParent[tos_state.current_node] = 255;
                                                SarpM$cantFixIt[tos_state.current_node] = 1;
                                              }
                                            else 
                                              {

                                                SarpM$newTransactionParent[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->possibleOtherParents[SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried - SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParents];
                                                SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried++;
                                                SarpM$cantFixIt[tos_state.current_node] = 1;
                                              }
                                          }
                                        else 
                                          {

                                            SarpM$newTransactionParent[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->possibleOtherParents[SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried];
                                            SarpM$thisTransaction[tos_state.current_node]->numberPossibleOtherParentsTried++;
                                            SarpM$cantFixIt[tos_state.current_node] = 0;
                                          }
                                      }

                                    if (SarpM$newTransactionParent[tos_state.current_node] == 255) 
                                      {
                                        dbg(DBG_USR1, "nobody else !\r\n");
                                        SarpM$newTransactionParent[tos_state.current_node] = SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);
                                        SarpM$cantFixIt[tos_state.current_node] = 1;
                                      }
                                    else 
                                      {
                                        SarpM$dontSendTo[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo;
                                        SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo = SarpM$newTransactionParent[tos_state.current_node];
                                        SarpM$lastToFindLoop[tos_state.current_node] = SarpM$myAddr[tos_state.current_node];
                                      }
                                  }
                                }
#line 745
                              dbg(DBG_USR1, "will now send to %d\r\n", SarpM$newTransactionParent[tos_state.current_node]);
                              dbg(DBG_USR2, "will now send to %d\r\n", SarpM$newTransactionParent[tos_state.current_node]);
                              SarpM$thisTransaction[tos_state.current_node]->lastParentTried = SarpM$newTransactionParent[tos_state.current_node];
                              SarpM$Messaging$putDataMessageInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$newTransactionParent[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$dataMsgIn[tos_state.current_node]->orig_node_id, SarpM$dataMsgIn[tos_state.current_node]->data, SarpM$lastToFindLoop[tos_state.current_node], SarpM$cantFixIt[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);

                              TOS_post(SarpM$processOutMsg);
                            }
                        }
                      else 
                        {
                          dbg(DBG_USR1, "did NOT find a loop\r\n");
                          dbg(DBG_USR2, "did NOT find a loop\r\n");
                          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                            {

                              if (SarpM$myAddr[tos_state.current_node] != 0) 
                                {
                                  SarpM$newTransactionParent[tos_state.current_node] = SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);
                                  SarpM$thisTransaction[tos_state.current_node]->lastParentTried = SarpM$newTransactionParent[tos_state.current_node];
                                  SarpM$Messaging$putDataMessageInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$newTransactionParent[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$dataMsgIn[tos_state.current_node]->orig_node_id, SarpM$dataMsgIn[tos_state.current_node]->data, SarpM$lastToFindLoop[tos_state.current_node], SarpM$cantFixIt[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);
                                  TOS_post(SarpM$processOutMsg);
                                }
                            }
#line 767
                            __nesc_atomic_end(__nesc_atomic); }
                        }
                    }
                }
              else {




                dbg(DBG_USR1, "%d heard a DATA packet, but it wasn't for me.\r\n", SarpM$myAddr[tos_state.current_node]);
                }
            }
          else {
            if (type == REPORT_REQUEST_MSG_TYPE) 
              {


                if (SarpM$myAddr[tos_state.current_node] == 0) 
                  {

                    dbg(DBG_USR1, "Root heard a request for report.\r\n");

                    SarpM$reportReqMsgIn[tos_state.current_node] = (ReportRequestMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;
                    SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->transaction_id);

                    dbg(DBG_USR1, "Transaction gotten in SarpM at 572\r\n");

                    SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->originatingNode, SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount);
                    sendSarpThroughput(SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$reportReqMsgIn[tos_state.current_node]->originator);

                    dbg(DBG_USR1, "End-2-End Report in outQ, SarpM line 576\r\n");

                    SarpM$thisTransaction[tos_state.current_node]->isValid = 0;

                    SarpM$reportQ[tos_state.current_node][SarpM$writeReportQHere[tos_state.current_node]] = SarpM$thisTransaction[tos_state.current_node]->transaction_id;
                    if (++SarpM$writeReportQHere[tos_state.current_node] == CIRCULAR_BUFFER_SIZE) {
                      SarpM$writeReportQHere[tos_state.current_node] = 0;
                      }
                    TOS_post(SarpM$processOutMsg);


                    dbg(DBG_USR1, "%d heard a Report Request message from %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->originator);
                  }
                else 


                  {
                    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                      {
                        SarpM$reportReqMsgIn[tos_state.current_node] = (ReportRequestMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;


                        SarpM$TransactionTable$setOriginatorPacketCount(SarpM$transactionRecords[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->transaction_id, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount);
                        SarpM$Messaging$putReportRequestMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->transaction_id), SarpM$myAddr[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->originator, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$reportReqMsgIn[tos_state.current_node]->transaction_id);

                        dbg(DBG_USR1, "%d heard a Report Request message from %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->requestor);






                        SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], &SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]], 0, 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);

                        SarpM$reportQ[tos_state.current_node][SarpM$writeReportQHere[tos_state.current_node]] = SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].transaction_id;
                        if (++SarpM$writeReportQHere[tos_state.current_node] == CIRCULAR_BUFFER_SIZE) {
                          SarpM$writeReportQHere[tos_state.current_node] = 0;
                          }

                        dbg(DBG_USR1, "%d forwarded a Report Request message to %d\r\n", SarpM$myAddr[tos_state.current_node], reportReqMsgOut->destination);
                      }
#line 837
                      __nesc_atomic_end(__nesc_atomic); }


                    TOS_post(SarpM$processOutMsg);
                  }
                SarpM$Timer8$start(TIMER_ONE_SHOT, 3100);
                SarpM$Timer7$start(TIMER_ONE_SHOT, 380 + 30 * SarpM$myAddr[tos_state.current_node]);
              }
            else {
              if (type == REPORT_RESPONSE_NO_FORWARD_MSG_TYPE) 
                {
                  SarpM$reportRespNoForwardMsgIn[tos_state.current_node] = (ReportResponseNoForwardMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;

                  dbg(DBG_USR1, "%d heard a Report Response NO Forward message\r\n", SarpM$myAddr[tos_state.current_node]);

                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                    {
                      for (SarpM$transactionCounter[tos_state.current_node] = 0; SarpM$transactionCounter[tos_state.current_node] < CIRCULAR_BUFFER_SIZE; SarpM$transactionCounter[tos_state.current_node]++) 
                        {

                          dbg(DBG_USR1, "%d, TRID: %d, RRID: %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].transaction_id, SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->transaction_id);

                          if (SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].transaction_id == SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->transaction_id) 
                            {
                              if (SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsReceivedFrom == SarpM$myAddr[tos_state.current_node]) 
                                {


                                  dbg(DBG_USR1, "%d reports the NO forward message is a ONE hop message\r\n", SarpM$myAddr[tos_state.current_node]);

                                  SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsReceived = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsReceived;
                                  SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwarded = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsForwarded;
                                  SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsForwardedTo;
                                  SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReported = 1;
                                }
                              else {
#line 872
                                if (SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsReceivedFrom == SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].packetsForwardedTo) 
                                  {


                                    dbg(DBG_USR1, "%d reports the NO forward message is a TWO hop message\r\n", SarpM$myAddr[tos_state.current_node]);

                                    if (SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo != SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->responder) {
                                      SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->responder;
                                      }
#line 880
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].twoHopReportedPacketsReceived = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsReceived;
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].twoHopReported = 1;
                                  }
                                }
#line 883
                              break;
                            }
                        }
                    }
#line 886
                    __nesc_atomic_end(__nesc_atomic); }
                }
              else {
#line 888
                if (type == REPORT_RESPONSE_FORWARD_MSG_TYPE) 
                  {

                    { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                      {
                        SarpM$reportForwardMsgIn[tos_state.current_node] = (ReportResponseForwardMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;

                        dbg(DBG_USR1, "%d heard a Report Response Forward message, TID: %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$reportForwardMsgIn[tos_state.current_node]->transaction_id);

                        SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$reportForwardMsgIn[tos_state.current_node]->responder, SarpM$reportForwardMsgIn[tos_state.current_node]->transaction_id, SarpM$reportForwardMsgIn[tos_state.current_node]->packetsReceived, SarpM$reportForwardMsgIn[tos_state.current_node]->packetsReceivedFrom, SarpM$reportForwardMsgIn[tos_state.current_node]->packetsForwarded, SarpM$reportForwardMsgIn[tos_state.current_node]->packetsForwardedTo, SarpM$reportForwardMsgIn[tos_state.current_node]->packetsReceivedFrom);
                        TOS_post(SarpM$processOutMsg);



                        if (SarpM$reportForwardMsgIn[tos_state.current_node]->packetsReceivedFrom == SarpM$myAddr[tos_state.current_node]) 
                          {
                            for (SarpM$transactionCounter[tos_state.current_node] = 0; SarpM$transactionCounter[tos_state.current_node] < CIRCULAR_BUFFER_SIZE; SarpM$transactionCounter[tos_state.current_node]++) 
                              {

                                dbg(DBG_USR1, "%d, TRID: %d, RRID: %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].transaction_id, SarpM$reportForwardMsgIn[tos_state.current_node]->transaction_id);

                                if (SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].transaction_id == SarpM$reportForwardMsgIn[tos_state.current_node]->transaction_id) 
                                  {
                                    SarpM$outQ[tos_state.current_node][SarpM$writeOutQHere[tos_state.current_node]].addr = SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].receivedFrom;
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsReceived = SarpM$reportForwardMsgIn[tos_state.current_node]->packetsReceived;
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwarded = SarpM$reportForwardMsgIn[tos_state.current_node]->packetsForwarded;
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo = SarpM$reportForwardMsgIn[tos_state.current_node]->packetsForwardedTo;
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReported = 1;
                                    break;
                                  }
                              }
                          }
                      }
#line 920
                      __nesc_atomic_end(__nesc_atomic); }
                  }
                else {

                  if (type == END_TO_END_REPORT_RESPONSE_MSG_TYPE) 
                    {

                      dbg(DBG_USR1, "%d heard an End To End Report Response message\r\n", SarpM$myAddr[tos_state.current_node]);

                      SarpM$endToEndRepRespMsgIn[tos_state.current_node] = (EndToEndReportResponseMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;
                      SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$endToEndRepRespMsgIn[tos_state.current_node]->transaction_id);
                      if (SarpM$myAddr[tos_state.current_node] != SarpM$endToEndRepRespMsgIn[tos_state.current_node]->originator) 
                        {
                          SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->originatingNode, SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount);
                          TOS_post(SarpM$processOutMsg);
                        }
                      else 
                        {
                          ;

                          dbg(DBG_USR1, "%d heard and will process its end-to-end report response.\r\n", SarpM$myAddr[tos_state.current_node]);
                        }
                    }
                  else {
                    if (type == SPECIFIC_REPORT_REQUEST_MSG_TYPE) 
                      {
                        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                          {

                            dbg(DBG_USR1, "Before making srrmi\r\n");

                            SarpM$specificReportReqMsgIn[tos_state.current_node] = (SpecificReportRequestMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;

                            dbg(DBG_USR1, "before tt=ctt.gttp, TID: %x\r\n", SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id);



                            SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id);

                            dbg(DBG_USR1, "before if.myqddr==0\r\n");



                            if (SarpM$myAddr[tos_state.current_node] == 0) 
                              {
                                dbg(DBG_USR1, "END-2-END report: %d received %d of %d packets from %d for transaction %x\r\n", SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$thisTransaction[tos_state.current_node]->originatingNode, SarpM$thisTransaction[tos_state.current_node]->transaction_id);
                                dbg(DBG_USR1, "End-2-End Report follows:\r\n");
                                dbg(DBG_USR1, "Transaction:       0x%x\r\n", SarpM$thisTransaction[tos_state.current_node]->transaction_id);
                                dbg(DBG_USR1, "Packets Received:  0x%x\r\n", SarpM$thisTransaction[tos_state.current_node]->packetsReceived);
                                dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount);
                              }

                            dbg(DBG_USR1, "yah");
                            if (SarpM$specificReportReqMsgIn[tos_state.current_node]->destination == SarpM$myAddr[tos_state.current_node]) 
                              {
                                dbg(DBG_USR1, "yah2");

                                dbg(DBG_USR1, "%d received a SPECIFIC_REPORT_REQUEST_MSG for ME.\r\n", SarpM$myAddr[tos_state.current_node]);


                                SarpM$Messaging$putSpecificReportResponseMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$specificReportReqMsgIn[tos_state.current_node]->originator, SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$thisTransaction[tos_state.current_node]->packetsForwarded, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->receivedFrom);
                                TOS_post(SarpM$processOutMsg);
                              }
                            else {
#line 983
                              if (SarpM$specificReportReqMsgIn[tos_state.current_node]->destination == SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo) 
                                {
                                  dbg(DBG_USR1, "yah3");


                                  dbg(DBG_USR1, "%d received a SPECIFIC_REPORT_REQUEST_MSG for NOT me.\r\n", SarpM$myAddr[tos_state.current_node]);

                                  SarpM$Messaging$putSpecificReportRequestMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$specificReportReqMsgIn[tos_state.current_node]->requestor, SarpM$specificReportReqMsgIn[tos_state.current_node]->originator, SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id);
                                  TOS_post(SarpM$processOutMsg);
                                }
                              }
#line 993
                            dbg(DBG_USR1, "yah4");
                            SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node], 0, 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);
                            dbg(DBG_USR1, "yah5");
                          }
#line 996
                          __nesc_atomic_end(__nesc_atomic); }
                      }
                    else {
                      if (type == SPECIFIC_REPORT_RESPONSE_MSG_TYPE) 
                        {


                          dbg(DBG_USR1, "%d heard a SPECIFIC REPORT RESPONSE message\r\n", SarpM$myAddr[tos_state.current_node]);

                          SarpM$specificReportResponseMsgIn[tos_state.current_node] = (SpecificReportResponseMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;
                          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                            {
                              for (SarpM$transactionCounter[tos_state.current_node] = 0; SarpM$transactionCounter[tos_state.current_node] < CIRCULAR_BUFFER_SIZE; SarpM$transactionCounter[tos_state.current_node]++) 
                                {
                                  if (SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].transaction_id == SarpM$specificReportResponseMsgIn[tos_state.current_node]->transaction_id) 
                                    {
                                      if (SarpM$specificReportResponseMsgIn[tos_state.current_node]->originator == SarpM$myAddr[tos_state.current_node]) 
                                        {

                                          if (SarpM$specificReportResponseMsgIn[tos_state.current_node]->responder == SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].packetsForwardedTo) 
                                            {


                                              dbg(DBG_USR1, "%d heard a SPECIFIC ONE-hop msg for me, TID: %x\r\n", SarpM$myAddr[tos_state.current_node], SarpM$specificReportResponseMsgIn[tos_state.current_node]->transaction_id);

                                              SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsReceived = SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsReceived;
                                              SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwarded = SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsForwarded;
                                              SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo = SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsForwardedTo;
                                              SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReported = 1;

                                              SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], &SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]], 0, 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);
                                              SarpM$Timer8$start(TIMER_ONE_SHOT, 3250);
                                            }
                                          else {
                                            if (SarpM$specificReportResponseMsgIn[tos_state.current_node]->responder == SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo) 
                                              {


                                                dbg(DBG_USR1, "%d heard a SPECIFIC hop-TWO msg for me\r\n", SarpM$myAddr[tos_state.current_node]);

                                                if (SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo != SarpM$specificReportResponseMsgIn[tos_state.current_node]->responder) {
                                                  SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo = SarpM$specificReportResponseMsgIn[tos_state.current_node]->responder;
                                                  }
#line 1038
                                                SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].twoHopReportedPacketsReceived = SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsReceived;
                                                SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].twoHopReported = 1;
                                              }
                                            else 
                                              {
                                                ;
                                              }
                                            }
                                        }
                                      else {
                                        if (SarpM$specificReportResponseMsgIn[tos_state.current_node]->originator == SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].receivedFrom) 
                                          {
                                            SarpM$Messaging$putSpecificReportResponseMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$specificReportResponseMsgIn[tos_state.current_node]->responder, SarpM$specificReportResponseMsgIn[tos_state.current_node]->originator, SarpM$specificReportResponseMsgIn[tos_state.current_node]->transaction_id, SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsReceived, SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsReceivedFrom, SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsForwarded, SarpM$specificReportResponseMsgIn[tos_state.current_node]->packetsForwardedTo, SarpM$specificReportResponseMsgIn[tos_state.current_node]->originator);
                                            TOS_post(SarpM$processOutMsg);

                                            dbg(DBG_USR1, "%d reports forwarding SPECIFIC_REPORT_RESPONSE_MESSAGE_OUT to %d\r\n", SarpM$myAddr[tos_state.current_node], specificReportResponseMsgOut->originator);
                                          }
                                        }
                                      break;
                                    }
                                }
                            }
#line 1059
                            __nesc_atomic_end(__nesc_atomic); }
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
#line 1064
  SarpM$numMsgInQ[tos_state.current_node]--;
  SarpM$readInQHere[tos_state.current_node]++;
  if (SarpM$readInQHere[tos_state.current_node] >= CIRCULAR_BUFFER_SIZE) {
    SarpM$readInQHere[tos_state.current_node] = 0;
    }
}

# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendDisc$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(DISCOVERY_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
static inline 
# 120 "/opt/tinyos-1.x/tos/system/tos.h"
result_t rcombine(result_t r1, result_t r2)



{
  return r1 == FAIL ? FAIL : r2;
}

# 63 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
inline static   uint16_t ChannelMonC$Random$rand(void){
#line 63
  unsigned short result;
#line 63

#line 63
  result = RandomLFSR$Random$rand();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 145 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
result_t ChannelMonC$ChannelMon$macDelay(void)
#line 145
{
  ChannelMonC$CM_search[tos_state.current_node][0] = 0xff;
  if (ChannelMonC$CM_waiting[tos_state.current_node] == -1) {
      ChannelMonC$CM_waiting[tos_state.current_node] = (ChannelMonC$Random$rand() & 0x3f) + 100;
    }
  return SUCCESS;
}

# 36 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
inline static  result_t MicaHighSpeedRadioM$ChannelMon$macDelay(void){
#line 36
  unsigned char result;
#line 36

#line 36
  result = ChannelMonC$ChannelMon$macDelay();
#line 36

#line 36
  return result;
#line 36
}
#line 36
static inline  
# 112 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$Send$send(TOS_MsgPtr msg)
#line 112
{
  if (MicaHighSpeedRadioM$send_state[tos_state.current_node] == MicaHighSpeedRadioM$IDLE_STATE) {
      MicaHighSpeedRadioM$send_ptr[tos_state.current_node] = msg;
      MicaHighSpeedRadioM$send_state[tos_state.current_node] = MicaHighSpeedRadioM$SEND_WAITING;
      MicaHighSpeedRadioM$tx_count[tos_state.current_node] = 1;
      return MicaHighSpeedRadioM$ChannelMon$macDelay();
    }
  else 
#line 118
    {
      return FAIL;
    }
}

static inline  
# 77 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
result_t PacketSink$Send$send(TOS_MsgPtr msg)
#line 77
{
  return FAIL;
}

# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMStandard$RadioSend$send(TOS_MsgPtr arg_0x88cd0a8){
#line 58
  unsigned char result;
#line 58

#line 58
  result = PacketSink$Send$send(arg_0x88cd0a8);
#line 58
  result = rcombine(result, MicaHighSpeedRadioM$Send$send(arg_0x88cd0a8));
#line 58

#line 58
  return result;
#line 58
}
#line 58
static inline  
# 70 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr msg)
#line 70
{
  msg->crc = 1;

  TOSH_uart_send(msg);

  return SUCCESS;
}

# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMStandard$UARTSend$send(TOS_MsgPtr arg_0x88cd0a8){
#line 58
  unsigned char result;
#line 58

#line 58
  result = UARTNoCRCPacketM$Send$send(arg_0x88cd0a8);
#line 58
  result = rcombine(result, UARTNoCRCPacketM$Send$send(arg_0x88cd0a8));
#line 58

#line 58
  return result;
#line 58
}
#line 58
static inline  
# 165 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
void AMStandard$sendTask(void)
#line 165
{
  result_t ok;
  TOS_MsgPtr buf;

#line 168
  buf = AMStandard$buffer[tos_state.current_node];
  if (buf->addr == TOS_UART_ADDR) {
    ok = AMStandard$UARTSend$send(buf);
    }
  else {
#line 172
    ok = AMStandard$RadioSend$send(buf);
    }
  if (ok == FAIL) {
    AMStandard$reportSendDone(AMStandard$buffer[tos_state.current_node], FAIL);
    }
}

static inline 
# 56 "/opt/tinyos-1.x/tos/platform/pc/events.c"
void event_cleanup(event_t *fevent)
{
  dbg(DBG_MEM, "event_cleanup: freeing event: 0x%x\n", (unsigned int )fevent);
  fevent->cleanup(fevent);
}

static inline  
# 207 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 207
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$UARTSend$sendDone(arg_0x88cd5c0, arg_0x88cd710);
#line 67
  result = rcombine(result, AMStandard$UARTSend$sendDone(arg_0x88cd5c0, arg_0x88cd710));
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 82 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
void   NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)
#line 82
{
  UARTNoCRCPacketM$Send$sendDone(fmsg, fsuccess);
}

static inline 
# 48 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
void event_uart_write_handle(event_t *uevent, 
struct TOS_state *state)
#line 49
{


  NIDO_uart_send_done((TOS_MsgPtr )((uart_send_done_data_t *)uevent->data)->msg, (
  (uart_send_done_data_t *)uevent->data)->success);
  (

  (uart_send_done_data_t *)uevent->data)->msg = (void *)0;
  event_cleanup(uevent);
  dbg(DBG_UART, "UART: packet transfer complete.\n");
}

static inline void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success)
#line 61
{
  uart_send_done_data_t *data = (uart_send_done_data_t *)malloc(sizeof(uart_send_done_data_t ));

#line 63
  dbg(DBG_MEM, "malloc uart send done data event.\n");
  (
  (uart_send_done_data_t *)data)->msg = msg;
  ((uart_send_done_data_t *)data)->success = success;

  uevent->mote = mote;
  uevent->data = data;
  uevent->time = utime;
  uevent->handle = event_uart_write_handle;
  uevent->cleanup = event_total_cleanup;
  uevent->pause = 0;
  uevent->force = 0;
}

static inline  
# 342 "SarpM.nc"
result_t SarpM$SendSpecificReportResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 337
result_t SarpM$SendSpecificReportRequest$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 332
result_t SarpM$SendEndToEndReportResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 327
result_t SarpM$SendReportForwardResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 322
result_t SarpM$SendReportNoForwardResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 316
result_t SarpM$SendReportRequest$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 310
result_t SarpM$SendReport$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 304
result_t SarpM$SendData$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 299
result_t SarpM$SendStart$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  
#line 289
result_t SarpM$SendDisc$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline  result_t SarpM$SendUDisc$sendDone(TOS_MsgPtr masg, result_t success)
{
  return SUCCESS;
}

static inline   
# 157 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success)
#line 157
{
  return SUCCESS;
}

# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t AMStandard$SendMsg$sendDone(uint8_t arg_0x8bcb6e0, TOS_MsgPtr arg_0x8ad8fb8, result_t arg_0x8ad9108){
#line 49
  unsigned char result;
#line 49

#line 49
  switch (arg_0x8bcb6e0) {
#line 49
    case DISCOVERY_MSG_TYPE:
#line 49
      result = SarpM$SendUDisc$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      result = rcombine(result, SarpM$SendDisc$sendDone(arg_0x8ad8fb8, arg_0x8ad9108));
#line 49
      break;
#line 49
    case CONTROL_MSG_TYPE:
#line 49
      result = SarpM$SendStart$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case DATA_MSG_TYPE:
#line 49
      result = SarpM$SendData$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case REPORT_MSG_TYPE:
#line 49
      result = SarpM$SendReport$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case REPORT_REQUEST_MSG_TYPE:
#line 49
      result = SarpM$SendReportRequest$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE:
#line 49
      result = SarpM$SendReportNoForwardResponse$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case REPORT_RESPONSE_FORWARD_MSG_TYPE:
#line 49
      result = SarpM$SendReportForwardResponse$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case END_TO_END_REPORT_RESPONSE_MSG_TYPE:
#line 49
      result = SarpM$SendEndToEndReportResponse$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case SPECIFIC_REPORT_REQUEST_MSG_TYPE:
#line 49
      result = SarpM$SendSpecificReportRequest$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    case SPECIFIC_REPORT_RESPONSE_MSG_TYPE:
#line 49
      result = SarpM$SendSpecificReportResponse$sendDone(arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
      break;
#line 49
    default:
#line 49
      result = AMStandard$SendMsg$default$sendDone(arg_0x8bcb6e0, arg_0x8ad8fb8, arg_0x8ad9108);
#line 49
    }
#line 49

#line 49
  return result;
#line 49
}
#line 49
static inline   
# 160 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$default$sendDone(void)
#line 160
{
  return SUCCESS;
}

#line 65
inline static  result_t AMStandard$sendDone(void){
#line 65
  unsigned char result;
#line 65

#line 65
  result = AMStandard$default$sendDone();
#line 65

#line 65
  return result;
#line 65
}
#line 65
static inline 
# 120 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
void expand_heap(heap_t *heap)
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

static inline 
void heap_insert(heap_t *heap, void *data, long long key)
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

# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendStart$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(CONTROL_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendData$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(DATA_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendReportRequest$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(REPORT_REQUEST_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 34 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$isNoResponder(uint16_t arg_0x8b12d28){
#line 34
  unsigned short result;
#line 34

#line 34
  result = AttackM$Attack$isNoResponder(arg_0x8b12d28);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendReportNoForwardResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(REPORT_RESPONSE_NO_FORWARD_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendReportForwardResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(REPORT_RESPONSE_FORWARD_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendEndToEndReportResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(END_TO_END_REPORT_RESPONSE_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendSpecificReportRequest$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(SPECIFIC_REPORT_REQUEST_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendSpecificReportResponse$send(uint16_t arg_0x8ad8900, uint8_t arg_0x8ad8a48, TOS_MsgPtr arg_0x8ad8b98){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(SPECIFIC_REPORT_RESPONSE_MSG_TYPE, arg_0x8ad8900, arg_0x8ad8a48, arg_0x8ad8b98);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 72 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t SarpM$Leds$redOff(void){
#line 72
  unsigned char result;
#line 72

#line 72
  result = LedsM$Leds$redOff();
#line 72

#line 72
  return result;
#line 72
}
#line 72
static inline   
# 136 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$redOff(void)
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
# 97 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t SarpM$Leds$greenOff(void){
#line 97
  unsigned char result;
#line 97

#line 97
  result = LedsM$Leds$greenOff();
#line 97

#line 97
  return result;
#line 97
}
#line 97
static inline   
# 148 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$greenOff(void)
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
static inline   
# 160 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$yellowOff(void)
#line 160
{
  if (!prof_on) {
#line 161
    return;
    }
#line 162
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE YELLOW_OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 41 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void LedsM$PowerState$yellowOff(void){
#line 41
  PowerStateM$PowerState$yellowOff();
#line 41
}
#line 41
static inline   
# 160 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
result_t LedsM$Leds$yellowOff(void)
#line 160
{
  dbg(DBG_LED, "LEDS: Yellow off.\n");
  LedsM$PowerState$yellowOff();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 163
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT) {
          LedsM$ledsOn[tos_state.current_node] &= ~LedsM$YELLOW_BIT;
          LedsM$updateLeds();
        }
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 122 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t SarpM$Leds$yellowOff(void){
#line 122
  unsigned char result;
#line 122

#line 122
  result = LedsM$Leds$yellowOff();
#line 122

#line 122
  return result;
#line 122
}
#line 122
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer1$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(0, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
static inline 
# 269 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
int printTime(char *buf, int len)
#line 269
{
  return printOtherTime(buf, len, tos_state.tos_time);
}

static inline char *currentTime(void)
#line 273
{
  static char timeBuf[128];

#line 275
  printTime(timeBuf, 128);
  return timeBuf;
}

static inline 
# 211 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
void event_clocktick_invalidate(event_t *event)
#line 211
{
  clock_tick_data_t *data = event->data;

#line 213
  data->valid = 0;
}

static inline 
#line 115
uint8_t TOSH_get_clock_interval(void)
#line 115
{
  return intervals[tos_state.current_node] - 1;
}

static inline   
# 91 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
uint8_t HPLClock$Clock$getInterval(void)
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
static inline   
# 54 "/opt/tinyos-1.x/tos/platform/pc/HPLPowerManagementM.nc"
uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void)
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
static inline   
# 82 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
void HPLClock$Clock$setInterval(uint8_t value)
#line 82
{
  TOSH_clock_set_interval(value);
}

# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   void TimerM$Clock$setInterval(uint8_t arg_0x8a494d0){
#line 105
  HPLClock$Clock$setInterval(arg_0x8a494d0);
#line 105
}
#line 105
static inline   
# 113 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
uint8_t HPLClock$Clock$readCounter(void)
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
static void TimerM$adjustInterval(void)
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

static inline 
#line 186
void TimerM$enqueue(uint8_t value)
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

# 19 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateOverallTrust(float arg_0x8b16430, float arg_0x8b16570, float arg_0x8b166b0, float arg_0x8b167f0, float arg_0x8b16930){
#line 19
  float result;
#line 19

#line 19
  result = TrustM$Trust$calculateOverallTrust(arg_0x8b16430, arg_0x8b16570, arg_0x8b166b0, arg_0x8b167f0, arg_0x8b16930);
#line 19

#line 19
  return result;
#line 19
}
#line 19
static inline  
# 74 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculatePR(uint32_t GPB_l, uint32_t BPB_l)
{
  if (GPB_l + BPB_l > 0) {
    return (GPB_l + 0.0) / (GPB_l + BPB_l + 0.0);
    }
  else {
#line 79
    return 1.0;
    }
}

# 18 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculatePR(uint32_t arg_0x8aebec8, uint32_t arg_0x8b16030){
#line 18
  float result;
#line 18

#line 18
  result = TrustM$Trust$calculatePR(arg_0x8aebec8, arg_0x8b16030);
#line 18

#line 18
  return result;
#line 18
}
#line 18
static inline  
# 61 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculateLP(uint32_t GLB_l, uint32_t BLB_l)
{
  if (GLB_l + BLB_l > 0) {
    return (GLB_l + 0.0) / (GLB_l + BLB_l + 0.0);
    }
  else {
#line 66
    return 1.0;
    }
}

# 17 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateLP(uint32_t arg_0x8aeb970, uint32_t arg_0x8aebac0){
#line 17
  float result;
#line 17

#line 17
  result = TrustM$Trust$calculateLP(arg_0x8aeb970, arg_0x8aebac0);
#line 17

#line 17
  return result;
#line 17
}
#line 17
static inline  
# 48 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculateAV(uint32_t GAB_l, uint32_t BAB_l)
{
  if (GAB_l + BAB_l > 0) {
    return (GAB_l + 0.0) / (GAB_l + BAB_l + 0.0);
    }
  else {
#line 53
    return 1.0;
    }
}

# 16 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateAV(uint32_t arg_0x8aeb418, uint32_t arg_0x8aeb568){
#line 16
  float result;
#line 16

#line 16
  result = TrustM$Trust$calculateAV(arg_0x8aeb418, arg_0x8aeb568);
#line 16

#line 16
  return result;
#line 16
}
#line 16
static inline  
# 35 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculateRH(uint32_t GRB_l, uint32_t BRB_l)
{
  if (GRB_l + BRB_l > 0) {
    return (GRB_l + 0.0) / (GRB_l + BRB_l + 0.0);
    }
  else {
#line 40
    return 1.0;
    }
}

# 15 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateRH(uint32_t arg_0x8aeaec0, uint32_t arg_0x8aeb010){
#line 15
  float result;
#line 15

#line 15
  result = TrustM$Trust$calculateRH(arg_0x8aeaec0, arg_0x8aeb010);
#line 15

#line 15
  return result;
#line 15
}
#line 15
static inline  
# 22 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculateFP(uint32_t GFB_l, uint32_t BFB_l)
{
  if (GFB_l + BFB_l > 0) {
    return (GFB_l + 0.0) / (GFB_l + BFB_l + 0.0);
    }
  else {
#line 27
    return 1.0;
    }
}

# 14 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateFP(uint32_t arg_0x8aea968, uint32_t arg_0x8aeaab8){
#line 14
  float result;
#line 14

#line 14
  result = TrustM$Trust$calculateFP(arg_0x8aea968, arg_0x8aeaab8);
#line 14

#line 14
  return result;
#line 14
}
#line 14
static inline  
# 689 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm)
{
  for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++) 
    {
#line 708
      float forgetFP;
#line 708
      float forgetRH;
#line 708
      float forgetAV;
#line 708
      float forgetLP;
#line 708
      float forgetPR;
#line 708
      float temp;

#line 709
      forgetFP = 1 + TransactionTableM$Trust$calculateFP(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB);
      forgetRH = 1 + TransactionTableM$Trust$calculateRH(neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB);
      forgetAV = 1 + TransactionTableM$Trust$calculateAV(neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB);
      forgetLP = 1 + TransactionTableM$Trust$calculateLP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB);
      forgetPR = 1 + TransactionTableM$Trust$calculatePR(neighbors[tnLoopCounter].trust.GPB, neighbors[tnLoopCounter].trust.BPB);

      temp = forgetFP * neighbors[tnLoopCounter].trust.trustFP;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustFP = 1.0;
        }
      else {
#line 719
        neighbors[tnLoopCounter].trust.trustFP = temp;
        }
      temp = forgetRH * neighbors[tnLoopCounter].trust.trustRH;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustRH = 1.0;
        }
      else {
#line 725
        neighbors[tnLoopCounter].trust.trustRH = temp;
        }
      temp = forgetAV * neighbors[tnLoopCounter].trust.trustAV;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustAV = 1.0;
        }
      else {
#line 731
        neighbors[tnLoopCounter].trust.trustAV = temp;
        }
      temp = forgetLP * neighbors[tnLoopCounter].trust.trustLP;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustLP = 1.0;
        }
      else {
#line 737
        neighbors[tnLoopCounter].trust.trustLP = temp;
        }
      temp = forgetPR * neighbors[tnLoopCounter].trust.trustPR;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustPR = 1.0;
        }
      else {
#line 743
        neighbors[tnLoopCounter].trust.trustPR = temp;
        }
      neighbors[tnLoopCounter].trust.overallTrust = TransactionTableM$Trust$calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);









      sendSarpTrust(0, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB, neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB, neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, neighbors[tnLoopCounter].trust.GPB, neighbors[tnLoopCounter].trust.BPB, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust);
    }
}

# 102 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t arg_0x8aec878[], uint16_t arg_0x8aec9d0, uint16_t arg_0x8aecb20){
#line 102
  TransactionTableM$TransactionTable$doDynamicForgetting(arg_0x8aec878, arg_0x8aec9d0, arg_0x8aecb20);
#line 102
}
#line 102
static inline  
# 1471 "SarpM.nc"
result_t SarpM$Timer10$fired(void)
{
  SarpM$DFCounter[tos_state.current_node]++;
  dbg(DBG_USR2, "Timer 10 fired, counter: %d, num: %d\r\n", SarpM$DFCounter[tos_state.current_node], SarpM$DFThreshold[tos_state.current_node]);
  if (SarpM$DFCounter[tos_state.current_node] == SarpM$DFThreshold[tos_state.current_node]) 
    {
      dbg(DBG_USR2, "Doing Dynamic Forgetting\r\n");
      SarpM$DFCounter[tos_state.current_node] = 0;
      SarpM$TransactionTable$doDynamicForgetting(SarpM$neighbors[tos_state.current_node], SarpM$numNeighbors[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$getNumThirtySeconds(uint16_t arg_0x8b13560){
#line 45
  unsigned short result;
#line 45

#line 45
  result = AttackM$Attack$getNumThirtySeconds(arg_0x8b13560);
#line 45

#line 45
  return result;
#line 45
}
#line 45
static inline  
# 1455 "SarpM.nc"
result_t SarpM$Timer9$fired(void)
{
  dbg(DBG_USR2, "Timer 9 fired, counter: %d, num: %d\r\n", SarpM$onOffThirtySecondCounter[tos_state.current_node], SarpM$Attack$getNumThirtySeconds(SarpM$myAddr[tos_state.current_node]));
  SarpM$onOffThirtySecondCounter[tos_state.current_node]++;
  if (SarpM$onOffThirtySecondCounter[tos_state.current_node] >= SarpM$Attack$getNumThirtySeconds(SarpM$myAddr[tos_state.current_node])) 
    {
      dbg(DBG_USR2, "FLIPPED ITS ON-OFF STATUS !!!!!!!!!!!!!!!!!!!!1\r\n");
      if (SarpM$isOff_onoff[tos_state.current_node] == 1) {
        SarpM$isOff_onoff[tos_state.current_node] = 0;
        }
      else {
#line 1465
        SarpM$isOff_onoff[tos_state.current_node] = 1;
        }
#line 1466
      SarpM$onOffThirtySecondCounter[tos_state.current_node] = 0;
    }
  return SUCCESS;
}

# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer6$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(3, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 12 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TrafficGenerator.nc"
inline static  float SarpM$TrafficGenerator$isTrafficGenerator(uint16_t arg_0x8ad0c70){
#line 12
  float result;
#line 12

#line 12
  result = TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(arg_0x8ad0c70);
#line 12

#line 12
  return result;
#line 12
}
#line 12
static inline  
# 359 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm)
{


  one_gfb_inc = 0;
  one_bfb_inc = 0;
  one_grb_inc = 0;
  one_brb_inc = 0;
  one_gab_inc = 0;
  one_bab_inc = 0;
  one_glb_inc = 0;
  one_blb_inc = 0;
  two_gfb_inc = 0;
  two_bfb_inc = 0;
  two_grb_inc = 0;
  two_brb_inc = 0;
  two_gab_inc = 0;
  two_bab_inc = 0;
  two_glb_inc = 0;
  two_blb_inc = 0;


  dbg(DBG_USR1, "transaction_id:                    0x%04x\r\n", thisTransaction->transaction_id);
  dbg(DBG_USR1, "originating Node:                  0x%02x\r\n", thisTransaction->originatingNode);
  dbg(DBG_USR1, "receivedFrom:                      0x%02x\r\n", thisTransaction->receivedFrom);
  dbg(DBG_USR1, "isValid:                           0x%02x\r\n", thisTransaction->isValid);
  dbg(DBG_USR1, "sequenceNumber:                    0x%02x\r\n", thisTransaction->sequenceNumber);
  dbg(DBG_USR1, "packetsReceived:                   0x%02x\r\n", thisTransaction->packetsReceived);
  dbg(DBG_USR1, "packetsForwarded:                  0x%02x\r\n", thisTransaction->packetsForwarded);
  dbg(DBG_USR1, "packetsForwardedTo:                0x%02x\r\n", thisTransaction->packetsForwardedTo);
  dbg(DBG_USR1, "oneHopReported:                    0x%02x\r\n", thisTransaction->oneHopReported);
  dbg(DBG_USR1, "oneHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->oneHopReportedPacketsReceived);
  dbg(DBG_USR1, "oneHopReportedPacketsForwarded:    0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwarded);
  dbg(DBG_USR1, "oneHopReportedPacketsForwardedTo:  0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwardedTo);
  dbg(DBG_USR1, "twoHopReported:                    0x%02x\r\n", thisTransaction->twoHopReported);
  dbg(DBG_USR1, "twoHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->twoHopReportedPacketsReceived);
  dbg(DBG_USR2, "transaction_id:                    0x%04x\r\n", thisTransaction->transaction_id);
  dbg(DBG_USR2, "originating Node:                  0x%02x\r\n", thisTransaction->originatingNode);
  dbg(DBG_USR2, "receivedFrom:                      0x%02x\r\n", thisTransaction->receivedFrom);
  dbg(DBG_USR2, "isValid:                           0x%02x\r\n", thisTransaction->isValid);
  dbg(DBG_USR2, "packetsReceived:                   0x%02x\r\n", thisTransaction->packetsReceived);
  dbg(DBG_USR2, "packetsForwarded:                  0x%02x\r\n", thisTransaction->packetsForwarded);
  dbg(DBG_USR2, "packetsForwardedTo:                0x%02x\r\n", thisTransaction->packetsForwardedTo);
  dbg(DBG_USR2, "oneHopReported:                    0x%02x\r\n", thisTransaction->oneHopReported);
  dbg(DBG_USR2, "oneHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->oneHopReportedPacketsReceived);
  dbg(DBG_USR2, "oneHopReportedPacketsForwarded:    0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwarded);
  dbg(DBG_USR2, "oneHopReportedPacketsForwardedTo:  0x%02x\r\n", thisTransaction->oneHopReportedPacketsForwardedTo);
  dbg(DBG_USR2, "twoHopReported:                    0x%02x\r\n", thisTransaction->twoHopReported);
  dbg(DBG_USR2, "twoHopReportedPacketsReceived:     0x%02x\r\n", thisTransaction->twoHopReportedPacketsReceived);



  dbg(DBG_USR3, "transaction_id:                    %d\r\n", thisTransaction->transaction_id);
  dbg(DBG_USR3, "originating Node:                  %d\r\n", thisTransaction->originatingNode);
  dbg(DBG_USR3, "receivedFrom:                      %d\r\n", thisTransaction->receivedFrom);
  dbg(DBG_USR3, "isValid:                           %d\r\n", thisTransaction->isValid);
  dbg(DBG_USR3, "packetsReceived:                   %d\r\n", thisTransaction->packetsReceived);
  dbg(DBG_USR3, "packetsForwarded:                  %d\r\n", thisTransaction->packetsForwarded);
  dbg(DBG_USR3, "packetsForwardedTo:                %d\r\n", thisTransaction->packetsForwardedTo);
  dbg(DBG_USR3, "oneHopReported:                    %d\r\n", thisTransaction->oneHopReported);
  dbg(DBG_USR3, "oneHopReportedPacketsReceived:     %d\r\n", thisTransaction->oneHopReportedPacketsReceived);
  dbg(DBG_USR3, "oneHopReportedPacketsForwarded:    %d\r\n", thisTransaction->oneHopReportedPacketsForwarded);
  dbg(DBG_USR3, "oneHopReportedPacketsForwardedTo:  %d\r\n", thisTransaction->oneHopReportedPacketsForwardedTo);
  dbg(DBG_USR3, "twoHopReported:                    %d\r\n", thisTransaction->twoHopReported);
  dbg(DBG_USR3, "twoHopReportedPacketsReceived:     %d\r\n", thisTransaction->twoHopReportedPacketsReceived);


  if (thisTransaction->isALoop == 1) 
    {

      dbg(DBG_USR3, "%d\n", 429);

      one_glb_inc = 0;
      one_blb_inc = 1;
    }
  else 
    {

      dbg(DBG_USR3, "%d\n", 437);

      one_glb_inc = 1;
      one_blb_inc = 0;
    }

  if (thisTransaction->oneHopReported == 1) 
    {

      dbg(DBG_USR3, "%d\n", 446);

      if (thisTransaction->twoHopReported == 1) 
        {

          dbg(DBG_USR3, "%d\n", 451);




          one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived;
          one_bfb_inc = thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived;




          {

            one_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
            one_brb_inc = 0;


            two_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
            two_brb_inc = 0;
          }
#line 485
          one_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
          one_bab_inc = 0;
          two_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
          two_bab_inc = 0;
        }
      else 
        {

          dbg(DBG_USR3, "%d\n", 493);




          one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived;
          one_bfb_inc = thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived;



          one_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
          one_brb_inc = 0;



          one_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
          one_bab_inc = 0;
          two_gab_inc = 0;
          two_bab_inc = BAD_AVAILABILITY_BEHAVIOR_INCREMENT;
        }
    }
  else 
    {

      dbg(DBG_USR3, "%d\n", 517);

      if (thisTransaction->twoHopReported == 1) 
        {

          dbg(DBG_USR3, "%d\n", 522);






          one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived;
          one_bfb_inc = thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived;



          two_grb_inc = GOOD_REPORTING_BEHAVIOR_INCREMENT;
          two_brb_inc = 0;


          one_gab_inc = 0;
          one_bab_inc = BAD_AVAILABILITY_BEHAVIOR_INCREMENT;
          two_gab_inc = GOOD_AVAILABILITY_BEHAVIOR_INCREMENT;
          two_bab_inc = 0;
        }
      else 
        {

          dbg(DBG_USR3, "%d\n", 546);





          one_gab_inc = 0;
          one_bab_inc = BAD_AVAILABILITY_BEHAVIOR_INCREMENT;
        }
    }


  if (thisTransaction->packetsForwardedTo != 0 && thisTransaction->packetsForwardedTo != 255) {
    TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, one_gfb_inc, one_bfb_inc, one_grb_inc, one_brb_inc, one_gab_inc, one_bab_inc, one_glb_inc, one_blb_inc);
    }

  if (thisTransaction->oneHopReportedPacketsForwardedTo != 0 && thisTransaction->oneHopReportedPacketsForwardedTo != 255) {
    TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, two_gfb_inc, two_bfb_inc, two_grb_inc, two_brb_inc, two_gab_inc, two_bab_inc, two_glb_inc, two_blb_inc);
    }

  thisTransaction->processed = 1;
  thisTransaction->isValid = 0;
}

# 37 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$processThisTransaction(Transaction_Record_Ptr arg_0x8af6308, Neighbor_Rec_withTrust_t arg_0x8af6490[], uint16_t arg_0x8af65e8, uint16_t arg_0x8af6738){
#line 37
  TransactionTableM$TransactionTable$processThisTransaction(arg_0x8af6308, arg_0x8af6490, arg_0x8af65e8, arg_0x8af6738);
#line 37
}
#line 37
static inline  
# 611 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
uint16_t TransactionTableM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue)
{

  {
    if (*numInQueue == 0) {
      return 0;
      }
    else {
        *ptr = queue[*readHere].transactionPtr;
        *ones = queue[*readHere].oneTimes;
        *twos = queue[*readHere].twoTimes;
        (*numInQueue)--;
        (*readHere)++;
        if (*readHere >= maxQueueSize) {
          *readHere = 0;
          }
#line 626
        return 1;
      }
  }
}

# 82 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t arg_0x8af1e88[], Transaction_Record_Ptr *arg_0x8aee010, uint16_t *arg_0x8aee178, uint16_t *arg_0x8aee2e0, uint16_t *arg_0x8aee450, uint16_t arg_0x8aee5a8, uint16_t *arg_0x8aee718){
#line 82
  unsigned short result;
#line 82

#line 82
  result = TransactionTableM$TransactionTable$getFromTransactionCheckQ(arg_0x8af1e88, arg_0x8aee010, arg_0x8aee178, arg_0x8aee2e0, arg_0x8aee450, arg_0x8aee5a8, arg_0x8aee718);
#line 82

#line 82
  return result;
#line 82
}
#line 82
static inline  
# 1357 "SarpM.nc"
result_t SarpM$Timer8$fired(void)
{

  dbg(DBG_USR1, "%d reports %d transactions to check\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numTransactionsToCheck[tos_state.current_node]);

  if (SarpM$numTransactionsToCheck[tos_state.current_node] > 0 && SarpM$TransactionTable$getFromTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], &SarpM$checkThisTransaction[tos_state.current_node], &SarpM$oneTimesTID[tos_state.current_node], &SarpM$twoTimesTID[tos_state.current_node], &SarpM$readTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]) == 1) 
    {
      if (SarpM$checkThisTransaction[tos_state.current_node]->processed == 0) 
        {

          if (SarpM$checkThisTransaction[tos_state.current_node]->oneHopReported > 0 && (SarpM$checkThisTransaction[tos_state.current_node]->twoHopReported > 0 || SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo == 0)) 
            {
              if (SarpM$checkThisTransaction[tos_state.current_node]->processed == 0) {
                SarpM$TransactionTable$processThisTransaction(SarpM$checkThisTransaction[tos_state.current_node], SarpM$neighbors[tos_state.current_node], SarpM$numNeighbors[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
                }
#line 1371
              if (SarpM$TrafficGenerator$isTrafficGenerator(SarpM$myAddr[tos_state.current_node]) == 1) {
                SarpM$Timer6$start(TIMER_ONE_SHOT, 20000);
                }
            }
          else {

            if (SarpM$checkThisTransaction[tos_state.current_node]->oneHopReported == 0) 
              {

                if (SarpM$oneTimesTID[tos_state.current_node] >= 5) 
                  {

                    dbg(DBG_USR1, "%d report ONE hop %d TIMED OUT\r\n", SarpM$myAddr[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo);

                    SarpM$checkThisTransaction[tos_state.current_node]->oneHopReported = 255;
                    SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node], SarpM$oneTimesTID[tos_state.current_node], 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);
                    SarpM$Timer8$start(TIMER_ONE_SHOT, 500);
                  }
                else 
                  {


                    dbg(DBG_USR1, "%d reports ONE hop %d DID NOT CHECK IN, oneTimesTID: %d times for transaction %x\r\n", SarpM$myAddr[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$oneTimesTID[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->transaction_id);

                    SarpM$Messaging$putSpecificReportRequestMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$myAddr[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->originatorPacketCount, SarpM$checkThisTransaction[tos_state.current_node]->transaction_id);


                    SarpM$oneTimesTID[tos_state.current_node]++;
                    SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node], SarpM$oneTimesTID[tos_state.current_node], 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);
                    TOS_post(SarpM$processOutMsg);
                    SarpM$Timer8$start(TIMER_ONE_SHOT, 2300);
                  }
              }
            else {
#line 1404
              if (SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo != 0 && SarpM$checkThisTransaction[tos_state.current_node]->twoHopReported == 0) 
                {

                  if (SarpM$twoTimesTID[tos_state.current_node] >= 5) 
                    {

                      dbg(DBG_USR1, "%d report TWO hop %d TIMED OUT\r\n", SarpM$myAddr[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->oneHopReportedPacketsForwardedTo);

                      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                        {
                          SarpM$checkThisTransaction[tos_state.current_node]->twoHopReported = 255;

                          SarpM$twoTimesTID[tos_state.current_node]++;
                          SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node], SarpM$oneTimesTID[tos_state.current_node], SarpM$twoTimesTID[tos_state.current_node], &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);
                        }
#line 1418
                        __nesc_atomic_end(__nesc_atomic); }
                      SarpM$Timer8$start(TIMER_ONE_SHOT, 500);
                    }
                  else 
                    {


                      dbg(DBG_USR1, "%d reports TWO hop DID NOT CHECK IN, twoTimesTID: %d for transaction %x\r\n", SarpM$myAddr[tos_state.current_node], SarpM$twoTimesTID[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->transaction_id);

                      SarpM$Messaging$putSpecificReportRequestMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$checkThisTransaction[tos_state.current_node]->oneHopReportedPacketsForwardedTo, SarpM$myAddr[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node]->originatorPacketCount, SarpM$checkThisTransaction[tos_state.current_node]->transaction_id);
                      SarpM$twoTimesTID[tos_state.current_node]++;


                      SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$checkThisTransaction[tos_state.current_node], SarpM$oneTimesTID[tos_state.current_node], SarpM$twoTimesTID[tos_state.current_node], &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);

                      TOS_post(SarpM$processOutMsg);
                      SarpM$Timer8$start(TIMER_ONE_SHOT, 2400);
                    }
                }
              }
            }
        }
      else 
#line 1439
        {


          dbg(DBG_USR1, "%d says DUPlicate call to timer8\r\n", SarpM$myAddr[tos_state.current_node]);

          if (SarpM$numTransactionsToCheck[tos_state.current_node] > 0) {
            SarpM$Timer8$start(TIMER_ONE_SHOT, 1200);
            }
        }
      if (SarpM$numTransactionsToCheck[tos_state.current_node] > 0) {
        SarpM$Timer8$start(TIMER_ONE_SHOT, 1900);
        }
    }
#line 1451
  return SUCCESS;
}

static inline  
#line 441
void SarpM$sendReport(void)
{
  while (SarpM$sending[tos_state.current_node] == 1) 
    {
#line 444
      ;
    }

  dbg(DBG_USR1, "In sendReport in SarpM, 430\r\n");

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      dbg(DBG_USR1, "RRQH: %d, RRQ: %x\r\n", SarpM$readReportQHere[tos_state.current_node], SarpM$reportQ[tos_state.current_node][SarpM$readReportQHere[tos_state.current_node]]);

      SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$reportQ[tos_state.current_node][SarpM$readReportQHere[tos_state.current_node]]);

      dbg(DBG_USR1, "WOQH: %d, NMSGOQ: %d, TID: %x, PR: %d, RFrom: %d, PF: %d, PFT: %d, ORIGND: %d\r\n", SarpM$writeOutQHere[tos_state.current_node], SarpM$numMsgOutQ[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$thisTransaction[tos_state.current_node]->packetsForwarded, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->originatingNode);

      SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$thisTransaction[tos_state.current_node]->packetsForwarded, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->originatingNode);

      if (++SarpM$readReportQHere[tos_state.current_node] >= CIRCULAR_BUFFER_SIZE) {
        SarpM$readReportQHere[tos_state.current_node] = 0;
        }
      dbg(DBG_USR1, "%d sending regular report to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->receivedFrom);
    }
#line 464
    __nesc_atomic_end(__nesc_atomic); }

  TOS_post(SarpM$processOutMsg);
}

static inline  
#line 1348
result_t SarpM$Timer7$fired(void)
{

  dbg(DBG_USR1, "Timer 7 fired\r\n");

  TOS_post(SarpM$sendReport);
  return SUCCESS;
}

# 24 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void TransactionTableM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0x8ae4a98[], uint16_t *arg_0x8ae4c08, uint16_t arg_0x8ae4d60, uint16_t *arg_0x8ae4ed0, uint16_t arg_0x8ae5028, uint16_t arg_0x8ae5180, uint16_t arg_0x8ae52d8, uint16_t arg_0x8ae5438, uint32_t arg_0x8ae5590){
#line 24
  MessagingM$Messaging$putReportRequestMsgInOutQ(arg_0x8ae4a98, arg_0x8ae4c08, arg_0x8ae4d60, arg_0x8ae4ed0, arg_0x8ae5028, arg_0x8ae5180, arg_0x8ae52d8, arg_0x8ae5438, arg_0x8ae5590);
#line 24
}
#line 24
static inline  
# 646 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
uint16_t TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, TOS_Msg outQ[], uint16_t *writeOutQHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t myAddr)
{

  {
    for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
      {
        if (transactionRecords[tLoopCounter].transaction_id == transaction_id) 
          {
            dbg(DBG_USR1, "in TTsrrTT\r\n");
            dbg(DBG_USR1, "TID: %x, WOQH: %d, MXQS: %d, NMSGOQ: %d, MYADDR: %d\r\n", transaction_id, *writeOutQHere, maxQSize, *numMsgOutQ, myAddr);
            TransactionTableM$Messaging$putReportRequestMsgInOutQ(outQ, writeOutQHere, maxQSize, numMsgOutQ, transactionRecords[tLoopCounter].packetsForwardedTo, myAddr, myAddr, transactionRecords[tLoopCounter].packetsForwarded, transactionRecords[tLoopCounter].transaction_id);
            dbg(DBG_USR1, "TID: %x, WOQH: %d, MXQS: %d, NMSGOQ: %d, MYADDR: %d\r\n", transaction_id, *writeOutQHere, maxQSize, *numMsgOutQ, myAddr);
            return 1;
          }
      }
  }
  return 0;
}

# 92 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t arg_0x8aef2b0[], uint32_t arg_0x8aef408, TOS_Msg arg_0x8aef570[], uint16_t *arg_0x8aef6e0, uint16_t arg_0x8aef838, uint16_t *arg_0x8aef9a8, uint16_t arg_0x8aefaf8){
#line 92
  unsigned short result;
#line 92

#line 92
  result = TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(arg_0x8aef2b0, arg_0x8aef408, arg_0x8aef570, arg_0x8aef6e0, arg_0x8aef838, arg_0x8aef9a8, arg_0x8aefaf8);
#line 92

#line 92
  return result;
#line 92
}
#line 92
static inline  
# 78 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$incrementSequenceNumber(Transaction_Record_t transactionRecords[], uint32_t transaction_id)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactionRecords[tLoopCounter].transaction_id == transaction_id) 
        {
          transactionRecords[tLoopCounter].sequenceNumber++;
          break;
        }
    }
}

# 27 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$incrementSequenceNumber(Transaction_Record_t arg_0x8ac57c8[], uint32_t arg_0x8ac5920){
#line 27
  TransactionTableM$TransactionTable$incrementSequenceNumber(arg_0x8ac57c8, arg_0x8ac5920);
#line 27
}
#line 27
static inline  
# 1149 "SarpM.nc"
void SarpM$sendDataMsg(void)
{
  SarpM$lastToFindLoop[tos_state.current_node] = 255;
  SarpM$cantFixIt[tos_state.current_node] = 255;
  SarpM$dontSendTo[tos_state.current_node] = 255;


  if (SarpM$numDataMessagesInTrial[tos_state.current_node] <= 10) 
    {
      if (SarpM$myLevel[tos_state.current_node] != NO_LEVEL && SarpM$myAddr[tos_state.current_node] != 0) 
        {

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
            {
              SarpM$transactionFound[tos_state.current_node] = 0;

              SarpM$transactionFound[tos_state.current_node] = SarpM$TransactionTable$transactionExistsAlready(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);


              if (SarpM$transactionFound[tos_state.current_node] == 0) 
                {
                  SarpM$TransactionTable$initializeTransaction(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node], SarpM$myAddr[tos_state.current_node], NO_PARENT, SarpM$myOneHopNeighbors[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$myLevel[tos_state.current_node], 1, SarpM$myPeers[tos_state.current_node], SarpM$numPeers[tos_state.current_node], SarpM$myChildren[tos_state.current_node], SarpM$numChildren[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
                  SarpM$numDataMessagesInTrial[tos_state.current_node] = 1;
                }
              else {
                SarpM$TransactionTable$incrementSequenceNumber(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node]);
                }

              SarpM$Messaging$putDataMessageInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node]), SarpM$myAddr[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node], SarpM$myAddr[tos_state.current_node], 0xbeef, SarpM$lastToFindLoop[tos_state.current_node], SarpM$cantFixIt[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node], SarpM$numDataMessagesInTrial[tos_state.current_node]);
            }
#line 1178
            __nesc_atomic_end(__nesc_atomic); }

          SarpM$numDataMessagesInTrial[tos_state.current_node]++;
          TOS_post(SarpM$processOutMsg);
          SarpM$Timer6$start(TIMER_ONE_SHOT, 1000);
        }
      else 
        {
          dbg(DBG_USR1, "HELP !!!! I AM %d.  I AM TOLD TO SEND A data message BUT I CAN'T !!!!!\r\n", SarpM$myAddr[tos_state.current_node]);
        }
    }
  else 
    {

      dbg(DBG_USR1, "%d ALL DONE sending %d data packets.\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numDataMessagesInTrial[tos_state.current_node] - 1);







      SarpM$tFoundHere[tos_state.current_node] = 0;
      if (SarpM$myLevel[tos_state.current_node] != NO_LEVEL && SarpM$myAddr[tos_state.current_node] != 0) 
        {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
            {
              SarpM$tFoundHere[tos_state.current_node] = SarpM$TransactionTable$sendReportRequestForThisTransaction(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node], SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
              TOS_post(SarpM$processOutMsg);


              SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node]), 0, 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);


              SarpM$Timer8$start(TIMER_ONE_SHOT, 4000);

              SarpM$TRANSACTION_ID[tos_state.current_node]++;
              if (SarpM$TRANSACTION_ID[tos_state.current_node] >= (SarpM$myAddr[tos_state.current_node] + 1) * 10000) {
                SarpM$TRANSACTION_ID[tos_state.current_node] = SarpM$myAddr[tos_state.current_node] * 10000;
                }
              SarpM$numDataMessagesInTrial[tos_state.current_node] = 0;
            }
#line 1219
            __nesc_atomic_end(__nesc_atomic); }
          if (SarpM$tFoundHere[tos_state.current_node] == 0) 
            {
              dbg(DBG_USR1, "%d CANNOT FIND THIS TRANSACTION TO ASK FOR REPORTS -- THIS IS REALLY BAD !!!\r\n");
            }
        }
      else 


        {
          dbg(DBG_USR1, "HELP !!!! I AM %d.  I AM TOLD TO SEND A request for reports BUT I CAN'T !!!!!\r\n", SarpM$myAddr[tos_state.current_node]);
        }
    }
}

static inline  
#line 1338
result_t SarpM$Timer6$fired(void)
{

  dbg(DBG_USR1, "%d has %d one-hop neighbors\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node]);

  TOS_post(SarpM$sendDataMsg);
  return SUCCESS;
}

static inline  
#line 1304
result_t SarpM$Timer4$fired(void)
{
  SarpM$Messaging$putStartMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node]);
  TOS_post(SarpM$processOutMsg);

  return SUCCESS;
}

# 68 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer1$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(0);
#line 68

#line 68
  return result;
#line 68
}
#line 68
static inline  
# 1245 "SarpM.nc"
result_t SarpM$Timer2$fired(void)
{

  SarpM$nodeCounter2[tos_state.current_node] = 0;
  for (SarpM$nodeCounter[tos_state.current_node] = 0; SarpM$nodeCounter[tos_state.current_node] < SarpM$numOneHopNeighbors[tos_state.current_node]; SarpM$nodeCounter[tos_state.current_node]++) 
    {
      if (SarpM$myOneHopNeighbors[tos_state.current_node][SarpM$nodeCounter[tos_state.current_node]]->parent_id == SarpM$myAddr[tos_state.current_node]) 
        {
          SarpM$myChildren[tos_state.current_node][SarpM$nodeCounter2[tos_state.current_node]] = SarpM$myOneHopNeighbors[tos_state.current_node][SarpM$nodeCounter[tos_state.current_node]];
          SarpM$numChildren[tos_state.current_node]++;
          SarpM$nodeCounter2[tos_state.current_node]++;
        }
    }


  SarpM$nodeCounter2[tos_state.current_node] = 0;
  for (SarpM$nodeCounter[tos_state.current_node] = 0; SarpM$nodeCounter[tos_state.current_node] < SarpM$numOneHopNeighbors[tos_state.current_node]; SarpM$nodeCounter[tos_state.current_node]++) 
    {
      if (SarpM$myOneHopNeighbors[tos_state.current_node][SarpM$nodeCounter[tos_state.current_node]]->level == SarpM$myLevel[tos_state.current_node]) 
        {
          SarpM$myPeers[tos_state.current_node][SarpM$nodeCounter2[tos_state.current_node]] = SarpM$myOneHopNeighbors[tos_state.current_node][SarpM$nodeCounter[tos_state.current_node]];
          SarpM$numPeers[tos_state.current_node]++;
          SarpM$nodeCounter2[tos_state.current_node]++;
        }
    }

  SarpM$Timer1$stop();




  if (SarpM$TrafficGenerator$isTrafficGenerator(SarpM$myAddr[tos_state.current_node]) == 1) {
    SarpM$Timer6$start(TIMER_ONE_SHOT, 1000);
    }
#line 1278
  return SUCCESS;

  SarpM$Timer1$stop();




  if (SarpM$TrafficGenerator$isTrafficGenerator(SarpM$myAddr[tos_state.current_node]) == 1) {
    SarpM$Timer6$start(TIMER_ONE_SHOT, 1000);
    }
#line 1287
  return SUCCESS;
}

static inline  
# 148 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
result_t NeighborTableM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
{

  dbg(DBG_USR1, "%d adding neighbors to DiscMsg\r\n", TOS_LOCAL_ADDRESS);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      dbg(DBG_USR1, "Adding %d neighbors to Disc message.\r\n", numOneHopNeighbors);

      if (numOneHopNeighbors < 5) 
        {
          for (NeighborTableM$nLoopCounter[tos_state.current_node] = 0; NeighborTableM$nLoopCounter[tos_state.current_node] < numOneHopNeighbors; NeighborTableM$nLoopCounter[tos_state.current_node]++) 
            {
              msgNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].node_id = myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id;
              msgNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].level = myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level;
            }
        }
      else 
        {
          for (NeighborTableM$nLoopCounter[tos_state.current_node] = 0; NeighborTableM$nLoopCounter[tos_state.current_node] < 5; NeighborTableM$nLoopCounter[tos_state.current_node]++) 
            {
              msgNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].node_id = myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id;
              msgNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].level = myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level;
            }
        }

      dbg(DBG_USR1, "Done adding %d neighbors to Disc message.\r\n", numOneHopNeighbors);
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 23 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/NeighborTable.nc"
inline static  result_t MessagingM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t arg_0x8acf010[], uint16_t arg_0x8acf170, Neighbor_Rec_withTrust_t *arg_0x8acf318[]){
#line 23
  unsigned char result;
#line 23

#line 23
  result = NeighborTableM$NeighborTable$addNeighborsToDiscMsg(arg_0x8acf010, arg_0x8acf170, arg_0x8acf318);
#line 23

#line 23
  return result;
#line 23
}
#line 23
static inline  
# 50 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t node_id, uint16_t level, uint16_t parent_id, uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].addr = TOS_BCAST_ADDR;
      outQ[*writeHere].type = DISCOVERY_MSG_TYPE;
      disc_msg_out = (DiscoveryMsg *)outQ[*writeHere].data;
      disc_msg_out->node_id = node_id;
      disc_msg_out->level = level;
      disc_msg_out->parent_id = parent_id;
      disc_msg_out->num_neighbors = numOneHopNeighbors;
      MessagingM$NeighborTable$addNeighborsToDiscMsg(disc_msg_out->neighbors, numOneHopNeighbors, myOneHopNeighbors);

      if (++ *writeHere >= maxQSize) {
        *writeHere = 0;
        }
#line 65
      (*numMsgOutQ)++;
    }
#line 66
    __nesc_atomic_end(__nesc_atomic); }
}

# 19 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg arg_0x8ae9ae0[], uint16_t *arg_0x8ae9c50, uint16_t arg_0x8ae9da8, uint16_t *arg_0x8ae9f18, uint16_t arg_0x8ae4080, uint16_t arg_0x8ae41d0, uint16_t arg_0x8ae4328, uint16_t arg_0x8ae4488, Neighbor_Rec_withTrust_t *arg_0x8ae4630[]){
#line 19
  MessagingM$Messaging$putDiscoveryMsgInOutQ(arg_0x8ae9ae0, arg_0x8ae9c50, arg_0x8ae9da8, arg_0x8ae9f18, arg_0x8ae4080, arg_0x8ae41d0, arg_0x8ae4328, arg_0x8ae4488, arg_0x8ae4630);
#line 19
}
#line 19
static inline  
# 1124 "SarpM.nc"
void SarpM$sendDiscovery(void)
{










  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      dbg(DBG_USR1, "%d reports %d ONE-HOP neighbors\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node]);
      SarpM$Messaging$putDiscoveryMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$myLevel[tos_state.current_node], SarpM$myStaticParent[tos_state.current_node].node_id, SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$myOneHopNeighbors[tos_state.current_node]);
    }
#line 1140
    __nesc_atomic_end(__nesc_atomic); }
  TOS_post(SarpM$processOutMsg);
}

static inline  
#line 1237
result_t SarpM$Timer1$fired(void)
{
  TOS_post(SarpM$sendDiscovery);
  return SUCCESS;
}

static inline   
# 147 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
result_t SimpleTimeM$AbsoluteTimer$default$fired(uint8_t id)
#line 147
{
  return SUCCESS;
}

# 61 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.nc"
inline static  result_t SimpleTimeM$AbsoluteTimer$fired(uint8_t arg_0x8aa5918){
#line 61
  unsigned char result;
#line 61

#line 61
    result = SimpleTimeM$AbsoluteTimer$default$fired(arg_0x8aa5918);
#line 61

#line 61
  return result;
#line 61
}
#line 61
static inline   
# 53 "/opt/tinyos-1.x/tos/system/TimeUtilC.nc"
char TimeUtilC$TimeUtil$compare(tos_time_t a, tos_time_t b)
#line 53
{
  if (a.high32 > b.high32) {
#line 54
    return 1;
    }
#line 55
  if (a.high32 < b.high32) {
#line 55
    return -1;
    }
#line 56
  if (a.low32 > b.low32) {
#line 56
    return 1;
    }
#line 57
  if (a.low32 < b.low32) {
#line 57
    return -1;
    }
#line 58
  return 0;
}

# 82 "/opt/tinyos-1.x/tos/interfaces/TimeUtil.nc"
inline static   char SimpleTimeM$TimeUtil$compare(tos_time_t arg_0x8a3bcd0, tos_time_t arg_0x8a3be20){
#line 82
  char result;
#line 82

#line 82
  result = TimeUtilC$TimeUtil$compare(arg_0x8a3bcd0, arg_0x8a3be20);
#line 82

#line 82
  return result;
#line 82
}
#line 82
static inline   
# 99 "/opt/tinyos-1.x/tos/system/TimeUtilC.nc"
tos_time_t TimeUtilC$TimeUtil$addUint32(tos_time_t a, uint32_t ms)
#line 99
{
  tos_time_t result = a;

#line 101
  result.low32 += ms;
  if (result.low32 < a.low32) {
      result.high32++;
    }

  return result;
}

# 65 "/opt/tinyos-1.x/tos/interfaces/TimeUtil.nc"
inline static   tos_time_t SimpleTimeM$TimeUtil$addUint32(tos_time_t arg_0x8a3af78, uint32_t arg_0x8a3b0c8){
#line 65
  struct __nesc_unnamed4346 result;
#line 65

#line 65
  result = TimeUtilC$TimeUtil$addUint32(arg_0x8a3af78, arg_0x8a3b0c8);
#line 65

#line 65
  return result;
#line 65
}
#line 65
static inline  
# 151 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
result_t SimpleTimeM$Timer$fired(void)
#line 151
{
  uint8_t i;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 154
    SimpleTimeM$time[tos_state.current_node] = SimpleTimeM$TimeUtil$addUint32(SimpleTimeM$time[tos_state.current_node], SimpleTimeM$INTERVAL);
#line 154
    __nesc_atomic_end(__nesc_atomic); }

  for (i = 1; i <= MAX_NUM_TIMERS; i++) 
    if ((SimpleTimeM$aTimer[tos_state.current_node][i - 1].low32 || SimpleTimeM$aTimer[tos_state.current_node][i - 1].high32) && 
    SimpleTimeM$TimeUtil$compare(SimpleTimeM$time[tos_state.current_node], SimpleTimeM$aTimer[tos_state.current_node][i - 1]) >= 0) 
      {
        SimpleTimeM$aTimer[tos_state.current_node][i - 1].high32 = 0;
        SimpleTimeM$aTimer[tos_state.current_node][i - 1].low32 = 0;
        SimpleTimeM$AbsoluteTimer$fired(i - 1);
      }
  return SUCCESS;
}

static inline  
# 151 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$ActivityTimer$fired(void)
#line 151
{
  AMStandard$lastCount[tos_state.current_node] = AMStandard$counter[tos_state.current_node];
  AMStandard$counter[tos_state.current_node] = 0;
  return SUCCESS;
}

static inline   
# 182 "/opt/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$Timer$default$fired(uint8_t id)
#line 182
{
  return SUCCESS;
}

# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TimerM$Timer$fired(uint8_t arg_0x8a2c2c8){
#line 73
  unsigned char result;
#line 73

#line 73
  switch (arg_0x8a2c2c8) {
#line 73
    case 0:
#line 73
      result = SarpM$Timer1$fired();
#line 73
      break;
#line 73
    case 1:
#line 73
      result = SarpM$Timer2$fired();
#line 73
      break;
#line 73
    case 2:
#line 73
      result = SarpM$Timer4$fired();
#line 73
      break;
#line 73
    case 3:
#line 73
      result = SarpM$Timer6$fired();
#line 73
      break;
#line 73
    case 4:
#line 73
      result = SarpM$Timer7$fired();
#line 73
      break;
#line 73
    case 5:
#line 73
      result = SarpM$Timer8$fired();
#line 73
      break;
#line 73
    case 6:
#line 73
      result = SarpM$Timer9$fired();
#line 73
      break;
#line 73
    case 7:
#line 73
      result = SarpM$Timer10$fired();
#line 73
      break;
#line 73
    case 8:
#line 73
      result = SimpleTimeM$Timer$fired();
#line 73
      break;
#line 73
    case 10:
#line 73
      result = AMStandard$ActivityTimer$fired();
#line 73
      break;
#line 73
    case 11:
#line 73
      result = AMStandard$ActivityTimer$fired();
#line 73
      break;
#line 73
    default:
#line 73
      result = TimerM$Timer$default$fired(arg_0x8a2c2c8);
#line 73
    }
#line 73

#line 73
  return result;
#line 73
}
#line 73
static inline 
# 194 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t TimerM$dequeue(void)
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

static inline  
#line 210
void TimerM$HandleFire(void)
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
static inline 
# 136 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
void  SIG_OUTPUT_COMPARE2_interrupt(void)
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

# 80 "/opt/tinyos-1.x/tos/types/dbg.h"
static bool dbg_active(TOS_dbg_mode mode)
{
  return (dbg_modes & mode) != 0;
}

static inline 
# 156 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
void event_clocktick_handle(event_t *event, 
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

# 18 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
inline static  uint16_t TransactionTableM$Attack$ifLoopCreatorGetParent(uint16_t arg_0x8b124f8){
#line 18
  unsigned short result;
#line 18

#line 18
  result = AttackM$Attack$ifLoopCreatorGetParent(arg_0x8b124f8);
#line 18

#line 18
  return result;
#line 18
}
#line 18
static inline 
# 979 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void sendSarpParent(uint16_t myID, uint16_t parentID)
{
  int sock;
#line 981
  int n;
  struct sockaddr_in name;

  char message[60];

#line 985
  sprintf(message, "<sarp><parent source=\"%d\" target=\"%d\" /></sarp>", myID, parentID);

  sock = socket(2, SOCK_DGRAM, IPPROTO_UDP);
  if (sock < 0) 
    {
      printf("Socket failure.\r\n");
      exit(0);
    }

  name.sin_family = 2;
  name.sin_port = htons(12000);
  name.sin_addr.s_addr = inet_addr("192.168.10.5");

  n = connect(sock, (struct sockaddr *)&name, sizeof name);
  if (n < 0) 
    {
      printf("Connection failed\r\n");
    }

  n = write(sock, message, strlen(message) + 1);

  if (n < 0) {
    printf("Message not sent.  Trying again. \r\n");
    }
#line 1008
  close(sock);
}

static inline  
# 182 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
uint16_t NeighborTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t dontPickMe, uint16_t dontPickMeEither, uint16_t reallyDontPickMe, uint16_t whoIAm)
{









  NeighborTableM$highestParentTrustIndex[tos_state.current_node] = 255;
  NeighborTableM$highestPeerTrustIndex[tos_state.current_node] = 255;
  NeighborTableM$highestChildTrustIndex[tos_state.current_node] = 255;
  NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = 255;
  NeighborTableM$maxOverallTrustIndex[tos_state.current_node] = 255;
  NeighborTableM$chosenParentTrustIndex[tos_state.current_node] = 255;

  dbg(DBG_USR1, "Parent num one-hops: %d\r\n", numOneHopNeighbors);

  for (NeighborTableM$nLoopCounter[tos_state.current_node] = 0; NeighborTableM$nLoopCounter[tos_state.current_node] < numOneHopNeighbors; NeighborTableM$nLoopCounter[tos_state.current_node]++) 
    {

      dbg(DBG_USR1, "Checking Potential parent\r\n");

      if (NeighborTableM$highestParentTrustIndex[tos_state.current_node] == 255) 
        {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level < myLevel_l && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMe && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMeEither && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != reallyDontPickMe) 
            {
              NeighborTableM$highestParentTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];


              if (NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] == 255) 
                {
                  NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                }
              else 
                {
                  if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust >= myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->trust.overallTrust) {
                    NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                    }
                }
            }
        }
      else {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level < myLevel_l && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMe && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMeEither && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != reallyDontPickMe) 
            {
              if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust > myOneHopNeighbors[NeighborTableM$highestParentTrustIndex[tos_state.current_node]]->trust.overallTrust) 
                {
                  NeighborTableM$highestParentTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];


                  if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust >= myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->trust.overallTrust) {
                    NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                    }
                }
            }
        }

      dbg(DBG_USR1, "Checking Potential peer\r\n");


      if (NeighborTableM$highestPeerTrustIndex[tos_state.current_node] == 255) 
        {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level == myLevel_l && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMe && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMeEither && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != reallyDontPickMe) 
            {
              NeighborTableM$highestPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];


              if (NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] == 255) 
                {
                  NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                }
              else 
                {
                  if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust >= myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->trust.overallTrust) {
                    NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                    }
                }
            }
        }
      else {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level == myLevel_l && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMe && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMeEither && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != reallyDontPickMe) 
            {
              if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust > myOneHopNeighbors[NeighborTableM$highestPeerTrustIndex[tos_state.current_node]]->trust.overallTrust) 
                {
                  NeighborTableM$highestPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];


                  if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust > myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->trust.overallTrust) {
                    NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                    }
                }
            }
        }

      dbg(DBG_USR1, "Checking Potential child\r\n");


      if (NeighborTableM$highestChildTrustIndex[tos_state.current_node] == 255) 
        {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level > myLevel_l && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMe && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMeEither && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != reallyDontPickMe) 
            {
              NeighborTableM$highestChildTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
            }
        }
      else 
        {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->level > myLevel_l && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMe && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != dontPickMeEither && myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id != reallyDontPickMe) 
            {
              if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->trust.overallTrust > myOneHopNeighbors[NeighborTableM$highestChildTrustIndex[tos_state.current_node]]->trust.overallTrust) 
                {
                  NeighborTableM$highestChildTrustIndex[tos_state.current_node] = NeighborTableM$nLoopCounter[tos_state.current_node];
                }
            }
        }
    }



  dbg(DBG_USR1, "Done with for loop\r\n");


  if (NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node] == 255) 
    {

      dbg(DBG_USR1, "mppi == 255\r\n");

      if (NeighborTableM$highestChildTrustIndex[tos_state.current_node] == 255) {
        return 255;
        }
      else {
#line 313
        NeighborTableM$maxOverallTrustIndex[tos_state.current_node] = NeighborTableM$highestChildTrustIndex[tos_state.current_node];
        }
    }
  else {

      dbg(DBG_USR1, "mppi != 255\r\n");

      if (NeighborTableM$highestChildTrustIndex[tos_state.current_node] == 255) {
        NeighborTableM$maxOverallTrustIndex[tos_state.current_node] = NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node];
        }
      else {
          if (myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->trust.overallTrust >= myOneHopNeighbors[NeighborTableM$highestChildTrustIndex[tos_state.current_node]]->trust.overallTrust) {
            NeighborTableM$maxOverallTrustIndex[tos_state.current_node] = NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node];
            }
          else {
#line 327
            NeighborTableM$maxOverallTrustIndex[tos_state.current_node] = NeighborTableM$highestChildTrustIndex[tos_state.current_node];
            }
        }
    }

  if (NeighborTableM$highestParentTrustIndex[tos_state.current_node] != 255) {
    dbg(DBG_USR1, "HPaTI: %d, MPPTI: %d, MOTI: %d\r\n", myOneHopNeighbors[NeighborTableM$highestParentTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxOverallTrustIndex[tos_state.current_node]]->node_id);
    }
#line 334
  if (NeighborTableM$highestPeerTrustIndex[tos_state.current_node] != 255) {
    dbg(DBG_USR1, "HPeTI: %d, MPPTI: %d, MOTI: %d\r\n", myOneHopNeighbors[NeighborTableM$highestPeerTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxOverallTrustIndex[tos_state.current_node]]->node_id);
    }
#line 336
  if (NeighborTableM$highestChildTrustIndex[tos_state.current_node] != 255) {
    dbg(DBG_USR1, "HCTI: %d, MOTI: %d\r\n", myOneHopNeighbors[NeighborTableM$highestChildTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxOverallTrustIndex[tos_state.current_node]]->node_id);
    }



  if (NeighborTableM$highestParentTrustIndex[tos_state.current_node] == 255 || myOneHopNeighbors[NeighborTableM$highestParentTrustIndex[tos_state.current_node]]->trust.overallTrust < parent_peer_threshold) 
    {
      dbg(DBG_USR1, "either HPaTI == 255 or no trusted parent\r\n");

      if (NeighborTableM$highestPeerTrustIndex[tos_state.current_node] == 255 || myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->trust.overallTrust < peer_child_threshold) 
        {
          dbg(DBG_USR1, "either HPeTI == 255 or no trusted peer\r\n");

          NeighborTableM$chosenParentTrustIndex[tos_state.current_node] = NeighborTableM$maxOverallTrustIndex[tos_state.current_node];
        }
      else 
        {
          dbg(DBG_USR1, "neither HPeTI == 255 nor no trusted peer\r\n");

          NeighborTableM$chosenParentTrustIndex[tos_state.current_node] = NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node];
        }
    }
  else 
    {
      dbg(DBG_USR1, "neither HPaTI == 255 nor no trusted parent\r\n");
      NeighborTableM$chosenParentTrustIndex[tos_state.current_node] = NeighborTableM$highestParentTrustIndex[tos_state.current_node];
    }


  dbg(DBG_USR1, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->level, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->trust.overallTrust);
  dbg(DBG_USR2, "%d:%d chose %d:%d as its transaction parent, with a trust value of %f\r\n", TOS_LOCAL_ADDRESS, myLevel_l, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->level, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->trust.overallTrust);
  sendSarpParent(TOS_LOCAL_ADDRESS, myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->node_id);

  return myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->node_id;
}

# 28 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/NeighborTable.nc"
inline static  uint16_t TransactionTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *arg_0x8acf798[], uint16_t arg_0x8acf8f8, uint8_t arg_0x8acfa48, Neighbor_Rec_withTrust_t *arg_0x8acfbe0[], uint16_t arg_0x8acfd38, Neighbor_Rec_withTrust_t *arg_0x8acfed8[], uint16_t arg_0x8acc060, uint16_t arg_0x8acc1b8, uint16_t arg_0x8acc318, uint16_t arg_0x8acc478, uint16_t arg_0x8acc5c8){
#line 28
  unsigned short result;
#line 28

#line 28
  result = NeighborTableM$NeighborTable$getNewTransactionParent(arg_0x8acf798, arg_0x8acf8f8, arg_0x8acfa48, arg_0x8acfbe0, arg_0x8acfd38, arg_0x8acfed8, arg_0x8acc060, arg_0x8acc1b8, arg_0x8acc318, arg_0x8acc478, arg_0x8acc5c8);
#line 28

#line 28
  return result;
#line 28
}
#line 28
static inline 
# 937 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
long getMyTime(void)
#line 937
{
  return (long )(tos_state.tos_time / 4000);
}

# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer2$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(1, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer10$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(7, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
static inline  
# 91 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$isOnOffAttacker(uint16_t myNodeId)
{
  for (aCounter = 0; aCounter < numOnOffAttackers; aCounter++) 
    {
      if (onOffAttackers[aCounter] == myNodeId) {
        return 1;
        }
    }
#line 98
  return 0;
}

# 43 "/opt/tinyos-1.x/apps/sarp-0.3-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$isOnOffAttacker(uint16_t arg_0x8b13140){
#line 43
  unsigned short result;
#line 43

#line 43
  result = AttackM$Attack$isOnOffAttacker(arg_0x8b13140);
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer9$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(6, arg_0x8a28b18, arg_0x8a28c70);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 88 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
__inline __nesc_atomic_t  __nesc_atomic_start(void )
{
  return 0;
}

__inline void  __nesc_atomic_end(__nesc_atomic_t oldSreg)
{
}

# 40 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t SpiByteFifoC$SpiByteFifo$dataReady(uint8_t arg_0x8be7b30){
#line 40
  unsigned char result;
#line 40

#line 40
  result = MicaHighSpeedRadioM$SpiByteFifo$dataReady(arg_0x8be7b30);
#line 40

#line 40
  return result;
#line 40
}
#line 40
static inline 
# 63 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
void  SIG_SPI_signal(void)
#line 63
{
  uint8_t temp = SpiByteFifoC$spdr[tos_state.current_node];

#line 65
  SpiByteFifoC$spdr[tos_state.current_node] = SpiByteFifoC$nextByte[tos_state.current_node];
  SpiByteFifoC$state[tos_state.current_node] = SpiByteFifoC$OPEN;
  SpiByteFifoC$SpiByteFifo$dataReady(temp);
}

#line 271
void   event_spi_byte_invalidate(event_t *fevent)
#line 271
{
  spi_byte_data_t *data = fevent->data;

#line 273
  data->valid = 0;
}

static inline 
# 398 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
void TOSH_rfm_tx_bit(uint8_t data)
{
  tos_state.rfm->transmit(tos_state.current_node, (char )(data & 0x01));
  dbg(DBG_RADIO, "RFM: Mote %i sent bit %x\n", tos_state.current_node, data & 0x01);
}

# 170 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
void   event_spi_byte_handle(event_t *fevent, 
struct TOS_state *fstate)
#line 171
{
  event_t *nevent;
  long long ftime;
  int i;
  event_queue_t *queue = & fstate->queue;
  spi_byte_data_t *data = (spi_byte_data_t *)fevent->data;
  uint8_t temp;
  link_t *current_link;

#line 179
  radioWaitingState[tos_state.current_node] = NOT_WAITING;
  if (data->ending) {
      spiByteEvents[tos_state.current_node] = (void *)0;
      tos_state.rfm->stop_transmit(tos_state.current_node);
      dbg(DBG_RADIO, "RADIO: Spi Byte event ending for mote %i at %lli discarded.\n", data->mote, fevent->time);
      event_cleanup(fevent);
    }
  else {
    if (data->valid) {
        tos_state.rfm->stop_transmit(tos_state.current_node);
        if (dbg_active(DBG_RADIO)) {
            char ttime[128];

#line 191
            ttime[0] = 0;
            printTime(ttime, 128);
            dbg(DBG_RADIO, "RADIO: Spi Byte event handled for mote %i at %s with interval of %i.\n", fevent->mote, ttime, data->interval);
          }


        if (SpiByteFifoC$radioState[tos_state.current_node] == SpiByteFifoC$RADIO_RECEIVING) {
            temp = TOSH_rfm_rx_bit();
            temp &= 0x01;
            SpiByteFifoC$spdr[tos_state.current_node] <<= 1;
            SpiByteFifoC$spdr[tos_state.current_node] |= temp;
          }
        else {
          if (SpiByteFifoC$radioState[tos_state.current_node] == SpiByteFifoC$RADIO_SENDING) {
              temp = (SpiByteFifoC$spdr[tos_state.current_node] >> 0x7) & 0x1;
              TOSH_rfm_tx_bit(temp);
              SpiByteFifoC$spdr[tos_state.current_node] <<= 1;


              if (temp) {
                  current_link = tos_state.rfm->neighbors(tos_state.current_node);
                  while (current_link) {
                      i = current_link->mote;
                      if (radioWaitingState[i] == WAITING_FOR_ONE_TO_CAPTURE && (
                      spiByteEvents[i] == (void *)0 || spiByteEvents[i]->time > tos_state.tos_time + 419)) {
                          if (spiByteEvents[i] != (void *)0) {
                              event_spi_byte_invalidate(spiByteEvents[i]);
                            }
                          dbg(DBG_MEM, "malloc spi byte event.\n");
                          nevent = (event_t *)malloc(sizeof(event_t ));
                          ftime = tos_state.tos_time + 419;
                          event_spi_byte_create(nevent, i, ftime, RADIO_TICKS_PER_EVENT, 0);
                          queue_insert_event(& tos_state.queue, nevent);
#line 223
                          ;

                          spiByteEvents[i] = nevent;
                        }
                      current_link = current_link->next_link;
                    }
                }
            }
          else {
              dbg(DBG_ERROR, "SpiByteFifo is seriously wacked\n");
            }
          }

        if (data->count == 7) {
            SIG_SPI_signal();
          }

        data->count = (data->count + 1) & 0x07;
        fevent->time = fevent->time + data->interval;
        queue_insert_event(queue, fevent);
      }
    else 
      {
        dbg(DBG_RADIO, "RADIO: invalid Spi Byte event for mote %i at %lli discarded.\n", data->mote, fevent->time);

        event_cleanup(fevent);
      }
    }
}

# 38 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t SecDedEncoding$Code$encodeDone(char arg_0x8bbbce8){
#line 38
  unsigned char result;
#line 38

#line 38
  result = MicaHighSpeedRadioM$Code$encodeDone(arg_0x8bbbce8);
#line 38

#line 38
  return result;
#line 38
}
#line 38
static inline 
# 97 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
void SecDedEncoding$radio_encode_thread(void)
#line 97
{
  char ret_high = 0;
  char ret_low = 0;
  char parity = 0;
  char val = SecDedEncoding$data1[tos_state.current_node];




  if ((val & 0x1) != 0) {
      parity ^= 0x5b;
      ret_low |= 0x1;
    }
  else 
#line 109
    {
#line 109
      ret_low |= 0x2;
    }
  if ((val & 0x2) != 0) {
      parity ^= 0x58;
      ret_low |= 0x4;
    }
  else 
#line 114
    {
#line 114
      ret_low |= 0x8;
    }
#line 115
  if ((val & 0x4) != 0) {
      parity ^= 0x52;
      ret_low |= 0x10;
    }
  else 
#line 118
    {
#line 118
      ret_low |= 0x20;
    }
#line 119
  if ((val & 0x8) != 0) {
      parity ^= 0x51;
      ret_low |= 0x40;
    }
  else 
#line 122
    {
#line 122
      ret_low |= 0x80;
    }
#line 123
  if ((val & 0x10) != 0) {
      parity ^= 0x4a;
      ret_high |= 0x1;
    }
  else 
#line 126
    {
#line 126
      ret_high |= 0x2;
    }
#line 127
  if ((val & 0x20) != 0) {
      parity ^= 0x49;
      ret_high |= 0x4;
    }
  else 
#line 130
    {
#line 130
      ret_high |= 0x8;
    }
#line 131
  if ((val & 0x40) != 0) {
      parity ^= 0x13;
      ret_high |= 0x10;
    }
  else 
#line 134
    {
#line 134
      ret_high |= 0x20;
    }
#line 135
  if ((val & 0x80) != 0) {
      parity ^= 0x0b;
      ret_high |= 0x40;
    }
  else 
#line 138
    {
#line 138
      ret_high |= 0x80;
    }



  if (!(parity & 0x40)) {
#line 143
    parity |= 0x80;
    }
#line 144
  if (!(parity & 0x50)) {
#line 144
    parity |= 0x20;
    }
#line 145
  if (!(parity & 0xa)) {
#line 145
    parity |= 0x4;
    }
  SecDedEncoding$state[tos_state.current_node] = SecDedEncoding$IDLE_STATE;
  SecDedEncoding$Code$encodeDone(parity);
  SecDedEncoding$Code$encodeDone(ret_high);
  SecDedEncoding$Code$encodeDone(ret_low);
}

static inline    
# 342 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
void MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount)
#line 342
{
}

# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioSendCoordinator$byte(TOS_MsgPtr arg_0x8bb6f98, uint8_t arg_0x8bb70e8){
#line 38
  MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(arg_0x8bb6f98, arg_0x8bb70e8);
#line 38
}
#line 38
static inline  
# 81 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
result_t SecDedEncoding$Code$encode_flush(void)
#line 81
{

  return 1;
}

# 33 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t MicaHighSpeedRadioM$Code$encode_flush(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = SecDedEncoding$Code$encode_flush();
#line 33

#line 33
  return result;
#line 33
}
#line 33
static inline  
# 152 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
result_t SpiByteFifoC$SpiByteFifo$phaseShift(void)
#line 152
{
  event_t *fevent;
  long long ftime;

#line 155
  if (spiByteEvents[tos_state.current_node] != (void *)0) {
      event_spi_byte_invalidate(spiByteEvents[tos_state.current_node]);
    }
  dbg(DBG_MEM, "malloc spi byte event.\n");
  fevent = (event_t *)malloc(sizeof(event_t ));

  ftime = tos_state.tos_time + RADIO_TICKS_PER_EVENT + 50;
  event_spi_byte_create(fevent, tos_state.current_node, ftime, RADIO_TICKS_PER_EVENT, 0);
  queue_insert_event(& tos_state.queue, fevent);
#line 163
  ;

  spiByteEvents[tos_state.current_node] = fevent;

  return SUCCESS;
}

# 38 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$phaseShift(void){
#line 38
  unsigned char result;
#line 38

#line 38
  result = SpiByteFifoC$SpiByteFifo$phaseShift();
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 272 "/opt/tinyos-1.x/tos/platform/pc/hardware.nido.h"
static __inline void TOSH_SET_RFM_CTL1_PIN(void)
#line 272
{
#line 272
  set_io_bit(0x43, 6);
}

#line 271
static __inline void TOSH_SET_RFM_CTL0_PIN(void)
#line 271
{
#line 271
  set_io_bit(0x43, 7);
}

static inline 
# 98 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
short clear_io_bit(char port, char bit)
#line 98
{
  dbg(DBG_HARD, "Clear bit %i of port %u\n", (int )bit, port);
  return 0xff;
}

# 270 "/opt/tinyos-1.x/tos/platform/pc/hardware.nido.h"
static __inline void TOSH_MAKE_RFM_TXD_INPUT(void)
#line 270
{
#line 270
  clear_io_bit(0x39, 3);
}

#line 270
static __inline void TOSH_CLR_RFM_TXD_PIN(void)
#line 270
{
#line 270
  clear_io_bit(0x37, 3);
}

static inline   
# 173 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$radioRxMode(void)
#line 173
{
  if (!prof_on) {
#line 174
    return;
    }
#line 175
  dbg(DBG_POWER, "POWER: Mote %d RADIO_STATE RX at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 46 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void SpiByteFifoC$PowerState$radioRxMode(void){
#line 46
  PowerStateM$PowerState$radioRxMode();
#line 46
}
#line 46
static inline  
# 142 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
result_t SpiByteFifoC$SpiByteFifo$rxMode(void)
#line 142
{
  SpiByteFifoC$radioState[tos_state.current_node] = SpiByteFifoC$RADIO_RECEIVING;
  SpiByteFifoC$PowerState$radioRxMode();
  TOSH_CLR_RFM_TXD_PIN();
  TOSH_MAKE_RFM_TXD_INPUT();
  TOSH_SET_RFM_CTL0_PIN();
  TOSH_SET_RFM_CTL1_PIN();
  return SUCCESS;
}

# 37 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$rxMode(void){
#line 37
  unsigned char result;
#line 37

#line 37
  result = SpiByteFifoC$SpiByteFifo$rxMode();
#line 37

#line 37
  return result;
#line 37
}
#line 37
#line 34
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$idle(void){
#line 34
  unsigned char result;
#line 34

#line 34
  result = SpiByteFifoC$SpiByteFifo$idle();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 276 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
void   event_spi_byte_end(event_t *fevent)
#line 276
{
  spi_byte_data_t *data = fevent->data;

#line 278
  data->ending = 1;
}

# 195 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
void   event_channel_mon_invalidate(event_t *fevent)
#line 195
{
  channel_mon_data_t *data = fevent->data;

#line 197
  data->valid = 0;
}

static inline    
# 343 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff)
#line 343
{
}

# 33 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$startSymbol(uint8_t arg_0x8bb6888, uint8_t arg_0x8bb69d0, TOS_MsgPtr arg_0x8bb6b20){
#line 33
  MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(arg_0x8bb6888, arg_0x8bb69d0, arg_0x8bb6b20);
#line 33
}
#line 33
static inline  
# 120 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
result_t SpiByteFifoC$SpiByteFifo$startReadBytes(uint16_t timing)
#line 120
{
  if (SpiByteFifoC$state[tos_state.current_node] == SpiByteFifoC$IDLE) {



      SpiByteFifoC$state[tos_state.current_node] = SpiByteFifoC$READING;
      SpiByteFifoC$radioState[tos_state.current_node] = SpiByteFifoC$RADIO_RECEIVING;
      SpiByteFifoC$PowerState$radioRxMode();
      SpiByteFifoC$spdr[tos_state.current_node] = 0;
      return SUCCESS;
    }
  return FAIL;
}

# 35 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$startReadBytes(uint16_t arg_0x8be6f10){
#line 35
  unsigned char result;
#line 35

#line 35
  result = SpiByteFifoC$SpiByteFifo$startReadBytes(arg_0x8be6f10);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 157 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t   finishedTiming(void)
#line 157
{

  MicaHighSpeedRadioM$SpiByteFifo$startReadBytes(0);
  MicaHighSpeedRadioM$msg_length[tos_state.current_node] = MSG_DATA_SIZE - 2;
  MicaHighSpeedRadioM$calc_crc[tos_state.current_node] = 0;
  MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->time = tos_state.tos_time;
  MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->strength = 0;
  return SUCCESS;
}

# 147 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
void   event_radio_timing_invalidate(event_t *fevent)
#line 147
{
  radio_timing_data_t *data = fevent->data;

#line 149
  data->valid = 0;
}

static inline 
#line 84
void RadioTimingC$event_radio_timing_handle(event_t *fevent, 
struct TOS_state *state)
#line 85
{
  event_t *nevent;
  long long ntime;
  event_queue_t *queue = & state->queue;
  radio_timing_data_t *data = (radio_timing_data_t *)fevent->data;

  if (data->valid) {
      if (dbg_active(DBG_RADIO)) {
          char ftime[128];

#line 94
          ftime[0] = 0;
          printTime(ftime, 128);
          dbg(DBG_RADIO, "RADIO: radio timing event handled for mote %i at %s with interval of %i.\n", fevent->mote, ftime, data->interval);
        }


      event_radio_timing_invalidate(fevent);
      radioTimingEvents[tos_state.current_node] = (void *)0;
      fevent->time = fevent->time + data->interval;
      queue_insert_event(queue, fevent);

      radioWaitingState[tos_state.current_node] = WAITING_FOR_ONE_TO_CAPTURE;

      if (spiByteEvents[tos_state.current_node] != (void *)0) {
          event_spi_byte_invalidate(spiByteEvents[tos_state.current_node]);
        }

      dbg(DBG_MEM, "malloc spi byte event.\n");
      nevent = (event_t *)malloc(sizeof(event_t ));

      ntime = tos_state.tos_time + 819;
      event_spi_byte_create(nevent, tos_state.current_node, ntime, RADIO_TICKS_PER_EVENT, 0);
      queue_insert_event(& tos_state.queue, nevent);
#line 116
      ;

      spiByteEvents[tos_state.current_node] = nevent;

      finishedTiming();
    }
  else 
    {
      dbg(DBG_RADIO, "RADIO: invalid radio timing event for mote %i at %lli discarded.\n", data->mote, fevent->time);

      event_cleanup(fevent);
    }
}

void   event_radio_timing_create(event_t *fevent, int mote, long long ftime, int interval)
#line 130
{


  radio_timing_data_t *data = (radio_timing_data_t *)malloc(sizeof(radio_timing_data_t ));

#line 134
  dbg(DBG_MEM, "malloc radio timing event data.\n");
  data->interval = interval;
  data->mote = mote;
  data->valid = 1;

  fevent->mote = mote;
  fevent->data = data;
  fevent->time = ftime;
  fevent->handle = RadioTimingC$event_radio_timing_handle;
  fevent->cleanup = event_total_cleanup;
  fevent->pause = 0;
}

static inline   
#line 43
uint16_t RadioTimingC$RadioTiming$getTiming(void)
#line 43
{
  event_t *fevent;
  long long ftime;

  if (radioTimingEvents[tos_state.current_node] != (void *)0) {
      dbg(DBG_ERROR, "radioTIMING is in bad shape...");
    }

  fevent = (event_t *)malloc(sizeof(event_t ));



  ftime = tos_state.tos_time + 400;
  event_radio_timing_create(fevent, tos_state.current_node, ftime, 0);
  queue_insert_event(& tos_state.queue, fevent);
#line 57
  ;

  radioTimingEvents[tos_state.current_node] = fevent;

  return SUCCESS;
}

# 33 "/opt/tinyos-1.x/tos/platform/pc/RadioTiming.nc"
inline static   uint16_t MicaHighSpeedRadioM$RadioTiming$getTiming(void){
#line 33
  unsigned short result;
#line 33

#line 33
  result = RadioTimingC$RadioTiming$getTiming();
#line 33

#line 33
  return result;
#line 33
}
#line 33
static inline  
# 146 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$ChannelMon$startSymDetect(void)
#line 146
{
  uint16_t tmp;

#line 148
  MicaHighSpeedRadioM$ack_count[tos_state.current_node] = 0;
  MicaHighSpeedRadioM$rec_count[tos_state.current_node] = 0;
  MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$RX_STATE;
  dbg(DBG_PACKET, "Detected start symbol.\n");
  tmp = MicaHighSpeedRadioM$RadioTiming$getTiming();
  MicaHighSpeedRadioM$RadioReceiveCoordinator$startSymbol(8, 0, MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]);
  return SUCCESS;
}

# 38 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
inline static  result_t ChannelMonC$ChannelMon$startSymDetect(void){
#line 38
  unsigned char result;
#line 38

#line 38
  result = MicaHighSpeedRadioM$ChannelMon$startSymDetect();
#line 38

#line 38
  return result;
#line 38
}
#line 38
static inline    
# 341 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
void MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff)
#line 341
{
}

# 33 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioSendCoordinator$startSymbol(uint8_t arg_0x8bb6888, uint8_t arg_0x8bb69d0, TOS_MsgPtr arg_0x8bb6b20){
#line 33
  MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(arg_0x8bb6888, arg_0x8bb69d0, arg_0x8bb6b20);
#line 33
}
#line 33
static inline   
# 76 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
uint16_t RadioTimingC$RadioTiming$currentTime(void)
#line 76
{

  return tos_state.tos_time;
}

# 34 "/opt/tinyos-1.x/tos/platform/pc/RadioTiming.nc"
inline static   uint16_t MicaHighSpeedRadioM$RadioTiming$currentTime(void){
#line 34
  unsigned short result;
#line 34

#line 34
  result = RadioTimingC$RadioTiming$currentTime();
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 33 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$send(uint8_t arg_0x8be6850){
#line 33
  unsigned char result;
#line 33

#line 33
  result = SpiByteFifoC$SpiByteFifo$send(arg_0x8be6850);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 34 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t MicaHighSpeedRadioM$Code$encode(char arg_0x8bbafa8){
#line 34
  unsigned char result;
#line 34

#line 34
  result = SecDedEncoding$Code$encode(arg_0x8bbafa8);
#line 34

#line 34
  return result;
#line 34
}
#line 34
static inline  
# 168 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$ChannelMon$idleDetect(void)
#line 168
{
  if (MicaHighSpeedRadioM$send_state[tos_state.current_node] == MicaHighSpeedRadioM$SEND_WAITING) {
      char first = ((char *)MicaHighSpeedRadioM$send_ptr[tos_state.current_node])[0];

#line 171
      MicaHighSpeedRadioM$buf_end[tos_state.current_node] = MicaHighSpeedRadioM$buf_head[tos_state.current_node] = 0;
      MicaHighSpeedRadioM$enc_count[tos_state.current_node] = 0;
      MicaHighSpeedRadioM$Code$encode(first);
      MicaHighSpeedRadioM$rx_count[tos_state.current_node] = 0;
      MicaHighSpeedRadioM$msg_length[tos_state.current_node] = (unsigned char )MicaHighSpeedRadioM$send_ptr[tos_state.current_node]->length + MSG_DATA_SIZE - DATA_LENGTH - 2;
      MicaHighSpeedRadioM$send_state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
      MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$TRANSMITTING_START;
      MicaHighSpeedRadioM$SpiByteFifo$send(TOSH_MHSR_start[0]);
      MicaHighSpeedRadioM$send_ptr[tos_state.current_node]->time = MicaHighSpeedRadioM$RadioTiming$currentTime();
      MicaHighSpeedRadioM$calc_crc[tos_state.current_node] = MicaHighSpeedRadioM$add_crc_byte(first, 0x00);
    }

  MicaHighSpeedRadioM$RadioSendCoordinator$startSymbol(8, 0, MicaHighSpeedRadioM$send_ptr[tos_state.current_node]);
  return 1;
}

# 39 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
inline static  result_t ChannelMonC$ChannelMon$idleDetect(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = MicaHighSpeedRadioM$ChannelMon$idleDetect();
#line 39

#line 39
  return result;
#line 39
}
#line 39
static inline 
# 88 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
void  SIG_OUTPUT_COMPARE2B_signal(void)
#line 88
{
  uint8_t bit = TOSH_rfm_rx_bit();

  if (ChannelMonC$CM_state[tos_state.current_node] == ChannelMonC$IDLE_STATE) {
      ChannelMonC$CM_search[tos_state.current_node][0] <<= 1;
      ChannelMonC$CM_search[tos_state.current_node][0] = ChannelMonC$CM_search[tos_state.current_node][0] | (bit & 0x1);
      if (ChannelMonC$CM_waiting[tos_state.current_node] != -1) {
          ChannelMonC$CM_waiting[tos_state.current_node]--;
          if (ChannelMonC$CM_waiting[tos_state.current_node] == 1) {
              if ((ChannelMonC$CM_search[tos_state.current_node][0] & 0xfff) == 0) {
                  ChannelMonC$CM_waiting[tos_state.current_node] = -1;
                  ChannelMonC$ChannelMon$stopMonitorChannel();
                  ChannelMonC$ChannelMon$idleDetect();
                }
              else 
#line 101
                {
                  ChannelMonC$CM_waiting[tos_state.current_node] = (ChannelMonC$Random$rand() & 0x1ff) + 50;
                }
            }
        }
      if ((ChannelMonC$CM_search[tos_state.current_node][0] & 0x777) == 0x707) {
          ChannelMonC$CM_state[tos_state.current_node] = ChannelMonC$START_SYMBOL_SEARCH;
          ChannelMonC$CM_search[tos_state.current_node][0] = ChannelMonC$CM_search[tos_state.current_node][1] = 0;
          ChannelMonC$CM_startSymBits[tos_state.current_node] = 30;
        }
    }
  else {
#line 111
    if (ChannelMonC$CM_state[tos_state.current_node] == ChannelMonC$START_SYMBOL_SEARCH) {
        unsigned int current = ChannelMonC$CM_search[tos_state.current_node][ChannelMonC$CM_lastBit[tos_state.current_node]];

#line 113
        ChannelMonC$CM_startSymBits[tos_state.current_node]--;
        if (ChannelMonC$CM_startSymBits[tos_state.current_node] == 0) {
            ChannelMonC$CM_state[tos_state.current_node] = ChannelMonC$IDLE_STATE;
            return;
          }
        current <<= 1;
        current &= 0x1ff;
        if (bit) {
#line 120
          current |= 0x1;
          }
#line 121
        if (current == 0x135) {
            ChannelMonC$ChannelMon$stopMonitorChannel();
            ChannelMonC$CM_state[tos_state.current_node] = ChannelMonC$IDLE_STATE;

            radioWaitingState[tos_state.current_node] = WAITING_FOR_ONE_TO_PASS;

            ChannelMonC$ChannelMon$startSymDetect();
            return;
          }
        ChannelMonC$CM_search[tos_state.current_node][ChannelMonC$CM_lastBit[tos_state.current_node]] = current;
        ChannelMonC$CM_lastBit[tos_state.current_node] ^= 1;
      }
    }
#line 133
  return;
}

static inline 
#line 153
void ChannelMonC$event_channel_mon_handle(event_t *fevent, 
struct TOS_state *state)
#line 154
{
  event_queue_t *queue = & state->queue;
  channel_mon_data_t *data = (channel_mon_data_t *)fevent->data;

#line 157
  if (data->valid) {
      if (dbg_active(DBG_RADIO)) {
          char ftime[128];

#line 160
          ftime[0] = 0;
          printTime(ftime, 128);
          dbg(DBG_RADIO, "RADIO: Channel Mon event handled for mote %i at %s with interval of %i.\n", fevent->mote, ftime, data->interval);
        }


      fevent->time = fevent->time + data->interval;
      queue_insert_event(queue, fevent);

      SIG_OUTPUT_COMPARE2B_signal();
    }
  else {
      dbg(DBG_RADIO, "RADIO: invalid Channel Mon event for mote %i at %lli discarded.\n", data->mote, fevent->time);

      event_cleanup(fevent);
    }
}

void   event_channel_mon_create(event_t *fevent, int mote, long long ftime, int interval)
#line 178
{


  channel_mon_data_t *data = (channel_mon_data_t *)malloc(sizeof(channel_mon_data_t ));

#line 182
  dbg(DBG_MEM, "malloc Channel Mon event data.\n");
  data->interval = interval;
  data->mote = mote;
  data->valid = 1;

  fevent->mote = mote;
  fevent->data = data;
  fevent->time = ftime;
  fevent->handle = ChannelMonC$event_channel_mon_handle;
  fevent->cleanup = event_total_cleanup;
  fevent->pause = 0;
}

static inline  
# 210 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 210
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t MicaHighSpeedRadioM$Send$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$RadioSend$sendDone(arg_0x88cd5c0, arg_0x88cd710);
#line 67

#line 67
  return result;
#line 67
}
#line 67
static inline  
# 101 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
void MicaHighSpeedRadioM$packetSent(void)
#line 101
{
  RadioMsgSentEvent ev;

#line 103
  MicaHighSpeedRadioM$send_state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  nmemcpy(& ev.message, MicaHighSpeedRadioM$send_ptr[tos_state.current_node], sizeof  ev.message);
  ev.message.crc = 1;
  sendTossimEvent(tos_state.current_node, AM_RADIOMSGSENTEVENT, tos_state.tos_time, &ev);
  MicaHighSpeedRadioM$Send$sendDone((TOS_MsgPtr )MicaHighSpeedRadioM$send_ptr[tos_state.current_node], SUCCESS);
}

static inline    
#line 344
void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount)
#line 344
{
}

# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$byte(TOS_MsgPtr arg_0x8bb6f98, uint8_t arg_0x8bb70e8){
#line 38
  MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(arg_0x8bb6f98, arg_0x8bb70e8);
#line 38
}
#line 38
static inline  
# 187 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$Code$decodeDone(char data, char error)
#line 187
{
  if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$IDLE_STATE) {
      return 0;
    }
  else {
#line 190
    if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$RX_STATE) {
        ((char *)MicaHighSpeedRadioM$rec_ptr[tos_state.current_node])[(int )MicaHighSpeedRadioM$rec_count[tos_state.current_node]] = data;
        MicaHighSpeedRadioM$rec_count[tos_state.current_node]++;
        if (MicaHighSpeedRadioM$rec_count[tos_state.current_node] >= MSG_DATA_SIZE) {

            if (MicaHighSpeedRadioM$calc_crc[tos_state.current_node] == MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->crc) {
                dbg(DBG_CRC, "MicaHighSpeedRadioM: Passed CRC. Expected: 0x%hx, received 0x%hx.\n", MicaHighSpeedRadioM$calc_crc[tos_state.current_node], MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->crc);
                MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->crc = 1;
                if (MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->addr == TOS_LOCAL_ADDRESS || 
                MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->addr == TOS_BCAST_ADDR) {
                    MicaHighSpeedRadioM$SpiByteFifo$send(0x55);
                  }
              }
            else 
#line 202
              {
                dbg(DBG_CRC, "MicaHighSpeedRadioM: Failed CRC. Expected: 0x%hx, received 0x%hx.\n", MicaHighSpeedRadioM$calc_crc[tos_state.current_node], MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->crc);
                MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->crc = 0;
              }
            MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$ACK_SEND_STATE;
            MicaHighSpeedRadioM$RadioReceiveCoordinator$byte(MicaHighSpeedRadioM$rec_ptr[tos_state.current_node], (uint8_t )MicaHighSpeedRadioM$rec_count[tos_state.current_node]);
            return 0;
          }
        else {
#line 209
          if (MicaHighSpeedRadioM$rec_count[tos_state.current_node] <= MSG_DATA_SIZE - 2) {
              MicaHighSpeedRadioM$calc_crc[tos_state.current_node] = MicaHighSpeedRadioM$add_crc_byte(data, MicaHighSpeedRadioM$calc_crc[tos_state.current_node]);
            }
          }
#line 212
        if (MicaHighSpeedRadioM$rec_count[tos_state.current_node] == LENGTH_BYTE_NUMBER) {
            if ((unsigned char )data < DATA_LENGTH) {
                MicaHighSpeedRadioM$msg_length[tos_state.current_node] = (unsigned char )data + MSG_DATA_SIZE - DATA_LENGTH - 2;
              }
          }
        if (MicaHighSpeedRadioM$rec_count[tos_state.current_node] == MicaHighSpeedRadioM$msg_length[tos_state.current_node]) {
            MicaHighSpeedRadioM$rec_count[tos_state.current_node] = MSG_DATA_SIZE - 2;
          }
      }
    }
#line 221
  return SUCCESS;
}

# 37 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t SecDedEncoding$Code$decodeDone(char arg_0x8bbb7a0, char arg_0x8bbb8e0){
#line 37
  unsigned char result;
#line 37

#line 37
  result = MicaHighSpeedRadioM$Code$decodeDone(arg_0x8bbb7a0, arg_0x8bbb8e0);
#line 37

#line 37
  return result;
#line 37
}
#line 37
static inline 
# 155 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
void SecDedEncoding$radio_decode_thread(void)
#line 155
{


  char ret_high = 0;
  char ret_low = 0;
  char parity;
  char error = 0;
  short encoded_value = 0;

#line 163
  parity = SecDedEncoding$data1[tos_state.current_node];
  ret_high = SecDedEncoding$data2[tos_state.current_node];
  ret_low = SecDedEncoding$data3[tos_state.current_node];
  if ((ret_low & 0x1) != 0) {
#line 166
    encoded_value |= 0x1;
    }
#line 167
  if ((ret_low & 0x4) != 0) {
#line 167
    encoded_value |= 0x2;
    }
#line 168
  if ((ret_low & 0x10) != 0) {
#line 168
    encoded_value |= 0x4;
    }
#line 169
  if ((ret_low & 0x40) != 0) {
#line 169
    encoded_value |= 0x8;
    }
#line 170
  if ((ret_high & 0x01) != 0) {
#line 170
    encoded_value |= 0x10;
    }
#line 171
  if ((ret_high & 0x04) != 0) {
#line 171
    encoded_value |= 0x20;
    }
#line 172
  if ((ret_high & 0x10) != 0) {
#line 172
    encoded_value |= 0x40;
    }
#line 173
  if ((ret_high & 0x40) != 0) {
#line 173
    encoded_value |= 0x80;
    }
#line 174
  parity = ((parity & 0x3) | ((parity & 0x18) >> 1)) | ((parity & 0x40) >> 2);
  encoded_value = (encoded_value << 5) | parity;


  parity = 0;
  if ((encoded_value & 0x1) != 0) {
#line 179
    parity ^= 0x1;
    }
#line 180
  if ((encoded_value & 0x2) != 0) {
#line 180
    parity ^= 0x2;
    }
#line 181
  if ((encoded_value & 0x4) != 0) {
#line 181
    parity ^= 0x4;
    }
#line 182
  if ((encoded_value & 0x8) != 0) {
#line 182
    parity ^= 0x8;
    }
#line 183
  if ((encoded_value & 0x10) != 0) {
#line 183
    parity ^= 0x10;
    }
#line 184
  if ((encoded_value & 0x20) != 0) {
#line 184
    parity ^= 0x1f;
    }
#line 185
  if ((encoded_value & 0x40) != 0) {
#line 185
    parity ^= 0x1c;
    }
#line 186
  if ((encoded_value & 0x80) != 0) {
#line 186
    parity ^= 0x1a;
    }
#line 187
  if ((encoded_value & 0x100) != 0) {
#line 187
    parity ^= 0x19;
    }
#line 188
  if ((encoded_value & 0x200) != 0) {
#line 188
    parity ^= 0x16;
    }
#line 189
  if ((encoded_value & 0x400) != 0) {
#line 189
    parity ^= 0x15;
    }
#line 190
  if ((encoded_value & 0x800) != 0) {
#line 190
    parity ^= 0xb;
    }
#line 191
  if ((encoded_value & 0x1000) != 0) {
#line 191
    parity ^= 0x7;
    }

  error = -1;
  if (parity == 0) {
    }
  else {
#line 196
    if (parity == 0x1) {
#line 196
        encoded_value ^= 0x1;
      }
    else {
#line 197
      if (parity == 0x2) {
#line 197
          encoded_value ^= 0x2;
        }
      else {
#line 198
        if (parity == 0x4) {
#line 198
            encoded_value ^= 0x4;
          }
        else {
#line 199
          if (parity == 0x8) {
#line 199
              encoded_value ^= 0x8;
            }
          else {
#line 200
            if (parity == 0x10) {
#line 200
                encoded_value ^= 0x10;
              }
            else 
#line 201
              {
                error = 0;
                if (parity == 0x1f) {
#line 203
                    encoded_value ^= 0x20;
                  }
                else {
#line 204
                  if (parity == 0x1c) {
#line 204
                      encoded_value ^= 0x40;
                    }
                  else {
#line 205
                    if (parity == 0x1a) {
#line 205
                        encoded_value ^= 0x80;
                      }
                    else {
#line 206
                      if (parity == 0x19) {
#line 206
                          encoded_value ^= 0x100;
                        }
                      else {
#line 207
                        if (parity == 0x16) {
#line 207
                            encoded_value ^= 0x200;
                          }
                        else {
#line 208
                          if (parity == 0x15) {
#line 208
                              encoded_value ^= 0x400;
                            }
                          else {
#line 209
                            if (parity == 0xb) {
#line 209
                                encoded_value ^= 0x800;
                              }
                            else {
#line 210
                              if (parity == 0x7) {
#line 210
                                  encoded_value ^= 0x1000;
                                }
                              else 
#line 211
                                {
                                  error = 1;
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
#line 217
  SecDedEncoding$state[tos_state.current_node] = SecDedEncoding$IDLE_STATE;
  dbg(DBG_ENCODE, "Decoded 0x%x to 0x%hhx with error %i\n", (((SecDedEncoding$data1[tos_state.current_node] << 16) | (SecDedEncoding$data2[tos_state.current_node] << 8)) | SecDedEncoding$data3[tos_state.current_node]) & 0xffffff, (char )((encoded_value >> 5) & 0xff), (int )error);
  SecDedEncoding$Code$decodeDone((encoded_value >> 5) & 0xff, error);
}

static inline  
#line 62
result_t SecDedEncoding$Code$decode(char d1)
#line 62
{
  if (SecDedEncoding$state[tos_state.current_node] == SecDedEncoding$IDLE_STATE) {
      SecDedEncoding$state[tos_state.current_node] = SecDedEncoding$DECODING_BYTE_1;
      SecDedEncoding$data1[tos_state.current_node] = d1;
      return 1;
    }
  else {
#line 67
    if (SecDedEncoding$state[tos_state.current_node] == SecDedEncoding$DECODING_BYTE_1) {
        SecDedEncoding$state[tos_state.current_node] = SecDedEncoding$DECODING_BYTE_2;
        SecDedEncoding$data2[tos_state.current_node] = d1;
        return 1;
      }
    else {
#line 71
      if (SecDedEncoding$state[tos_state.current_node] == SecDedEncoding$DECODING_BYTE_2) {
          SecDedEncoding$state[tos_state.current_node] = SecDedEncoding$DECODING_BYTE_3;
          SecDedEncoding$data3[tos_state.current_node] = d1;
          SecDedEncoding$radio_decode_thread();
          return 1;
        }
      }
    }
#line 77
  return 0;
}

# 35 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t MicaHighSpeedRadioM$Code$decode(char arg_0x8bbb3a0){
#line 35
  unsigned char result;
#line 35

#line 35
  result = SecDedEncoding$Code$decode(arg_0x8bbb3a0);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 34 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
inline static  result_t MicaHighSpeedRadioM$ChannelMon$startSymbolSearch(void){
#line 34
  unsigned char result;
#line 34

#line 34
  result = ChannelMonC$ChannelMon$startSymbolSearch();
#line 34

#line 34
  return result;
#line 34
}
#line 34
static inline  
# 252 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet)
#line 252
{
  return received(packet);
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr CrcFilter$UpperReceive$receive(TOS_MsgPtr arg_0x896da10){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$RadioReceive$receive(arg_0x896da10);
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline  
# 52 "/opt/tinyos-1.x/tos/system/CrcFilter.nc"
TOS_MsgPtr CrcFilter$LowerReceive$receive(TOS_MsgPtr msg)
#line 52
{
  if (msg->crc) {
      dbg(DBG_CRC, "CrcFilter: Packet passed CRC, signaling.\n");
      return CrcFilter$UpperReceive$receive(msg);
    }
  else {
      dbg(DBG_CRC, "CrcFilter: Packet failed CRC.\n");
      return msg;
    }
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr MicaHighSpeedRadioM$Receive$receive(TOS_MsgPtr arg_0x896da10){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = CrcFilter$LowerReceive$receive(arg_0x896da10);
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline  
# 93 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
void MicaHighSpeedRadioM$packetReceived(void)
#line 93
{
  TOS_MsgPtr tmp;

#line 95
  MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  tmp = MicaHighSpeedRadioM$Receive$receive((TOS_Msg *)MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]);
  if (tmp != 0) {
#line 97
    MicaHighSpeedRadioM$rec_ptr[tos_state.current_node] = tmp;
    }
#line 98
  MicaHighSpeedRadioM$ChannelMon$startSymbolSearch();
}

# 271 "/opt/tinyos-1.x/tos/platform/pc/hardware.nido.h"
static __inline void TOSH_CLR_RFM_CTL0_PIN(void)
#line 271
{
#line 271
  clear_io_bit(0x43, 7);
}

static inline   
# 167 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$radioTxMode(void)
#line 167
{
  if (!prof_on) {
#line 168
    return;
    }
#line 169
  dbg(DBG_POWER, "POWER: Mote %d RADIO_STATE TX at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 45 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void SpiByteFifoC$PowerState$radioTxMode(void){
#line 45
  PowerStateM$PowerState$radioTxMode();
#line 45
}
#line 45
static inline  
# 134 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
result_t SpiByteFifoC$SpiByteFifo$txMode(void)
#line 134
{
  SpiByteFifoC$radioState[tos_state.current_node] = SpiByteFifoC$RADIO_SENDING;
  SpiByteFifoC$PowerState$radioTxMode();
  TOSH_CLR_RFM_CTL0_PIN();
  TOSH_SET_RFM_CTL1_PIN();
  return SUCCESS;
}

# 36 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$txMode(void){
#line 36
  unsigned char result;
#line 36

#line 36
  result = SpiByteFifoC$SpiByteFifo$txMode();
#line 36

#line 36
  return result;
#line 36
}
#line 36
static inline   
# 442 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr msg, result_t success)
#line 442
{
  return FAIL;
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0x88cd5c0, result_t arg_0x88cd710){
#line 67
  unsigned char result;
#line 67

#line 67
  result = Nido$RadioSendMsg$default$sendDone(arg_0x88cd5c0, arg_0x88cd710);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 446 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void   packet_sim_transmit_done(TOS_MsgPtr msg)
#line 446
{
  dbg(DBG_PACKET, "TossimPacketMica2M: Send done.\n");
  Nido$RadioSendMsg$sendDone(msg, SUCCESS);
}

# 277 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
void   event_send_packet_done_handle(event_t *event, struct TOS_state *state)
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

#line 266
void   event_send_packet_done_create(event_t *event, int node, long long eventTime)
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

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0x896da10){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$RadioReceive$receive(arg_0x896da10);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 451 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void   packet_sim_receive_msg(TOS_MsgPtr msg)
#line 451
{
  msg = Nido$RadioReceiveMsg$receive(msg);
}

# 239 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
void   event_receive_packet_handle(event_t *event, struct TOS_state *state)
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

#line 228
void   event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg)
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

#line 174
void   event_start_transmit_handle(event_t *event, struct TOS_state *state)
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

static inline 
#line 155
void event_start_transmit_create(event_t *event, int node, long long eventTime)
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

#line 141
void   event_backoff_handle(event_t *event, struct TOS_state *state)
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

# 107 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void   event_boot_handle(event_t *fevent, 
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

static inline  
# 29 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
result_t NeighborTableM$StdControl$init(void)
{

  return SUCCESS;
}

# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t SarpM$SubControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = AMStandard$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
inline static  result_t SarpM$CommControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = AMStandard$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline   
# 68 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
result_t LedsM$Leds$init(void)
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
inline static   result_t SarpM$Leds$init(void){
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
static inline  
# 213 "SarpM.nc"
result_t SarpM$StdControl$init(void)
{
  SarpM$Leds$init();
  SarpM$CommControl$init();
  SarpM$SubControl$init();
  SarpM$readInQHere[tos_state.current_node] = 0;
  SarpM$writeInQHere[tos_state.current_node] = 0;
  SarpM$readOutQHere[tos_state.current_node] = 0;
  SarpM$writeOutQHere[tos_state.current_node] = 0;
  SarpM$numMsgInQ[tos_state.current_node] = 0;
  SarpM$numMsgOutQ[tos_state.current_node] = 0;

  SarpM$myAddr[tos_state.current_node] = (uint16_t )TOS_LOCAL_ADDRESS;
  SarpM$oneHopQuickGlance[tos_state.current_node] = 0;
  SarpM$twoHopQuickGlance[tos_state.current_node] = 0;
  SarpM$myStaticParent[tos_state.current_node].node_id = NO_PARENT;
  SarpM$myStaticParent[tos_state.current_node].level = NO_LEVEL;
  SarpM$myStaticParent[tos_state.current_node].parent_id = NO_PARENT;
  SarpM$numChildren[tos_state.current_node] = 0;

  SarpM$numOneHopNeighbors[tos_state.current_node] = 0;
  SarpM$numChildren[tos_state.current_node] = 0;
  neighborFound = 0;
  oneHopFound = 0;
  SarpM$numNeighbors[tos_state.current_node] = 0;

  SarpM$myZero[tos_state.current_node] = 0;
  SarpM$myOne[tos_state.current_node] = 1;


  if (SarpM$myAddr[tos_state.current_node] == 0) 
    {
      SarpM$myLevel[tos_state.current_node] = 0;
    }
  else 
    {
      SarpM$myLevel[tos_state.current_node] = NO_LEVEL;
    }

  SarpM$TRANSACTION_ID[tos_state.current_node] = SarpM$myAddr[tos_state.current_node] * 10000;




  return SUCCESS;
}

# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = SarpM$StdControl$init();
#line 63
  result = rcombine(result, TimerM$StdControl$init());
#line 63
  result = rcombine(result, NeighborTableM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
inline static  result_t AMStandard$TimerControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TimerM$StdControl$init();
#line 63
  result = rcombine(result, TimerM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline   
# 128 "/opt/tinyos-1.x/tos/platform/pc/HPLClock.nc"
result_t HPLClock$Clock$setRate(char interval, char scale)
#line 128
{
  HPLClock$mscale[tos_state.current_node] = scale;
  HPLClock$minterval[tos_state.current_node] = interval;
  TOSH_clock_set_rate(interval, scale);
  return SUCCESS;
}

# 96 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t TimerM$Clock$setRate(char arg_0x8a489d0, char arg_0x8a48b10){
#line 96
  unsigned char result;
#line 96

#line 96
  result = HPLClock$Clock$setRate(arg_0x8a489d0, arg_0x8a48b10);
#line 96

#line 96
  return result;
#line 96
}
#line 96
static inline  
# 55 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
result_t UARTNoCRCPacketM$Control$init(void)
#line 55
{
  dbg(DBG_BOOT, "UART initialized.\n");
  return SUCCESS;
}

# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = UARTNoCRCPacketM$Control$init();
#line 63
  result = rcombine(result, UARTNoCRCPacketM$Control$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline   
# 59 "/opt/tinyos-1.x/tos/system/RandomLFSR.nc"
result_t RandomLFSR$Random$init(void)
#line 59
{
  dbg(DBG_BOOT, "RANDOM_LFSR initialized.\n");
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      RandomLFSR$shiftReg[tos_state.current_node] = 119 * 119 * (TOS_LOCAL_ADDRESS + 1);
      RandomLFSR$initSeed[tos_state.current_node] = RandomLFSR$shiftReg[tos_state.current_node];
      RandomLFSR$mask[tos_state.current_node] = 137 * 29 * (TOS_LOCAL_ADDRESS + 1);
    }
#line 65
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 57 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
inline static   result_t MicaHighSpeedRadioM$Random$init(void){
#line 57
  unsigned char result;
#line 57

#line 57
  result = RandomLFSR$Random$init();
#line 57

#line 57
  return result;
#line 57
}
#line 57
static inline  
# 56 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
result_t ChannelMonC$ChannelMon$init(void)
#line 56
{
  ChannelMonC$CM_waiting[tos_state.current_node] = -1;
  return ChannelMonC$ChannelMon$startSymbolSearch();
}

# 33 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
inline static  result_t MicaHighSpeedRadioM$ChannelMon$init(void){
#line 33
  unsigned char result;
#line 33

#line 33
  result = ChannelMonC$ChannelMon$init();
#line 33

#line 33
  return result;
#line 33
}
#line 33
static inline  
# 136 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$Control$init(void)
#line 136
{
  MicaHighSpeedRadioM$rec_ptr[tos_state.current_node] = &MicaHighSpeedRadioM$buffer[tos_state.current_node];
  MicaHighSpeedRadioM$send_state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  return rcombine(MicaHighSpeedRadioM$ChannelMon$init(), MicaHighSpeedRadioM$Random$init());
}

static inline  
# 60 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
result_t PacketSink$Control$init(void)
#line 60
{
  return SUCCESS;
}

# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = PacketSink$Control$init();
#line 63
  result = rcombine(result, MicaHighSpeedRadioM$Control$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 36 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
result_t NeighborTableM$StdControl$start(void)
{
  return SUCCESS;
}

static inline  
# 87 "/opt/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$StdControl$start(void)
#line 87
{
  return SUCCESS;
}

# 70 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t SarpM$CommControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = AMStandard$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
inline static  result_t SarpM$SubControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = AMStandard$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 260 "SarpM.nc"
result_t SarpM$StdControl$start(void)
{
  SarpM$SubControl$start();
  SarpM$CommControl$start();





  TOS_post(SarpM$startApp);
  SarpM$OkToStart[tos_state.current_node] = FALSE;



  return SUCCESS;
}

# 70 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = SarpM$StdControl$start();
#line 70
  result = rcombine(result, TimerM$StdControl$start());
#line 70
  result = rcombine(result, NeighborTableM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
inline static  result_t AMStandard$TimerControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TimerM$StdControl$start();
#line 70
  result = rcombine(result, TimerM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 60 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
result_t UARTNoCRCPacketM$Control$start(void)
#line 60
{
  dbg(DBG_BOOT, "UART started.\n");
  return SUCCESS;
}

# 70 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = UARTNoCRCPacketM$Control$start();
#line 70
  result = rcombine(result, UARTNoCRCPacketM$Control$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline   
# 185 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$radioStart(void)
#line 185
{
  if (!prof_on) {
#line 186
    return;
    }
#line 187
  dbg(DBG_POWER, "POWER: Mote %d RADIO_STATE ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 48 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void MicaHighSpeedRadioM$PowerState$radioStart(void){
#line 48
  PowerStateM$PowerState$radioStart();
#line 48
}
#line 48
static inline  
# 129 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$Control$start(void)
#line 129
{
  MicaHighSpeedRadioM$PowerState$radioStart();
  return SUCCESS;
}

static inline  
# 64 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
result_t PacketSink$Control$start(void)
#line 64
{
  return SUCCESS;
}

# 70 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = PacketSink$Control$start();
#line 70
  result = rcombine(result, MicaHighSpeedRadioM$Control$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMStandard$ActivityTimer$start(char arg_0x8a28b18, uint32_t arg_0x8a28c70){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(11, arg_0x8a28b18, arg_0x8a28c70);
#line 59
  result = rcombine(result, TimerM$Timer$start(10, arg_0x8a28b18, arg_0x8a28c70));
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t AMStandard$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
static inline 
# 133 "/opt/tinyos-1.x/tos/system/tos.h"
result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4)
{
  return rcombine(r1, rcombine(r2, rcombine(r3, r4)));
}

static inline 
# 79 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
void __nesc_atomic_sleep(void)
{
}

# 107 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
void dbg_help(void )
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

static inline 
# 74 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void Nido$usage(char *progname)
#line 74
{
  fprintf(stderr, "Usage: %s [-h|--help] [options] num_nodes_total\n", progname);
  exit(-1);
}

# 58 "/opt/tinyos-1.x/tos/platform/pc/dbg.c"
void dbg_add_mode(const char *name)
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
void dbg_add_modes(const char *modes)
#line 84
{
  char env[256];
  char *name;

  strncpy(env, modes, sizeof env);
  for (name = strtok(env, ","); name; name = strtok((void *)0, ",")) 
    dbg_add_mode(name);
}

void dbg_init(void )
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

static inline 
# 311 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
int PowerStateM$num_bbs(void)
#line 311
{

  int POWERPROF_NUM_BBS;

#line 314
  return POWERPROF_NUM_BBS;
}

static inline   
#line 23
result_t PowerStateM$PowerState$init(int prof, int cpu_prof)
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
inline static   result_t Nido$PowerState$init(int arg_0x898a520, int arg_0x898a668){
#line 14
  unsigned char result;
#line 14

#line 14
  result = PowerStateM$PowerState$init(arg_0x898a520, arg_0x898a668);
#line 14

#line 14
  return result;
#line 14
}
#line 14
static inline 
# 40 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
void handle_signal(int sig)
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

static inline 
# 124 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
link_t *simple_neighbors(int moteID)
#line 124
{
  link_t *thelink;

#line 126
  pthread_mutex_lock(&radioConnectivityLock);
  thelink = radio_connectivity[moteID];
  pthread_mutex_unlock(&radioConnectivityLock);
  return thelink;
}

static inline 
#line 78
bool simple_connected(int moteID1, int moteID2)
#line 78
{
  return TRUE;
}

static inline 
#line 112
char simple_hears(int moteID)
#line 112
{







  return radio_active[moteID] > 0 ? 1 : 0;
}

static inline 
#line 101
void simple_stops_transmit(int moteID)
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

static inline 
#line 92
void simple_transmit(int moteID, char bit)
#line 92
{
  int i;

  transmitting[moteID] = bit;
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] += bit;
    }
}

static inline 
#line 82
void simple_init(void)
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

static inline 
#line 132
rfm_model *create_simple_model(void)
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

static inline 
#line 512
link_t *lossy_neighbors(int moteID)
#line 512
{
  link_t *thelink;

#line 514
  pthread_mutex_lock(&radioConnectivityLock);
  thelink = radio_connectivity[moteID];
  pthread_mutex_unlock(&radioConnectivityLock);
  return thelink;
}

static inline 
#line 313
bool lossy_connected(int moteID1, int moteID2)
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

static inline 
#line 371
char lossy_hears(int moteID)
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

static inline 
#line 357
void lossy_stop_transmit(int moteID)
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

static inline 
#line 336
void lossy_transmit(int moteID, char bit)
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

static inline 
#line 392
int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss)
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

static inline 








rfm_model *create_lossy_model(char *file)
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

static inline 
# 83 "/opt/tinyos-1.x/tos/platform/pc/adc_model.c"
uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime)
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

static inline 
#line 72
void generic_adc_init(void)
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

static inline 
#line 99
adc_model *create_generic_adc_model(void)
#line 99
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 101
  model->init = generic_adc_init;
  model->read = generic_adc_read;
  return model;
}

static inline 
#line 50
uint16_t random_adc_read(int moteID, uint8_t port, long long ftime)
#line 50
{
  return (uint16_t )(rand() & 0x3ff);
}

static inline 
#line 48
void random_adc_init(void)
#line 48
{
}

static inline 


adc_model *create_random_adc_model(void)
#line 54
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 56
  model->init = random_adc_init;
  model->read = random_adc_read;
  return model;
}

static inline 
# 136 "/opt/tinyos-1.x/tos/platform/pc/eeprom.c"
int namedEEPROM(char *name, int fnumMotes, int eepromSize)
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

static inline 
#line 123
int anonymousEEPROM(int fnumMotes, int eepromSize)
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

static inline 
# 63 "/opt/tinyos-1.x/tos/platform/pc/spatial_model.c"
void simple_spatial_get_position(int moteID, long long ftime, point3D *point)
#line 63
{
  point->xCoordinate = points[moteID].xCoordinate;
  point->yCoordinate = points[moteID].yCoordinate;
  point->zCoordinate = points[moteID].zCoordinate;
}

static inline 
#line 51
void simple_spatial_init(void)
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

static inline 







spatial_model *create_simple_spatial_model(void)
#line 70
{
  spatial_model *model = (spatial_model *)malloc(sizeof(spatial_model ));

#line 72
  model->init = simple_spatial_init;
  model->get_position = simple_spatial_get_position;

  return model;
}

static inline 
# 130 "/opt/tinyos-1.x/tos/platform/pc/nido.h"
void tos_state_model_init(void )
{
  tos_state.space->init();
  tos_state.rfm->init();
  tos_state.adc->init();
}

static inline 
# 91 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
void packet_sim_init(void)
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

static inline 
# 51 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
void init_hardware(void)
#line 51
{
  int i;

#line 53
  for (i = 0; i < tos_state.num_nodes; i++) {
      tos_state.current_node = i;
      TOSH_pc_hardware.status_register = 0xff;
    }
}

static inline 
# 68 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
void init_heap(heap_t *heap)
#line 68
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

static inline 
# 51 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
void queue_init(event_queue_t *queue, int fpause)
#line 51
{
  init_heap(& queue->heap);
  queue->pause = fpause;
  pthread_mutex_init(& queue->lock, (void *)0);
}

static inline 
# 359 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void event_command_cleanup(event_t *event)
#line 359
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;

#line 361
  free(cmdData->msg);
  free(cmdData->payLoad);
  event_total_cleanup(event);
}

static inline  
# 246 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet)
#line 246
{


  packet->group = TOS_AM_GROUP;
  return received(packet);
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0x896da10){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$UARTReceive$receive(arg_0x896da10);
#line 75
  result = AMStandard$UARTReceive$receive(arg_0x896da10);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 426 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
TOS_MsgPtr   NIDO_received_uart(TOS_MsgPtr packet)
#line 426
{
  packet->crc = 1;
  return Nido$UARTReceiveMsg$receive(packet);
}

#line 416
TOS_MsgPtr   NIDO_received_radio(TOS_MsgPtr packet)
#line 416
{
  packet->crc = 1;
  return Nido$RadioReceiveMsg$receive(packet);
}

static inline  
# 42 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
result_t NeighborTableM$StdControl$stop(void)
{
  return SUCCESS;
}

static inline  
# 91 "/opt/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$StdControl$stop(void)
#line 91
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  return SUCCESS;
}

# 78 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t SarpM$SubControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = AMStandard$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
inline static  result_t SarpM$CommControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = AMStandard$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
static inline  
# 277 "SarpM.nc"
result_t SarpM$StdControl$stop(void)
{
  SarpM$CommControl$stop();
  SarpM$SubControl$stop();
  return SUCCESS;
}

# 78 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = SarpM$StdControl$stop();
#line 78
  result = rcombine(result, TimerM$StdControl$stop());
#line 78
  result = rcombine(result, NeighborTableM$StdControl$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 402 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void   nido_stop_mote(uint16_t moteID)
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

static inline 
# 519 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void event_command_in_handle(event_t *event, 
struct TOS_state *state)
#line 520
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;
  GuiMsg *msg = cmdData->msg;

#line 523
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
#line 545
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
#line 561
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

#line 573
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

static inline 
#line 367
void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad)
#line 369
{
  incoming_command_data_t *data = (incoming_command_data_t *)malloc(sizeof(incoming_command_data_t ));

#line 371
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
void dbg_set(TOS_dbg_mode modes)
#line 54
{
  dbg_modes = modes;
}

static inline 
# 80 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
void rate_checkpoint(void)
#line 80
{
  rate_checkpoint_time = tos_state.tos_time;
  gettimeofday(&startTime, (void *)0);
}

static inline 
#line 76
void set_rate_value(double rate)
#line 76
{
  rate_value = rate;
}

# 455 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void   set_sim_rate(uint32_t rate)
#line 455
{
  double realRate = (double )rate;

#line 457
  realRate /= 1000.0;
  dbg_clear(DBG_SIM, "SIM: Setting rate to %lf\n", realRate);
  set_rate_value(realRate);
  rate_checkpoint();
}

static inline 
# 106 "/opt/tinyos-1.x/tos/platform/pc/adc_model.c"
void set_adc_value(int moteID, uint8_t port, uint16_t value)
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

static inline 
# 550 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob)
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

static inline 
# 389 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
int processCommand(int clifd, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen)
#line 390
{
  int ret = 0;

#line 392
  switch (msg->msgType) {

      case AM_SETLINKPROBCOMMAND: 
        {
          SetLinkProbCommand *linkmsg = (SetLinkProbCommand *)payLoad;
          double prob = (double )linkmsg->scaledProb / 10000;

#line 398
          set_link_prob_value(msg->moteID, linkmsg->moteReceiver, prob);
          break;
        }
      case AM_SETADCPORTVALUECOMMAND: 
        {
          SetADCPortValueCommand *adcmsg = (SetADCPortValueCommand *)payLoad;

#line 404
          set_adc_value(msg->moteID, adcmsg->port, adcmsg->value);
          break;
        }
      case AM_SETRATECOMMAND: 
        {
          SetRateCommand *ratemsg = (SetRateCommand *)payLoad;

#line 410
          set_sim_rate(ratemsg->rate);
          break;
        }
      case AM_VARIABLERESOLVECOMMAND: 
        {
          VariableResolveResponse varResult;
          VariableResolveCommand *rmsg = (VariableResolveCommand *)payLoad;







          if (
#line 422
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

#line 443
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

#line 476
          dbg_set(cmd->dbg);
          break;
        }
      case AM_SETEVENTMASKCOMMAND: 
        {
          SetEventMaskCommand *setMaskCommand = (SetEventMaskCommand *)payLoad;

#line 482
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

#line 509
          event_command_in_create(event, msg, payLoad);
          dbg(DBG_SIM, "SIM: Enqueuing command event 0x%lx\n", (unsigned long )event);
          queue_insert_event(& tos_state.queue, event);
#line 511
          ;
        }
    }

  return ret;
}

static inline 
#line 590
int readTossimCommand(int clifd, int clidx)
#line 590
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
#line 615
        {
          curlen += rval;
        }
    }


  msg->msgType = ntohs(* (unsigned short *)&header[0]);
  msg->moteID = ntohs(* (unsigned short *)&header[2]);
  msg->time = __extension__ ({
#line 623
    union __nesc_unnamed4366 {
#line 623
      __extension__ unsigned long long int __ll;
#line 623
      unsigned long int __l[2];
    } 
#line 623
    __w;
#line 623
    union __nesc_unnamed4366 __r;

#line 623
    if (__builtin_constant_p(* (long long *)&header[4])) {
#line 623
      __r.__ll = ((((((((* (long long *)&header[4] & 0xff00000000000000ull) >> 56) | ((* (long long *)&header[4] & 0x00ff000000000000ull) >> 40)) | ((* (long long *)&header[4] & 0x0000ff0000000000ull) >> 24)) | ((* (long long *)&header[4] & 0x000000ff00000000ull) >> 8)) | ((* (long long *)&header[4] & 0x00000000ff000000ull) << 8)) | ((* (long long *)&header[4] & 0x0000000000ff0000ull) << 24)) | ((* (long long *)&header[4] & 0x000000000000ff00ull) << 40)) | ((* (long long *)&header[4] & 0x00000000000000ffull) << 56);
      }
    else 
#line 623
      {
#line 623
        __w.__ll = * (long long *)&header[4];
#line 623
        __r.__l[0] = __extension__ ({
#line 623
          register unsigned int __v;
#line 623
          register unsigned int __x = __w.__l[1];

#line 623
          if (__builtin_constant_p(__x)) {
#line 623
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 623
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 623
          __v;
        }
        );
#line 623
        __r.__l[1] = __extension__ ({
#line 623
          register unsigned int __v;
#line 623
          register unsigned int __x = __w.__l[0];

#line 623
          if (__builtin_constant_p(__x)) {
#line 623
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 623
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 623
          __v;
        }
        );
      }
#line 623
    __r.__ll;
  }
  );
#line 624
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
#line 642
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
#line 670
  rval != 1);

  if (reply) {
      dbg(DBG_SIM, "SIM: Sending %d byte reply.\n", replyLen);
      writeTossimEvent(replyMsg, replyLen, clifd);
      free(replyMsg);
    }

  done: 
    return 0;
}

static inline 



void *commandReadThreadFunc(void *arg)
#line 686
{
  int i;
  fd_set readset;
#line 688
  fd_set exceptset;
  int highest;
  int numclients;

  dbg_clear(DBG_SIM, "SIM: commandReadThread running.\n");

  while (1) {

      do {
#line 696
          int __d0;
#line 696
          int __d1;

#line 696
           __asm volatile ("cld; rep; stosl" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(fd_set ) / sizeof(__fd_mask )), "1"(&(&readset)->__fds_bits[0]) : "memory");}
      while (
#line 696
      0);
      do {
#line 697
          int __d0;
#line 697
          int __d1;

#line 697
           __asm volatile ("cld; rep; stosl" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(fd_set ) / sizeof(__fd_mask )), "1"(&(&exceptset)->__fds_bits[0]) : "memory");}
      while (
#line 697
      0);
       __asm volatile ("btsl %1,%0" : "=m"((&readset)->__fds_bits[commandServerSocket / (8 * sizeof(__fd_mask ))]) : "r"((int )commandServerSocket % (8 * sizeof(__fd_mask ))) : "cc", "memory");
       __asm volatile ("btsl %1,%0" : "=m"((&exceptset)->__fds_bits[commandServerSocket / (8 * sizeof(__fd_mask ))]) : "r"((int )commandServerSocket % (8 * sizeof(__fd_mask ))) : "cc", "memory");
      highest = commandServerSocket;
      numclients = 0;

      for (i = 0; i < 4; i++) {
          if (commandClients[i] != -1) {
              if (commandClients[i] > highest) {
#line 705
                highest = commandClients[i];
                }
#line 706
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
#line 730
            register char __result;

#line 730
             __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )commandClients[i] % (8 * sizeof(__fd_mask ))), "m"((&readset)->__fds_bits[commandClients[i] / (8 * sizeof(__fd_mask ))]) : "cc");__result;
          }
          )) 
#line 730
            {
              if (readTossimCommand(commandClients[i], i) < 0) {
                  close(commandClients[i]);
                  commandClients[i] = -1;
                }
            }
          if (commandClients[i] != -1 && __extension__ ({
#line 736
            register char __result;

#line 736
             __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )commandClients[i] % (8 * sizeof(__fd_mask ))), "m"((&exceptset)->__fds_bits[commandClients[i] / (8 * sizeof(__fd_mask ))]) : "cc");__result;
          }
          )) 
#line 736
            {

              close(commandClients[i]);
              commandClients[i] = -1;
            }
        }


      if (__extension__ ({
#line 744
        register char __result;

#line 744
         __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )commandServerSocket % (8 * sizeof(__fd_mask ))), "m"((&readset)->__fds_bits[commandServerSocket / (8 * sizeof(__fd_mask ))]) : "cc");__result;
      }
      )) 
#line 744
        {
          int clifd;

#line 746
          ;
          clifd = acceptConnection(commandServerSocket);
          ;
          addClient(commandClients, clifd);
        }
    }
  return 0;
}

static inline 
# 72 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
double get_rate_value(void)
#line 72
{
  return rate_value;
}

# 463 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
uint32_t   get_sim_rate(void)
#line 463
{
  return (uint32_t )(1000.0 * get_rate_value());
}

static inline 
# 293 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void sendInitEvent(int clifd)
#line 293
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

static inline 



void *eventAcceptThreadFunc(void *arg)
#line 312
{
  int clifd;
  fd_set acceptset;

  dbg_clear(DBG_SIM, "SIM: eventAcceptThread running.\n");

  while (1) {
      do {
#line 319
          int __d0;
#line 319
          int __d1;

#line 319
           __asm volatile ("cld; rep; stosl" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(fd_set ) / sizeof(__fd_mask )), "1"(&(&acceptset)->__fds_bits[0]) : "memory");}
      while (
#line 319
      0);
       __asm volatile ("btsl %1,%0" : "=m"((&acceptset)->__fds_bits[eventServerSocket / (8 * sizeof(__fd_mask ))]) : "r"((int )eventServerSocket % (8 * sizeof(__fd_mask ))) : "cc", "memory");
      ;
      if (select(eventServerSocket + 1, &acceptset, (void *)0, (void *)0, (void *)0) < 0) {
          ;
        }
      ;

      if (__extension__ ({
#line 327
        register char __result;

#line 327
         __asm volatile ("btl %1,%2 ; setcb %b0" : "=q"(__result) : "r"((int )eventServerSocket % (8 * sizeof(__fd_mask ))), "m"((&acceptset)->__fds_bits[eventServerSocket / (8 * sizeof(__fd_mask ))]) : "cc");__result;
      }
      )) 
#line 327
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

static inline 
#line 132
void initializeSockets(void)
#line 132
{
  int i;

#line 134
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

static inline  
# 65 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
result_t UARTNoCRCPacketM$Control$stop(void)
#line 65
{
  dbg(DBG_BOOT, "UART stopped.\n");
  return SUCCESS;
}

# 78 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = UARTNoCRCPacketM$Control$stop();
#line 78
  result = rcombine(result, UARTNoCRCPacketM$Control$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
static inline   
# 191 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$PowerState$radioStop(void)
#line 191
{
  if (!prof_on) {
#line 192
    return;
    }
#line 193
  dbg(DBG_POWER, "POWER: Mote %d RADIO_STATE OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 49 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void MicaHighSpeedRadioM$PowerState$radioStop(void){
#line 49
  PowerStateM$PowerState$radioStop();
#line 49
}
#line 49
static inline  
# 124 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$Control$stop(void)
#line 124
{
  MicaHighSpeedRadioM$PowerState$radioStop();
  return SUCCESS;
}

static inline  
# 68 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
result_t PacketSink$Control$stop(void)
#line 68
{
  return SUCCESS;
}

# 78 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = PacketSink$Control$stop();
#line 78
  result = rcombine(result, MicaHighSpeedRadioM$Control$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 68 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMStandard$ActivityTimer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(11);
#line 68
  result = rcombine(result, TimerM$Timer$stop(10));
#line 68

#line 68
  return result;
#line 68
}
#line 68
static inline 
# 128 "/opt/tinyos-1.x/tos/system/tos.h"
result_t rcombine3(result_t r1, result_t r2, result_t r3)
{
  return rcombine(r1, rcombine(r2, r3));
}

static inline 
# 232 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void waitForGuiConnection(void)
#line 232
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

static inline 
# 43 "/opt/tinyos-1.x/tos/platform/pc/events.c"
void event_default_cleanup(event_t *event)
#line 43
{
  free(event->data);
  dbg(DBG_MEM, "event_default_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

static inline 
# 78 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
int is_empty(heap_t *heap)
#line 78
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 82
{
  return is_empty(heap);
}

static inline 
# 86 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
int queue_is_empty(event_queue_t *queue)
#line 86
{
  int rval;

#line 88
  pthread_mutex_lock(& queue->lock);
  rval = heap_is_empty(& queue->heap);
  pthread_mutex_unlock(& queue->lock);
  return rval;
}

static inline 
# 86 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
long long heap_get_min_key(heap_t *heap)
#line 86
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

static inline 
# 94 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
long long queue_peek_event_time(event_queue_t *queue)
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

static inline 
#line 63
event_t *queue_pop_event(event_queue_t *queue)
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

static inline 
#line 109
void queue_handle_next_event(event_queue_t *queue)
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

static inline 
# 86 "/opt/tinyos-1.x/tos/platform/pc/tos.c"
void rate_based_wait(void)
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

static inline 
# 339 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
void PowerStateM$print_power_info(void)
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

static inline   
#line 389
void PowerStateM$PowerState$CPUCycleCheckpoint(void)
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
static inline 
# 317 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
int PowerStateM$bb_exec_count(int mote, int bb)
#line 317
{
  int POWERPROF_BB_EXEC_COUNT;

#line 319
  return POWERPROF_BB_EXEC_COUNT;
}

static inline 
#line 361
void PowerStateM$dump_power_details(void)
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

static inline   
#line 54
result_t PowerStateM$PowerState$stop(void)
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
# 92 "/opt/tinyos-1.x/tos/types/dbg.h"
static void dbg(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

#line 95
  if (dbg_active(mode)) {
      va_list args;

      if (!(mode & DBG_SIM)) {
          __builtin_stdarg_start(args, format);
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
          __builtin_va_end(args);
        }
      if (!dbg_suppress_stdout) {
          __builtin_stdarg_start(args, format);

          fprintf(stdout, "%i: ", tos_state.current_node);
          vfprintf(stdout, format, args);
          __builtin_va_end(args);
        }
    }
}

static 
# 852 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data)
#line 852
{
  unsigned char *msg;
  int total_size;
  int n;
  int numclients = 0;
  int clients[4];

  if (!socketsInitialized) {
#line 859
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
#line 875
        if (numclients == 0) {

            pthread_mutex_unlock(&eventClientsLock);
            return;
          }
        }
    }
#line 881
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

static 
#line 792
void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp)
#line 793
{
  unsigned char *msg;
  int payload_size;
#line 795
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
#line 838
    union __nesc_unnamed4367 {
#line 838
      __extension__ unsigned long long int __ll;
#line 838
      unsigned long int __l[2];
    } 
#line 838
    __w;
#line 838
    union __nesc_unnamed4367 __r;

#line 838
    if (__builtin_constant_p(ftime)) {
#line 838
      __r.__ll = ((((((((ftime & 0xff00000000000000ull) >> 56) | ((ftime & 0x00ff000000000000ull) >> 40)) | ((ftime & 0x0000ff0000000000ull) >> 24)) | ((ftime & 0x000000ff00000000ull) >> 8)) | ((ftime & 0x00000000ff000000ull) << 8)) | ((ftime & 0x0000000000ff0000ull) << 24)) | ((ftime & 0x000000000000ff00ull) << 40)) | ((ftime & 0x00000000000000ffull) << 56);
      }
    else 
#line 838
      {
#line 838
        __w.__ll = ftime;
#line 838
        __r.__l[0] = __extension__ ({
#line 838
          register unsigned int __v;
#line 838
          register unsigned int __x = __w.__l[1];

#line 838
          if (__builtin_constant_p(__x)) {
#line 838
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 838
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 838
          __v;
        }
        );
#line 838
        __r.__l[1] = __extension__ ({
#line 838
          register unsigned int __v;
#line 838
          register unsigned int __x = __w.__l[0];

#line 838
          if (__builtin_constant_p(__x)) {
#line 838
            __v = ((((__x & 0xff000000) >> 24) | ((__x & 0x00ff0000) >> 8)) | ((__x & 0x0000ff00) << 8)) | ((__x & 0x000000ff) << 24);
            }
          else {
#line 838
             __asm ("rorw $8, %w0;""rorl $16, %0;""rorw $8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            }
#line 838
          __v;
        }
        );
      }
#line 838
    __r.__ll;
  }
  );
#line 839
  * (unsigned short *)&msg[12] = htons(payload_size);
  memcpy((unsigned char *)msg + 14, data, payload_size);

  ;


  *msgp = msg;
  *lenp = total_size;
}

static 
#line 761
int writeTossimEvent(void *data, int datalen, int clifd)
#line 761
{
  unsigned char ack;
  int i;
#line 763
  int j;









  ;
  j = 0;


  i = send(clifd, data, datalen, 0);
  ;
  if (i >= 0) {
#line 779
    j = read(clifd, &ack, 1);
    }
#line 780
  ;
  if (i < 0 || j < 0) {
      ;
      close(clifd);
      return -1;
    }


  ;
  return 0;
}

# 215 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr   received(TOS_MsgPtr packet)
#line 215
{
  uint16_t addr = TOS_LOCAL_ADDRESS;

#line 217
  AMStandard$counter[tos_state.current_node]++;
  dbg(DBG_AM, "AM_address = %hx, %hhx; counter:%i\n", packet->addr, packet->type, (int )AMStandard$counter[tos_state.current_node]);


  if (
#line 220
  packet->crc == 1 && 
  packet->group == TOS_AM_GROUP && (
  packet->addr == TOS_BCAST_ADDR || 
  packet->addr == addr)) 
    {

      uint8_t type = packet->type;
      TOS_MsgPtr tmp;

      dbg(DBG_AM, "Received message:\n\t");
      AMStandard$dbgPacket(packet);
      dbg(DBG_AM, "AM_type = %d\n", type);


      tmp = AMStandard$ReceiveMsg$receive(type, packet);
      if (tmp) {
        packet = tmp;
        }
    }
#line 238
  return packet;
}

static 
#line 132
void AMStandard$dbgPacket(TOS_MsgPtr data)
#line 132
{
  uint8_t i;

  for (i = 0; i < sizeof(TOS_Msg ); i++) 
    {
      dbg_clear(DBG_AM, "%02hhx ", ((uint8_t *)data)[i]);
    }
  dbg_clear(DBG_AM, "\n");
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
          __builtin_stdarg_start(args, format);
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
          __builtin_va_end(args);
        }
      if (!dbg_suppress_stdout) {
          __builtin_stdarg_start(args, format);

          vfprintf(stdout, format, args);
          __builtin_va_end(args);
        }
    }
}

static  
# 1073 "SarpM.nc"
TOS_MsgPtr SarpM$Receive$receive(TOS_MsgPtr n)
{
  int8_t loopCounter;
#line 1075
  int8_t *put;
#line 1075
  int8_t *get;

  if (n->type == SPECIFIC_REPORT_REQUEST_MSG_TYPE) {
    dbg(DBG_USR1, "%d heard a SPECIFIC_REPORT_REQUEST_MSG_TYPE message.\r\n", SarpM$myAddr[tos_state.current_node]);
    }






  if (n->type == DATA_MSG_TYPE) {
    dbg(DBG_USR1, "%d heard a DATA_MSG\r\n", SarpM$myAddr[tos_state.current_node]);
    }










  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      SarpM$inQ[tos_state.current_node][SarpM$writeInQHere[tos_state.current_node]].addr = n->addr;
      SarpM$inQ[tos_state.current_node][SarpM$writeInQHere[tos_state.current_node]].type = n->type;
      SarpM$inQ[tos_state.current_node][SarpM$writeInQHere[tos_state.current_node]].group = n->group;
      SarpM$inQ[tos_state.current_node][SarpM$writeInQHere[tos_state.current_node]].crc = n->crc;
      put = (int8_t *)& SarpM$inQ[tos_state.current_node][SarpM$writeInQHere[tos_state.current_node]].data;
      get = (int8_t *)& n->data;
      for (loopCounter = 0; loopCounter < 29; loopCounter++) 
        {
          *put = *get;
          put++;
          get++;
        }
      if (++SarpM$writeInQHere[tos_state.current_node] >= CIRCULAR_BUFFER_SIZE) {
        SarpM$writeInQHere[tos_state.current_node] = 0;
        }
#line 1115
      SarpM$numMsgInQ[tos_state.current_node]++;
      TOS_post(SarpM$processInMsg);
    }
#line 1117
    __nesc_atomic_end(__nesc_atomic); }


  return n;
}

static  
# 51 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/NeighborTableM.nc"
result_t NeighborTableM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parent_l, uint16_t *isOneHop)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      if (*isOneHop == 1) {
        dbg(DBG_USR1, "processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
        }
      else {
#line 59
        dbg(DBG_USR1, "processing: %d, not a one-hops, numone-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
        }


      oneHopFound = 0;
      for (NeighborTableM$nLoopCounter[tos_state.current_node] = 0; NeighborTableM$nLoopCounter[tos_state.current_node] < *numOneHopNeighbors; NeighborTableM$nLoopCounter[tos_state.current_node]++) 
        {
          if (myOneHopNeighbors[NeighborTableM$nLoopCounter[tos_state.current_node]]->node_id == nodeId_l) 
            {
              oneHopFound = 1;
              break;
            }
        }


      neighborFound = 0;
      for (NeighborTableM$nLoopCounter[tos_state.current_node] = 0; NeighborTableM$nLoopCounter[tos_state.current_node] < *numNeighbors; NeighborTableM$nLoopCounter[tos_state.current_node]++) 
        {
          if (neighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].node_id == nodeId_l) 
            {
              neighborFound = 1;

              if (neighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].level > level_l) 
                {

                  dbg(DBG_USR1, "%d updated %d level to %d\r\n", TOS_LOCAL_ADDRESS, nodeId_l, level_l);

                  neighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].level = level_l;
                }


              if (oneHopFound == *isOneHop) 
                {

                  if (neighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].parent_id != parent_l) {
                    neighbors[NeighborTableM$nLoopCounter[tos_state.current_node]].parent_id = parent_l;
                    }
                }
#line 96
              break;
            }
        }


      if (neighborFound == 0) 
        {

          neighbors[*numNeighbors].node_id = nodeId_l;
          neighbors[*numNeighbors].level = level_l;
          neighbors[*numNeighbors].parent_id = parent_l;
          neighbors[*numNeighbors].isOne = 0;
          neighbors[*numNeighbors].trust.trustFP = TRUST_FP_START;
          neighbors[*numNeighbors].trust.GFB = TRUST_GFB_START;
          neighbors[*numNeighbors].trust.BFB = TRUST_BFB_START;
          neighbors[*numNeighbors].trust.trustRH = TRUST_RH_START;
          neighbors[*numNeighbors].trust.GRB = TRUST_GRB_START;
          neighbors[*numNeighbors].trust.BRB = TRUST_BRB_START;
          neighbors[*numNeighbors].trust.trustAV = TRUST_AV_START;
          neighbors[*numNeighbors].trust.GAB = TRUST_GAB_START;
          neighbors[*numNeighbors].trust.BAB = TRUST_BAB_START;
          neighbors[*numNeighbors].trust.trustLP = TRUST_LP_START;
          neighbors[*numNeighbors].trust.GLB = TRUST_GLB_START;
          neighbors[*numNeighbors].trust.BLB = TRUST_BLB_START;
          neighbors[*numNeighbors].trust.trustPR = TRUST_PR_START;
          neighbors[*numNeighbors].trust.GLB = TRUST_GPB_START;
          neighbors[*numNeighbors].trust.BLB = TRUST_BPB_START;
          neighbors[*numNeighbors].trust.overallTrust = TRUST_OV_START;


          if (*isOneHop == 1) 
            {
              myOneHopNeighbors[*numOneHopNeighbors] = &neighbors[*numNeighbors];
              (*numOneHopNeighbors)++;

              dbg(DBG_USR1, "Incrementing one-hop neighbors to %d\r\n", *numOneHopNeighbors);

              neighbors[*numNeighbors].isOne = 1;
            }
          (*numNeighbors)++;

          dbg(DBG_USR1, "%d added node %d, level %d\r\n", TOS_LOCAL_ADDRESS, nodeId_l, level_l);
        }


      dbg(DBG_USR1, "Done processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
    }
#line 142
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

static  
# 228 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t whoIAm, uint16_t whoIHeard, uint16_t parent)
{

  dbg(DBG_USR1, "Sending the fact that %d heard %d to %d\r\n", whoIAm, whoIHeard, parent);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].addr = parent;
      outQ[*writeHere].type = CONTROL_MSG_TYPE;
      controlMsgOut = (ControlMsg *)outQ[*writeHere].data;
      controlMsgOut->msgType = CONTROL_NEIGHBOR_DISCOVERY_TYPE;
      controlMsgOut->data[0] = whoIAm;
      controlMsgOut->data[1] = whoIHeard;
      if (++ *writeHere >= maxQSize) {
        *writeHere = 0;
        }
#line 243
      (*numMsgOutQ)++;
    }
#line 244
    __nesc_atomic_end(__nesc_atomic); }
}

static  
# 349 "SarpM.nc"
void SarpM$processOutMsg(void)
{
  SarpM$sending[tos_state.current_node] = 1;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      uint8_t *put;
#line 355
      uint8_t *get;

#line 356
      SarpM$outMsg[tos_state.current_node].addr = SarpM$outQ[tos_state.current_node][SarpM$readOutQHere[tos_state.current_node]].addr;
      SarpM$outMsg[tos_state.current_node].type = SarpM$outQ[tos_state.current_node][SarpM$readOutQHere[tos_state.current_node]].type;
      SarpM$outMsg[tos_state.current_node].group = SarpM$outQ[tos_state.current_node][SarpM$readOutQHere[tos_state.current_node]].group;
      SarpM$outMsg[tos_state.current_node].crc = SarpM$outQ[tos_state.current_node][SarpM$readOutQHere[tos_state.current_node]].crc;
      get = (uint8_t *)& SarpM$outQ[tos_state.current_node][SarpM$readOutQHere[tos_state.current_node]].data;
      put = (uint8_t *)& SarpM$outMsg[tos_state.current_node].data;
      for (SarpM$outIndex[tos_state.current_node] = 0; SarpM$outIndex[tos_state.current_node] < 29; SarpM$outIndex[tos_state.current_node]++) 
        {
          *put = *get;
          put++;
          get++;
        }


      if (SarpM$numMsgOutQ[tos_state.current_node] > 0) 
        {

          uint8_t type = SarpM$outQ[tos_state.current_node][SarpM$readOutQHere[tos_state.current_node]].type;

#line 374
          switch (type) 
            {
              case DISCOVERY_MSG_TYPE: 

                SarpM$SendDisc$send(TOS_BCAST_ADDR, sizeof(DiscoveryMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case CONTROL_MSG_TYPE: 

                SarpM$SendStart$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(StartMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case DATA_MSG_TYPE: 
                dbg(DBG_USR1, "%d sending DATA message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);
              SarpM$SendData$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(DataMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case REPORT_REQUEST_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending REPORT_REQUEST message to %d, \r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);


              SarpM$SendReportRequest$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportRequestMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending REPORT_RESPONSE NO FORWARD message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);

              if (!SarpM$Attack$isNoResponder(SarpM$myAddr[tos_state.current_node]) || SarpM$isOff_onoff[tos_state.current_node] == 0) {
                SarpM$SendReportNoForwardResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportResponseNoForwardMsg ), &SarpM$outMsg[tos_state.current_node]);
                }
#line 401
              break;
              case REPORT_RESPONSE_FORWARD_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending REPORT_RESPONSE FORWARD message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);

              if (!SarpM$Attack$isNoResponder(SarpM$myAddr[tos_state.current_node]) || SarpM$isOff_onoff[tos_state.current_node] == 0) {
                SarpM$SendReportForwardResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportResponseForwardMsg ), &SarpM$outMsg[tos_state.current_node]);
                }
#line 408
              break;
              case END_TO_END_REPORT_RESPONSE_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending END TO END REPORT_RESPONSE message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);

              SarpM$SendEndToEndReportResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(EndToEndReportResponseMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case SPECIFIC_REPORT_REQUEST_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending SPECIFIC REPORT_REQUEST message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);

              SarpM$SendSpecificReportRequest$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(SpecificReportRequestMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case SPECIFIC_REPORT_RESPONSE_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending SPECIFIC REPORT_RESPONSE message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);

              if (!SarpM$Attack$isNoResponder(SarpM$myAddr[tos_state.current_node]) || SarpM$isOff_onoff[tos_state.current_node] == 0) {
                SarpM$SendSpecificReportResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(SpecificReportResponseMsg ), &SarpM$outMsg[tos_state.current_node]);
                }
#line 427
              break;
              default: 
                break;
            }
          if (++SarpM$readOutQHere[tos_state.current_node] >= CIRCULAR_BUFFER_SIZE) {
            SarpM$readOutQHere[tos_state.current_node] = 0;
            }
#line 433
          SarpM$numMsgOutQ[tos_state.current_node]--;
        }
    }
#line 435
    __nesc_atomic_end(__nesc_atomic); }
  SarpM$sending[tos_state.current_node] = 0;
}

static  
# 179 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data)
#line 179
{
  if (!AMStandard$state[tos_state.current_node]) {
      AMStandard$state[tos_state.current_node] = TRUE;
      if (length > DATA_LENGTH) {
          dbg(DBG_AM, "AM: Send length too long: %i. Fail.\n", (int )length);
          AMStandard$state[tos_state.current_node] = FALSE;
          return FAIL;
        }
      if (!TOS_post(AMStandard$sendTask)) {
          dbg(DBG_AM, "AM: post sendTask failed.\n");
          AMStandard$state[tos_state.current_node] = FALSE;
          return FAIL;
        }
      else {
          AMStandard$buffer[tos_state.current_node] = data;
          data->length = length;
          data->addr = addr;
          data->type = id;
          AMStandard$buffer[tos_state.current_node]->group = TOS_AM_GROUP;
          dbg(DBG_AM, "Sending message: %hx, %hhx\n\t", addr, id);
          AMStandard$dbgPacket(data);
        }
      return SUCCESS;
    }

  return FAIL;
}

static 
# 77 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
void TOSH_uart_send(TOS_MsgPtr msg)
{
  result_t success;
  event_t *uevent;
  UARTMsgSentEvent ev;
  char buf[1024];

#line 83
  success = SUCCESS;

  nmemcpy(& ev.message, msg, sizeof  ev.message);
  sendTossimEvent(tos_state.current_node, AM_UARTMSGSENTEVENT, tos_state.tos_time, &ev);


  uevent = (event_t *)malloc(sizeof(event_t ));
  event_uart_write_create(uevent, tos_state.current_node, tos_state.tos_time + UART_SEND_DELAY, msg, success);
  queue_insert_event(& tos_state.queue, uevent);
#line 91
  ;
  printTime(buf, 1024);
  dbg(DBG_UART, "Enqueueing uart_send_event at %s for mote %i", buf, tos_state.current_node);
}

static 
# 149 "/opt/tinyos-1.x/tos/system/tos.h"
void *nmemcpy(void *to, const void *from, size_t n)
{
  char *cto = to;
  const char *cfrom = from;

  while (n--) * cto++ = * cfrom++;

  return to;
}

static 
# 143 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success)
#line 143
{
  AMStandard$state[tos_state.current_node] = FALSE;
  AMStandard$SendMsg$sendDone(msg->type, msg, success);
  AMStandard$sendDone();

  return SUCCESS;
}

static 
# 48 "/opt/tinyos-1.x/tos/platform/pc/events.c"
void event_total_cleanup(event_t *event)
#line 48
{
  free(event->data);
  dbg(DBG_MEM, "event_total_cleanup: freeing event data: 0x%x\n", (unsigned int )event->data);
  event->data = (void *)0;
  free(event);
  dbg(DBG_MEM, "event_total_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

static 
# 57 "/opt/tinyos-1.x/tos/platform/pc/event_queue.c"
void queue_insert_event(event_queue_t *queue, event_t *event)
#line 57
{
  pthread_mutex_lock(& queue->lock);
  heap_insert(& queue->heap, event, event->time);
  pthread_mutex_unlock(& queue->lock);
}

static 
# 187 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
void up_heap(heap_t *heap, int findex)
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

static 
#line 148
void swap(node_t *first, node_t *second)
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

static 
# 252 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
int printOtherTime(char *buf, int len, long long int ftime)
#line 252
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

static   
# 70 "/opt/tinyos-1.x/tos/system/RandomLFSR.nc"
uint16_t RandomLFSR$Random$rand(void)
#line 70
{
  bool endbit;
  uint16_t tmpShiftReg;

#line 73
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      tmpShiftReg = RandomLFSR$shiftReg[tos_state.current_node];
      endbit = (tmpShiftReg & 0x8000) != 0;
      tmpShiftReg <<= 1;
      if (endbit) {
        tmpShiftReg ^= 0x100b;
        }
#line 79
      tmpShiftReg++;
      RandomLFSR$shiftReg[tos_state.current_node] = tmpShiftReg;
      tmpShiftReg = tmpShiftReg ^ RandomLFSR$mask[tos_state.current_node];
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
  return tmpShiftReg;
}

static  
# 76 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$isNoResponder(uint16_t myNodeId)
{
  for (aCounter = 0; aCounter < numNoResponseAttackers; aCounter++) 
    {
      if (noResponseAttackers[aCounter] == myNodeId) {
        return 1;
        }
    }
#line 83
  return 0;
}

static  
# 206 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putStartMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t sender)
{

  dbg(DBG_USR1, "%d sending a START message\r\n", sender);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].addr = TOS_BCAST_ADDR;
      outQ[*writeHere].type = CONTROL_MSG_TYPE;
      controlMsgOut = (ControlMsg *)outQ[*writeHere].data;
      controlMsgOut->msgType = CONTROL_START_TYPE;

      if (++ *writeHere >= maxQSize) {
        *writeHere = 0;
        }
#line 220
      (*numMsgOutQ)++;
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
}

static  
# 186 "SarpM.nc"
void SarpM$startApp(void)
{
  dbg(DBG_USR1, "%d started its App.\r\n", TOS_LOCAL_ADDRESS);
  SarpM$this_dmesg[tos_state.current_node].type = CONTROL_MSG_TYPE;
  SarpM$Leds$redOff();
  SarpM$Leds$greenOff();
  SarpM$Leds$yellowOff();
  SarpM$Timer1$start(TIMER_REPEAT, 2100 + 15 * TOS_LOCAL_ADDRESS);
  SarpM$Timer2$start(TIMER_ONE_SHOT, 30000 + 10 * TOS_LOCAL_ADDRESS);
  SarpM$Timer4$start(TIMER_ONE_SHOT, 1250 + 10 * TOS_LOCAL_ADDRESS);
  SarpM$Timer10$start(TIMER_REPEAT, 30000);
  if (SarpM$Attack$isOnOffAttacker(SarpM$myAddr[tos_state.current_node]) == 1) {
    SarpM$Timer9$start(TIMER_REPEAT, 30000);
    }
}

static   
# 90 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
result_t LedsM$Leds$redOff(void)
#line 90
{
  dbg(DBG_LED, "LEDS: Red off.\n");
  LedsM$PowerState$redOff();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) {
          LedsM$ledsOn[tos_state.current_node] &= ~LedsM$RED_BIT;
          LedsM$updateLeds();
        }
    }
#line 98
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static 
#line 59
void LedsM$updateLeds(void)
#line 59
{
  LedEvent e;

#line 61
  e.red = (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) > 0;
  e.green = (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) > 0;
  e.yellow = (LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT) > 0;
  sendTossimEvent(tos_state.current_node, AM_LEDEVENT, tos_state.tos_time, &e);
}

static   
#line 125
result_t LedsM$Leds$greenOff(void)
#line 125
{
  dbg(DBG_LED, "LEDS: Green off.\n");
  LedsM$PowerState$greenOff();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) {
          LedsM$ledsOn[tos_state.current_node] &= ~LedsM$GREEN_BIT;
          LedsM$updateLeds();
        }
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static  
# 98 "/opt/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$Timer$start(uint8_t id, char type, 
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

static 
# 124 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
uint8_t TOSH_get_clock0_counter(void)
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

static 
#line 54
void TOSH_clock_set_interval(uint8_t interval)
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

static 
#line 191
void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval)
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

static 
#line 86
void TOSH_clock_set_rate(char interval, char scale)
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

static  
# 168 "/opt/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$Timer$stop(uint8_t id)
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

static  
# 22 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrafficGeneratorM.nc"
float TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(uint16_t node_id)
{
  for (tfLoopCounter = 0; tfLoopCounter < numTrafficGenerators; tfLoopCounter++) 
    {
      if (trafficGenerators[tfLoopCounter] == node_id) {
        return 1;
        }
    }
#line 29
  return 0;
}

static  
# 55 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
uint8_t TransactionTableM$TransactionTable$transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactionRecords[tLoopCounter].transaction_id == transaction_id) 
        {
          transactionRecords[tLoopCounter].packetsReceived++;
          if (myAddr != 0) {
            transactionRecords[tLoopCounter].packetsForwarded++;
            }
          dbg(DBG_USR1, "FOUND temp parent set to %d\r\n", transactionRecords[tLoopCounter].packetsForwardedTo);

          return 1;
        }
    }
  return 0;
}

static  
#line 96
result_t TransactionTableM$TransactionTable$initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {

      dbg(DBG_USR1, "reports isValid %d\r\n", transactionRecords[tLoopCounter].isValid);
      if (transactionRecords[tLoopCounter].isValid == 1) {
        dbg(DBG_USR1, "reports transaction %x id VALID  -- IMPORTANT !!\r\n", transactionRecords[tLoopCounter].transaction_id);
        }
      dbg(DBG_USR1, "1\r\n");
      if (transactionRecords[tLoopCounter].isValid == 0) 
        {
          dbg(DBG_USR1, "2\r\n");
          transactionRecords[tLoopCounter].transaction_id = transaction_id;
          dbg(DBG_USR1, "3\r\n");
          transactionRecords[tLoopCounter].originatingNode = originatingNode;
          dbg(DBG_USR1, "4\r\n");
          transactionRecords[tLoopCounter].receivedFrom = receivedFrom;
          dbg(DBG_USR1, "5\r\n");
          transactionRecords[tLoopCounter].isValid = 1;
          dbg(DBG_USR1, "6\r\n");
          transactionRecords[tLoopCounter].sequenceNumber = 1;

          dbg(DBG_USR1, "setting its recieveFrom to %d for %d\r\n", receivedFrom, transaction_id);

          if (isSource == 1) {
            transactionRecords[tLoopCounter].packetsReceived = 0;
            }
          else {
#line 124
            transactionRecords[tLoopCounter].packetsReceived = 1;
            }
          transactionRecords[tLoopCounter].packetsForwarded = 1;
          transactionRecords[tLoopCounter].oneHopReported = 0;
          transactionRecords[tLoopCounter].oneHopReportedPacketsReceived = 0;
          transactionRecords[tLoopCounter].oneHopReportedPacketsForwarded = 0;
          transactionRecords[tLoopCounter].oneHopReportedPacketsForwardedTo = NO_PARENT;
          transactionRecords[tLoopCounter].twoHopReported = 0;
          transactionRecords[tLoopCounter].twoHopReportedPacketsReceived = 0;
          transactionRecords[tLoopCounter].processed = 0;
          transactionRecords[tLoopCounter].isALoop = 0;
          transactionRecords[tLoopCounter].lastParentTried = 255;
          transactionRecords[tLoopCounter].numberPossibleOtherParents = 0;
          transactionRecords[tLoopCounter].numberPossibleOtherParentsTried = 0;
          for (tnLoopCounter = 0; tnLoopCounter < MAX_NUMBER_OTHER_POSSIBLE_PARENTS; tnLoopCounter++) 
            transactionRecords[tLoopCounter].possibleOtherParents[tnLoopCounter] = 0;



          if (myLevel == 0) 
            {



              dbg(DBG_USR1, "is the root, and is the terminal point for this DATA packet\r\n");
              dbg(DBG_USR2, "is the root, and is the terminal point for this DATA packet\r\n");
            }
          else {

            if (myLevel == 1) 
              {

                transactionRecords[tLoopCounter].packetsForwardedTo = 0;

                dbg(DBG_USR1, "hears the root, and will forward all DATA to it\r\n");
                dbg(DBG_USR2, "hears the root, and will forward all DATA to it\r\n");
              }
            else 

              {
                if (TransactionTableM$Attack$ifLoopCreatorGetParent(myAddr) > 0) {
                  transactionRecords[tLoopCounter].packetsForwardedTo = TransactionTableM$Attack$ifLoopCreatorGetParent(myAddr);
                  }
                else {
#line 167
                  transactionRecords[tLoopCounter].packetsForwardedTo = TransactionTableM$NeighborTable$getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel, myPeers, numPeers, myChildren, numChildren, transactionRecords[tLoopCounter].receivedFrom, 255, 255, myAddr);
                  }
              }
            }
#line 170
          transactionRecords[tLoopCounter].originalPacketsForwardedTo = transactionRecords[tLoopCounter].packetsForwardedTo;
          break;
        }
    }

  return SUCCESS;
}

static  
# 46 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$ifLoopCreatorGetParent(uint16_t myNodeId)
{
  for (aCounter = 0; aCounter < numLoopCreationAttackers; aCounter++) 
    {
      if (loopCreationAttackers[aCounter] == myNodeId) {
        return loopCreationAttackersParents[aCounter];
        }
    }
#line 53
  return 0;
}

static  
# 24 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data, uint16_t lastToFindLoop, uint16_t canFixIt, uint16_t dontSendTo, uint16_t sequenceNumberIn)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].addr = dst_node_id;
      outQ[*writeHere].type = DATA_MSG_TYPE;
      dataMsgOut = (DataMsg *)outQ[*writeHere].data;
      dataMsgOut->dst_node_id = dst_node_id;
      dataMsgOut->src_node_id = src_node_id;
      dataMsgOut->orig_node_id = orig_node_id;
      dataMsgOut->sequenceNumber = sequenceNumberIn;
      dataMsgOut->data = data;
      dataMsgOut->transaction_id = transaction_id;
      dataMsgOut->lastToFindLoop = lastToFindLoop;
      dataMsgOut->cantFixIt = canFixIt;
      dataMsgOut->dontSendTo = dontSendTo;

      if (++ *writeHere >= maxQSize) {
        *writeHere = 0;
        }
#line 43
      (*numMsgOutQ)++;
    }
#line 44
    __nesc_atomic_end(__nesc_atomic); }
}

static  
# 189 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
uint16_t TransactionTableM$TransactionTable$getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id) {
        if (transactions[tLoopCounter].lastParentTried == 255) {
          return transactions[tLoopCounter].packetsForwardedTo;
          }
        else {
#line 197
          return transactions[tLoopCounter].lastParentTried;
          }
        }
    }
#line 199
  return 0;
}

static  
# 72 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id)
{
  dbg(DBG_USR1, "In M.prepreqoutq\r\n");
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].addr = destination;
      outQ[*writeHere].type = REPORT_REQUEST_MSG_TYPE;
      reportReqMsgOut = (ReportRequestMsg *)outQ[*writeHere].data;

      dbg(DBG_USR1, "Heard a Report Request message from %d\r\n", requestor);

      reportReqMsgOut->requestor = requestor;
      reportReqMsgOut->originator = originator;
      reportReqMsgOut->originatorPacketCount = originatorPacketCount;
      reportReqMsgOut->transaction_id = transaction_id;
      reportReqMsgOut->destination = destination;

      if (++ *writeHere >= maxQSize) {
        *writeHere = 0;
        }
#line 91
      (*numMsgOutQ)++;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
}

static  
# 571 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue)
{

  dbg(DBG_USR1, "In addToTransactionCheckQ in TransactionTableM.nc\r\n");


  dbg(DBG_USR1, " ADD to Transactions to CheckQ, ones: %d, twos: %d\r\n", ones, twos);


  for (tLoopCounter = *numInQueue; tLoopCounter > 0; tLoopCounter--) 
    {

      dbg(DBG_USR1, "WriteHere: %d, MaxQSize: %d, NumInQ: %d\r\n");

      tIndex = *writeHere - tLoopCounter;
      if (tIndex < 0) {
        tIndex = tIndex + maxQueueSize;
        }
#line 588
      if (queue[tIndex].transactionPtr == ptr) 
        {

          dbg(DBG_USR1, "Transaction %04x is already in TransactionToCheckQ, so I'm not putting it there again\r\n", ptr->transaction_id);

          return;
        }
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      queue[*writeHere].transactionPtr = ptr;
      queue[*writeHere].oneTimes = ones;
      queue[*writeHere].twoTimes = twos;
      (*numInQueue)++;
      (*writeHere)++;
      if (*writeHere >= maxQueueSize) {
        *writeHere = 0;
        }
    }
#line 607
    __nesc_atomic_end(__nesc_atomic); }
}

static  
#line 179
Transaction_Record_Ptr TransactionTableM$TransactionTable$getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id) {
        return &transactions[tLoopCounter];
        }
    }
#line 186
  return (void *)0;
}

static  
# 146 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t originatingNode)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      reportRespForwardMsgOut = (ReportResponseForwardMsg *)outQ[*writeHere].data;
      reportRespForwardMsgOut->responder = responder;
      reportRespForwardMsgOut->transaction_id = transaction_id;
      if (originatingNode == packetsReceivedFrom) {
        outQ[*writeHere].type = REPORT_RESPONSE_NO_FORWARD_MSG_TYPE;
        }
      else {
#line 156
        outQ[*writeHere].type = REPORT_RESPONSE_FORWARD_MSG_TYPE;
        }
#line 157
      outQ[*writeHere].addr = packetsReceivedFrom;
      reportRespForwardMsgOut->packetsReceived = packetsReceived;
      reportRespForwardMsgOut->packetsReceivedFrom = packetsReceivedFrom;
      reportRespForwardMsgOut->packetsForwarded = packetsForwarded;
      reportRespForwardMsgOut->packetsForwardedTo = packetsForwardedTo;
      if (++ *writeHere >= CIRCULAR_BUFFER_SIZE) {
        *writeHere = 0;
        }
#line 164
      (*numMsgOutQ)++;
    }
#line 165
    __nesc_atomic_end(__nesc_atomic); }
}

static  
# 298 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TransactionTableM.nc"
void TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GRBinc, uint32_t BRBinc, uint32_t GABinc, uint32_t BABinc, uint32_t GLBinc, uint32_t BLBinc)
{



  for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++) 
    {
      if (neighbors[tnLoopCounter].node_id == node_id) 
        {



          neighbors[tnLoopCounter].trust.GFB += GFBinc;
          neighbors[tnLoopCounter].trust.BFB += BFBinc;
          if (BFBinc != 0) {
#line 312
            neighbors[tnLoopCounter].trust.trustFP = 0.1;
            }




          neighbors[tnLoopCounter].trust.GRB += GRBinc;
          neighbors[tnLoopCounter].trust.BRB += BRBinc;
          if (BRBinc != 0) {
#line 320
            neighbors[tnLoopCounter].trust.trustRH = 0.1;
            }




          neighbors[tnLoopCounter].trust.GAB += GABinc;
          neighbors[tnLoopCounter].trust.BAB += BABinc;
          if (BABinc != 0) {
#line 328
            neighbors[tnLoopCounter].trust.trustAV = 0.1;
            }




          neighbors[tnLoopCounter].trust.GLB += GLBinc;
          neighbors[tnLoopCounter].trust.BLB += BLBinc;
          if (BLBinc != 0) {
#line 336
            neighbors[tnLoopCounter].trust.trustLP = 0.1;
            }

          neighbors[tnLoopCounter].trust.trustPR = 1.0;

          neighbors[tnLoopCounter].trust.overallTrust = TransactionTableM$Trust$calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
          sendSarpTrust(transactionNumber, whoIAm, node_id, neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.GRB, neighbors[tnLoopCounter].trust.BRB, neighbors[tnLoopCounter].trust.GAB, neighbors[tnLoopCounter].trust.BAB, neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, neighbors[tnLoopCounter].trust.GPB, neighbors[tnLoopCounter].trust.BPB, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustRH, neighbors[tnLoopCounter].trust.trustAV, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust);
          break;
        }
    }
}

static  
# 87 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/TrustM.nc"
float TrustM$Trust$calculateOverallTrust(float trustFP, float trustRH, float trustAV, float trustLP, float trustPR)
{

  dbg(DBG_USR1, "FP: %f, WFP: %f, RH: %f, WRH: %f, AV: %f, WAV: %f, LP: %f PR: %f WLP: %f == %f\r\n", trustFP, FP_WEIGHT, trustRH, RH_WEIGHT, trustAV, AV_WEIGHT, trustLP, trustPR, LP_WEIGHT, trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT);

  return trustFP * FP_WEIGHT + trustRH * RH_WEIGHT + trustAV * AV_WEIGHT + trustLP * LP_WEIGHT + trustPR * PR_WEIGHT;
}

static 
# 941 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
void sendSarpTrust(uint32_t transaction, uint16_t source, uint16_t target, uint16_t gfb, uint16_t bfb, uint16_t grb, uint16_t brb, uint16_t gab, uint16_t bab, uint16_t glb, uint16_t blb, uint16_t gpb, uint16_t bpb, float trustFP, float trustRH, float trustAV, float trustLP, float trustPR, float overallTrust)
{
  int sock;
#line 943
  int n;
  struct sockaddr_in name;

  char message[230];



  long myTime = getMyTime();


  sprintf(message, "<sarp><trust time=\"%ld\" transaction=\"%d\" source=\"%d\" target=\"%d\" trustFP=\"%f\" trustRH=\"%f\" trustAV=\"%f\" trustLP=\"%f\" trustPR=\"%f\" overallTrust=\"%f\" /></sarp>", myTime, transaction, source, target, trustFP, trustRH, trustAV, trustLP, trustPR, overallTrust);

  sock = socket(2, SOCK_DGRAM, IPPROTO_UDP);
  if (sock < 0) 
    {
      printf("Socket failure.\r\n");
      exit(0);
    }

  name.sin_family = 2;
  name.sin_port = htons(12000);
  name.sin_addr.s_addr = inet_addr("192.168.10.5");

  n = connect(sock, (struct sockaddr *)&name, sizeof name);
  if (n < 0) 
    {
      printf("Connection failed\r\n");
    }

  n = write(sock, message, strlen(message) + 1);

  if (n < 0) {
    printf("Message not sent.  Trying again. \r\n");
    }
#line 976
  close(sock);
}

static  
# 98 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t transactionParent, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      specificReportReqMsgOut = (SpecificReportRequestMsg *)outQ[*writeHere].data;
      outQ[*writeHere].addr = transactionParent;
      outQ[*writeHere].type = SPECIFIC_REPORT_REQUEST_MSG_TYPE;
      specificReportReqMsgOut->destination = destination;
      specificReportReqMsgOut->requestor = requestor;
      specificReportReqMsgOut->originator = originator;
      specificReportReqMsgOut->originatorPacketCount = originatorPacketCount;
      specificReportReqMsgOut->transaction_id = transaction_id;


      if (++ *writeHere >= maxQSize) {
        *writeHere = 0;
        }
#line 114
      (*numMsgOutQ)++;
    }
#line 115
    __nesc_atomic_end(__nesc_atomic); }
}

static  
# 102 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/AttackM.nc"
uint16_t AttackM$Attack$getNumThirtySeconds(uint16_t myNodeId)
{
  for (aCounter = 0; aCounter < numOnOffAttackers; aCounter++) 
    {
      if (onOffAttackers[aCounter] == myNodeId) {
        return numThirtySeconds[aCounter];
        }
    }
#line 109
  return 0;
}

static  
# 178 "/opt/tinyos-1.x/apps/sarp-0.3-dev/modules/MessagingM.nc"
void MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsSent)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].type = END_TO_END_REPORT_RESPONSE_MSG_TYPE;
      endToEndRepRespMsgOut = (EndToEndReportResponseMsg *)outQ[*writeHere].data;

      dbg(DBG_USR1, "Root received a request for report to %d\r\n", originator);

      endToEndRepRespMsgOut->responder = responder;
      endToEndRepRespMsgOut->transaction_id = transaction_id;
      outQ[*writeHere].addr = packetsReceivedFrom;
      endToEndRepRespMsgOut->originator = originator;
      endToEndRepRespMsgOut->packetsReceived = packetsReceived;
      endToEndRepRespMsgOut->packetsReceivedFrom = packetsReceivedFrom;

      if (++ *writeHere >= CIRCULAR_BUFFER_SIZE) {
        *writeHere = 0;
        }
#line 196
      (*numMsgOutQ)++;
    }
#line 197
    __nesc_atomic_end(__nesc_atomic); }
}

static  
#line 121
void MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].type = SPECIFIC_REPORT_RESPONSE_MSG_TYPE;
      specificReportResponseMsgOut = (SpecificReportResponseMsg *)outQ[*writeHere].data;
      specificReportResponseMsgOut->responder = responder;
      outQ[*writeHere].addr = transactionParent;
      specificReportResponseMsgOut->originator = originator;
      specificReportResponseMsgOut->transaction_id = transaction_id;
      specificReportResponseMsgOut->packetsReceived = packetsReceived;
      specificReportResponseMsgOut->packetsReceivedFrom = packetsReceivedFrom;
      specificReportResponseMsgOut->packetsForwarded = packetsForwarded;
      specificReportResponseMsgOut->packetsForwardedTo = packetsForwardedTo;


      if (++ *writeHere >= CIRCULAR_BUFFER_SIZE) {
        *writeHere = 0;
        }
#line 139
      (*numMsgOutQ)++;
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
}

# 252 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
void   event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)
#line 252
{


  spi_byte_data_t *data = (spi_byte_data_t *)malloc(sizeof(spi_byte_data_t ));

#line 256
  dbg(DBG_MEM, "malloc Spi Byte event data.\n");
  data->interval = interval;
  data->mote = mote;
  data->valid = 1;
  data->count = count;
  data->ending = 0;

  fevent->mote = mote;
  fevent->data = data;
  fevent->time = ftime;
  fevent->handle = event_spi_byte_handle;
  fevent->cleanup = event_total_cleanup;
  fevent->pause = 0;
}

static 
# 389 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
uint8_t TOSH_rfm_rx_bit(void )
{
  uint8_t data;

#line 392
  data = tos_state.rfm->hears(tos_state.current_node);
  dbg(DBG_RADIO, "RFM: Mote %i got bit %x\n", tos_state.current_node, data);
  return data;
}

static  
# 232 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$SpiByteFifo$dataReady(uint8_t data)
#line 232
{
  if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$TRANSMITTING_START) {
      dbg(DBG_PACKET, "Transmitting start symbol, byte %i\n", MicaHighSpeedRadioM$tx_count[tos_state.current_node]);
      MicaHighSpeedRadioM$SpiByteFifo$send(TOSH_MHSR_start[(int )MicaHighSpeedRadioM$tx_count[tos_state.current_node]]);
      MicaHighSpeedRadioM$tx_count[tos_state.current_node]++;
      if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] == sizeof TOSH_MHSR_start) {
          MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$TRANSMITTING;
          MicaHighSpeedRadioM$tx_count[tos_state.current_node] = 1;
        }
    }
  else {
#line 241
    if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$TRANSMITTING) {
        dbg(DBG_PACKET, "Transmitting data, byte %i\n", MicaHighSpeedRadioM$tx_count[tos_state.current_node]);
        MicaHighSpeedRadioM$SpiByteFifo$send(MicaHighSpeedRadioM$encoded_buffer[tos_state.current_node][(int )MicaHighSpeedRadioM$buf_head[tos_state.current_node]]);
        MicaHighSpeedRadioM$buf_head[tos_state.current_node]++;
        MicaHighSpeedRadioM$buf_head[tos_state.current_node] &= 0x3;
        MicaHighSpeedRadioM$enc_count[tos_state.current_node]--;


        if (MicaHighSpeedRadioM$enc_count[tos_state.current_node] >= 2) {
            ;
          }
        else {
#line 251
          if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] < MSG_DATA_SIZE) {
              char next_data = ((char *)MicaHighSpeedRadioM$send_ptr[tos_state.current_node])[(int )MicaHighSpeedRadioM$tx_count[tos_state.current_node]];

#line 253
              MicaHighSpeedRadioM$Code$encode(next_data);
              MicaHighSpeedRadioM$tx_count[tos_state.current_node]++;
              if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] <= MicaHighSpeedRadioM$msg_length[tos_state.current_node]) {
                  MicaHighSpeedRadioM$calc_crc[tos_state.current_node] = MicaHighSpeedRadioM$add_crc_byte(next_data, MicaHighSpeedRadioM$calc_crc[tos_state.current_node]);
                }
              if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] == MicaHighSpeedRadioM$msg_length[tos_state.current_node]) {


                  MicaHighSpeedRadioM$tx_count[tos_state.current_node] = MSG_DATA_SIZE - 2;
                  MicaHighSpeedRadioM$send_ptr[tos_state.current_node]->crc = MicaHighSpeedRadioM$calc_crc[tos_state.current_node];
                  dbg(DBG_CRC, "MicaHighSpeedRadioM: Send CRC calculated to be 0x%hx.\n", MicaHighSpeedRadioM$calc_crc[tos_state.current_node]);
                }
              MicaHighSpeedRadioM$RadioSendCoordinator$byte(MicaHighSpeedRadioM$send_ptr[tos_state.current_node], (uint8_t )MicaHighSpeedRadioM$tx_count[tos_state.current_node]);
            }
          else {
#line 266
            if (MicaHighSpeedRadioM$buf_head[tos_state.current_node] != MicaHighSpeedRadioM$buf_end[tos_state.current_node]) {
                MicaHighSpeedRadioM$Code$encode_flush();
              }
            else 
#line 268
              {
                MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$SENDING_STRENGTH_PULSE;
                MicaHighSpeedRadioM$tx_count[tos_state.current_node] = 0;
              }
            }
          }
      }
    else {
#line 272
      if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$SENDING_STRENGTH_PULSE) {
          MicaHighSpeedRadioM$tx_count[tos_state.current_node]++;
          dbg(DBG_PACKET, "Transmitting strength pulse, byte %i\n", MicaHighSpeedRadioM$tx_count[tos_state.current_node]);
          if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] == 3) {
              MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$WAITING_FOR_ACK;
              MicaHighSpeedRadioM$tx_count[tos_state.current_node] = 1;
              MicaHighSpeedRadioM$SpiByteFifo$send(0x00);
            }
          else {
              MicaHighSpeedRadioM$SpiByteFifo$send(0xff);
            }
        }
      else {
#line 283
        if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$WAITING_FOR_ACK) {
            data &= 0x7f;
            dbg(DBG_PACKET, "Waiting for ACK, byte %i\n", MicaHighSpeedRadioM$tx_count[tos_state.current_node]);
            MicaHighSpeedRadioM$SpiByteFifo$send(0x00);
            if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] == 1) {
              MicaHighSpeedRadioM$SpiByteFifo$phaseShift();
              }
#line 289
            MicaHighSpeedRadioM$SpiByteFifo$rxMode();
            MicaHighSpeedRadioM$tx_count[tos_state.current_node]++;
            if (MicaHighSpeedRadioM$tx_count[tos_state.current_node] == MicaHighSpeedRadioM$ACK_CNT + 2) {
                MicaHighSpeedRadioM$send_ptr[tos_state.current_node]->ack = data == 0x55;
                MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
                MicaHighSpeedRadioM$SpiByteFifo$idle();
                MicaHighSpeedRadioM$ChannelMon$startSymbolSearch();
                TOS_post(MicaHighSpeedRadioM$packetSent);
              }
          }
        else {
#line 298
          if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$RX_STATE) {

              MicaHighSpeedRadioM$Code$decode(data);
            }
          else {
#line 301
            if (MicaHighSpeedRadioM$state[tos_state.current_node] == MicaHighSpeedRadioM$ACK_SEND_STATE) {
                dbg(DBG_PACKET, "Sending ACK, count %i\n", (int )MicaHighSpeedRadioM$ack_count[tos_state.current_node]);
                MicaHighSpeedRadioM$ack_count[tos_state.current_node]++;
                if (MicaHighSpeedRadioM$ack_count[tos_state.current_node] > MicaHighSpeedRadioM$ACK_CNT + 1) {
                    MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$RX_DONE_STATE;
                    MicaHighSpeedRadioM$SpiByteFifo$idle();
                    TOS_post(MicaHighSpeedRadioM$packetReceived);
                  }
                else 
#line 308
                  {
                    MicaHighSpeedRadioM$SpiByteFifo$txMode();
                  }
              }
            }
          }
        }
      }
    }
#line 313
  return 1;
}

static  
# 70 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
result_t SpiByteFifoC$SpiByteFifo$send(uint8_t data)
#line 70
{
  event_t *fevent;
  long long ftime;

  if (SpiByteFifoC$state[tos_state.current_node] == SpiByteFifoC$OPEN) {
      SpiByteFifoC$nextByte[tos_state.current_node] = data;
      SpiByteFifoC$state[tos_state.current_node] = SpiByteFifoC$FULL;
      return SUCCESS;
    }
#line 78
  if (SpiByteFifoC$state[tos_state.current_node] == SpiByteFifoC$IDLE) {
      SpiByteFifoC$state[tos_state.current_node] = SpiByteFifoC$OPEN;
      SpiByteFifoC$SpiByteFifo$dataReady(0);
      SpiByteFifoC$spdr[tos_state.current_node] = data;
      SpiByteFifoC$radioState[tos_state.current_node] = SpiByteFifoC$RADIO_SENDING;
      SpiByteFifoC$PowerState$radioTxMode();
      if (spiByteEvents[tos_state.current_node] != (void *)0) {
          event_spi_byte_invalidate(spiByteEvents[tos_state.current_node]);
        }
      dbg(DBG_MEM, "malloc spi byte event.\n");
      fevent = (event_t *)malloc(sizeof(event_t ));

      ftime = tos_state.tos_time + RADIO_TICKS_PER_EVENT;
      event_spi_byte_create(fevent, tos_state.current_node, ftime, RADIO_TICKS_PER_EVENT, 0);
      queue_insert_event(& tos_state.queue, fevent);
#line 92
      ;

      spiByteEvents[tos_state.current_node] = fevent;

      return SUCCESS;
    }
  return FAIL;
}

static  
# 86 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
result_t SecDedEncoding$Code$encode(char d)
#line 86
{
  if (SecDedEncoding$state[tos_state.current_node] == SecDedEncoding$IDLE_STATE) {
      SecDedEncoding$state[tos_state.current_node] = SecDedEncoding$ENCODING_BYTE;
      SecDedEncoding$data1[tos_state.current_node] = d;
      SecDedEncoding$radio_encode_thread();
      return 1;
    }
  return 0;
}

static  
# 224 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
result_t MicaHighSpeedRadioM$Code$encodeDone(char data1)
#line 224
{
  MicaHighSpeedRadioM$encoded_buffer[tos_state.current_node][(int )MicaHighSpeedRadioM$buf_end[tos_state.current_node]] = data1;
  MicaHighSpeedRadioM$buf_end[tos_state.current_node]++;
  MicaHighSpeedRadioM$buf_end[tos_state.current_node] &= 0x3;
  MicaHighSpeedRadioM$enc_count[tos_state.current_node] += 1;
  return SUCCESS;
}

static 
#line 324
short MicaHighSpeedRadioM$add_crc_byte(char new_byte, short crc)
#line 324
{
  uint8_t i;

#line 326
  crc = crc ^ ((int )new_byte << 8);
  i = 8;
  do 
    {
      if (crc & 0x8000) {
        crc = (crc << 1) ^ 0x1021;
        }
      else {
#line 333
        crc = crc << 1;
        }
    }
  while (
#line 334
  --i);
  return crc;
}

static 
# 59 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
short set_io_bit(char port, char bit)
#line 59
{
  char *register_ptr;

#line 61
  switch (port) {
      case 0x34: 
        register_ptr = & TOSH_pc_hardware.register_A;
      break;

      case 0x37: 
        register_ptr = & TOSH_pc_hardware.register_B;
      break;

      case 0x40: 
        register_ptr = & TOSH_pc_hardware.register_C;
      break;

      case 0x43: 
        register_ptr = & TOSH_pc_hardware.register_D;
      break;

      case 0x70: 
        register_ptr = & TOSH_pc_hardware.register_E;
      break;

      case 0x00: 
        register_ptr = & TOSH_pc_hardware.status_register;
      break;

      default: 
        register_ptr = & TOSH_pc_hardware.register_default;
      break;
    }

  dbg(DBG_HARD, "Set bit %i of port %u\n", (int )bit, port);

  *register_ptr = *register_ptr |= 0x1 << bit;

  return *register_ptr;
}

static  
# 101 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
result_t SpiByteFifoC$SpiByteFifo$idle(void)
#line 101
{
  SpiByteFifoC$spdr[tos_state.current_node] = 0;
  SpiByteFifoC$nextByte[tos_state.current_node] = 0;
  SpiByteFifoC$radioState[tos_state.current_node] = SpiByteFifoC$RADIO_IDLE;


  SpiByteFifoC$PowerState$radioRxMode();

  SpiByteFifoC$state[tos_state.current_node] = SpiByteFifoC$IDLE;
  SpiByteFifoC$nextByte[tos_state.current_node] = 0;

  if (spiByteEvents[tos_state.current_node] != (void *)0) {
      event_spi_byte_end(spiByteEvents[tos_state.current_node]);
      spiByteEvents[tos_state.current_node] = (void *)0;
    }

  return SUCCESS;
}

static  
# 61 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
result_t ChannelMonC$ChannelMon$startSymbolSearch(void)
#line 61
{
  event_t *fevent;
  long long ftime;


  ChannelMonC$CM_state[tos_state.current_node] = ChannelMonC$IDLE_STATE;

  if (channelMonEvents[tos_state.current_node] != (void *)0) {
      event_channel_mon_invalidate(channelMonEvents[tos_state.current_node]);
    }
  dbg(DBG_MEM, "malloc channel mon event.\n");
  fevent = (event_t *)malloc(sizeof(event_t ));


  ftime = tos_state.tos_time + 200;

  event_channel_mon_create(fevent, tos_state.current_node, ftime, 200);
  queue_insert_event(& tos_state.queue, fevent);
#line 78
  ;

  channelMonEvents[tos_state.current_node] = fevent;


  return SUCCESS;
}

static  
#line 136
result_t ChannelMonC$ChannelMon$stopMonitorChannel(void)
#line 136
{

  event_channel_mon_invalidate(channelMonEvents[tos_state.current_node]);
  channelMonEvents[tos_state.current_node] = (void *)0;

  ChannelMonC$CM_state[tos_state.current_node] = ChannelMonC$DISABLED_STATE;
  return SUCCESS;
}

# 102 "/opt/tinyos-1.x/tos/system/sched.c"
bool  TOS_post(void (*tp)(void))
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

static 
# 130 "/opt/tinyos-1.x/tos/platform/pc/packet_sim.c"
void event_backoff_create(event_t *event, int node, long long eventTime)
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

static 
#line 165
void corruptPacket(IncomingMsg *msg, int src, int dest)
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

# 387 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
void   nido_start_mote(uint16_t moteID)
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

static  
# 87 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$Control$init(void)
#line 87
{
  result_t ok1;
#line 88
  result_t ok2;

  AMStandard$TimerControl$init();
  ok1 = AMStandard$UARTControl$init();
  ok2 = AMStandard$RadioControl$init();

  AMStandard$state[tos_state.current_node] = FALSE;
  AMStandard$lastCount[tos_state.current_node] = 0;
  AMStandard$counter[tos_state.current_node] = 0;
  dbg(DBG_BOOT, "AM Module initialized\n");

  return rcombine(ok1, ok2);
}

static  
# 77 "/opt/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$StdControl$init(void)
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

static  
# 103 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$Control$start(void)
#line 103
{
  result_t ok0 = AMStandard$TimerControl$start();
  result_t ok1 = AMStandard$UARTControl$start();
  result_t ok2 = AMStandard$RadioControl$start();
  result_t ok3 = AMStandard$ActivityTimer$start(TIMER_REPEAT, 1000);



  AMStandard$state[tos_state.current_node] = FALSE;

  AMStandard$PowerManagement$adjustPower();

  return rcombine4(ok0, ok1, ok2, ok3);
}

static 
# 136 "/opt/tinyos-1.x/tos/system/sched.c"
bool TOSH_run_next_task(void)
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
int   main(int argc, char **argv)
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

static 
#line 79
void Nido$help(char *progname)
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

static 
# 78 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.c"
int adjacency_list_init(void)
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

static 
# 194 "/opt/tinyos-1.x/tos/platform/pc/rfm_model.c"
void static_one_cell_init(void)
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

static 
# 47 "/opt/tinyos-1.x/tos/platform/pc/adjacency_list.c"
link_t *allocate_link(int mote)
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

static 
# 58 "/opt/tinyos-1.x/tos/platform/pc/eeprom.c"
int createEEPROM(char *file, int motes, int eempromBytes)
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

static 
# 175 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
int createServerSocket(short port)
#line 175
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

static 
#line 159
int acceptConnection(int servfd)
#line 159
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

static 
#line 279
void addClient(int *clientSockets, int clifd)
#line 279
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

static  
# 119 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$Control$stop(void)
#line 119
{
  result_t ok1 = AMStandard$UARTControl$stop();
  result_t ok2 = AMStandard$RadioControl$stop();
  result_t ok3 = AMStandard$ActivityTimer$stop();

  AMStandard$PowerManagement$adjustPower();
  return rcombine3(ok1, ok2, ok3);
}

static 
# 104 "/opt/tinyos-1.x/tos/platform/pc/heap_array.c"
void *heap_pop_min_data(heap_t *heap, long long *key)
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

static 
#line 161
void down_heap(heap_t *heap, int findex)
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

static   
# 322 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
double PowerStateM$PowerState$get_mote_cycles(int mote)
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

  /* Module SimpleTimeM */
  if (!strcmp(varname, "SimpleTimeM$time"))
  {
    *addr = (uintptr_t)&SimpleTimeM$time[__nesc_mote];
    *size = sizeof(SimpleTimeM$time[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimpleTimeM$aTimer"))
  {
    *addr = (uintptr_t)&SimpleTimeM$aTimer[__nesc_mote];
    *size = sizeof(SimpleTimeM$aTimer[__nesc_mote]);
    return 0;
  }

  /* Module TimeUtilC */

  /* Module SarpM */
  if (!strcmp(varname, "SarpM$DFCounter"))
  {
    *addr = (uintptr_t)&SarpM$DFCounter[__nesc_mote];
    *size = sizeof(SarpM$DFCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$DFThreshold"))
  {
    *addr = (uintptr_t)&SarpM$DFThreshold[__nesc_mote];
    *size = sizeof(SarpM$DFThreshold[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myLevel"))
  {
    *addr = (uintptr_t)&SarpM$myLevel[__nesc_mote];
    *size = sizeof(SarpM$myLevel[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$outIndex"))
  {
    *addr = (uintptr_t)&SarpM$outIndex[__nesc_mote];
    *size = sizeof(SarpM$outIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myAddr"))
  {
    *addr = (uintptr_t)&SarpM$myAddr[__nesc_mote];
    *size = sizeof(SarpM$myAddr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$OkToStart"))
  {
    *addr = (uintptr_t)&SarpM$OkToStart[__nesc_mote];
    *size = sizeof(SarpM$OkToStart[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$TRANSACTION_ID"))
  {
    *addr = (uintptr_t)&SarpM$TRANSACTION_ID[__nesc_mote];
    *size = sizeof(SarpM$TRANSACTION_ID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myOne"))
  {
    *addr = (uintptr_t)&SarpM$myOne[__nesc_mote];
    *size = sizeof(SarpM$myOne[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myZero"))
  {
    *addr = (uintptr_t)&SarpM$myZero[__nesc_mote];
    *size = sizeof(SarpM$myZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$inQ"))
  {
    *addr = (uintptr_t)&SarpM$inQ[__nesc_mote];
    *size = sizeof(SarpM$inQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$outQ"))
  {
    *addr = (uintptr_t)&SarpM$outQ[__nesc_mote];
    *size = sizeof(SarpM$outQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$outMsg"))
  {
    *addr = (uintptr_t)&SarpM$outMsg[__nesc_mote];
    *size = sizeof(SarpM$outMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$readInQHere"))
  {
    *addr = (uintptr_t)&SarpM$readInQHere[__nesc_mote];
    *size = sizeof(SarpM$readInQHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$writeInQHere"))
  {
    *addr = (uintptr_t)&SarpM$writeInQHere[__nesc_mote];
    *size = sizeof(SarpM$writeInQHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$readOutQHere"))
  {
    *addr = (uintptr_t)&SarpM$readOutQHere[__nesc_mote];
    *size = sizeof(SarpM$readOutQHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$writeOutQHere"))
  {
    *addr = (uintptr_t)&SarpM$writeOutQHere[__nesc_mote];
    *size = sizeof(SarpM$writeOutQHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$readReportQHere"))
  {
    *addr = (uintptr_t)&SarpM$readReportQHere[__nesc_mote];
    *size = sizeof(SarpM$readReportQHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$writeReportQHere"))
  {
    *addr = (uintptr_t)&SarpM$writeReportQHere[__nesc_mote];
    *size = sizeof(SarpM$writeReportQHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numMsgInQ"))
  {
    *addr = (uintptr_t)&SarpM$numMsgInQ[__nesc_mote];
    *size = sizeof(SarpM$numMsgInQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numMsgOutQ"))
  {
    *addr = (uintptr_t)&SarpM$numMsgOutQ[__nesc_mote];
    *size = sizeof(SarpM$numMsgOutQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numDataMessagesInTrial"))
  {
    *addr = (uintptr_t)&SarpM$numDataMessagesInTrial[__nesc_mote];
    *size = sizeof(SarpM$numDataMessagesInTrial[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$this_dmesg"))
  {
    *addr = (uintptr_t)&SarpM$this_dmesg[__nesc_mote];
    *size = sizeof(SarpM$this_dmesg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$disc_msg_in"))
  {
    *addr = (uintptr_t)&SarpM$disc_msg_in[__nesc_mote];
    *size = sizeof(SarpM$disc_msg_in[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$dataMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$dataMsgIn[__nesc_mote];
    *size = sizeof(SarpM$dataMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$reportReqMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$reportReqMsgIn[__nesc_mote];
    *size = sizeof(SarpM$reportReqMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$reportRespNoForwardMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$reportRespNoForwardMsgIn[__nesc_mote];
    *size = sizeof(SarpM$reportRespNoForwardMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$reportForwardMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$reportForwardMsgIn[__nesc_mote];
    *size = sizeof(SarpM$reportForwardMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$endToEndRepRespMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$endToEndRepRespMsgIn[__nesc_mote];
    *size = sizeof(SarpM$endToEndRepRespMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$specificReportReqMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$specificReportReqMsgIn[__nesc_mote];
    *size = sizeof(SarpM$specificReportReqMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$specificReportResponseMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$specificReportResponseMsgIn[__nesc_mote];
    *size = sizeof(SarpM$specificReportResponseMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$controlMsgIn"))
  {
    *addr = (uintptr_t)&SarpM$controlMsgIn[__nesc_mote];
    *size = sizeof(SarpM$controlMsgIn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myStaticParent"))
  {
    *addr = (uintptr_t)&SarpM$myStaticParent[__nesc_mote];
    *size = sizeof(SarpM$myStaticParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$transactionCounter"))
  {
    *addr = (uintptr_t)&SarpM$transactionCounter[__nesc_mote];
    *size = sizeof(SarpM$transactionCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$neighbors"))
  {
    *addr = (uintptr_t)&SarpM$neighbors[__nesc_mote];
    *size = sizeof(SarpM$neighbors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myOneHopNeighbors"))
  {
    *addr = (uintptr_t)&SarpM$myOneHopNeighbors[__nesc_mote];
    *size = sizeof(SarpM$myOneHopNeighbors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myChildren"))
  {
    *addr = (uintptr_t)&SarpM$myChildren[__nesc_mote];
    *size = sizeof(SarpM$myChildren[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myPeers"))
  {
    *addr = (uintptr_t)&SarpM$myPeers[__nesc_mote];
    *size = sizeof(SarpM$myPeers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numOneHopNeighbors"))
  {
    *addr = (uintptr_t)&SarpM$numOneHopNeighbors[__nesc_mote];
    *size = sizeof(SarpM$numOneHopNeighbors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numChildren"))
  {
    *addr = (uintptr_t)&SarpM$numChildren[__nesc_mote];
    *size = sizeof(SarpM$numChildren[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numPeers"))
  {
    *addr = (uintptr_t)&SarpM$numPeers[__nesc_mote];
    *size = sizeof(SarpM$numPeers[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numNeighbors"))
  {
    *addr = (uintptr_t)&SarpM$numNeighbors[__nesc_mote];
    *size = sizeof(SarpM$numNeighbors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$transactionRecords"))
  {
    *addr = (uintptr_t)&SarpM$transactionRecords[__nesc_mote];
    *size = sizeof(SarpM$transactionRecords[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$reportQ"))
  {
    *addr = (uintptr_t)&SarpM$reportQ[__nesc_mote];
    *size = sizeof(SarpM$reportQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$transactionsToCheckQ"))
  {
    *addr = (uintptr_t)&SarpM$transactionsToCheckQ[__nesc_mote];
    *size = sizeof(SarpM$transactionsToCheckQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$checkThisTransaction"))
  {
    *addr = (uintptr_t)&SarpM$checkThisTransaction[__nesc_mote];
    *size = sizeof(SarpM$checkThisTransaction[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$thisTransaction"))
  {
    *addr = (uintptr_t)&SarpM$thisTransaction[__nesc_mote];
    *size = sizeof(SarpM$thisTransaction[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$oneTimesTID"))
  {
    *addr = (uintptr_t)&SarpM$oneTimesTID[__nesc_mote];
    *size = sizeof(SarpM$oneTimesTID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$twoTimesTID"))
  {
    *addr = (uintptr_t)&SarpM$twoTimesTID[__nesc_mote];
    *size = sizeof(SarpM$twoTimesTID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$transactionFound"))
  {
    *addr = (uintptr_t)&SarpM$transactionFound[__nesc_mote];
    *size = sizeof(SarpM$transactionFound[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$sending"))
  {
    *addr = (uintptr_t)&SarpM$sending[__nesc_mote];
    *size = sizeof(SarpM$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$readTransactionCheckHere"))
  {
    *addr = (uintptr_t)&SarpM$readTransactionCheckHere[__nesc_mote];
    *size = sizeof(SarpM$readTransactionCheckHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$writeTransactionCheckHere"))
  {
    *addr = (uintptr_t)&SarpM$writeTransactionCheckHere[__nesc_mote];
    *size = sizeof(SarpM$writeTransactionCheckHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$numTransactionsToCheck"))
  {
    *addr = (uintptr_t)&SarpM$numTransactionsToCheck[__nesc_mote];
    *size = sizeof(SarpM$numTransactionsToCheck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$tFoundHere"))
  {
    *addr = (uintptr_t)&SarpM$tFoundHere[__nesc_mote];
    *size = sizeof(SarpM$tFoundHere[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$nodeCounter"))
  {
    *addr = (uintptr_t)&SarpM$nodeCounter[__nesc_mote];
    *size = sizeof(SarpM$nodeCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$nodeCounter2"))
  {
    *addr = (uintptr_t)&SarpM$nodeCounter2[__nesc_mote];
    *size = sizeof(SarpM$nodeCounter2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$lastToFindLoop"))
  {
    *addr = (uintptr_t)&SarpM$lastToFindLoop[__nesc_mote];
    *size = sizeof(SarpM$lastToFindLoop[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$cantFixIt"))
  {
    *addr = (uintptr_t)&SarpM$cantFixIt[__nesc_mote];
    *size = sizeof(SarpM$cantFixIt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$dontSendTo"))
  {
    *addr = (uintptr_t)&SarpM$dontSendTo[__nesc_mote];
    *size = sizeof(SarpM$dontSendTo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$newTransactionParent"))
  {
    *addr = (uintptr_t)&SarpM$newTransactionParent[__nesc_mote];
    *size = sizeof(SarpM$newTransactionParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$isOff_onoff"))
  {
    *addr = (uintptr_t)&SarpM$isOff_onoff[__nesc_mote];
    *size = sizeof(SarpM$isOff_onoff[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$onOffThirtySecondCounter"))
  {
    *addr = (uintptr_t)&SarpM$onOffThirtySecondCounter[__nesc_mote];
    *size = sizeof(SarpM$onOffThirtySecondCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$selectiveCounter"))
  {
    *addr = (uintptr_t)&SarpM$selectiveCounter[__nesc_mote];
    *size = sizeof(SarpM$selectiveCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$oneHopQuickGlance"))
  {
    *addr = (uintptr_t)&SarpM$oneHopQuickGlance[__nesc_mote];
    *size = sizeof(SarpM$oneHopQuickGlance[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$twoHopQuickGlance"))
  {
    *addr = (uintptr_t)&SarpM$twoHopQuickGlance[__nesc_mote];
    *size = sizeof(SarpM$twoHopQuickGlance[__nesc_mote]);
    return 0;
  }

  /* Module AMStandard */
  if (!strcmp(varname, "AMStandard$state"))
  {
    *addr = (uintptr_t)&AMStandard$state[__nesc_mote];
    *size = sizeof(AMStandard$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMStandard$buffer"))
  {
    *addr = (uintptr_t)&AMStandard$buffer[__nesc_mote];
    *size = sizeof(AMStandard$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMStandard$lastCount"))
  {
    *addr = (uintptr_t)&AMStandard$lastCount[__nesc_mote];
    *size = sizeof(AMStandard$lastCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMStandard$counter"))
  {
    *addr = (uintptr_t)&AMStandard$counter[__nesc_mote];
    *size = sizeof(AMStandard$counter[__nesc_mote]);
    return 0;
  }

  /* Module MicaHighSpeedRadioM */
  if (!strcmp(varname, "MicaHighSpeedRadioM$state"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$state[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$send_state"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$send_state[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$send_state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$tx_count"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$tx_count[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$tx_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$calc_crc"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$calc_crc[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$calc_crc[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$ack_count"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$ack_count[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$ack_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$rec_count"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$rec_count[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$rec_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$buffer"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$buffer[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$rec_ptr"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$rec_ptr[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$rec_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$send_ptr"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$send_ptr[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$send_ptr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$rx_count"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$rx_count[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$rx_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$msg_length"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$msg_length[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$msg_length[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$buf_head"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$buf_head[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$buf_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$buf_end"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$buf_end[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$buf_end[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$encoded_buffer"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$encoded_buffer[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$encoded_buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MicaHighSpeedRadioM$enc_count"))
  {
    *addr = (uintptr_t)&MicaHighSpeedRadioM$enc_count[__nesc_mote];
    *size = sizeof(MicaHighSpeedRadioM$enc_count[__nesc_mote]);
    return 0;
  }

  /* Module SecDedEncoding */
  if (!strcmp(varname, "SecDedEncoding$data1"))
  {
    *addr = (uintptr_t)&SecDedEncoding$data1[__nesc_mote];
    *size = sizeof(SecDedEncoding$data1[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SecDedEncoding$data2"))
  {
    *addr = (uintptr_t)&SecDedEncoding$data2[__nesc_mote];
    *size = sizeof(SecDedEncoding$data2[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SecDedEncoding$data3"))
  {
    *addr = (uintptr_t)&SecDedEncoding$data3[__nesc_mote];
    *size = sizeof(SecDedEncoding$data3[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SecDedEncoding$state"))
  {
    *addr = (uintptr_t)&SecDedEncoding$state[__nesc_mote];
    *size = sizeof(SecDedEncoding$state[__nesc_mote]);
    return 0;
  }

  /* Module RandomLFSR */
  if (!strcmp(varname, "RandomLFSR$shiftReg"))
  {
    *addr = (uintptr_t)&RandomLFSR$shiftReg[__nesc_mote];
    *size = sizeof(RandomLFSR$shiftReg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandomLFSR$initSeed"))
  {
    *addr = (uintptr_t)&RandomLFSR$initSeed[__nesc_mote];
    *size = sizeof(RandomLFSR$initSeed[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RandomLFSR$mask"))
  {
    *addr = (uintptr_t)&RandomLFSR$mask[__nesc_mote];
    *size = sizeof(RandomLFSR$mask[__nesc_mote]);
    return 0;
  }

  /* Module ChannelMonC */
  if (!strcmp(varname, "channelMonEvents"))
  {
    *addr = (uintptr_t)&channelMonEvents[__nesc_mote];
    *size = sizeof(channelMonEvents[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ChannelMonC$CM_search"))
  {
    *addr = (uintptr_t)&ChannelMonC$CM_search[__nesc_mote];
    *size = sizeof(ChannelMonC$CM_search[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ChannelMonC$CM_state"))
  {
    *addr = (uintptr_t)&ChannelMonC$CM_state[__nesc_mote];
    *size = sizeof(ChannelMonC$CM_state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ChannelMonC$CM_lastBit"))
  {
    *addr = (uintptr_t)&ChannelMonC$CM_lastBit[__nesc_mote];
    *size = sizeof(ChannelMonC$CM_lastBit[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ChannelMonC$CM_startSymBits"))
  {
    *addr = (uintptr_t)&ChannelMonC$CM_startSymBits[__nesc_mote];
    *size = sizeof(ChannelMonC$CM_startSymBits[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ChannelMonC$CM_waiting"))
  {
    *addr = (uintptr_t)&ChannelMonC$CM_waiting[__nesc_mote];
    *size = sizeof(ChannelMonC$CM_waiting[__nesc_mote]);
    return 0;
  }

  /* Module RadioTimingC */
  if (!strcmp(varname, "radioTimingEvents"))
  {
    *addr = (uintptr_t)&radioTimingEvents[__nesc_mote];
    *size = sizeof(radioTimingEvents[__nesc_mote]);
    return 0;
  }

  /* Module SpiByteFifoC */
  if (!strcmp(varname, "SpiByteFifoC$nextByte"))
  {
    *addr = (uintptr_t)&SpiByteFifoC$nextByte[__nesc_mote];
    *size = sizeof(SpiByteFifoC$nextByte[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SpiByteFifoC$state"))
  {
    *addr = (uintptr_t)&SpiByteFifoC$state[__nesc_mote];
    *size = sizeof(SpiByteFifoC$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SpiByteFifoC$spdr"))
  {
    *addr = (uintptr_t)&SpiByteFifoC$spdr[__nesc_mote];
    *size = sizeof(SpiByteFifoC$spdr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SpiByteFifoC$radioState"))
  {
    *addr = (uintptr_t)&SpiByteFifoC$radioState[__nesc_mote];
    *size = sizeof(SpiByteFifoC$radioState[__nesc_mote]);
    return 0;
  }

  /* Module CrcFilter */

  /* Module UARTNoCRCPacketM */

  /* Module PacketSink */

  /* Module LedsM */
  if (!strcmp(varname, "LedsM$ledsOn"))
  {
    *addr = (uintptr_t)&LedsM$ledsOn[__nesc_mote];
    *size = sizeof(LedsM$ledsOn[__nesc_mote]);
    return 0;
  }

  /* Module TrustM */

  /* Module NeighborTableM */
  if (!strcmp(varname, "NeighborTableM$nLoopCounter"))
  {
    *addr = (uintptr_t)&NeighborTableM$nLoopCounter[__nesc_mote];
    *size = sizeof(NeighborTableM$nLoopCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborTableM$highestParentTrustIndex"))
  {
    *addr = (uintptr_t)&NeighborTableM$highestParentTrustIndex[__nesc_mote];
    *size = sizeof(NeighborTableM$highestParentTrustIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborTableM$highestPeerTrustIndex"))
  {
    *addr = (uintptr_t)&NeighborTableM$highestPeerTrustIndex[__nesc_mote];
    *size = sizeof(NeighborTableM$highestPeerTrustIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborTableM$highestChildTrustIndex"))
  {
    *addr = (uintptr_t)&NeighborTableM$highestChildTrustIndex[__nesc_mote];
    *size = sizeof(NeighborTableM$highestChildTrustIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborTableM$maxParentPeerTrustIndex"))
  {
    *addr = (uintptr_t)&NeighborTableM$maxParentPeerTrustIndex[__nesc_mote];
    *size = sizeof(NeighborTableM$maxParentPeerTrustIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborTableM$maxOverallTrustIndex"))
  {
    *addr = (uintptr_t)&NeighborTableM$maxOverallTrustIndex[__nesc_mote];
    *size = sizeof(NeighborTableM$maxOverallTrustIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborTableM$chosenParentTrustIndex"))
  {
    *addr = (uintptr_t)&NeighborTableM$chosenParentTrustIndex[__nesc_mote];
    *size = sizeof(NeighborTableM$chosenParentTrustIndex[__nesc_mote]);
    return 0;
  }

  /* Module TransactionTableM */

  /* Module MessagingM */

  /* Module AttackM */

  /* Module TrafficGeneratorM */

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module Nido */

  /* Module PotM */

  /* Module HPLPotC */

  /* Module PowerStateM */

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

  /* Module SimpleTimeM */
  memset(&SimpleTimeM$time[__nesc_mote], 0, sizeof SimpleTimeM$time[__nesc_mote]);
  memset(&SimpleTimeM$aTimer[__nesc_mote], 0, sizeof SimpleTimeM$aTimer[__nesc_mote]);

  /* Module TimeUtilC */

  /* Module SarpM */
  SarpM$DFCounter[__nesc_mote] = 0;
  SarpM$DFThreshold[__nesc_mote] = 3;
  memset(&SarpM$myLevel[__nesc_mote], 0, sizeof SarpM$myLevel[__nesc_mote]);
  memset(&SarpM$outIndex[__nesc_mote], 0, sizeof SarpM$outIndex[__nesc_mote]);
  memset(&SarpM$myAddr[__nesc_mote], 0, sizeof SarpM$myAddr[__nesc_mote]);
  SarpM$OkToStart[__nesc_mote] = TRUE;
  SarpM$TRANSACTION_ID[__nesc_mote] = 0;
  memset(&SarpM$myOne[__nesc_mote], 0, sizeof SarpM$myOne[__nesc_mote]);
  memset(&SarpM$myZero[__nesc_mote], 0, sizeof SarpM$myZero[__nesc_mote]);
  memset(&SarpM$inQ[__nesc_mote], 0, sizeof SarpM$inQ[__nesc_mote]);
  memset(&SarpM$outQ[__nesc_mote], 0, sizeof SarpM$outQ[__nesc_mote]);
  memset(&SarpM$outMsg[__nesc_mote], 0, sizeof SarpM$outMsg[__nesc_mote]);
  memset(&SarpM$readInQHere[__nesc_mote], 0, sizeof SarpM$readInQHere[__nesc_mote]);
  memset(&SarpM$writeInQHere[__nesc_mote], 0, sizeof SarpM$writeInQHere[__nesc_mote]);
  memset(&SarpM$readOutQHere[__nesc_mote], 0, sizeof SarpM$readOutQHere[__nesc_mote]);
  memset(&SarpM$writeOutQHere[__nesc_mote], 0, sizeof SarpM$writeOutQHere[__nesc_mote]);
  SarpM$readReportQHere[__nesc_mote] = 0;
  SarpM$writeReportQHere[__nesc_mote] = 0;
  SarpM$numMsgInQ[__nesc_mote] = 0;
  SarpM$numMsgOutQ[__nesc_mote] = 0;
  SarpM$numDataMessagesInTrial[__nesc_mote] = 0;
  memset(&SarpM$this_dmesg[__nesc_mote], 0, sizeof SarpM$this_dmesg[__nesc_mote]);
  memset(&SarpM$disc_msg_in[__nesc_mote], 0, sizeof SarpM$disc_msg_in[__nesc_mote]);
  memset(&SarpM$dataMsgIn[__nesc_mote], 0, sizeof SarpM$dataMsgIn[__nesc_mote]);
  memset(&SarpM$reportReqMsgIn[__nesc_mote], 0, sizeof SarpM$reportReqMsgIn[__nesc_mote]);
  memset(&SarpM$reportRespNoForwardMsgIn[__nesc_mote], 0, sizeof SarpM$reportRespNoForwardMsgIn[__nesc_mote]);
  memset(&SarpM$reportForwardMsgIn[__nesc_mote], 0, sizeof SarpM$reportForwardMsgIn[__nesc_mote]);
  memset(&SarpM$endToEndRepRespMsgIn[__nesc_mote], 0, sizeof SarpM$endToEndRepRespMsgIn[__nesc_mote]);
  memset(&SarpM$specificReportReqMsgIn[__nesc_mote], 0, sizeof SarpM$specificReportReqMsgIn[__nesc_mote]);
  memset(&SarpM$specificReportResponseMsgIn[__nesc_mote], 0, sizeof SarpM$specificReportResponseMsgIn[__nesc_mote]);
  memset(&SarpM$controlMsgIn[__nesc_mote], 0, sizeof SarpM$controlMsgIn[__nesc_mote]);
  memset(&SarpM$myStaticParent[__nesc_mote], 0, sizeof SarpM$myStaticParent[__nesc_mote]);
  memset(&SarpM$transactionCounter[__nesc_mote], 0, sizeof SarpM$transactionCounter[__nesc_mote]);
  memset(&SarpM$neighbors[__nesc_mote], 0, sizeof SarpM$neighbors[__nesc_mote]);
  memset(&SarpM$myOneHopNeighbors[__nesc_mote], 0, sizeof SarpM$myOneHopNeighbors[__nesc_mote]);
  memset(&SarpM$myChildren[__nesc_mote], 0, sizeof SarpM$myChildren[__nesc_mote]);
  memset(&SarpM$myPeers[__nesc_mote], 0, sizeof SarpM$myPeers[__nesc_mote]);
  memset(&SarpM$numOneHopNeighbors[__nesc_mote], 0, sizeof SarpM$numOneHopNeighbors[__nesc_mote]);
  memset(&SarpM$numChildren[__nesc_mote], 0, sizeof SarpM$numChildren[__nesc_mote]);
  memset(&SarpM$numPeers[__nesc_mote], 0, sizeof SarpM$numPeers[__nesc_mote]);
  memset(&SarpM$numNeighbors[__nesc_mote], 0, sizeof SarpM$numNeighbors[__nesc_mote]);
  memset(&SarpM$transactionRecords[__nesc_mote], 0, sizeof SarpM$transactionRecords[__nesc_mote]);
  memset(&SarpM$reportQ[__nesc_mote], 0, sizeof SarpM$reportQ[__nesc_mote]);
  memset(&SarpM$transactionsToCheckQ[__nesc_mote], 0, sizeof SarpM$transactionsToCheckQ[__nesc_mote]);
  memset(&SarpM$checkThisTransaction[__nesc_mote], 0, sizeof SarpM$checkThisTransaction[__nesc_mote]);
  memset(&SarpM$thisTransaction[__nesc_mote], 0, sizeof SarpM$thisTransaction[__nesc_mote]);
  memset(&SarpM$oneTimesTID[__nesc_mote], 0, sizeof SarpM$oneTimesTID[__nesc_mote]);
  memset(&SarpM$twoTimesTID[__nesc_mote], 0, sizeof SarpM$twoTimesTID[__nesc_mote]);
  memset(&SarpM$transactionFound[__nesc_mote], 0, sizeof SarpM$transactionFound[__nesc_mote]);
  SarpM$sending[__nesc_mote] = 0;
  SarpM$readTransactionCheckHere[__nesc_mote] = 0;
  SarpM$writeTransactionCheckHere[__nesc_mote] = 0;
  SarpM$numTransactionsToCheck[__nesc_mote] = 0;
  SarpM$tFoundHere[__nesc_mote] = 0;
  memset(&SarpM$nodeCounter[__nesc_mote], 0, sizeof SarpM$nodeCounter[__nesc_mote]);
  memset(&SarpM$nodeCounter2[__nesc_mote], 0, sizeof SarpM$nodeCounter2[__nesc_mote]);
  SarpM$lastToFindLoop[__nesc_mote] = 255;
  SarpM$cantFixIt[__nesc_mote] = 255;
  SarpM$dontSendTo[__nesc_mote] = 255;
  memset(&SarpM$newTransactionParent[__nesc_mote], 0, sizeof SarpM$newTransactionParent[__nesc_mote]);
  SarpM$isOff_onoff[__nesc_mote] = 0;
  SarpM$onOffThirtySecondCounter[__nesc_mote] = 0;
  SarpM$selectiveCounter[__nesc_mote] = 0;
  SarpM$oneHopQuickGlance[__nesc_mote] = 0;
  SarpM$twoHopQuickGlance[__nesc_mote] = 0;

  /* Module AMStandard */
  memset(&AMStandard$state[__nesc_mote], 0, sizeof AMStandard$state[__nesc_mote]);
  memset(&AMStandard$buffer[__nesc_mote], 0, sizeof AMStandard$buffer[__nesc_mote]);
  memset(&AMStandard$lastCount[__nesc_mote], 0, sizeof AMStandard$lastCount[__nesc_mote]);
  memset(&AMStandard$counter[__nesc_mote], 0, sizeof AMStandard$counter[__nesc_mote]);

  /* Module MicaHighSpeedRadioM */
  memset(&MicaHighSpeedRadioM$state[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$state[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$send_state[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$send_state[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$tx_count[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$tx_count[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$calc_crc[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$calc_crc[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$ack_count[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$ack_count[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$rec_count[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$rec_count[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$buffer[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$buffer[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$rec_ptr[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$rec_ptr[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$send_ptr[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$send_ptr[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$rx_count[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$rx_count[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$msg_length[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$msg_length[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$buf_head[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$buf_head[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$buf_end[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$buf_end[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$encoded_buffer[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$encoded_buffer[__nesc_mote]);
  memset(&MicaHighSpeedRadioM$enc_count[__nesc_mote], 0, sizeof MicaHighSpeedRadioM$enc_count[__nesc_mote]);

  /* Module SecDedEncoding */
  memset(&SecDedEncoding$data1[__nesc_mote], 0, sizeof SecDedEncoding$data1[__nesc_mote]);
  memset(&SecDedEncoding$data2[__nesc_mote], 0, sizeof SecDedEncoding$data2[__nesc_mote]);
  memset(&SecDedEncoding$data3[__nesc_mote], 0, sizeof SecDedEncoding$data3[__nesc_mote]);
  memset(&SecDedEncoding$state[__nesc_mote], 0, sizeof SecDedEncoding$state[__nesc_mote]);

  /* Module RandomLFSR */
  memset(&RandomLFSR$shiftReg[__nesc_mote], 0, sizeof RandomLFSR$shiftReg[__nesc_mote]);
  memset(&RandomLFSR$initSeed[__nesc_mote], 0, sizeof RandomLFSR$initSeed[__nesc_mote]);
  memset(&RandomLFSR$mask[__nesc_mote], 0, sizeof RandomLFSR$mask[__nesc_mote]);

  /* Module ChannelMonC */
  memset(&channelMonEvents[__nesc_mote], 0, sizeof channelMonEvents[__nesc_mote]);
  memset(&ChannelMonC$CM_search[__nesc_mote], 0, sizeof ChannelMonC$CM_search[__nesc_mote]);
  memset(&ChannelMonC$CM_state[__nesc_mote], 0, sizeof ChannelMonC$CM_state[__nesc_mote]);
  memset(&ChannelMonC$CM_lastBit[__nesc_mote], 0, sizeof ChannelMonC$CM_lastBit[__nesc_mote]);
  memset(&ChannelMonC$CM_startSymBits[__nesc_mote], 0, sizeof ChannelMonC$CM_startSymBits[__nesc_mote]);
  memset(&ChannelMonC$CM_waiting[__nesc_mote], 0, sizeof ChannelMonC$CM_waiting[__nesc_mote]);

  /* Module RadioTimingC */
  memset(&radioTimingEvents[__nesc_mote], 0, sizeof radioTimingEvents[__nesc_mote]);

  /* Module SpiByteFifoC */
  memset(&SpiByteFifoC$nextByte[__nesc_mote], 0, sizeof SpiByteFifoC$nextByte[__nesc_mote]);
  memset(&SpiByteFifoC$state[__nesc_mote], 0, sizeof SpiByteFifoC$state[__nesc_mote]);
  memset(&SpiByteFifoC$spdr[__nesc_mote], 0, sizeof SpiByteFifoC$spdr[__nesc_mote]);
  memset(&SpiByteFifoC$radioState[__nesc_mote], 0, sizeof SpiByteFifoC$radioState[__nesc_mote]);

  /* Module CrcFilter */

  /* Module UARTNoCRCPacketM */

  /* Module PacketSink */

  /* Module LedsM */
  memset(&LedsM$ledsOn[__nesc_mote], 0, sizeof LedsM$ledsOn[__nesc_mote]);

  /* Module TrustM */

  /* Module NeighborTableM */
  NeighborTableM$nLoopCounter[__nesc_mote] = 0;
  memset(&NeighborTableM$highestParentTrustIndex[__nesc_mote], 0, sizeof NeighborTableM$highestParentTrustIndex[__nesc_mote]);
  memset(&NeighborTableM$highestPeerTrustIndex[__nesc_mote], 0, sizeof NeighborTableM$highestPeerTrustIndex[__nesc_mote]);
  memset(&NeighborTableM$highestChildTrustIndex[__nesc_mote], 0, sizeof NeighborTableM$highestChildTrustIndex[__nesc_mote]);
  memset(&NeighborTableM$maxParentPeerTrustIndex[__nesc_mote], 0, sizeof NeighborTableM$maxParentPeerTrustIndex[__nesc_mote]);
  memset(&NeighborTableM$maxOverallTrustIndex[__nesc_mote], 0, sizeof NeighborTableM$maxOverallTrustIndex[__nesc_mote]);
  memset(&NeighborTableM$chosenParentTrustIndex[__nesc_mote], 0, sizeof NeighborTableM$chosenParentTrustIndex[__nesc_mote]);

  /* Module TransactionTableM */

  /* Module MessagingM */

  /* Module AttackM */

  /* Module TrafficGeneratorM */

}
