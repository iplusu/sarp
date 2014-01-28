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


extern void *memmove(void *__dest, const void *__src, size_t __n) 
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
#line 242
extern size_t strlen(const char *__s) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
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







static inline result_t rcombine3(result_t r1, result_t r2, result_t r3);




static inline result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4);





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

extern int sprintf(char *__restrict __s, 
const char *__restrict __format, ...) __attribute((__nothrow__)) ;





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
#line 128
void event_channel_mon_create(event_t *event, int mote, long long ftime, int interval);

void event_channel_mon_invalidate(event_t *event);

void event_spi_byte_handle(event_t *event, struct TOS_state *state);

void event_spi_byte_create(event_t *event, int mote, long long ftime, int interval, int count);

void event_spi_byte_invalidate(event_t *event);

void event_spi_byte_end(event_t *fevent);



void event_radio_timing_create(event_t *fevent, int mote, long long ftime, int interval);

void event_radio_timing_invalidate(event_t *fevent);

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

static short set_io_bit(char port, char bit);
static inline short clear_io_bit(char port, char bit);
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
#line 270
static __inline void TOSH_CLR_RFM_TXD_PIN(void);
#line 270
static __inline void TOSH_MAKE_RFM_TXD_INPUT(void);
static __inline void TOSH_SET_RFM_CTL0_PIN(void);
#line 271
static __inline void TOSH_CLR_RFM_CTL0_PIN(void);
static __inline void TOSH_SET_RFM_CTL1_PIN(void);
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
#line 124
extern int connect(int __fd, const struct sockaddr *__addr, socklen_t __len);
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







static short set_io_bit(char port, char bit);
#line 98
static inline short clear_io_bit(char port, char bit);
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
#line 342
uint8_t radioWaitingState[TOSNODES];
char TOSH_MHSR_start[12] = { 0xf0, 0xf0, 0xf0, 0xff, 0x00, 0xff, 0x0f, 0x00, 0xff, 0x0f, 0x0f, 0x0f };

enum __nesc_unnamed4338 {
  NOT_WAITING = 0, 
  WAITING_FOR_ONE_TO_PASS = 1, 
  WAITING_FOR_ONE_TO_CAPTURE = 2
};
#line 389
static uint8_t TOSH_rfm_rx_bit(void );








static inline void TOSH_rfm_tx_bit(uint8_t data);
#line 470
void event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)   ;

event_t *spiByteEvents[TOSNODES];

int RADIO_TICKS_PER_EVENT = 100;
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
# 35 "/usr/include/arpa/inet.h"
extern in_addr_t inet_addr(const char *__cp) __attribute((__nothrow__)) ;






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
#line 910
static inline void sendSarpThroughput(uint32_t transaction, uint16_t sent, uint16_t receivedIn, uint16_t dataSource);
#line 941
static inline long getMyTime(void);





static void sendSarpTrust(uint32_t transaction, uint16_t source, uint16_t target, float trustFP, float trustLP, float trustPR, float overallTrust, int isGood);
#line 987
static inline void sendSarpParent(uint32_t transaction, uint16_t myID, uint16_t parentID);
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
static void *nmemcpy(void *to, const void *from, size_t n);









static inline void *nmemset(void *to, int val, size_t n);
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
# 49 "/opt/tinyos-1.x/tos/lib/Counters/IntMsg.h"
#line 46
typedef struct IntMsg {
  uint16_t val;
  uint16_t src;
} IntMsg;

enum __nesc_unnamed4345 {
  AM_INTMSG = 4
};
# 33 "/opt/tinyos-1.x/tos/interfaces/TimeSync.h"
enum __nesc_unnamed4346 {

  TIME_OFFSET = 32, 


  TIME_MAX_ERR = 32, 

  TIME_SYNC_INTERVAL = 61440U
};
# 32 "/opt/tinyos-1.x/tos/interfaces/TimeSyncMsg.h"
enum __nesc_unnamed4347 {
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




enum __nesc_unnamed4348 {
  MASTER = 1, 
  SLAVE_SYNCED = 2, 
  SLAVE_UNSYNCED = 0
};
# 22 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/MessagingH.h"
enum __nesc_unnamed4349 {
#line 22
  ROOT = 0, INNER = 1, LEAF = 2, NO_TYPE = 3
};

enum __nesc_unnamed4350 {

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


enum __nesc_unnamed4351 {

  CONTROL_START_TYPE = 0, 
  CONTROL_NEIGHBOR_DISCOVERY_TYPE = 1, 
  CONTROL_PARENT_CHOICE_TYPE = 2, 
  CONTROL_TRUST_CHANGE_TYPE = 3
};





#line 50
typedef struct Disc_Rec_t {

  uint16_t node_id;
  uint16_t level;
} Disc_Rec_t;








#line 56
typedef struct DiscoveryMsg {

  uint16_t node_id;
  uint16_t level;
  uint16_t parent_id;
  uint16_t num_neighbors;
  Disc_Rec_t neighbors[5];
} DiscoveryMsg;









#line 65
typedef struct ReadyMsg {

  uint16_t node_id;
  uint16_t dest;
  uint16_t parent;
  uint8_t num_children;
} 
__attribute((packed))  
ReadyMsg;
#line 88
#line 75
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
} 
__attribute((packed))  
DataMsg;










#line 90
typedef struct ReportRequestMsg {

  uint16_t destination;
  uint16_t requestor;
  uint16_t originator;
  uint16_t originatorPacketCount;
  uint32_t transaction_id;
} 
__attribute((packed))  
ReportRequestMsg;










#line 101
typedef struct SpecificReportRequestMsg {

  uint16_t destination;
  uint16_t requestor;
  uint16_t originator;
  uint16_t originatorPacketCount;
  uint32_t transaction_id;
} 
__attribute((packed))  
SpecificReportRequestMsg;
#line 123
#line 112
typedef struct SpecificReportResponseMsg {

  uint16_t responder;
  uint16_t originator;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} 
__attribute((packed))  
SpecificReportResponseMsg;
#line 135
#line 125
typedef struct ReportResponseNoForwardMsg {

  uint16_t responder;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} 
__attribute((packed))  
ReportResponseNoForwardMsg;
#line 147
#line 137
typedef struct ReportResponseForwardMsg {

  uint16_t responder;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
  uint16_t packetsForwarded;
  uint16_t packetsForwardedTo;
} 
__attribute((packed))  
ReportResponseForwardMsg;










#line 149
typedef struct EndToEndReportResponseMsg {

  uint16_t responder;
  uint16_t originator;
  uint32_t transaction_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
} 
__attribute((packed))  
EndToEndReportResponseMsg;









#line 160
typedef struct BaseReportRequestMsg {

  uint16_t requestor;
  uint16_t segment_id;
  uint8_t hopsRemaining;
  uint16_t route[20];
} 
__attribute((packed))  
BaseReportRequestMsg;









#line 170
typedef struct BaseReportResponseMsg {

  uint16_t responder;
  uint16_t segment_id;
  uint16_t packetsReceived;
  uint16_t packetsReceivedFrom;
} 
__attribute((packed))  
BaseReportResponseMsg;




#line 180
typedef struct StartMsg {

  uint16_t node_id;
} StartMsg;





#line 185
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
# 36 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
#line 33
typedef struct __nesc_unnamed4352 {
  TOS_MsgPtr msg;
  int success;
} uart_send_done_data_t;

enum __nesc_unnamed4353 {
  UART_SEND_DELAY = 1600
};



void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess);

static inline void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success);

static inline void event_uart_write_handle(event_t *uevent, 
struct TOS_state *state);
#line 61
static inline void event_uart_write_create(event_t *uevent, int mote, long long utime, TOS_MsgPtr msg, result_t success);
#line 77
static void TOSH_uart_send(TOS_MsgPtr msg);
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
enum __nesc_unnamed4354 {
  TOSH_ACTUAL_PHOTO_PORT = 1, 
  TOSH_ACTUAL_TEMP_PORT = 1, 
  TOSH_ACTUAL_MIC_PORT = 2, 
  TOSH_ACTUAL_ACCEL_X_PORT = 3, 
  TOSH_ACTUAL_ACCEL_Y_PORT = 4, 
  TOSH_ACTUAL_MAG_X_PORT = 6, 
  TOSH_ACTUAL_MAG_Y_PORT = 5
};

enum __nesc_unnamed4355 {
  TOS_ADC_PHOTO_PORT = 1, 
  TOS_ADC_TEMP_PORT = 2, 
  TOS_ADC_MIC_PORT = 3, 
  TOS_ADC_ACCEL_X_PORT = 4, 
  TOS_ADC_ACCEL_Y_PORT = 5, 
  TOS_ADC_MAG_X_PORT = 6, 

  TOS_ADC_MAG_Y_PORT = 8
};

enum __nesc_unnamed4356 {
  TOS_MAG_POT_ADDR = 0, 
  TOS_MIC_POT_ADDR = 1
};
# 36 "/opt/tinyos-1.x/tos/interfaces/TosTime.h"
#line 33
typedef struct __nesc_unnamed4357 {
  uint32_t high32;
  uint32_t low32;
} tos_time_t;
# 39 "/opt/tinyos-1.x/tos/interfaces/Timer.h"
enum __nesc_unnamed4358 {
  TIMER_REPEAT = 0, 
  TIMER_ONE_SHOT = 1, 
  NUM_TIMERS = 10U
};
# 34 "/opt/tinyos-1.x/tos/interfaces/Clock.h"
enum __nesc_unnamed4359 {
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
enum __nesc_unnamed4360 {
  DEFAULT_SCALE = 3, DEFAULT_INTERVAL = 255
};
# 32 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.h"
enum __nesc_unnamed4361 {

  MAX_NUM_TIMERS = 0U
};
# 28 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/Globals.h"
enum __nesc_unnamed4362 {

  CIRCULAR_BUFFER_SIZE = 16, 
  MAX_NEIGHBORS = 32, 
  MAX_ONE_HOP_NEIGHBORS = MAX_NEIGHBORS, 
  MAX_OTHER_NEIGHBORS = MAX_NEIGHBORS
};
# 14 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/TransactionTableH.h"
enum __nesc_unnamed4363 {

  GOOD_REPORTING_BEHAVIOR_INCREMENT = 1, 
  BAD_REPORTING_BEHAVIOR_INCREMENT = 2, 
  GOOD_AVAILABILITY_BEHAVIOR_INCREMENT = 1, 
  BAD_AVAILABILITY_BEHAVIOR_INCREMENT = 2, 
  MAX_NUMBER_OTHER_POSSIBLE_PARENTS = 10
};

uint16_t one_gfb_inc = 0;
uint16_t one_bfb_inc = 0;
uint16_t one_glb_inc = 0;
uint16_t one_blb_inc = 0;
uint16_t two_gfb_inc = 0;
uint16_t two_bfb_inc = 0;
uint16_t two_glb_inc = 0;
uint16_t two_blb_inc = 0;
#line 56
#line 32
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






#line 60
typedef struct Check_Transaction_Record_t {

  Transaction_Record_Ptr transactionPtr;
  uint16_t oneTimes;
  uint16_t twoTimes;
} Check_Transaction_Record_t;

uint8_t tLoopCounter;
#line 67
uint8_t tnLoopCounter;
#line 67
uint8_t tnForgettingCnt = 0;
# 13 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/NeighborTableH.h"
enum __nesc_unnamed4364 {

  NO_LEVEL = 255, 
  NO_PARENT = 255, 
  NO_NEIGHBOR = 255, 
  MAX_CHILDREN = 32, 
  TRUST_GFB_START = 1, 
  TRUST_BFB_START = 0, 
  TRUST_GLB_START = 1, 
  TRUST_BLB_START = 0
};







#line 26
typedef struct SWindow_t {

  uint32_t time;
  uint32_t GPB;
  uint32_t BPB;
} SWindow_t;









#line 33
typedef struct PB_t {

  SWindow_t SWindow[10];
  uint16_t pointer;
} 



PB_t;
#line 56
#line 43
typedef struct Trust_Rec_t {

  float trustFP;
  float GFB;
  float BFB;
  float trustLP;
  uint32_t GLB;
  uint32_t BLB;

  float trustPR;
  PB_t PB;

  float overallTrust;
} Trust_Rec_t;






#line 58
typedef struct Neighbor_Rec_t {

  uint16_t node_id;
  uint8_t level;
  uint16_t parent_id;
} Neighbor_Rec_t;








#line 65
typedef struct Neighbor_Rec_withTrust_t {

  uint16_t node_id;
  uint8_t level;
  uint16_t parent_id;
  uint8_t isOne;
  Trust_Rec_t trust;
} Neighbor_Rec_withTrust_t;





#line 74
typedef struct Neighbor_Msg_Rec_t {

  uint16_t node_id;
  uint8_t level;
} Neighbor_Msg_Rec_t;


uint8_t neighborFound;
#line 81
uint8_t oneHopFound;

float parent_peer_threshold = 0.4;



float peer_child_threshold = 0.2;
# 19 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/TrustH.h"
float PR_TOLERANCE = 0.1;
# 43 "/opt/tinyos-1.x/tos/interfaces/MemAlloc.h"
typedef int8_t **Handle;
typedef Handle *HandlePtr;
# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/AttackH.h"
uint16_t aCounter;

uint16_t selectiveForwardAttackers[6] = { 4, 4, 4, 4, 2, 2 };
uint16_t selectiveForwardVictims[6] = { 5, 1, 7, 3, 5, 1 };
uint16_t selectiveForwardNumerators[6] = { 7, 7, 7, 7, 1, 1 };
uint16_t selectiveForwardDenomenators[6] = { 10, 10, 10, 10, 10, 10 };



uint16_t numSFAttackers = 6;







#line 36
typedef struct selectiveForwarder {
  uint16_t attacker_id;
  uint16_t victim_id;
  uint16_t numerator;
  uint16_t demonenator;
} selectiveForwarder;




uint16_t loopCreationAttackers[0] = {  };
uint16_t loopCreationAttackersParents[0] = {  };



uint16_t numLoopCreationAttackers = 0;
#line 66
uint16_t onOffAttackers[1] = { 2 };
uint16_t nGoodBehaviors[1] = { 2 };
uint16_t nBadBehaviors[1] = { 1 };
uint16_t numOnOffAttackers = 1;
# 10 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/includes/TrafficGeneratorH.h"
uint16_t tfLoopCounter;
uint16_t trafficGenerators[1] = { 5 };
uint16_t numTrafficGenerators = 1;
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978);
# 49 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void PowerStateM$PowerState$radioStop(void);
#line 48
static   void PowerStateM$PowerState$radioStart(void);
#line 22
static   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
#line 41
static   void PowerStateM$PowerState$yellowOff(void);
#line 39
static   void PowerStateM$PowerState$greenOff(void);
#line 14
static   result_t PowerStateM$PowerState$init(int arg_0xb7774e80, int arg_0xb7773030);
#line 46
static   void PowerStateM$PowerState$radioRxMode(void);
#line 37
static   void PowerStateM$PowerState$redOff(void);







static   void PowerStateM$PowerState$radioTxMode(void);
#line 36
static   void PowerStateM$PowerState$redOn(void);
#line 18
static   result_t PowerStateM$PowerState$stop(void);
#line 9
static   double PowerStateM$PowerState$get_mote_cycles(int arg_0xb77749d8);
#line 38
static   void PowerStateM$PowerState$greenOn(void);
# 180 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t TimerM$Clock$fire(void);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TimerM$StdControl$init(void);






static  result_t TimerM$StdControl$start(void);







static  result_t TimerM$StdControl$stop(void);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$default$fired(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7614c70);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$start(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7614c70, 
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
char arg_0xb7630bc0, uint32_t arg_0xb7630d58);








static  result_t TimerM$Timer$stop(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7614c70);
# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   void HPLClock$Clock$setInterval(uint8_t arg_0xb75fb068);
#line 153
static   uint8_t HPLClock$Clock$readCounter(void);
#line 96
static   result_t HPLClock$Clock$setRate(char arg_0xb75ef450, char arg_0xb75ef5d0);
#line 121
static   uint8_t HPLClock$Clock$getInterval(void);
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 61 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.nc"
static  result_t SimpleTimeM$AbsoluteTimer$default$fired(
# 54 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
uint8_t arg_0xb757b6c8);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SimpleTimeM$Timer$fired(void);
# 65 "/opt/tinyos-1.x/tos/interfaces/TimeUtil.nc"
static   tos_time_t TimeUtilC$TimeUtil$addUint32(tos_time_t arg_0xb76504b0, uint32_t arg_0xb7650640);
#line 82
static   char TimeUtilC$TimeUtil$compare(tos_time_t arg_0xb764f4b0, tos_time_t arg_0xb764f640);
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendDisc$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
#line 49
static  result_t SarpM$SendReportNoForwardResponse$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
#line 49
static  result_t SarpM$SendReportForwardResponse$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
#line 49
static  result_t SarpM$SendReportRequest$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer6$fired(void);
#line 73
static  result_t SarpM$Timer1$fired(void);
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendSpecificReportRequest$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
#line 49
static  result_t SarpM$SendSpecificReportResponse$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr SarpM$Receive$receive(TOS_MsgPtr arg_0xb7791a20);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer7$fired(void);
#line 73
static  result_t SarpM$Timer10$fired(void);
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendReport$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer2$fired(void);
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendEndToEndReportResponse$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t SarpM$StdControl$init(void);






static  result_t SarpM$StdControl$start(void);







static  result_t SarpM$StdControl$stop(void);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer8$fired(void);
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendData$sendDone(TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(
# 56 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0xb7393d80, 
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0xb7791a20);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t AMStandard$ActivityTimer$fired(void);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr arg_0xb7791a20);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t AMStandard$Control$init(void);






static  result_t AMStandard$Control$start(void);







static  result_t AMStandard$Control$stop(void);
# 65 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static  result_t AMStandard$default$sendDone(void);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978);
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t AMStandard$SendMsg$send(
# 55 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0xb73936e8, 
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
static  result_t AMStandard$SendMsg$default$sendDone(
# 55 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0xb73936e8, 
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr arg_0xb7791a20);
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t MicaHighSpeedRadioM$Send$send(TOS_MsgPtr arg_0xb7788240);
# 37 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
static  result_t MicaHighSpeedRadioM$Code$decodeDone(char arg_0xb73476e8, char arg_0xb7347868);
static  result_t MicaHighSpeedRadioM$Code$encodeDone(char arg_0xb7347d00);
# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr arg_0xb7352a10, uint8_t arg_0xb7352ba0);
#line 33
static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(uint8_t arg_0xb73521e8, uint8_t arg_0xb7352370, TOS_MsgPtr arg_0xb7352500);
# 40 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
static  result_t MicaHighSpeedRadioM$SpiByteFifo$dataReady(uint8_t arg_0xb73321e0);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t MicaHighSpeedRadioM$Control$init(void);






static  result_t MicaHighSpeedRadioM$Control$start(void);







static  result_t MicaHighSpeedRadioM$Control$stop(void);
# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
static   void MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(TOS_MsgPtr arg_0xb7352a10, uint8_t arg_0xb7352ba0);
#line 33
static   void MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(uint8_t arg_0xb73521e8, uint8_t arg_0xb7352370, TOS_MsgPtr arg_0xb7352500);
# 39 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
static  result_t MicaHighSpeedRadioM$ChannelMon$idleDetect(void);
#line 38
static  result_t MicaHighSpeedRadioM$ChannelMon$startSymDetect(void);
# 33 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
static  result_t SecDedEncoding$Code$encode_flush(void);

static  result_t SecDedEncoding$Code$decode(char arg_0xb7347258);
#line 34
static  result_t SecDedEncoding$Code$encode(char arg_0xb7348db8);
# 63 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
static   uint16_t RandomLFSR$Random$rand(void);
#line 57
static   result_t RandomLFSR$Random$init(void);
# 36 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
static  result_t ChannelMonC$ChannelMon$macDelay(void);
#line 34
static  result_t ChannelMonC$ChannelMon$startSymbolSearch(void);
#line 33
static  result_t ChannelMonC$ChannelMon$init(void);

static  result_t ChannelMonC$ChannelMon$stopMonitorChannel(void);
# 34 "/opt/tinyos-1.x/tos/platform/pc/RadioTiming.nc"
static   uint16_t RadioTimingC$RadioTiming$currentTime(void);
#line 33
static   uint16_t RadioTimingC$RadioTiming$getTiming(void);
# 33 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
static  result_t SpiByteFifoC$SpiByteFifo$send(uint8_t arg_0xb7335c70);




static  result_t SpiByteFifoC$SpiByteFifo$phaseShift(void);
#line 35
static  result_t SpiByteFifoC$SpiByteFifo$startReadBytes(uint16_t arg_0xb7334428);
#line 34
static  result_t SpiByteFifoC$SpiByteFifo$idle(void);

static  result_t SpiByteFifoC$SpiByteFifo$txMode(void);
static  result_t SpiByteFifoC$SpiByteFifo$rxMode(void);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr CrcFilter$LowerReceive$receive(TOS_MsgPtr arg_0xb7791a20);
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr arg_0xb7788240);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t UARTNoCRCPacketM$Control$init(void);






static  result_t UARTNoCRCPacketM$Control$start(void);







static  result_t UARTNoCRCPacketM$Control$stop(void);
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t PacketSink$Send$send(TOS_MsgPtr arg_0xb7788240);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t PacketSink$Control$init(void);






static  result_t PacketSink$Control$start(void);







static  result_t PacketSink$Control$stop(void);
# 122 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t LedsM$Leds$yellowOff(void);
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
# 19 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Trust.nc"
static  float TrustM$Trust$calculateLP(uint32_t arg_0xb74b9338, uint32_t arg_0xb74b94c8);



static  float TrustM$Trust$calculateForgettingFactor(uint32_t arg_0xb74b87c0, uint32_t arg_0xb74b8950, float arg_0xb74b8ad0);
#line 22
static  float TrustM$Trust$calculateOverallTrust(float arg_0xb74b8010, float arg_0xb74b8190, float arg_0xb74b8310);
#line 21
static  float TrustM$Trust$calculatePR(PB_t arg_0xb74b9958, uint32_t arg_0xb74b9af0);
#line 16
static  float TrustM$Trust$calculateFP(float arg_0xb74ba010, float arg_0xb74ba190);
# 28 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
static  uint16_t NeighborTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *arg_0xb74f2808[], uint16_t arg_0xb74f29a8, uint8_t arg_0xb74f2b38, Neighbor_Rec_withTrust_t *arg_0xb74f2d18[], uint16_t arg_0xb74f2eb0, Neighbor_Rec_withTrust_t *arg_0xb74de0c8[], uint16_t arg_0xb74de260, uint16_t arg_0xb74de3f8, uint16_t arg_0xb74de598, uint16_t arg_0xb74de738, uint16_t arg_0xb74de8c8);
#line 17
static  result_t NeighborTableM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t arg_0xb74e0730[], Neighbor_Rec_withTrust_t *arg_0xb74e0920[], uint16_t *arg_0xb74e0ad8, uint16_t *arg_0xb74e0c98, uint16_t arg_0xb74e0e30, uint8_t arg_0xb74f3010, uint16_t arg_0xb74f31b0, uint16_t *arg_0xb74f3368, uint32_t arg_0xb74f3500);





static  result_t NeighborTableM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t arg_0xb74f3c98[], uint16_t arg_0xb74f3e38, Neighbor_Rec_withTrust_t *arg_0xb74f2068[]);
# 84 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
static  uint16_t TransactionTableM$TransactionTable$isALoop(Transaction_Record_t arg_0xb74c69d0[], uint32_t arg_0xb74c6b68, uint16_t arg_0xb74c6d00, uint16_t arg_0xb74c6ea0);
#line 57
static  void TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t arg_0xb74cd250[], uint16_t arg_0xb74cd3e0, uint16_t arg_0xb74cd578, uint16_t arg_0xb74cd708, uint32_t arg_0xb74cd8a8, uint32_t arg_0xb74cda38, uint32_t arg_0xb74cdbc8, uint32_t arg_0xb74cdd58, uint32_t arg_0xb74cdee8, uint8_t arg_0xb74cb088, uint32_t arg_0xb74cb218);
#line 22
static  uint8_t TransactionTableM$TransactionTable$transactionExistsAlready(Transaction_Record_t arg_0xb74d24b8[], uint32_t arg_0xb74d2650, uint16_t arg_0xb74d27e0);
#line 64
static  void TransactionTableM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t arg_0xb74cb9c8[], Transaction_Record_Ptr arg_0xb74cbb60, uint16_t arg_0xb74cbcf0, uint16_t arg_0xb74cbe80, uint16_t *arg_0xb74ca068, uint16_t arg_0xb74ca200, uint16_t *arg_0xb74ca3b8);
#line 46
static  uint16_t TransactionTableM$TransactionTable$getTransactionParent(Transaction_Record_t arg_0xb74ce1e8[], uint32_t arg_0xb74ce380);
#line 27
static  void TransactionTableM$TransactionTable$incrementSequenceNumber(Transaction_Record_t arg_0xb74d1010[], uint32_t arg_0xb74d11a8);




static  Transaction_Record_Ptr TransactionTableM$TransactionTable$getThisTransactionPtr(Transaction_Record_t arg_0xb74d1928[], uint32_t arg_0xb74d1ac0);
#line 16
static  result_t TransactionTableM$TransactionTable$initializeTransaction(Transaction_Record_t arg_0xb74d5640[], uint32_t arg_0xb74d57d8, uint16_t arg_0xb74d5970, uint16_t arg_0xb74d5b08, Neighbor_Rec_withTrust_t *arg_0xb74d5cf8[], uint16_t arg_0xb74d5e98, uint16_t arg_0xb74d4068, uint16_t arg_0xb74d4200, Neighbor_Rec_withTrust_t *arg_0xb74d43e0[], uint16_t arg_0xb74d4578, Neighbor_Rec_withTrust_t *arg_0xb74d4760[], uint16_t arg_0xb74d48f8, uint16_t arg_0xb74d4a88, uint16_t *arg_0xb74d4cc0);
#line 51
static  void TransactionTableM$TransactionTable$markAsLoop(Transaction_Record_Ptr arg_0xb74ceac0);
#line 79
static  uint16_t TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t arg_0xb74c7830[], uint32_t arg_0xb74c79c8, TOS_Msg arg_0xb74c7b70[], uint16_t *arg_0xb74c7d28, uint16_t arg_0xb74c7ec0, uint16_t *arg_0xb74c60a8, uint16_t arg_0xb74c6238);
#line 69
static  uint16_t TransactionTableM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t arg_0xb74cab60[], Transaction_Record_Ptr *arg_0xb74cad18, uint16_t *arg_0xb74caec8, uint16_t *arg_0xb74c90a8, uint16_t *arg_0xb74c9260, uint16_t arg_0xb74c93f8, uint16_t *arg_0xb74c95b0);
#line 90
static  void TransactionTableM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t arg_0xb74c56b8[], uint16_t arg_0xb74c5850, uint16_t arg_0xb74c59e0, uint32_t arg_0xb74c5b78);
#line 74
static  void TransactionTableM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t arg_0xb74c9d50[], uint32_t arg_0xb74c9ee8, uint16_t arg_0xb74c7098);
#line 38
static  void TransactionTableM$TransactionTable$processThisTransaction(Transaction_Record_Ptr arg_0xb74cf220, Neighbor_Rec_withTrust_t arg_0xb74cf3e8[], uint16_t arg_0xb74cf580, uint16_t arg_0xb74cf710, uint8_t arg_0xb74cf898, uint32_t arg_0xb74cfa30);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TransactionTableM$StdControl$init(void);






static  result_t TransactionTableM$StdControl$start(void);







static  result_t TransactionTableM$StdControl$stop(void);
# 39 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
static  void MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg arg_0xb74a46c0[], uint16_t *arg_0xb74a4878, uint16_t arg_0xb74a4a10, uint16_t *arg_0xb74a4bc8, uint16_t arg_0xb74a4d60, uint32_t arg_0xb74a4ef8, uint16_t arg_0xb74a20b8, uint16_t arg_0xb74a2258, uint16_t arg_0xb74a23f8, uint16_t arg_0xb74a2598, uint16_t arg_0xb74a2730);
#line 34
static  void MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg arg_0xb74a6ce8[], uint16_t *arg_0xb74a6ea0, uint16_t arg_0xb74a5068, uint16_t *arg_0xb74a5220, uint16_t arg_0xb74a53b8, uint16_t arg_0xb74a5550, uint32_t arg_0xb74a56e8, uint16_t arg_0xb74a5880, uint16_t arg_0xb74a5a20, uint16_t arg_0xb74a5bc0, uint16_t arg_0xb74a5d60, uint16_t arg_0xb74a5f00);
#line 29
static  void MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg arg_0xb74a86a8[], uint16_t *arg_0xb74a8860, uint16_t arg_0xb74a89f8, uint16_t *arg_0xb74a8bb0, uint16_t arg_0xb74a8d50, uint16_t arg_0xb74a8ee8, uint16_t arg_0xb74a6098, uint16_t arg_0xb74a6230, uint16_t arg_0xb74a63d0, uint32_t arg_0xb74a6568);
#line 19
static  void MessagingM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg arg_0xb74acce8[], uint16_t *arg_0xb74acea0, uint16_t arg_0xb74aa068, uint16_t *arg_0xb74aa220, uint16_t arg_0xb74aa3b0, uint16_t arg_0xb74aa540, uint16_t arg_0xb74aa6d8, uint16_t arg_0xb74aa878, Neighbor_Rec_withTrust_t *arg_0xb74aaa68[]);
#line 60
static  void MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg arg_0xb749dab0[], uint16_t *arg_0xb749dc68, uint16_t arg_0xb749de00, uint16_t *arg_0xb749c010, uint16_t arg_0xb749c1a0, uint16_t arg_0xb749c338, uint16_t arg_0xb749c4c8);
#line 14
static  void MessagingM$Messaging$putDataMessageInOutQ(TOS_Msg arg_0xb74ad0d0[], uint16_t *arg_0xb74ad288, uint16_t arg_0xb74ad420, uint16_t *arg_0xb74ad5d8, uint16_t arg_0xb74ad770, uint16_t arg_0xb74ad908, uint32_t arg_0xb74adaa0, uint16_t arg_0xb74adc38, uint16_t arg_0xb74addc8, uint16_t arg_0xb74ac010, uint16_t arg_0xb74ac1a8, uint16_t arg_0xb74ac340, uint16_t arg_0xb74ac4e0);









static  void MessagingM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0xb74a91f0[], uint16_t *arg_0xb74a93a8, uint16_t arg_0xb74a9540, uint16_t *arg_0xb74a96f8, uint16_t arg_0xb74a9890, uint16_t arg_0xb74a9a28, uint16_t arg_0xb74a9bc0, uint16_t arg_0xb74a9d60, uint32_t arg_0xb74a9ef8);
#line 49
static  void MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg arg_0xb74a05e0[], uint16_t *arg_0xb74a0798, uint16_t arg_0xb74a0930, uint16_t *arg_0xb74a0ae8, uint16_t arg_0xb74a0c80, uint16_t arg_0xb74a0e18, uint32_t arg_0xb749e010, uint16_t arg_0xb749e1a8, uint16_t arg_0xb749e348, uint16_t arg_0xb749e4e0);
# 8 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
static  uint16_t AttackM$Attack$sfDropThis(uint16_t arg_0xb7493330, uint16_t arg_0xb74934c8, uint16_t *arg_0xb7493688);







static  uint16_t AttackM$Attack$ifLoopCreatorGetParent(uint16_t arg_0xb7493da0);
#line 46
static  uint8_t AttackM$Attack$isSelectiveForwarder(uint16_t arg_0xb748f010);
#line 44
static  uint16_t AttackM$Attack$initBehaviors(uint16_t arg_0xb7490790, int16_t *arg_0xb7490940, int16_t *arg_0xb7490af0);
#line 24
static  uint16_t AttackM$Attack$isLoopCreator(uint16_t arg_0xb74914c8);
# 12 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TrafficGenerator.nc"
static  float TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(uint16_t arg_0xb7487ea8);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0xb7791a20);
# 22 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void Nido$PowerState$CPUCycleCheckpoint(void);
#line 14
static   result_t Nido$PowerState$init(int arg_0xb7774e80, int arg_0xb7773030);



static   result_t Nido$PowerState$stop(void);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0xb7791a20);
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









TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)   ;
#line 442
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
#line 160
static inline   void PowerStateM$PowerState$yellowOff(void);






static   void PowerStateM$PowerState$radioTxMode(void);





static   void PowerStateM$PowerState$radioRxMode(void);
#line 185
static inline   void PowerStateM$PowerState$radioStart(void);





static inline   void PowerStateM$PowerState$radioStop(void);
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
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t TimerM$PowerManagement$adjustPower(void);
# 105 "/opt/tinyos-1.x/tos/interfaces/Clock.nc"
static   void TimerM$Clock$setInterval(uint8_t arg_0xb75fb068);
#line 153
static   uint8_t TimerM$Clock$readCounter(void);
#line 96
static   result_t TimerM$Clock$setRate(char arg_0xb75ef450, char arg_0xb75ef5d0);
#line 121
static   uint8_t TimerM$Clock$getInterval(void);
# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$fired(
# 49 "/opt/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0xb7614c70);









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

enum TimerM$__nesc_unnamed4365 {
  TimerM$maxTimerInterval = 230
};
static  result_t TimerM$StdControl$init(void);









static inline  result_t TimerM$StdControl$start(void);



static  result_t TimerM$StdControl$stop(void);






static  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval);
#line 129
inline static void TimerM$adjustInterval(void);
#line 168
static  result_t TimerM$Timer$stop(uint8_t id);
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
enum HPLPowerManagementM$__nesc_unnamed4366 {
  HPLPowerManagementM$IDLE = 0
};

static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 61 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.nc"
static  result_t SimpleTimeM$AbsoluteTimer$fired(
# 54 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
uint8_t arg_0xb757b6c8);
# 65 "/opt/tinyos-1.x/tos/interfaces/TimeUtil.nc"
static   tos_time_t SimpleTimeM$TimeUtil$addUint32(tos_time_t arg_0xb76504b0, uint32_t arg_0xb7650640);
#line 82
static   char SimpleTimeM$TimeUtil$compare(tos_time_t arg_0xb764f4b0, tos_time_t arg_0xb764f640);
# 65 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
enum SimpleTimeM$__nesc_unnamed4367 {
  SimpleTimeM$INTERVAL = 32
};
tos_time_t SimpleTimeM$time[1000];
tos_time_t SimpleTimeM$aTimer[1000][MAX_NUM_TIMERS];
#line 147
static inline   result_t SimpleTimeM$AbsoluteTimer$default$fired(uint8_t id);



static inline  result_t SimpleTimeM$Timer$fired(void);
# 53 "/opt/tinyos-1.x/tos/system/TimeUtilC.nc"
static inline   char TimeUtilC$TimeUtil$compare(tos_time_t a, tos_time_t b);
#line 99
static inline   tos_time_t TimeUtilC$TimeUtil$addUint32(tos_time_t a, uint32_t ms);
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendDisc$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
#line 48
static  result_t SarpM$SendReportNoForwardResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
#line 48
static  result_t SarpM$SendReportForwardResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
# 39 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
static  void SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg arg_0xb74a46c0[], uint16_t *arg_0xb74a4878, uint16_t arg_0xb74a4a10, uint16_t *arg_0xb74a4bc8, uint16_t arg_0xb74a4d60, uint32_t arg_0xb74a4ef8, uint16_t arg_0xb74a20b8, uint16_t arg_0xb74a2258, uint16_t arg_0xb74a23f8, uint16_t arg_0xb74a2598, uint16_t arg_0xb74a2730);
#line 34
static  void SarpM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg arg_0xb74a6ce8[], uint16_t *arg_0xb74a6ea0, uint16_t arg_0xb74a5068, uint16_t *arg_0xb74a5220, uint16_t arg_0xb74a53b8, uint16_t arg_0xb74a5550, uint32_t arg_0xb74a56e8, uint16_t arg_0xb74a5880, uint16_t arg_0xb74a5a20, uint16_t arg_0xb74a5bc0, uint16_t arg_0xb74a5d60, uint16_t arg_0xb74a5f00);
#line 29
static  void SarpM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg arg_0xb74a86a8[], uint16_t *arg_0xb74a8860, uint16_t arg_0xb74a89f8, uint16_t *arg_0xb74a8bb0, uint16_t arg_0xb74a8d50, uint16_t arg_0xb74a8ee8, uint16_t arg_0xb74a6098, uint16_t arg_0xb74a6230, uint16_t arg_0xb74a63d0, uint32_t arg_0xb74a6568);
#line 19
static  void SarpM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg arg_0xb74acce8[], uint16_t *arg_0xb74acea0, uint16_t arg_0xb74aa068, uint16_t *arg_0xb74aa220, uint16_t arg_0xb74aa3b0, uint16_t arg_0xb74aa540, uint16_t arg_0xb74aa6d8, uint16_t arg_0xb74aa878, Neighbor_Rec_withTrust_t *arg_0xb74aaa68[]);
#line 60
static  void SarpM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg arg_0xb749dab0[], uint16_t *arg_0xb749dc68, uint16_t arg_0xb749de00, uint16_t *arg_0xb749c010, uint16_t arg_0xb749c1a0, uint16_t arg_0xb749c338, uint16_t arg_0xb749c4c8);
#line 14
static  void SarpM$Messaging$putDataMessageInOutQ(TOS_Msg arg_0xb74ad0d0[], uint16_t *arg_0xb74ad288, uint16_t arg_0xb74ad420, uint16_t *arg_0xb74ad5d8, uint16_t arg_0xb74ad770, uint16_t arg_0xb74ad908, uint32_t arg_0xb74adaa0, uint16_t arg_0xb74adc38, uint16_t arg_0xb74addc8, uint16_t arg_0xb74ac010, uint16_t arg_0xb74ac1a8, uint16_t arg_0xb74ac340, uint16_t arg_0xb74ac4e0);









static  void SarpM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0xb74a91f0[], uint16_t *arg_0xb74a93a8, uint16_t arg_0xb74a9540, uint16_t *arg_0xb74a96f8, uint16_t arg_0xb74a9890, uint16_t arg_0xb74a9a28, uint16_t arg_0xb74a9bc0, uint16_t arg_0xb74a9d60, uint32_t arg_0xb74a9ef8);
#line 49
static  void SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg arg_0xb74a05e0[], uint16_t *arg_0xb74a0798, uint16_t arg_0xb74a0930, uint16_t *arg_0xb74a0ae8, uint16_t arg_0xb74a0c80, uint16_t arg_0xb74a0e18, uint32_t arg_0xb749e010, uint16_t arg_0xb749e1a8, uint16_t arg_0xb749e348, uint16_t arg_0xb749e4e0);
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendReportRequest$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer6$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);
# 8 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
static  uint16_t SarpM$Attack$sfDropThis(uint16_t arg_0xb7493330, uint16_t arg_0xb74934c8, uint16_t *arg_0xb7493688);
#line 44
static  uint16_t SarpM$Attack$initBehaviors(uint16_t arg_0xb7490790, int16_t *arg_0xb7490940, int16_t *arg_0xb7490af0);
#line 24
static  uint16_t SarpM$Attack$isLoopCreator(uint16_t arg_0xb74914c8);
# 12 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TrafficGenerator.nc"
static  float SarpM$TrafficGenerator$isTrafficGenerator(uint16_t arg_0xb7487ea8);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer1$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);








static  result_t SarpM$Timer1$stop(void);
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendSpecificReportRequest$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
#line 48
static  result_t SarpM$SendSpecificReportResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t SarpM$SubControl$init(void);






static  result_t SarpM$SubControl$start(void);







static  result_t SarpM$SubControl$stop(void);
#line 63
static  result_t SarpM$CommControl$init(void);






static  result_t SarpM$CommControl$start(void);







static  result_t SarpM$CommControl$stop(void);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer7$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);
#line 59
static  result_t SarpM$Timer10$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);
# 122 "/opt/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t SarpM$Leds$yellowOff(void);
#line 56
static   result_t SarpM$Leds$init(void);
#line 97
static   result_t SarpM$Leds$greenOff(void);
#line 72
static   result_t SarpM$Leds$redOff(void);
#line 106
static   result_t SarpM$Leds$greenToggle(void);
#line 81
static   result_t SarpM$Leds$redToggle(void);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer2$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);
# 17 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
static  result_t SarpM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t arg_0xb74e0730[], Neighbor_Rec_withTrust_t *arg_0xb74e0920[], uint16_t *arg_0xb74e0ad8, uint16_t *arg_0xb74e0c98, uint16_t arg_0xb74e0e30, uint8_t arg_0xb74f3010, uint16_t arg_0xb74f31b0, uint16_t *arg_0xb74f3368, uint32_t arg_0xb74f3500);
# 84 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
static  uint16_t SarpM$TransactionTable$isALoop(Transaction_Record_t arg_0xb74c69d0[], uint32_t arg_0xb74c6b68, uint16_t arg_0xb74c6d00, uint16_t arg_0xb74c6ea0);
#line 22
static  uint8_t SarpM$TransactionTable$transactionExistsAlready(Transaction_Record_t arg_0xb74d24b8[], uint32_t arg_0xb74d2650, uint16_t arg_0xb74d27e0);
#line 64
static  void SarpM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t arg_0xb74cb9c8[], Transaction_Record_Ptr arg_0xb74cbb60, uint16_t arg_0xb74cbcf0, uint16_t arg_0xb74cbe80, uint16_t *arg_0xb74ca068, uint16_t arg_0xb74ca200, uint16_t *arg_0xb74ca3b8);
#line 46
static  uint16_t SarpM$TransactionTable$getTransactionParent(Transaction_Record_t arg_0xb74ce1e8[], uint32_t arg_0xb74ce380);
#line 27
static  void SarpM$TransactionTable$incrementSequenceNumber(Transaction_Record_t arg_0xb74d1010[], uint32_t arg_0xb74d11a8);




static  Transaction_Record_Ptr SarpM$TransactionTable$getThisTransactionPtr(Transaction_Record_t arg_0xb74d1928[], uint32_t arg_0xb74d1ac0);
#line 16
static  result_t SarpM$TransactionTable$initializeTransaction(Transaction_Record_t arg_0xb74d5640[], uint32_t arg_0xb74d57d8, uint16_t arg_0xb74d5970, uint16_t arg_0xb74d5b08, Neighbor_Rec_withTrust_t *arg_0xb74d5cf8[], uint16_t arg_0xb74d5e98, uint16_t arg_0xb74d4068, uint16_t arg_0xb74d4200, Neighbor_Rec_withTrust_t *arg_0xb74d43e0[], uint16_t arg_0xb74d4578, Neighbor_Rec_withTrust_t *arg_0xb74d4760[], uint16_t arg_0xb74d48f8, uint16_t arg_0xb74d4a88, uint16_t *arg_0xb74d4cc0);
#line 51
static  void SarpM$TransactionTable$markAsLoop(Transaction_Record_Ptr arg_0xb74ceac0);
#line 79
static  uint16_t SarpM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t arg_0xb74c7830[], uint32_t arg_0xb74c79c8, TOS_Msg arg_0xb74c7b70[], uint16_t *arg_0xb74c7d28, uint16_t arg_0xb74c7ec0, uint16_t *arg_0xb74c60a8, uint16_t arg_0xb74c6238);
#line 69
static  uint16_t SarpM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t arg_0xb74cab60[], Transaction_Record_Ptr *arg_0xb74cad18, uint16_t *arg_0xb74caec8, uint16_t *arg_0xb74c90a8, uint16_t *arg_0xb74c9260, uint16_t arg_0xb74c93f8, uint16_t *arg_0xb74c95b0);
#line 90
static  void SarpM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t arg_0xb74c56b8[], uint16_t arg_0xb74c5850, uint16_t arg_0xb74c59e0, uint32_t arg_0xb74c5b78);
#line 74
static  void SarpM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t arg_0xb74c9d50[], uint32_t arg_0xb74c9ee8, uint16_t arg_0xb74c7098);
#line 38
static  void SarpM$TransactionTable$processThisTransaction(Transaction_Record_Ptr arg_0xb74cf220, Neighbor_Rec_withTrust_t arg_0xb74cf3e8[], uint16_t arg_0xb74cf580, uint16_t arg_0xb74cf710, uint8_t arg_0xb74cf898, uint32_t arg_0xb74cfa30);
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendEndToEndReportResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t SarpM$Timer8$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);
# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t SarpM$SendData$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8);
# 112 "SarpM.nc"
uint16_t SarpM$DFCounter[1000];
uint32_t SarpM$DFThreshold[1000];



uint16_t SarpM$myLevel[1000];
uint16_t SarpM$outIndex[1000];
uint16_t SarpM$myAddr[1000];
bool SarpM$OkToStart[1000];
uint32_t SarpM$TRANSACTION_ID[1000];

uint16_t SarpM$myOne[1000];
#line 123
uint16_t SarpM$myZero[1000];


TOS_Msg SarpM$inQ[1000][CIRCULAR_BUFFER_SIZE];
#line 126
TOS_Msg SarpM$outQ[1000][CIRCULAR_BUFFER_SIZE];
#line 126
TOS_Msg SarpM$outMsg[1000];
uint16_t SarpM$readInQHere[1000];
#line 127
uint16_t SarpM$writeInQHere[1000];
#line 127
uint16_t SarpM$readOutQHere[1000];
#line 127
uint16_t SarpM$writeOutQHere[1000];
#line 127
uint16_t SarpM$readReportQHere[1000];
#line 127
uint16_t SarpM$writeReportQHere[1000];
uint16_t SarpM$numMsgInQ[1000];
#line 128
uint16_t SarpM$numMsgOutQ[1000];

uint16_t SarpM$numDataMessagesInTrial[1000];

uint16_t SarpM$tPointer[1000];
#line 154
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
#line 179
Neighbor_Rec_withTrust_t *SarpM$myPeers[1000][MAX_CHILDREN];

uint16_t SarpM$numOneHopNeighbors[1000];
#line 181
uint16_t SarpM$numChildren[1000];
#line 181
uint16_t SarpM$numPeers[1000];
#line 181
uint16_t SarpM$numNeighbors[1000];






Transaction_Record_t SarpM$transactionRecords[1000][CIRCULAR_BUFFER_SIZE];
uint32_t SarpM$reportQ[1000][CIRCULAR_BUFFER_SIZE];
Check_Transaction_Record_t SarpM$transactionsToCheckQ[1000][CIRCULAR_BUFFER_SIZE];

Transaction_Record_Ptr SarpM$checkThisTransaction[1000];
#line 192
Transaction_Record_Ptr SarpM$thisTransaction[1000];


uint16_t SarpM$oneTimesTID[1000];
#line 195
uint16_t SarpM$twoTimesTID[1000];

uint16_t SarpM$transactionFound[1000];
#line 197
uint16_t SarpM$sending[1000];
uint16_t SarpM$readTransactionCheckHere[1000];
#line 198
uint16_t SarpM$writeTransactionCheckHere[1000];
#line 198
uint16_t SarpM$numTransactionsToCheck[1000];

uint16_t SarpM$tFoundHere[1000];
uint32_t SarpM$nodeCounter[1000];
#line 201
uint32_t SarpM$nodeCounter2[1000];


uint16_t SarpM$lastToFindLoop[1000];
uint16_t SarpM$cantFixIt[1000];
uint16_t SarpM$dontSendTo[1000];
uint16_t SarpM$newTransactionParent[1000];


int16_t SarpM$myGoodBehaviors[1000];
#line 210
int16_t SarpM$myBadBehaviors[1000];
#line 210
int16_t SarpM$nGoodBehaviors[1000];
#line 210
int16_t SarpM$nBadBehaviors[1000];




uint16_t SarpM$selectiveCounter[1000];
uint8_t SarpM$confidence[1000];
#line 216
uint8_t SarpM$transactionCnt[1000];

unsigned long SarpM$oneHopQuickGlance[1000];
#line 218
unsigned long SarpM$twoHopQuickGlance[1000];



static inline  void SarpM$startApp(void);
#line 258
static inline  result_t SarpM$StdControl$init(void);
#line 305
static inline  result_t SarpM$StdControl$start(void);
#line 322
static inline  result_t SarpM$StdControl$stop(void);






static  void SarpM$processOutMsg(void);
#line 454
static inline  result_t SarpM$SendDisc$sendDone(TOS_MsgPtr masg, result_t success);
#line 507
static inline  result_t SarpM$SendData$sendDone(TOS_MsgPtr masg, result_t success);
#line 526
static inline  result_t SarpM$SendReport$sendDone(TOS_MsgPtr masg, result_t success);
#line 543
static inline  result_t SarpM$SendReportRequest$sendDone(TOS_MsgPtr masg, result_t success);
#line 562
static inline  result_t SarpM$SendReportNoForwardResponse$sendDone(TOS_MsgPtr masg, result_t success);
#line 580
static inline  result_t SarpM$SendReportForwardResponse$sendDone(TOS_MsgPtr masg, result_t success);
#line 598
static inline  result_t SarpM$SendEndToEndReportResponse$sendDone(TOS_MsgPtr masg, result_t success);
#line 616
static inline  result_t SarpM$SendSpecificReportRequest$sendDone(TOS_MsgPtr masg, result_t success);
#line 635
static inline  result_t SarpM$SendSpecificReportResponse$sendDone(TOS_MsgPtr masg, result_t success);
#line 654
static inline  void SarpM$sendReport(void);
#line 684
static inline int SarpM$randomOnOffAttack(int g);
#line 700
static inline  void SarpM$processInMsg(void);
#line 1441
static  TOS_MsgPtr SarpM$Receive$receive(TOS_MsgPtr n);
#line 1829
static inline  void SarpM$sendDiscovery(void);
#line 1854
static inline  void SarpM$sendDataMsg(void);
#line 1958
static inline  result_t SarpM$Timer1$fired(void);







static inline  result_t SarpM$Timer2$fired(void);
#line 2066
static inline  result_t SarpM$Timer6$fired(void);
#line 2079
static inline  result_t SarpM$Timer7$fired(void);








static inline  result_t SarpM$Timer8$fired(void);
#line 2223
static inline  result_t SarpM$Timer10$fired(void);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$ReceiveMsg$receive(
# 56 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0xb7393d80, 
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0xb7791a20);
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t AMStandard$ActivityTimer$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58);








static  result_t AMStandard$ActivityTimer$stop(void);
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMStandard$UARTSend$send(TOS_MsgPtr arg_0xb7788240);
# 41 "/opt/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t AMStandard$PowerManagement$adjustPower(void);
# 63 "/opt/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t AMStandard$RadioControl$init(void);






static  result_t AMStandard$RadioControl$start(void);







static  result_t AMStandard$RadioControl$stop(void);
#line 63
static  result_t AMStandard$TimerControl$init(void);






static  result_t AMStandard$TimerControl$start(void);
#line 63
static  result_t AMStandard$UARTControl$init(void);






static  result_t AMStandard$UARTControl$start(void);







static  result_t AMStandard$UARTControl$stop(void);
# 65 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static  result_t AMStandard$sendDone(void);
# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMStandard$RadioSend$send(TOS_MsgPtr arg_0xb7788240);
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t AMStandard$SendMsg$sendDone(
# 55 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0xb73936e8, 
# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0);
# 81 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
bool AMStandard$state[1000];
TOS_MsgPtr AMStandard$buffer[1000];
uint16_t AMStandard$lastCount[1000];
uint16_t AMStandard$counter[1000];


static  bool AMStandard$Control$init(void);
#line 103
static  bool AMStandard$Control$start(void);
#line 119
static  bool AMStandard$Control$stop(void);
#line 132
static void AMStandard$dbgPacket(TOS_MsgPtr data);










static result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success);







static inline  result_t AMStandard$ActivityTimer$fired(void);





static inline   result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success);


static inline   result_t AMStandard$default$sendDone(void);




static inline  void AMStandard$sendTask(void);
#line 179
static  result_t AMStandard$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data);
#line 207
static inline  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success);


static inline  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success);




TOS_MsgPtr received(TOS_MsgPtr packet)   ;
#line 242
static inline   TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg);



static inline  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet);





static inline  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet);
# 34 "/opt/tinyos-1.x/tos/platform/pc/RadioTiming.nc"
static   uint16_t MicaHighSpeedRadioM$RadioTiming$currentTime(void);
#line 33
static   uint16_t MicaHighSpeedRadioM$RadioTiming$getTiming(void);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t MicaHighSpeedRadioM$Send$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978);
# 57 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
static   result_t MicaHighSpeedRadioM$Random$init(void);
# 33 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
static  result_t MicaHighSpeedRadioM$Code$encode_flush(void);

static  result_t MicaHighSpeedRadioM$Code$decode(char arg_0xb7347258);
#line 34
static  result_t MicaHighSpeedRadioM$Code$encode(char arg_0xb7348db8);
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr MicaHighSpeedRadioM$Receive$receive(TOS_MsgPtr arg_0xb7791a20);
# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$byte(TOS_MsgPtr arg_0xb7352a10, uint8_t arg_0xb7352ba0);
#line 33
static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$startSymbol(uint8_t arg_0xb73521e8, uint8_t arg_0xb7352370, TOS_MsgPtr arg_0xb7352500);
# 33 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
static  result_t MicaHighSpeedRadioM$SpiByteFifo$send(uint8_t arg_0xb7335c70);




static  result_t MicaHighSpeedRadioM$SpiByteFifo$phaseShift(void);
#line 35
static  result_t MicaHighSpeedRadioM$SpiByteFifo$startReadBytes(uint16_t arg_0xb7334428);
#line 34
static  result_t MicaHighSpeedRadioM$SpiByteFifo$idle(void);

static  result_t MicaHighSpeedRadioM$SpiByteFifo$txMode(void);
static  result_t MicaHighSpeedRadioM$SpiByteFifo$rxMode(void);
# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
static   void MicaHighSpeedRadioM$RadioSendCoordinator$byte(TOS_MsgPtr arg_0xb7352a10, uint8_t arg_0xb7352ba0);
#line 33
static   void MicaHighSpeedRadioM$RadioSendCoordinator$startSymbol(uint8_t arg_0xb73521e8, uint8_t arg_0xb7352370, TOS_MsgPtr arg_0xb7352500);
# 36 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
static  result_t MicaHighSpeedRadioM$ChannelMon$macDelay(void);
#line 34
static  result_t MicaHighSpeedRadioM$ChannelMon$startSymbolSearch(void);
#line 33
static  result_t MicaHighSpeedRadioM$ChannelMon$init(void);
# 49 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void MicaHighSpeedRadioM$PowerState$radioStop(void);
#line 48
static   void MicaHighSpeedRadioM$PowerState$radioStart(void);
# 51 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
enum MicaHighSpeedRadioM$__nesc_unnamed4368 {
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

enum MicaHighSpeedRadioM$__nesc_unnamed4369 {
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



static short MicaHighSpeedRadioM$add_crc_byte(char new_byte, short crc);

static inline  void MicaHighSpeedRadioM$packetReceived(void);







static inline  void MicaHighSpeedRadioM$packetSent(void);










static inline  result_t MicaHighSpeedRadioM$Send$send(TOS_MsgPtr msg);
#line 124
static inline  result_t MicaHighSpeedRadioM$Control$stop(void);




static inline  result_t MicaHighSpeedRadioM$Control$start(void);






static inline  result_t MicaHighSpeedRadioM$Control$init(void);









static inline  result_t MicaHighSpeedRadioM$ChannelMon$startSymDetect(void);










result_t finishedTiming(void)   ;










static inline  result_t MicaHighSpeedRadioM$ChannelMon$idleDetect(void);
#line 187
static inline  result_t MicaHighSpeedRadioM$Code$decodeDone(char data, char error);
#line 224
static  result_t MicaHighSpeedRadioM$Code$encodeDone(char data1);







static  result_t MicaHighSpeedRadioM$SpiByteFifo$dataReady(uint8_t data);
#line 324
static short MicaHighSpeedRadioM$add_crc_byte(char new_byte, short crc);
#line 341
static inline    void MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff);
static inline    void MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount);
static inline    void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff);
static inline    void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount);
# 37 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
static  result_t SecDedEncoding$Code$decodeDone(char arg_0xb73476e8, char arg_0xb7347868);
static  result_t SecDedEncoding$Code$encodeDone(char arg_0xb7347d00);
# 44 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
enum SecDedEncoding$__nesc_unnamed4370 {


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

static inline void SecDedEncoding$radio_decode_thread(void);
static inline void SecDedEncoding$radio_encode_thread(void);

static inline  result_t SecDedEncoding$Code$decode(char d1);
#line 81
static inline  result_t SecDedEncoding$Code$encode_flush(void);




static  result_t SecDedEncoding$Code$encode(char d);










static inline void SecDedEncoding$radio_encode_thread(void);
#line 155
static inline void SecDedEncoding$radio_decode_thread(void);
# 54 "/opt/tinyos-1.x/tos/system/RandomLFSR.nc"
uint16_t RandomLFSR$shiftReg[1000];
uint16_t RandomLFSR$initSeed[1000];
uint16_t RandomLFSR$mask[1000];


static inline   result_t RandomLFSR$Random$init(void);










static   uint16_t RandomLFSR$Random$rand(void);
# 63 "/opt/tinyos-1.x/tos/interfaces/Random.nc"
static   uint16_t ChannelMonC$Random$rand(void);
# 39 "/opt/tinyos-1.x/tos/platform/pc/ChannelMon.nc"
static  result_t ChannelMonC$ChannelMon$idleDetect(void);
#line 38
static  result_t ChannelMonC$ChannelMon$startSymDetect(void);
# 39 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
enum ChannelMonC$__nesc_unnamed4371 {
  ChannelMonC$IDLE_STATE, 
  ChannelMonC$START_SYMBOL_SEARCH, 
  ChannelMonC$PACKET_START, 
  ChannelMonC$DISABLED_STATE
};

enum ChannelMonC$__nesc_unnamed4372 {
  ChannelMonC$SAMPLE_RATE = 100 / 2 * 4
};
event_t *channelMonEvents[TOSNODES]  ;
unsigned short ChannelMonC$CM_search[1000][2];
char ChannelMonC$CM_state[1000];
unsigned char ChannelMonC$CM_lastBit[1000];
unsigned char ChannelMonC$CM_startSymBits[1000];
short ChannelMonC$CM_waiting[1000];

static inline  result_t ChannelMonC$ChannelMon$init(void);




static  result_t ChannelMonC$ChannelMon$startSymbolSearch(void);
#line 88
static inline void SIG_OUTPUT_COMPARE2B_signal(void)  ;
#line 136
static  result_t ChannelMonC$ChannelMon$stopMonitorChannel(void);








static inline  result_t ChannelMonC$ChannelMon$macDelay(void);







static inline void ChannelMonC$event_channel_mon_handle(event_t *fevent, 
struct TOS_state *state);
#line 178
void event_channel_mon_create(event_t *fevent, int mote, long long ftime, int interval)   ;
#line 195
void event_channel_mon_invalidate(event_t *fevent)   ;
# 41 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
 event_t *radioTimingEvents[TOSNODES]  ;

static inline   uint16_t RadioTimingC$RadioTiming$getTiming(void);
#line 76
static inline   uint16_t RadioTimingC$RadioTiming$currentTime(void);





result_t finishedTiming(void)   ;

static inline void RadioTimingC$event_radio_timing_handle(event_t *fevent, 
struct TOS_state *state);
#line 130
void event_radio_timing_create(event_t *fevent, int mote, long long ftime, int interval)   ;
#line 147
void event_radio_timing_invalidate(event_t *fevent)   ;
# 46 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void SpiByteFifoC$PowerState$radioRxMode(void);
#line 45
static   void SpiByteFifoC$PowerState$radioTxMode(void);
# 40 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
static  result_t SpiByteFifoC$SpiByteFifo$dataReady(uint8_t arg_0xb73321e0);
# 39 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
uint8_t SpiByteFifoC$nextByte[1000];
uint8_t SpiByteFifoC$state[1000];
uint8_t SpiByteFifoC$spdr[1000];
uint8_t SpiByteFifoC$radioState[1000];


enum SpiByteFifoC$__nesc_unnamed4373 {
  SpiByteFifoC$IDLE, 
  SpiByteFifoC$FULL, 
  SpiByteFifoC$OPEN, 
  SpiByteFifoC$READING
};

enum SpiByteFifoC$__nesc_unnamed4374 {
  SpiByteFifoC$RADIO_RECEIVING, 
  SpiByteFifoC$RADIO_SENDING, 
  SpiByteFifoC$RADIO_IDLE
};

enum SpiByteFifoC$__nesc_unnamed4375 {
  SpiByteFifoC$TOSH_BIT_RATE = 20 * 4 / 2 * 5 / 4
};


static inline void SIG_SPI_signal(void)  ;






static  result_t SpiByteFifoC$SpiByteFifo$send(uint8_t data);
#line 101
static  result_t SpiByteFifoC$SpiByteFifo$idle(void);
#line 120
static inline  result_t SpiByteFifoC$SpiByteFifo$startReadBytes(uint16_t timing);
#line 134
static inline  result_t SpiByteFifoC$SpiByteFifo$txMode(void);







static inline  result_t SpiByteFifoC$SpiByteFifo$rxMode(void);









static inline  result_t SpiByteFifoC$SpiByteFifo$phaseShift(void);
#line 170
void event_spi_byte_handle(event_t *fevent, 
struct TOS_state *fstate)   ;
#line 252
void event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)   ;
#line 271
void event_spi_byte_invalidate(event_t *fevent)   ;




void event_spi_byte_end(event_t *fevent)   ;
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr CrcFilter$UpperReceive$receive(TOS_MsgPtr arg_0xb7791a20);
# 52 "/opt/tinyos-1.x/tos/system/CrcFilter.nc"
static inline  TOS_MsgPtr CrcFilter$LowerReceive$receive(TOS_MsgPtr msg);
# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978);
# 55 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$init(void);




static inline  result_t UARTNoCRCPacketM$Control$start(void);




static inline  result_t UARTNoCRCPacketM$Control$stop(void);




static inline  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr msg);
#line 82
void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)   ;
# 60 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
static inline  result_t PacketSink$Control$init(void);



static inline  result_t PacketSink$Control$start(void);



static inline  result_t PacketSink$Control$stop(void);








static inline  result_t PacketSink$Send$send(TOS_MsgPtr msg);
# 41 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
static   void LedsM$PowerState$yellowOff(void);
#line 39
static   void LedsM$PowerState$greenOff(void);
#line 37
static   void LedsM$PowerState$redOff(void);
#line 36
static   void LedsM$PowerState$redOn(void);

static   void LedsM$PowerState$greenOn(void);
# 51 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
uint8_t LedsM$ledsOn[1000];

enum LedsM$__nesc_unnamed4376 {
  LedsM$RED_BIT = 1, 
  LedsM$GREEN_BIT = 2, 
  LedsM$YELLOW_BIT = 4
};

static void LedsM$updateLeds(void);








static inline   result_t LedsM$Leds$init(void);








static inline   result_t LedsM$Leds$redOn(void);
#line 90
static   result_t LedsM$Leds$redOff(void);
#line 102
static inline   result_t LedsM$Leds$redToggle(void);










static inline   result_t LedsM$Leds$greenOn(void);
#line 125
static   result_t LedsM$Leds$greenOff(void);
#line 137
static inline   result_t LedsM$Leds$greenToggle(void);
#line 160
static inline   result_t LedsM$Leds$yellowOff(void);
# 23 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrustM.nc"
static inline  float TrustM$Trust$calculateFP(float GFB_l, float BFB_l);
#line 73
static inline  float TrustM$Trust$calculateLP(uint32_t GLB_l, uint32_t BLB_l);
#line 87
static  float TrustM$Trust$calculatePR(PB_t PB_1, uint32_t timeCounter);
#line 117
static inline  float TrustM$Trust$calculateOverallTrust(float trustFP, float trustLP, float trustPR);
#line 148
static  float TrustM$Trust$calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1, float trustPR);
# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/NeighborTableM.nc"
uint16_t NeighborTableM$nLoopCounter[1000];
uint16_t NeighborTableM$highestParentTrustIndex[1000];
#line 25
uint16_t NeighborTableM$highestPeerTrustIndex[1000];
#line 25
uint16_t NeighborTableM$highestChildTrustIndex[1000];
uint16_t NeighborTableM$maxParentPeerTrustIndex[1000];
#line 26
uint16_t NeighborTableM$maxOverallTrustIndex[1000];
#line 26
uint16_t NeighborTableM$chosenParentTrustIndex[1000];
#line 50
static  result_t NeighborTableM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parent_l, uint16_t *isOneHop, uint32_t timeCounter);
#line 170
static inline  result_t NeighborTableM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[]);
#line 204
static inline  uint16_t NeighborTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t dontPickMe, uint16_t dontPickMeEither, uint16_t reallyDontPickMe, uint16_t whoIAm);
# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
static  void TransactionTableM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0xb74a91f0[], uint16_t *arg_0xb74a93a8, uint16_t arg_0xb74a9540, uint16_t *arg_0xb74a96f8, uint16_t arg_0xb74a9890, uint16_t arg_0xb74a9a28, uint16_t arg_0xb74a9bc0, uint16_t arg_0xb74a9d60, uint32_t arg_0xb74a9ef8);
# 19 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Trust.nc"
static  float TransactionTableM$Trust$calculateLP(uint32_t arg_0xb74b9338, uint32_t arg_0xb74b94c8);



static  float TransactionTableM$Trust$calculateForgettingFactor(uint32_t arg_0xb74b87c0, uint32_t arg_0xb74b8950, float arg_0xb74b8ad0);
#line 22
static  float TransactionTableM$Trust$calculateOverallTrust(float arg_0xb74b8010, float arg_0xb74b8190, float arg_0xb74b8310);
#line 21
static  float TransactionTableM$Trust$calculatePR(PB_t arg_0xb74b9958, uint32_t arg_0xb74b9af0);
#line 16
static  float TransactionTableM$Trust$calculateFP(float arg_0xb74ba010, float arg_0xb74ba190);
# 16 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
static  uint16_t TransactionTableM$Attack$ifLoopCreatorGetParent(uint16_t arg_0xb7493da0);
# 28 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
static  uint16_t TransactionTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *arg_0xb74f2808[], uint16_t arg_0xb74f29a8, uint8_t arg_0xb74f2b38, Neighbor_Rec_withTrust_t *arg_0xb74f2d18[], uint16_t arg_0xb74f2eb0, Neighbor_Rec_withTrust_t *arg_0xb74de0c8[], uint16_t arg_0xb74de260, uint16_t arg_0xb74de3f8, uint16_t arg_0xb74de598, uint16_t arg_0xb74de738, uint16_t arg_0xb74de8c8);
# 35 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
Trust_Rec_t *TransactionTableM$prev_neighbors[1000];




static inline  result_t TransactionTableM$StdControl$init(void);





static inline  result_t TransactionTableM$StdControl$start(void);








static inline  result_t TransactionTableM$StdControl$stop(void);
#line 67
static inline int TransactionTableM$evalPredictable(Trust_Rec_t neighbor, Trust_Rec_t prev_neighbor);










static  uint8_t TransactionTableM$TransactionTable$transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr);
#line 101
static inline  void TransactionTableM$TransactionTable$incrementSequenceNumber(Transaction_Record_t transactionRecords[], uint32_t transaction_id);
#line 119
static  result_t TransactionTableM$TransactionTable$initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr, uint16_t *tPointer);
#line 197
static  Transaction_Record_Ptr TransactionTableM$TransactionTable$getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id);
#line 214
static  uint16_t TransactionTableM$TransactionTable$getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id);
#line 231
static  void TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GLBinc, uint32_t BLBinc, uint8_t isGood, uint32_t t);
#line 364
static inline  void TransactionTableM$TransactionTable$markAsLoop(Transaction_Record_Ptr thisTransaction);









static  void TransactionTableM$TransactionTable$processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm, uint8_t isGood, uint32_t timeCounter);
#line 522
static  void TransactionTableM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue);
#line 573
static inline  uint16_t TransactionTableM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue);
#line 600
static inline  void TransactionTableM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount);
#line 614
static inline  uint16_t TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, TOS_Msg outQ[], uint16_t *writeOutQHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t myAddr);
#line 643
static inline  uint16_t TransactionTableM$TransactionTable$isALoop(Transaction_Record_t transactions[], uint32_t transaction_id, uint16_t senderNow, uint16_t sequenceNumberIn);
#line 663
static inline  void TransactionTableM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm, uint32_t timeCounter);
# 23 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
static  result_t MessagingM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t arg_0xb74f3c98[], uint16_t arg_0xb74f3e38, Neighbor_Rec_withTrust_t *arg_0xb74f2068[]);
# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static  void MessagingM$Messaging$putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data, uint16_t lastToFindLoop, uint16_t canFixIt, uint16_t dontSendTo, uint16_t sequenceNumberIn);
#line 51
static inline  void MessagingM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t node_id, uint16_t level, uint16_t parent_id, uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[]);
#line 74
static  void MessagingM$Messaging$putReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id);
#line 101
static  void MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t transactionParent, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id);
#line 125
static  void MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent);
#line 151
static  void MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t originatingNode);
#line 185
static  void MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsSent);
#line 237
static  void MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t whoIAm, uint16_t whoIHeard, uint16_t parent);
# 22 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/AttackM.nc"
static inline  uint16_t AttackM$Attack$sfDropThis(uint16_t myNodeId, uint16_t potentialVictim, uint16_t *mySelectiveCounter);
#line 46
static  uint16_t AttackM$Attack$ifLoopCreatorGetParent(uint16_t myNodeId);
#line 61
static inline  uint16_t AttackM$Attack$isLoopCreator(uint16_t myNodeId);
#line 102
static inline  uint8_t AttackM$Attack$isSelectiveForwarder(uint16_t myNodeID);









static inline  uint16_t AttackM$Attack$initBehaviors(uint16_t myNodeID, int16_t *myGoodBehaviors, int16_t *myBadBehaviors);
# 22 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrafficGeneratorM.nc"
static  float TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(uint16_t node_id);
# 442 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
static inline   result_t Nido$RadioSendMsg$default$sendDone(TOS_MsgPtr msg, result_t success)
#line 442
{
  return FAIL;
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978){
#line 67
  unsigned char result;
#line 67

#line 67
  result = Nido$RadioSendMsg$default$sendDone(arg_0xb77887e8, arg_0xb7788978);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 252 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet)
#line 252
{
  return received(packet);
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0xb7791a20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$RadioReceive$receive(arg_0xb7791a20);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 242 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline   TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg)
#line 242
{
  return msg;
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr AMStandard$ReceiveMsg$receive(uint8_t arg_0xb7393d80, TOS_MsgPtr arg_0xb7791a20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  switch (arg_0xb7393d80) {
#line 75
    case DISCOVERY_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case CONTROL_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case DATA_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case REPORT_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case REPORT_REQUEST_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case REPORT_RESPONSE_FORWARD_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case END_TO_END_REPORT_RESPONSE_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case SPECIFIC_REPORT_REQUEST_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    case SPECIFIC_REPORT_RESPONSE_MSG_TYPE:
#line 75
      result = SarpM$Receive$receive(arg_0xb7791a20);
#line 75
      break;
#line 75
    default:
#line 75
      result = AMStandard$ReceiveMsg$default$receive(arg_0xb7393d80, arg_0xb7791a20);
#line 75
      break;
#line 75
    }
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 34 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg arg_0xb74a6ce8[], uint16_t *arg_0xb74a6ea0, uint16_t arg_0xb74a5068, uint16_t *arg_0xb74a5220, uint16_t arg_0xb74a53b8, uint16_t arg_0xb74a5550, uint32_t arg_0xb74a56e8, uint16_t arg_0xb74a5880, uint16_t arg_0xb74a5a20, uint16_t arg_0xb74a5bc0, uint16_t arg_0xb74a5d60, uint16_t arg_0xb74a5f00){
#line 34
  MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(arg_0xb74a6ce8, arg_0xb74a6ea0, arg_0xb74a5068, arg_0xb74a5220, arg_0xb74a53b8, arg_0xb74a5550, arg_0xb74a56e8, arg_0xb74a5880, arg_0xb74a5a20, arg_0xb74a5bc0, arg_0xb74a5d60, arg_0xb74a5f00);
#line 34
}
#line 34
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer8$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(4U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 64 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t arg_0xb74cb9c8[], Transaction_Record_Ptr arg_0xb74cbb60, uint16_t arg_0xb74cbcf0, uint16_t arg_0xb74cbe80, uint16_t *arg_0xb74ca068, uint16_t arg_0xb74ca200, uint16_t *arg_0xb74ca3b8){
#line 64
  TransactionTableM$TransactionTable$addToTransactionCheckQ(arg_0xb74cb9c8, arg_0xb74cbb60, arg_0xb74cbcf0, arg_0xb74cbe80, arg_0xb74ca068, arg_0xb74ca200, arg_0xb74ca3b8);
#line 64
}
#line 64
# 29 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg arg_0xb74a86a8[], uint16_t *arg_0xb74a8860, uint16_t arg_0xb74a89f8, uint16_t *arg_0xb74a8bb0, uint16_t arg_0xb74a8d50, uint16_t arg_0xb74a8ee8, uint16_t arg_0xb74a6098, uint16_t arg_0xb74a6230, uint16_t arg_0xb74a63d0, uint32_t arg_0xb74a6568){
#line 29
  MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(arg_0xb74a86a8, arg_0xb74a8860, arg_0xb74a89f8, arg_0xb74a8bb0, arg_0xb74a8d50, arg_0xb74a8ee8, arg_0xb74a6098, arg_0xb74a6230, arg_0xb74a63d0, arg_0xb74a6568);
#line 29
}
#line 29
# 32 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  Transaction_Record_Ptr SarpM$TransactionTable$getThisTransactionPtr(Transaction_Record_t arg_0xb74d1928[], uint32_t arg_0xb74d1ac0){
#line 32
  struct Transaction_Record_t *result;
#line 32

#line 32
  result = TransactionTableM$TransactionTable$getThisTransactionPtr(arg_0xb74d1928, arg_0xb74d1ac0);
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 49 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg arg_0xb74a05e0[], uint16_t *arg_0xb74a0798, uint16_t arg_0xb74a0930, uint16_t *arg_0xb74a0ae8, uint16_t arg_0xb74a0c80, uint16_t arg_0xb74a0e18, uint32_t arg_0xb749e010, uint16_t arg_0xb749e1a8, uint16_t arg_0xb749e348, uint16_t arg_0xb749e4e0){
#line 49
  MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(arg_0xb74a05e0, arg_0xb74a0798, arg_0xb74a0930, arg_0xb74a0ae8, arg_0xb74a0c80, arg_0xb74a0e18, arg_0xb749e010, arg_0xb749e1a8, arg_0xb749e348, arg_0xb749e4e0);
#line 49
}
#line 49
#line 39
inline static  void SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg arg_0xb74a46c0[], uint16_t *arg_0xb74a4878, uint16_t arg_0xb74a4a10, uint16_t *arg_0xb74a4bc8, uint16_t arg_0xb74a4d60, uint32_t arg_0xb74a4ef8, uint16_t arg_0xb74a20b8, uint16_t arg_0xb74a2258, uint16_t arg_0xb74a23f8, uint16_t arg_0xb74a2598, uint16_t arg_0xb74a2730){
#line 39
  MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(arg_0xb74a46c0, arg_0xb74a4878, arg_0xb74a4a10, arg_0xb74a4bc8, arg_0xb74a4d60, arg_0xb74a4ef8, arg_0xb74a20b8, arg_0xb74a2258, arg_0xb74a23f8, arg_0xb74a2598, arg_0xb74a2730);
#line 39
}
#line 39
# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer7$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(3U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 46 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$getTransactionParent(Transaction_Record_t arg_0xb74ce1e8[], uint32_t arg_0xb74ce380){
#line 46
  unsigned short result;
#line 46

#line 46
  result = TransactionTableM$TransactionTable$getTransactionParent(arg_0xb74ce1e8, arg_0xb74ce380);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0xb74a91f0[], uint16_t *arg_0xb74a93a8, uint16_t arg_0xb74a9540, uint16_t *arg_0xb74a96f8, uint16_t arg_0xb74a9890, uint16_t arg_0xb74a9a28, uint16_t arg_0xb74a9bc0, uint16_t arg_0xb74a9d60, uint32_t arg_0xb74a9ef8){
#line 24
  MessagingM$Messaging$putReportRequestMsgInOutQ(arg_0xb74a91f0, arg_0xb74a93a8, arg_0xb74a9540, arg_0xb74a96f8, arg_0xb74a9890, arg_0xb74a9a28, arg_0xb74a9bc0, arg_0xb74a9d60, arg_0xb74a9ef8);
#line 24
}
#line 24
# 600 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  void TransactionTableM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t packetCount)
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

# 74 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$setOriginatorPacketCount(Transaction_Record_t arg_0xb74c9d50[], uint32_t arg_0xb74c9ee8, uint16_t arg_0xb74c7098){
#line 74
  TransactionTableM$TransactionTable$setOriginatorPacketCount(arg_0xb74c9d50, arg_0xb74c9ee8, arg_0xb74c7098);
#line 74
}
#line 74
# 910 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline void sendSarpThroughput(uint32_t transaction, uint16_t sent, uint16_t receivedIn, uint16_t dataSource)
{
  int sock;
#line 912
  int n;
  struct sockaddr_in name;

  char message[90];

#line 916
  sprintf(message, "<sarp><throughput sent=\"%d\" received=\"%d\" transaction=\"%d\" dataSource=\"%d\"/></sarp>", sent, receivedIn, transaction, dataSource);
  sock = socket(2, SOCK_DGRAM, IPPROTO_UDP);
  if (sock < 0) 
    {
      printf("Socket failure.\r\n");
      exit(0);
    }

  name.sin_family = 2;
  name.sin_port = htons(12000);
  name.sin_addr.s_addr = inet_addr("131.128.81.51");

  n = connect(sock, (struct sockaddr *)&name, sizeof name);
  if (n < 0) 
    {
      printf("Connection failed\r\n");
    }

  n = write(sock, message, strlen(message) + 1);

  if (n < 0) {
    printf("Message not sent.  Trying again. \r\n");
    }
#line 938
  close(sock);
}

# 14 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putDataMessageInOutQ(TOS_Msg arg_0xb74ad0d0[], uint16_t *arg_0xb74ad288, uint16_t arg_0xb74ad420, uint16_t *arg_0xb74ad5d8, uint16_t arg_0xb74ad770, uint16_t arg_0xb74ad908, uint32_t arg_0xb74adaa0, uint16_t arg_0xb74adc38, uint16_t arg_0xb74addc8, uint16_t arg_0xb74ac010, uint16_t arg_0xb74ac1a8, uint16_t arg_0xb74ac340, uint16_t arg_0xb74ac4e0){
#line 14
  MessagingM$Messaging$putDataMessageInOutQ(arg_0xb74ad0d0, arg_0xb74ad288, arg_0xb74ad420, arg_0xb74ad5d8, arg_0xb74ad770, arg_0xb74ad908, arg_0xb74adaa0, arg_0xb74adc38, arg_0xb74addc8, arg_0xb74ac010, arg_0xb74ac1a8, arg_0xb74ac340, arg_0xb74ac4e0);
#line 14
}
#line 14
# 364 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  void TransactionTableM$TransactionTable$markAsLoop(Transaction_Record_Ptr thisTransaction)
{
  thisTransaction->isALoop = 1;
}

# 51 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$markAsLoop(Transaction_Record_Ptr arg_0xb74ceac0){
#line 51
  TransactionTableM$TransactionTable$markAsLoop(arg_0xb74ceac0);
#line 51
}
#line 51
# 61 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/AttackM.nc"
static inline  uint16_t AttackM$Attack$isLoopCreator(uint16_t myNodeId)
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

# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$isLoopCreator(uint16_t arg_0xb74914c8){
#line 24
  unsigned short result;
#line 24

#line 24
  result = AttackM$Attack$isLoopCreator(arg_0xb74914c8);
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 643 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  uint16_t TransactionTableM$TransactionTable$isALoop(Transaction_Record_t transactions[], uint32_t transaction_id, uint16_t senderNow, uint16_t sequenceNumberIn)
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

# 84 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$isALoop(Transaction_Record_t arg_0xb74c69d0[], uint32_t arg_0xb74c6b68, uint16_t arg_0xb74c6d00, uint16_t arg_0xb74c6ea0){
#line 84
  unsigned short result;
#line 84

#line 84
  result = TransactionTableM$TransactionTable$isALoop(arg_0xb74c69d0, arg_0xb74c6b68, arg_0xb74c6d00, arg_0xb74c6ea0);
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 22 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/AttackM.nc"
static inline  uint16_t AttackM$Attack$sfDropThis(uint16_t myNodeId, uint16_t potentialVictim, uint16_t *mySelectiveCounter)
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

# 8 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$sfDropThis(uint16_t arg_0xb7493330, uint16_t arg_0xb74934c8, uint16_t *arg_0xb7493688){
#line 8
  unsigned short result;
#line 8

#line 8
  result = AttackM$Attack$sfDropThis(arg_0xb7493330, arg_0xb74934c8, arg_0xb7493688);
#line 8

#line 8
  return result;
#line 8
}
#line 8
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

#line 137
static inline   result_t LedsM$Leds$greenToggle(void)
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
# 684 "SarpM.nc"
static inline int SarpM$randomOnOffAttack(int g)
#line 684
{
  int randNum = 0;



  uint32_t cTime = tos_state.tos_time / 4000;


  srand(cTime);
  randNum = rand() % 100;

  dbg(DBG_USR3, "g : %d randNum : %d\r\n", g, randNum);
  if (randNum < g) {
#line 696
    return TRUE;
    }
  else {
#line 697
    return FALSE;
    }
}

# 16 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  result_t SarpM$TransactionTable$initializeTransaction(Transaction_Record_t arg_0xb74d5640[], uint32_t arg_0xb74d57d8, uint16_t arg_0xb74d5970, uint16_t arg_0xb74d5b08, Neighbor_Rec_withTrust_t *arg_0xb74d5cf8[], uint16_t arg_0xb74d5e98, uint16_t arg_0xb74d4068, uint16_t arg_0xb74d4200, Neighbor_Rec_withTrust_t *arg_0xb74d43e0[], uint16_t arg_0xb74d4578, Neighbor_Rec_withTrust_t *arg_0xb74d4760[], uint16_t arg_0xb74d48f8, uint16_t arg_0xb74d4a88, uint16_t *arg_0xb74d4cc0){
#line 16
  unsigned char result;
#line 16

#line 16
  result = TransactionTableM$TransactionTable$initializeTransaction(arg_0xb74d5640, arg_0xb74d57d8, arg_0xb74d5970, arg_0xb74d5b08, arg_0xb74d5cf8, arg_0xb74d5e98, arg_0xb74d4068, arg_0xb74d4200, arg_0xb74d43e0, arg_0xb74d4578, arg_0xb74d4760, arg_0xb74d48f8, arg_0xb74d4a88, arg_0xb74d4cc0);
#line 16

#line 16
  return result;
#line 16
}
#line 16






inline static  uint8_t SarpM$TransactionTable$transactionExistsAlready(Transaction_Record_t arg_0xb74d24b8[], uint32_t arg_0xb74d2650, uint16_t arg_0xb74d27e0){
#line 22
  unsigned char result;
#line 22

#line 22
  result = TransactionTableM$TransactionTable$transactionExistsAlready(arg_0xb74d24b8, arg_0xb74d2650, arg_0xb74d27e0);
#line 22

#line 22
  return result;
#line 22
}
#line 22
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
# 77 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static inline   result_t LedsM$Leds$redOn(void)
#line 77
{
  dbg(DBG_LED, "LEDS: Red on.\n");
  LedsM$PowerState$redOn();
  /* atomic removed: atomic calls only */
#line 80
  {
    if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT)) {
        LedsM$ledsOn[tos_state.current_node] |= LedsM$RED_BIT;
        LedsM$updateLeds();
      }
  }

  return SUCCESS;
}

#line 102
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
# 60 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg arg_0xb749dab0[], uint16_t *arg_0xb749dc68, uint16_t arg_0xb749de00, uint16_t *arg_0xb749c010, uint16_t arg_0xb749c1a0, uint16_t arg_0xb749c338, uint16_t arg_0xb749c4c8){
#line 60
  MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(arg_0xb749dab0, arg_0xb749dc68, arg_0xb749de00, arg_0xb749c010, arg_0xb749c1a0, arg_0xb749c338, arg_0xb749c4c8);
#line 60
}
#line 60
# 17 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
inline static  result_t SarpM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t arg_0xb74e0730[], Neighbor_Rec_withTrust_t *arg_0xb74e0920[], uint16_t *arg_0xb74e0ad8, uint16_t *arg_0xb74e0c98, uint16_t arg_0xb74e0e30, uint8_t arg_0xb74f3010, uint16_t arg_0xb74f31b0, uint16_t *arg_0xb74f3368, uint32_t arg_0xb74f3500){
#line 17
  unsigned char result;
#line 17

#line 17
  result = NeighborTableM$NeighborTable$processNeighborFromDiscMsg(arg_0xb74e0730, arg_0xb74e0920, arg_0xb74e0ad8, arg_0xb74e0c98, arg_0xb74e0e30, arg_0xb74f3010, arg_0xb74f31b0, arg_0xb74f3368, arg_0xb74f3500);
#line 17

#line 17
  return result;
#line 17
}
#line 17
# 700 "SarpM.nc"
static inline  void SarpM$processInMsg(void)
{
  uint8_t loopCounter;
#line 702
  uint8_t type;




  uint32_t cTime = tos_state.tos_time / 4000;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      type = SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].type;
    }
#line 713
    __nesc_atomic_end(__nesc_atomic); }



  SarpM$disc_msg_in[tos_state.current_node] = (DiscoveryMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;

  if (1) 
    {
      if (type == DISCOVERY_MSG_TYPE && SarpM$disc_msg_in[tos_state.current_node]->node_id != SarpM$myAddr[tos_state.current_node]) 
        {

          dbg(DBG_USR1, "%d heard Discovery message from %d with a level of %d.\r\n", SarpM$myAddr[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->node_id, SarpM$disc_msg_in[tos_state.current_node]->level);




          SarpM$NeighborTable$processNeighborFromDiscMsg(SarpM$neighbors[tos_state.current_node], SarpM$myOneHopNeighbors[tos_state.current_node], &SarpM$numNeighbors[tos_state.current_node], &SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->node_id, SarpM$disc_msg_in[tos_state.current_node]->level, SarpM$disc_msg_in[tos_state.current_node]->parent_id, &SarpM$myOne[tos_state.current_node], cTime);
          for (loopCounter = 0; loopCounter < SarpM$disc_msg_in[tos_state.current_node]->num_neighbors; loopCounter++) 
            {
              if (SarpM$disc_msg_in[tos_state.current_node]->neighbors[loopCounter].node_id != SarpM$myAddr[tos_state.current_node]) {
                SarpM$NeighborTable$processNeighborFromDiscMsg(SarpM$neighbors[tos_state.current_node], SarpM$myOneHopNeighbors[tos_state.current_node], &SarpM$numNeighbors[tos_state.current_node], &SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$disc_msg_in[tos_state.current_node]->neighbors[loopCounter].node_id, SarpM$disc_msg_in[tos_state.current_node]->neighbors[loopCounter].level, SarpM$disc_msg_in[tos_state.current_node]->node_id, &SarpM$myZero[tos_state.current_node], cTime);
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
#line 744
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
#line 760
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
#line 824
            if (SarpM$controlMsgIn[tos_state.current_node]->msgType == CONTROL_NEIGHBOR_DISCOVERY_TYPE) 
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
            else 
#line 842
              {
              }
          }
        else {


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
#line 859
              if (SarpM$dataMsgIn[tos_state.current_node]->cantFixIt != 255) {
                SarpM$cantFixIt[tos_state.current_node] = SarpM$dataMsgIn[tos_state.current_node]->cantFixIt;
                }
#line 861
              if (SarpM$dataMsgIn[tos_state.current_node]->dontSendTo != 255) {
                SarpM$dontSendTo[tos_state.current_node] = SarpM$dataMsgIn[tos_state.current_node]->dontSendTo;
                }
#line 863
              dbg(DBG_USR1, "reports lastToFindLoop: %d, cantFixIt: %d, dontSendTo: %d\r\n", SarpM$dataMsgIn[tos_state.current_node]->lastToFindLoop, SarpM$dataMsgIn[tos_state.current_node]->cantFixIt, SarpM$dataMsgIn[tos_state.current_node]->dontSendTo);
              dbg(DBG_USR2, "reports lastToFindLoop: %d, cantFixIt: %d, dontSendTo: %d\r\n", SarpM$dataMsgIn[tos_state.current_node]->lastToFindLoop, SarpM$dataMsgIn[tos_state.current_node]->cantFixIt, SarpM$dataMsgIn[tos_state.current_node]->dontSendTo);

              if (SarpM$dataMsgIn[tos_state.current_node]->dst_node_id == SarpM$myAddr[tos_state.current_node]) 
                {

                  dbg(DBG_USR1, "%d heard DATA_PACKET from %d with sequenceNumber %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);
                  dbg(DBG_USR2, "%d heard DATA_PACKET from %d with sequenceNumber %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);



                  SarpM$transactionFound[tos_state.current_node] = SarpM$TransactionTable$transactionExistsAlready(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$myAddr[tos_state.current_node]);


                  if (SarpM$transactionFound[tos_state.current_node] == 0) {
                      SarpM$TransactionTable$initializeTransaction(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$dataMsgIn[tos_state.current_node]->orig_node_id, SarpM$dataMsgIn[tos_state.current_node]->src_node_id, SarpM$myOneHopNeighbors[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$myLevel[tos_state.current_node], 0, SarpM$myPeers[tos_state.current_node], SarpM$numPeers[tos_state.current_node], SarpM$myChildren[tos_state.current_node], SarpM$numChildren[tos_state.current_node], SarpM$myAddr[tos_state.current_node], &SarpM$tPointer[tos_state.current_node]);

                      if (SarpM$myBadBehaviors[tos_state.current_node] == 100) {
                          if (SarpM$randomOnOffAttack(SarpM$myGoodBehaviors[tos_state.current_node])) {
                              SarpM$nGoodBehaviors[tos_state.current_node] = 1;
                              SarpM$nBadBehaviors[tos_state.current_node] = 0;
                            }
                          else 
#line 884
                            {
                              SarpM$nGoodBehaviors[tos_state.current_node] = 0;
                              SarpM$nBadBehaviors[tos_state.current_node] = 1;
                            }
                        }

                      if (SarpM$nGoodBehaviors[tos_state.current_node] < 0 && SarpM$nBadBehaviors[tos_state.current_node] == 0) {
                          SarpM$nGoodBehaviors[tos_state.current_node] = SarpM$myGoodBehaviors[tos_state.current_node];
                          SarpM$nBadBehaviors[tos_state.current_node] = SarpM$myBadBehaviors[tos_state.current_node];
                        }

                      if (SarpM$nGoodBehaviors[tos_state.current_node] >= 0) {
                        SarpM$nGoodBehaviors[tos_state.current_node] = SarpM$nGoodBehaviors[tos_state.current_node] - 1;
                        }
#line 897
                      if (SarpM$nGoodBehaviors[tos_state.current_node] < 0 && SarpM$nBadBehaviors[tos_state.current_node] > 0) {
                        SarpM$nBadBehaviors[tos_state.current_node] = SarpM$nBadBehaviors[tos_state.current_node] - 1;
                        }
#line 899
                      if (SarpM$confidence[tos_state.current_node] <= 3) {
                        SarpM$confidence[tos_state.current_node] = SarpM$confidence[tos_state.current_node] + 1;
                        }
                      SarpM$transactionCnt[tos_state.current_node] = SarpM$transactionCnt[tos_state.current_node] + 1;

                      if (SarpM$transactionCnt[tos_state.current_node] > 50) {
                        exit(0);
                        }
                    }


                  SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);




                  SarpM$Leds$greenToggle();



                  if (SarpM$Attack$sfDropThis(SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->src_node_id, &SarpM$selectiveCounter[tos_state.current_node]) == 0 || SarpM$nGoodBehaviors[tos_state.current_node] >= 0) 



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
#line 1005
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



                                        dbg(DBG_USR3, "%d : Confidence = %d\r\n", 1050, SarpM$confidence[tos_state.current_node]);
                                        if (SarpM$confidence[tos_state.current_node] <= 3 && SarpM$thisTransaction[tos_state.current_node]->lastParentTried != 255) {
                                          SarpM$newTransactionParent[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->lastParentTried;
                                          }
                                        else {
#line 1054
                                          SarpM$newTransactionParent[tos_state.current_node] = SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);
                                          }
#line 1055
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
#line 1064
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

                                  if (SarpM$confidence[tos_state.current_node] <= 3 && SarpM$thisTransaction[tos_state.current_node]->lastParentTried != 255) {
                                    SarpM$newTransactionParent[tos_state.current_node] = SarpM$thisTransaction[tos_state.current_node]->lastParentTried;
                                    }
                                  else {
#line 1088
                                    SarpM$newTransactionParent[tos_state.current_node] = SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id);
                                    }
#line 1089
                                  SarpM$thisTransaction[tos_state.current_node]->lastParentTried = SarpM$newTransactionParent[tos_state.current_node];
                                  SarpM$Messaging$putDataMessageInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$newTransactionParent[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->transaction_id, SarpM$dataMsgIn[tos_state.current_node]->orig_node_id, SarpM$dataMsgIn[tos_state.current_node]->data, SarpM$lastToFindLoop[tos_state.current_node], SarpM$cantFixIt[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node], SarpM$dataMsgIn[tos_state.current_node]->sequenceNumber);
                                  TOS_post(SarpM$processOutMsg);
                                }
                            }
#line 1093
                            __nesc_atomic_end(__nesc_atomic); }
                        }
                    }
                  else 

                    {
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



                    SarpM$reportReqMsgIn[tos_state.current_node] = (ReportRequestMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;
                    SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$reportReqMsgIn[tos_state.current_node]->transaction_id);







                    SarpM$Messaging$putEndToEndReportResponseMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->originatingNode, SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount);

                    sendSarpThroughput(SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$reportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$reportReqMsgIn[tos_state.current_node]->originator);




                    SarpM$thisTransaction[tos_state.current_node]->isValid = 0;

                    SarpM$reportQ[tos_state.current_node][SarpM$writeReportQHere[tos_state.current_node]] = SarpM$thisTransaction[tos_state.current_node]->transaction_id;


                    SarpM$writeReportQHere[tos_state.current_node] = (SarpM$writeReportQHere[tos_state.current_node] + 1) % CIRCULAR_BUFFER_SIZE;

                    TOS_post(SarpM$processOutMsg);
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


                        SarpM$writeReportQHere[tos_state.current_node] = (SarpM$writeReportQHere[tos_state.current_node] + 1) % CIRCULAR_BUFFER_SIZE;


                        dbg(DBG_USR1, "%d forwarded a Report Request message to %d\r\n", SarpM$myAddr[tos_state.current_node], reportReqMsgOut->destination);
                      }
#line 1178
                      __nesc_atomic_end(__nesc_atomic); }


                    TOS_post(SarpM$processOutMsg);
                  }
                SarpM$Timer8$start(TIMER_ONE_SHOT, 3100);
                SarpM$Timer7$start(TIMER_ONE_SHOT, 380 + 30 * SarpM$myAddr[tos_state.current_node]);
              }
            else {
#line 1186
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
#line 1212
                                if (SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsReceivedFrom == SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].packetsForwardedTo) 
                                  {


                                    dbg(DBG_USR1, "%d reports the NO forward message is a TWO hop message\r\n", SarpM$myAddr[tos_state.current_node]);

                                    if (SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo != SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->responder) {
                                      SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].oneHopReportedPacketsForwardedTo = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->responder;
                                      }
#line 1220
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].twoHopReportedPacketsReceived = SarpM$reportRespNoForwardMsgIn[tos_state.current_node]->packetsReceived;
                                    SarpM$transactionRecords[tos_state.current_node][SarpM$transactionCounter[tos_state.current_node]].twoHopReported = 1;
                                  }
                                }
#line 1223
                              break;
                            }
                        }
                    }
#line 1226
                    __nesc_atomic_end(__nesc_atomic); }
                }
              else {
#line 1228
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
#line 1260
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
                        SarpM$specificReportReqMsgIn[tos_state.current_node] = (SpecificReportRequestMsg *)SarpM$inQ[tos_state.current_node][SarpM$readInQHere[tos_state.current_node]].data;




                        SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id);

                        if (SarpM$thisTransaction[tos_state.current_node] == (void *)0) {
#line 1296
                            dbg(DBG_USR3, "thisTransaction == NULL at %d\r\n", 1296);
#line 1296
                            return;
                          }
                        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
                          {

                            dbg(DBG_USR1, "Before making srrmi\r\n");



                            dbg(DBG_USR1, "before tt=ctt.gttp, TID: %x\r\n", SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id);









                            dbg(DBG_USR1, "before if.myqddr==0\r\n");



                            if (SarpM$myAddr[tos_state.current_node] == 0) 
                              {
                                dbg(DBG_USR1, "END-2-END report: %d received %d of %d packets from %d for transaction %x\r\n", SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$thisTransaction[tos_state.current_node]->originatingNode, SarpM$thisTransaction[tos_state.current_node]->transaction_id);
                                dbg(DBG_USR1, "End-2-End Report follows:\r\n");
                                dbg(DBG_USR1, "Transaction:       0x%x\r\n", SarpM$thisTransaction[tos_state.current_node]->transaction_id);
                                dbg(DBG_USR1, "Packets Received:  0x%x\r\n", SarpM$thisTransaction[tos_state.current_node]->packetsReceived);
                                dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount);
                              }


                            if (SarpM$specificReportReqMsgIn[tos_state.current_node]->destination == SarpM$myAddr[tos_state.current_node]) 
                              {


                                dbg(DBG_USR1, "numMsgOutQ: %d Line:%d\r\n", SarpM$numMsgOutQ[tos_state.current_node], 1333);
                                dbg(DBG_USR1, "End-2-End Report follows:\r\n");
                                dbg(DBG_USR1, "Transaction:       0x%x\r\n", SarpM$thisTransaction[tos_state.current_node]->transaction_id);
                                dbg(DBG_USR1, "Packets Received:  0x%x\r\n", SarpM$thisTransaction[tos_state.current_node]->packetsReceived);
                                dbg(DBG_USR1, "Packets Sent:      0x%x\r\n", SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount);



                                SarpM$Messaging$putSpecificReportResponseMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$specificReportReqMsgIn[tos_state.current_node]->originator, SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$thisTransaction[tos_state.current_node]->packetsForwarded, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->receivedFrom);
                                dbg(DBG_USR1, "%d\r\n", 1342);
                                TOS_post(SarpM$processOutMsg);
                                dbg(DBG_USR1, "%d\r\n", 1344);
                              }
                            else {
#line 1346
                              if (SarpM$specificReportReqMsgIn[tos_state.current_node]->destination == SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo) 
                                {
                                  dbg(DBG_USR1, "yah3");




                                  SarpM$Messaging$putSpecificReportRequestMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$specificReportReqMsgIn[tos_state.current_node]->requestor, SarpM$specificReportReqMsgIn[tos_state.current_node]->originator, SarpM$specificReportReqMsgIn[tos_state.current_node]->originatorPacketCount, SarpM$specificReportReqMsgIn[tos_state.current_node]->transaction_id);






                                  TOS_post(SarpM$processOutMsg);
                                }
                              else {
                                }
                              }
                            SarpM$TransactionTable$addToTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node], 0, 0, &SarpM$writeTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]);
                          }
#line 1366
                          __nesc_atomic_end(__nesc_atomic); }
                      }
                    else {
#line 1368
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
#line 1407
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
#line 1430
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
#line 1435
  SarpM$numMsgInQ[tos_state.current_node] = SarpM$numMsgInQ[tos_state.current_node] - 1;
  SarpM$readInQHere[tos_state.current_node] = (SarpM$readInQHere[tos_state.current_node] + 1) % CIRCULAR_BUFFER_SIZE;
}

# 159 "/opt/tinyos-1.x/tos/system/tos.h"
static inline void *nmemset(void *to, int val, size_t n)
{
  char *cto = to;

  while (n--) * cto++ = val;

  return to;
}

# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendDisc$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(DISCOVERY_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 120 "/opt/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine(result_t r1, result_t r2)



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
# 145 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
static inline  result_t ChannelMonC$ChannelMon$macDelay(void)
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
# 112 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$Send$send(TOS_MsgPtr msg)
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

# 77 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
static inline  result_t PacketSink$Send$send(TOS_MsgPtr msg)
#line 77
{
  return FAIL;
}

# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMStandard$RadioSend$send(TOS_MsgPtr arg_0xb7788240){
#line 58
  unsigned char result;
#line 58

#line 58
  result = PacketSink$Send$send(arg_0xb7788240);
#line 58
  result = rcombine(result, MicaHighSpeedRadioM$Send$send(arg_0xb7788240));
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 70 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Send$send(TOS_MsgPtr msg)
#line 70
{
  msg->crc = 1;

  TOSH_uart_send(msg);

  return SUCCESS;
}

# 58 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMStandard$UARTSend$send(TOS_MsgPtr arg_0xb7788240){
#line 58
  unsigned char result;
#line 58

#line 58
  result = UARTNoCRCPacketM$Send$send(arg_0xb7788240);
#line 58
  result = rcombine(result, UARTNoCRCPacketM$Send$send(arg_0xb7788240));
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 165 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline  void AMStandard$sendTask(void)
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

# 56 "/opt/tinyos-1.x/tos/platform/pc/events.c"
static inline void event_cleanup(event_t *fevent)
{
  dbg(DBG_MEM, "event_cleanup: freeing event: 0x%x\n", (unsigned int )fevent);
  fevent->cleanup(fevent);
}

# 48 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
static inline void event_uart_write_handle(event_t *uevent, 
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

# 207 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 207
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$UARTSend$sendDone(arg_0xb77887e8, arg_0xb7788978);
#line 67
  result = rcombine(result, AMStandard$UARTSend$sendDone(arg_0xb77887e8, arg_0xb7788978));
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 635 "SarpM.nc"
static inline  result_t SarpM$SendSpecificReportResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 649
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 616
static inline  result_t SarpM$SendSpecificReportRequest$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 631
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 598
static inline  result_t SarpM$SendEndToEndReportResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 612
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 580
static inline  result_t SarpM$SendReportForwardResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 594
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 562
static inline  result_t SarpM$SendReportNoForwardResponse$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 576
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 543
static inline  result_t SarpM$SendReportRequest$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 557
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 526
static inline  result_t SarpM$SendReport$sendDone(TOS_MsgPtr masg, result_t success)
{










  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 507
static inline  result_t SarpM$SendData$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 521
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

#line 454
static inline  result_t SarpM$SendDisc$sendDone(TOS_MsgPtr masg, result_t success)
{
#line 468
  SarpM$sending[tos_state.current_node] = 0;
  return SUCCESS;
}

# 157 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline   result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success)
#line 157
{
  return SUCCESS;
}

# 49 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t AMStandard$SendMsg$sendDone(uint8_t arg_0xb73936e8, TOS_MsgPtr arg_0xb7503010, result_t arg_0xb75031a0){
#line 49
  unsigned char result;
#line 49

#line 49
  switch (arg_0xb73936e8) {
#line 49
    case DISCOVERY_MSG_TYPE:
#line 49
      result = SarpM$SendDisc$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case DATA_MSG_TYPE:
#line 49
      result = SarpM$SendData$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case REPORT_MSG_TYPE:
#line 49
      result = SarpM$SendReport$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case REPORT_REQUEST_MSG_TYPE:
#line 49
      result = SarpM$SendReportRequest$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE:
#line 49
      result = SarpM$SendReportNoForwardResponse$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case REPORT_RESPONSE_FORWARD_MSG_TYPE:
#line 49
      result = SarpM$SendReportForwardResponse$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case END_TO_END_REPORT_RESPONSE_MSG_TYPE:
#line 49
      result = SarpM$SendEndToEndReportResponse$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case SPECIFIC_REPORT_REQUEST_MSG_TYPE:
#line 49
      result = SarpM$SendSpecificReportRequest$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    case SPECIFIC_REPORT_RESPONSE_MSG_TYPE:
#line 49
      result = SarpM$SendSpecificReportResponse$sendDone(arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    default:
#line 49
      result = AMStandard$SendMsg$default$sendDone(arg_0xb73936e8, arg_0xb7503010, arg_0xb75031a0);
#line 49
      break;
#line 49
    }
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 160 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline   result_t AMStandard$default$sendDone(void)
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

# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendData$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(DATA_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 987 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline void sendSarpParent(uint32_t transaction, uint16_t myID, uint16_t parentID)
{
  int sock;
#line 989
  int n;
  struct sockaddr_in name;

  char message[70];

#line 993
  sprintf(message, "<sarp><parent transaction=\"%d\" source=\"%d\" target=\"%d\" /></sarp>", transaction, myID, parentID);

  sock = socket(2, SOCK_DGRAM, IPPROTO_UDP);
  if (sock < 0) 
    {
      printf("Socket failure.\r\n");
      exit(0);
    }

  name.sin_family = 2;
  name.sin_port = htons(12000);
  name.sin_addr.s_addr = inet_addr("131.128.81.51");

  n = connect(sock, (struct sockaddr *)&name, sizeof name);
  if (n < 0) 
    {
      printf("Connection failed\r\n");
    }

  n = write(sock, message, strlen(message) + 1);

  if (n < 0) {
    printf("Message not sent.  Trying again. \r\n");
    }
#line 1016
  close(sock);
}

# 48 "/opt/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t SarpM$SendReportRequest$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(REPORT_REQUEST_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
inline static  result_t SarpM$SendReportNoForwardResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(REPORT_RESPONSE_NO_FORWARD_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
inline static  result_t SarpM$SendReportForwardResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(REPORT_RESPONSE_FORWARD_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
inline static  result_t SarpM$SendEndToEndReportResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(END_TO_END_REPORT_RESPONSE_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
inline static  result_t SarpM$SendSpecificReportRequest$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(SPECIFIC_REPORT_REQUEST_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
inline static  result_t SarpM$SendSpecificReportResponse$send(uint16_t arg_0xb75057a0, uint8_t arg_0xb7505928, TOS_MsgPtr arg_0xb7505ab8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(SPECIFIC_REPORT_RESPONSE_MSG_TYPE, arg_0xb75057a0, arg_0xb7505928, arg_0xb7505ab8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
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
# 16 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
inline static  uint16_t TransactionTableM$Attack$ifLoopCreatorGetParent(uint16_t arg_0xb7493da0){
#line 16
  unsigned short result;
#line 16

#line 16
  result = AttackM$Attack$ifLoopCreatorGetParent(arg_0xb7493da0);
#line 16

#line 16
  return result;
#line 16
}
#line 16
# 204 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/NeighborTableM.nc"
static inline  uint16_t NeighborTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint8_t myLevel_l, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t dontPickMe, uint16_t dontPickMeEither, uint16_t reallyDontPickMe, uint16_t whoIAm)
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
#line 337
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
#line 351
            NeighborTableM$maxOverallTrustIndex[tos_state.current_node] = NeighborTableM$highestChildTrustIndex[tos_state.current_node];
            }
        }
    }

  if (NeighborTableM$highestParentTrustIndex[tos_state.current_node] != 255) {
    dbg(DBG_USR1, "HPaTI: %d, MPPTI: %d, MOTI: %d\r\n", myOneHopNeighbors[NeighborTableM$highestParentTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxOverallTrustIndex[tos_state.current_node]]->node_id);
    }
#line 358
  if (NeighborTableM$highestPeerTrustIndex[tos_state.current_node] != 255) {
    dbg(DBG_USR1, "HPeTI: %d, MPPTI: %d, MOTI: %d\r\n", myOneHopNeighbors[NeighborTableM$highestPeerTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxOverallTrustIndex[tos_state.current_node]]->node_id);
    }
#line 360
  if (NeighborTableM$highestChildTrustIndex[tos_state.current_node] != 255) {
    dbg(DBG_USR1, "HCTI: %d, MOTI: %d\r\n", myOneHopNeighbors[NeighborTableM$highestChildTrustIndex[tos_state.current_node]]->node_id, myOneHopNeighbors[NeighborTableM$maxOverallTrustIndex[tos_state.current_node]]->node_id);
    }



  if (NeighborTableM$highestParentTrustIndex[tos_state.current_node] == 255 || myOneHopNeighbors[NeighborTableM$highestParentTrustIndex[tos_state.current_node]]->trust.overallTrust < parent_peer_threshold) 
    {
      dbg(DBG_USR1, "either HPaTI == 255 or no trusted parent maxp = %d\r\n", NeighborTableM$maxParentPeerTrustIndex[tos_state.current_node]);


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


  return myOneHopNeighbors[NeighborTableM$chosenParentTrustIndex[tos_state.current_node]]->node_id;
}

# 28 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
inline static  uint16_t TransactionTableM$NeighborTable$getNewTransactionParent(Neighbor_Rec_withTrust_t *arg_0xb74f2808[], uint16_t arg_0xb74f29a8, uint8_t arg_0xb74f2b38, Neighbor_Rec_withTrust_t *arg_0xb74f2d18[], uint16_t arg_0xb74f2eb0, Neighbor_Rec_withTrust_t *arg_0xb74de0c8[], uint16_t arg_0xb74de260, uint16_t arg_0xb74de3f8, uint16_t arg_0xb74de598, uint16_t arg_0xb74de738, uint16_t arg_0xb74de8c8){
#line 28
  unsigned short result;
#line 28

#line 28
  result = NeighborTableM$NeighborTable$getNewTransactionParent(arg_0xb74f2808, arg_0xb74f29a8, arg_0xb74f2b38, arg_0xb74f2d18, arg_0xb74f2eb0, arg_0xb74de0c8, arg_0xb74de260, arg_0xb74de3f8, arg_0xb74de598, arg_0xb74de738, arg_0xb74de8c8);
#line 28

#line 28
  return result;
#line 28
}
#line 28
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
# 273 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline int printTime(char *buf, int len)
#line 273
{
  return printOtherTime(buf, len, tos_state.tos_time);
}

static inline char *currentTime(void)
#line 277
{
  static char timeBuf[128];

#line 279
  printTime(timeBuf, 128);
  return timeBuf;
}

# 211 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static inline void event_clocktick_invalidate(event_t *event)
#line 211
{
  clock_tick_data_t *data = event->data;

#line 213
  data->valid = 0;
}

#line 115
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
inline static   void TimerM$Clock$setInterval(uint8_t arg_0xb75fb068){
#line 105
  HPLClock$Clock$setInterval(arg_0xb75fb068);
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

# 117 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrustM.nc"
static inline  float TrustM$Trust$calculateOverallTrust(float trustFP, float trustLP, float trustPR)



{





  return trustFP * trustPR;
}

# 22 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateOverallTrust(float arg_0xb74b8010, float arg_0xb74b8190, float arg_0xb74b8310){
#line 22
  float result;
#line 22

#line 22
  result = TrustM$Trust$calculateOverallTrust(arg_0xb74b8010, arg_0xb74b8190, arg_0xb74b8310);
#line 22

#line 22
  return result;
#line 22
}
#line 22
#line 21
inline static  float TransactionTableM$Trust$calculatePR(PB_t arg_0xb74b9958, uint32_t arg_0xb74b9af0){
#line 21
  float result;
#line 21

#line 21
  result = TrustM$Trust$calculatePR(arg_0xb74b9958, arg_0xb74b9af0);
#line 21

#line 21
  return result;
#line 21
}
#line 21


inline static  float TransactionTableM$Trust$calculateForgettingFactor(uint32_t arg_0xb74b87c0, uint32_t arg_0xb74b8950, float arg_0xb74b8ad0){
#line 23
  float result;
#line 23

#line 23
  result = TrustM$Trust$calculateForgettingFactor(arg_0xb74b87c0, arg_0xb74b8950, arg_0xb74b8ad0);
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 663 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  void TransactionTableM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm, uint32_t timeCounter)
{
  for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++) 
    {

      float forgetFP;
#line 668
      float forgetLP;
#line 668
      float temp;

      forgetFP = TransactionTableM$Trust$calculateForgettingFactor(neighbors[tnLoopCounter].trust.GFB, neighbors[tnLoopCounter].trust.BFB, neighbors[tnLoopCounter].trust.trustPR);
      forgetLP = TransactionTableM$Trust$calculateForgettingFactor(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB, neighbors[tnLoopCounter].trust.trustPR);

      temp = forgetFP * neighbors[tnLoopCounter].trust.trustFP;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustFP = 1.0;
        }
      else {
#line 676
        if (temp == 0) {
          neighbors[tnLoopCounter].trust.trustFP = 0.01;
          }
        else {
#line 679
          neighbors[tnLoopCounter].trust.trustFP = temp;
          }
        }
#line 681
      temp = forgetLP * neighbors[tnLoopCounter].trust.trustLP;
      if (temp > 1) {
        neighbors[tnLoopCounter].trust.trustLP = 1.0;
        }
      else {
#line 684
        if (temp == 0) {
          neighbors[tnLoopCounter].trust.trustLP = 0.01;
          }
        else {
#line 687
          neighbors[tnLoopCounter].trust.trustLP = temp;
          }
        }
#line 727
      neighbors[tnLoopCounter].trust.trustPR = TransactionTableM$Trust$calculatePR(neighbors[tnLoopCounter].trust.PB, timeCounter);

      neighbors[tnLoopCounter].trust.overallTrust = TransactionTableM$Trust$calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
#line 748
      sendSarpTrust(0, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust, 3);
    }






  tnForgettingCnt++;
}

# 90 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$doDynamicForgetting(Neighbor_Rec_withTrust_t arg_0xb74c56b8[], uint16_t arg_0xb74c5850, uint16_t arg_0xb74c59e0, uint32_t arg_0xb74c5b78){
#line 90
  TransactionTableM$TransactionTable$doDynamicForgetting(arg_0xb74c56b8, arg_0xb74c5850, arg_0xb74c59e0, arg_0xb74c5b78);
#line 90
}
#line 90
# 2223 "SarpM.nc"
static inline  result_t SarpM$Timer10$fired(void)
{



  uint32_t cTime = tos_state.tos_time / 4000;


  SarpM$DFCounter[tos_state.current_node]++;
  dbg(DBG_USR2, "Timer 10 fired, counter: %d, num: %d\r\n", SarpM$DFCounter[tos_state.current_node], SarpM$DFThreshold[tos_state.current_node]);
  if (SarpM$DFCounter[tos_state.current_node] >= SarpM$DFThreshold[tos_state.current_node]) 
    {
      dbg(DBG_USR2, "Doing Dynamic Forgetting\r\n");
      SarpM$DFCounter[tos_state.current_node] = 0;

      SarpM$TransactionTable$doDynamicForgetting(SarpM$neighbors[tos_state.current_node], SarpM$numNeighbors[tos_state.current_node], SarpM$myAddr[tos_state.current_node], cTime);
    }

  return SUCCESS;
}

# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer6$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(2U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 12 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TrafficGenerator.nc"
inline static  float SarpM$TrafficGenerator$isTrafficGenerator(uint16_t arg_0xb7487ea8){
#line 12
  float result;
#line 12

#line 12
  result = TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(arg_0xb7487ea8);
#line 12

#line 12
  return result;
#line 12
}
#line 12
# 38 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$processThisTransaction(Transaction_Record_Ptr arg_0xb74cf220, Neighbor_Rec_withTrust_t arg_0xb74cf3e8[], uint16_t arg_0xb74cf580, uint16_t arg_0xb74cf710, uint8_t arg_0xb74cf898, uint32_t arg_0xb74cfa30){
#line 38
  TransactionTableM$TransactionTable$processThisTransaction(arg_0xb74cf220, arg_0xb74cf3e8, arg_0xb74cf580, arg_0xb74cf710, arg_0xb74cf898, arg_0xb74cfa30);
#line 38
}
#line 38
# 573 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  uint16_t TransactionTableM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr *ptr, uint16_t *ones, uint16_t *twos, uint16_t *readHere, uint16_t maxQueueSize, uint16_t *numInQueue)
{

  {
    if (*numInQueue == 0) {
      return 0;
      }
    else {
        *ptr = queue[*readHere].transactionPtr;
        *ones = queue[*readHere].oneTimes;
        *twos = queue[*readHere].twoTimes;
        *numInQueue = *numInQueue - 1;
        *readHere = (*readHere + 1) % maxQueueSize;




        return 1;
      }
  }
}

# 69 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$getFromTransactionCheckQ(Check_Transaction_Record_t arg_0xb74cab60[], Transaction_Record_Ptr *arg_0xb74cad18, uint16_t *arg_0xb74caec8, uint16_t *arg_0xb74c90a8, uint16_t *arg_0xb74c9260, uint16_t arg_0xb74c93f8, uint16_t *arg_0xb74c95b0){
#line 69
  unsigned short result;
#line 69

#line 69
  result = TransactionTableM$TransactionTable$getFromTransactionCheckQ(arg_0xb74cab60, arg_0xb74cad18, arg_0xb74caec8, arg_0xb74c90a8, arg_0xb74c9260, arg_0xb74c93f8, arg_0xb74c95b0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 2088 "SarpM.nc"
static inline  result_t SarpM$Timer8$fired(void)
{



  uint32_t cTime = tos_state.tos_time / 4000;



  dbg(DBG_USR1, "%d reports %d transactions to check\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numTransactionsToCheck[tos_state.current_node]);

  if (SarpM$TransactionTable$getFromTransactionCheckQ(SarpM$transactionsToCheckQ[tos_state.current_node], &SarpM$checkThisTransaction[tos_state.current_node], &SarpM$oneTimesTID[tos_state.current_node], &SarpM$twoTimesTID[tos_state.current_node], &SarpM$readTransactionCheckHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numTransactionsToCheck[tos_state.current_node]) == 1) 
    {
      if (SarpM$checkThisTransaction[tos_state.current_node]->processed == 0) 
        {

          if (SarpM$checkThisTransaction[tos_state.current_node]->oneHopReported > 0 && (SarpM$checkThisTransaction[tos_state.current_node]->twoHopReported > 0 || SarpM$checkThisTransaction[tos_state.current_node]->packetsForwardedTo == 0)) 
            {
              if (SarpM$checkThisTransaction[tos_state.current_node]->processed == 0) {


                  if (SarpM$nGoodBehaviors[tos_state.current_node] >= 0) {
                    SarpM$TransactionTable$processThisTransaction(SarpM$checkThisTransaction[tos_state.current_node], SarpM$neighbors[tos_state.current_node], SarpM$numNeighbors[tos_state.current_node], SarpM$myAddr[tos_state.current_node], TRUE, cTime);
                    }
                  else {
#line 2112
                    SarpM$TransactionTable$processThisTransaction(SarpM$checkThisTransaction[tos_state.current_node], SarpM$neighbors[tos_state.current_node], SarpM$numNeighbors[tos_state.current_node], SarpM$myAddr[tos_state.current_node], FALSE, cTime);
                    }
                }



              if (SarpM$TrafficGenerator$isTrafficGenerator(SarpM$myAddr[tos_state.current_node]) == 1) {
                SarpM$Timer6$start(TIMER_ONE_SHOT, 30000);
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
#line 2151
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
#line 2165
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
#line 2186
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
  else 
#line 2198
    {
    }


  return SUCCESS;
}

#line 654
static inline  void SarpM$sendReport(void)
{
  while (SarpM$sending[tos_state.current_node] == 1) 
    {
#line 657
      ;
    }



  SarpM$thisTransaction[tos_state.current_node] = SarpM$TransactionTable$getThisTransactionPtr(SarpM$transactionRecords[tos_state.current_node], SarpM$reportQ[tos_state.current_node][SarpM$readReportQHere[tos_state.current_node]]);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      dbg(DBG_USR1, "RRQH: %d, RRQ: %x\r\n", SarpM$readReportQHere[tos_state.current_node], SarpM$reportQ[tos_state.current_node][SarpM$readReportQHere[tos_state.current_node]]);


      dbg(DBG_USR1, "WOQH: %d, NMSGOQ: %d, TID: %x, PR: %d, RFrom: %d, PF: %d, PFT: %d, ORIGND: %d\r\n", SarpM$writeOutQHere[tos_state.current_node], SarpM$numMsgOutQ[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$thisTransaction[tos_state.current_node]->packetsForwarded, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->originatingNode);

      SarpM$Messaging$putReportResponseNoForwardMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->transaction_id, SarpM$thisTransaction[tos_state.current_node]->packetsReceived, SarpM$thisTransaction[tos_state.current_node]->receivedFrom, SarpM$thisTransaction[tos_state.current_node]->packetsForwarded, SarpM$thisTransaction[tos_state.current_node]->packetsForwardedTo, SarpM$thisTransaction[tos_state.current_node]->originatingNode);



      SarpM$readReportQHere[tos_state.current_node] = (SarpM$readReportQHere[tos_state.current_node] + 1) % CIRCULAR_BUFFER_SIZE;

      dbg(DBG_USR1, "%d sending regular report to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$thisTransaction[tos_state.current_node]->receivedFrom);
    }
#line 678
    __nesc_atomic_end(__nesc_atomic); }

  TOS_post(SarpM$processOutMsg);
}

#line 2079
static inline  result_t SarpM$Timer7$fired(void)
{

  dbg(DBG_USR1, "Timer 7 fired\r\n");

  TOS_post(SarpM$sendReport);
  return SUCCESS;
}

# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void TransactionTableM$Messaging$putReportRequestMsgInOutQ(TOS_Msg arg_0xb74a91f0[], uint16_t *arg_0xb74a93a8, uint16_t arg_0xb74a9540, uint16_t *arg_0xb74a96f8, uint16_t arg_0xb74a9890, uint16_t arg_0xb74a9a28, uint16_t arg_0xb74a9bc0, uint16_t arg_0xb74a9d60, uint32_t arg_0xb74a9ef8){
#line 24
  MessagingM$Messaging$putReportRequestMsgInOutQ(arg_0xb74a91f0, arg_0xb74a93a8, arg_0xb74a9540, arg_0xb74a96f8, arg_0xb74a9890, arg_0xb74a9a28, arg_0xb74a9bc0, arg_0xb74a9d60, arg_0xb74a9ef8);
#line 24
}
#line 24
# 614 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  uint16_t TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, TOS_Msg outQ[], uint16_t *writeOutQHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t myAddr)
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

# 79 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  uint16_t SarpM$TransactionTable$sendReportRequestForThisTransaction(Transaction_Record_t arg_0xb74c7830[], uint32_t arg_0xb74c79c8, TOS_Msg arg_0xb74c7b70[], uint16_t *arg_0xb74c7d28, uint16_t arg_0xb74c7ec0, uint16_t *arg_0xb74c60a8, uint16_t arg_0xb74c6238){
#line 79
  unsigned short result;
#line 79

#line 79
  result = TransactionTableM$TransactionTable$sendReportRequestForThisTransaction(arg_0xb74c7830, arg_0xb74c79c8, arg_0xb74c7b70, arg_0xb74c7d28, arg_0xb74c7ec0, arg_0xb74c60a8, arg_0xb74c6238);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 101 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  void TransactionTableM$TransactionTable$incrementSequenceNumber(Transaction_Record_t transactionRecords[], uint32_t transaction_id)
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

# 27 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/TransactionTable.nc"
inline static  void SarpM$TransactionTable$incrementSequenceNumber(Transaction_Record_t arg_0xb74d1010[], uint32_t arg_0xb74d11a8){
#line 27
  TransactionTableM$TransactionTable$incrementSequenceNumber(arg_0xb74d1010, arg_0xb74d11a8);
#line 27
}
#line 27
# 1854 "SarpM.nc"
static inline  void SarpM$sendDataMsg(void)
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
                  SarpM$TransactionTable$initializeTransaction(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node], SarpM$myAddr[tos_state.current_node], NO_PARENT, SarpM$myOneHopNeighbors[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$myLevel[tos_state.current_node], 1, SarpM$myPeers[tos_state.current_node], SarpM$numPeers[tos_state.current_node], SarpM$myChildren[tos_state.current_node], SarpM$numChildren[tos_state.current_node], SarpM$myAddr[tos_state.current_node], &SarpM$tPointer[tos_state.current_node]);
                  SarpM$numDataMessagesInTrial[tos_state.current_node] = 1;
                }
              else {
#line 1890
                SarpM$TransactionTable$incrementSequenceNumber(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node]);
                }

              SarpM$Messaging$putDataMessageInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$TransactionTable$getTransactionParent(SarpM$transactionRecords[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node]), SarpM$myAddr[tos_state.current_node], SarpM$TRANSACTION_ID[tos_state.current_node], SarpM$myAddr[tos_state.current_node], 0xbeef, SarpM$lastToFindLoop[tos_state.current_node], SarpM$cantFixIt[tos_state.current_node], SarpM$dontSendTo[tos_state.current_node], SarpM$numDataMessagesInTrial[tos_state.current_node]);
            }
#line 1894
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
#line 1940
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

#line 2066
static inline  result_t SarpM$Timer6$fired(void)
{

  dbg(DBG_USR1, "%d has %d one-hop neighbors\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node]);




  TOS_post(SarpM$sendDataMsg);
  return SUCCESS;
}

# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer10$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(5U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59

#line 59
  return result;
#line 59
}
#line 59









inline static  result_t SarpM$Timer1$stop(void){
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
# 1966 "SarpM.nc"
static inline  result_t SarpM$Timer2$fired(void)
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
  SarpM$Timer10$start(TIMER_REPEAT, 20000);



  return SUCCESS;
}

# 170 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/NeighborTableM.nc"
static inline  result_t NeighborTableM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t msgNeighbors[], uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
{

  dbg(DBG_USR1, "%d adding neighbors to DiscMsg\r\n", TOS_LOCAL_ADDRESS);
  /* atomic removed: atomic calls only */

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

  return SUCCESS;
}

# 23 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/NeighborTable.nc"
inline static  result_t MessagingM$NeighborTable$addNeighborsToDiscMsg(Disc_Rec_t arg_0xb74f3c98[], uint16_t arg_0xb74f3e38, Neighbor_Rec_withTrust_t *arg_0xb74f2068[]){
#line 23
  unsigned char result;
#line 23

#line 23
  result = NeighborTableM$NeighborTable$addNeighborsToDiscMsg(arg_0xb74f3c98, arg_0xb74f3e38, arg_0xb74f2068);
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 51 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static inline  void MessagingM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t node_id, uint16_t level, uint16_t parent_id, uint16_t numOneHopNeighbors, Neighbor_Rec_withTrust_t *myOneHopNeighbors[])
{
  /* atomic removed: atomic calls only */
  {
    outQ[*writeHere].addr = TOS_BCAST_ADDR;
    outQ[*writeHere].type = DISCOVERY_MSG_TYPE;
    disc_msg_out = (DiscoveryMsg *)outQ[*writeHere].data;
    disc_msg_out->node_id = node_id;
    disc_msg_out->level = level;
    disc_msg_out->parent_id = parent_id;
    disc_msg_out->num_neighbors = numOneHopNeighbors;
    MessagingM$NeighborTable$addNeighborsToDiscMsg(disc_msg_out->neighbors, numOneHopNeighbors, myOneHopNeighbors);

    *writeHere = (*writeHere + 1) % maxQSize;
    *numMsgOutQ = *numMsgOutQ + 1;
  }
}

# 19 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Messaging.nc"
inline static  void SarpM$Messaging$putDiscoveryMsgInOutQ(TOS_Msg arg_0xb74acce8[], uint16_t *arg_0xb74acea0, uint16_t arg_0xb74aa068, uint16_t *arg_0xb74aa220, uint16_t arg_0xb74aa3b0, uint16_t arg_0xb74aa540, uint16_t arg_0xb74aa6d8, uint16_t arg_0xb74aa878, Neighbor_Rec_withTrust_t *arg_0xb74aaa68[]){
#line 19
  MessagingM$Messaging$putDiscoveryMsgInOutQ(arg_0xb74acce8, arg_0xb74acea0, arg_0xb74aa068, arg_0xb74aa220, arg_0xb74aa3b0, arg_0xb74aa540, arg_0xb74aa6d8, arg_0xb74aa878, arg_0xb74aaa68);
#line 19
}
#line 19
# 1829 "SarpM.nc"
static inline  void SarpM$sendDiscovery(void)
{










  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      dbg(DBG_USR1, "%d reports %d ONE-HOP neighbors\r\n", SarpM$myAddr[tos_state.current_node], SarpM$numOneHopNeighbors[tos_state.current_node]);
      SarpM$Messaging$putDiscoveryMsgInOutQ(SarpM$outQ[tos_state.current_node], &SarpM$writeOutQHere[tos_state.current_node], CIRCULAR_BUFFER_SIZE, &SarpM$numMsgOutQ[tos_state.current_node], SarpM$myAddr[tos_state.current_node], SarpM$myLevel[tos_state.current_node], SarpM$myStaticParent[tos_state.current_node].node_id, SarpM$numOneHopNeighbors[tos_state.current_node], SarpM$myOneHopNeighbors[tos_state.current_node]);
    }
#line 1845
    __nesc_atomic_end(__nesc_atomic); }
  TOS_post(SarpM$processOutMsg);
}

#line 1958
static inline  result_t SarpM$Timer1$fired(void)
{
  TOS_post(SarpM$sendDiscovery);
  return SUCCESS;
}

# 147 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
static inline   result_t SimpleTimeM$AbsoluteTimer$default$fired(uint8_t id)
#line 147
{
  return SUCCESS;
}

# 61 "/opt/tinyos-1.x/tos/interfaces/AbsoluteTimer.nc"
inline static  result_t SimpleTimeM$AbsoluteTimer$fired(uint8_t arg_0xb757b6c8){
#line 61
  unsigned char result;
#line 61

#line 61
    result = SimpleTimeM$AbsoluteTimer$default$fired(arg_0xb757b6c8);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 53 "/opt/tinyos-1.x/tos/system/TimeUtilC.nc"
static inline   char TimeUtilC$TimeUtil$compare(tos_time_t a, tos_time_t b)
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
inline static   char SimpleTimeM$TimeUtil$compare(tos_time_t arg_0xb764f4b0, tos_time_t arg_0xb764f640){
#line 82
  char result;
#line 82

#line 82
  result = TimeUtilC$TimeUtil$compare(arg_0xb764f4b0, arg_0xb764f640);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 99 "/opt/tinyos-1.x/tos/system/TimeUtilC.nc"
static inline   tos_time_t TimeUtilC$TimeUtil$addUint32(tos_time_t a, uint32_t ms)
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
inline static   tos_time_t SimpleTimeM$TimeUtil$addUint32(tos_time_t arg_0xb76504b0, uint32_t arg_0xb7650640){
#line 65
  struct __nesc_unnamed4357 result;
#line 65

#line 65
  result = TimeUtilC$TimeUtil$addUint32(arg_0xb76504b0, arg_0xb7650640);
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 151 "/opt/tinyos-1.x/tos/system/SimpleTimeM.nc"
static inline  result_t SimpleTimeM$Timer$fired(void)
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

# 151 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline  result_t AMStandard$ActivityTimer$fired(void)
#line 151
{
  AMStandard$lastCount[tos_state.current_node] = AMStandard$counter[tos_state.current_node];
  AMStandard$counter[tos_state.current_node] = 0;
  return SUCCESS;
}

# 182 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline   result_t TimerM$Timer$default$fired(uint8_t id)
#line 182
{
  return SUCCESS;
}

# 73 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TimerM$Timer$fired(uint8_t arg_0xb7614c70){
#line 73
  unsigned char result;
#line 73

#line 73
  switch (arg_0xb7614c70) {
#line 73
    case 0U:
#line 73
      result = SarpM$Timer1$fired();
#line 73
      break;
#line 73
    case 1U:
#line 73
      result = SarpM$Timer2$fired();
#line 73
      break;
#line 73
    case 2U:
#line 73
      result = SarpM$Timer6$fired();
#line 73
      break;
#line 73
    case 3U:
#line 73
      result = SarpM$Timer7$fired();
#line 73
      break;
#line 73
    case 4U:
#line 73
      result = SarpM$Timer8$fired();
#line 73
      break;
#line 73
    case 5U:
#line 73
      result = SarpM$Timer10$fired();
#line 73
      break;
#line 73
    case 6U:
#line 73
      result = SimpleTimeM$Timer$fired();
#line 73
      break;
#line 73
    case 8U:
#line 73
      result = AMStandard$ActivityTimer$fired();
#line 73
      break;
#line 73
    case 9U:
#line 73
      result = AMStandard$ActivityTimer$fired();
#line 73
      break;
#line 73
    default:
#line 73
      result = TimerM$Timer$default$fired(arg_0xb7614c70);
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

# 23 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrustM.nc"
static inline  float TrustM$Trust$calculateFP(float GFB_l, float BFB_l)
{


  return (GFB_l + 1.0) / (GFB_l + BFB_l + 2.0);
}

# 16 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateFP(float arg_0xb74ba010, float arg_0xb74ba190){
#line 16
  float result;
#line 16

#line 16
  result = TrustM$Trust$calculateFP(arg_0xb74ba010, arg_0xb74ba190);
#line 16

#line 16
  return result;
#line 16
}
#line 16
# 73 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrustM.nc"
static inline  float TrustM$Trust$calculateLP(uint32_t GLB_l, uint32_t BLB_l)
{

  return (GLB_l + 1.0) / (GLB_l + BLB_l + 2.0);
}

# 19 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Trust.nc"
inline static  float TransactionTableM$Trust$calculateLP(uint32_t arg_0xb74b9338, uint32_t arg_0xb74b94c8){
#line 19
  float result;
#line 19

#line 19
  result = TrustM$Trust$calculateLP(arg_0xb74b9338, arg_0xb74b94c8);
#line 19

#line 19
  return result;
#line 19
}
#line 19
# 67 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline int TransactionTableM$evalPredictable(Trust_Rec_t neighbor, Trust_Rec_t prev_neighbor)
{
  if (neighbor.trustFP < prev_neighbor.trustFP - PR_TOLERANCE) {
#line 69
    return 0;
    }
  else {
#line 70
    return 1;
    }
}

# 941 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static inline long getMyTime(void)
#line 941
{
  return (long )(tos_state.tos_time / 4000);
}

# 88 "/opt/tinyos-1.x/tos/platform/pc/hardware.h"
 __inline __nesc_atomic_t __nesc_atomic_start(void )
{
  return 0;
}

 __inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)
{
}

# 398 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static inline void TOSH_rfm_tx_bit(uint8_t data)
{
  tos_state.rfm->transmit(tos_state.current_node, (char )(data & 0x01));
  dbg(DBG_RADIO, "RFM: Mote %i sent bit %x\n", tos_state.current_node, data & 0x01);
}

# 40 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifo.nc"
inline static  result_t SpiByteFifoC$SpiByteFifo$dataReady(uint8_t arg_0xb73321e0){
#line 40
  unsigned char result;
#line 40

#line 40
  result = MicaHighSpeedRadioM$SpiByteFifo$dataReady(arg_0xb73321e0);
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 63 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static inline  void SIG_SPI_signal(void)
#line 63
{
  uint8_t temp = SpiByteFifoC$spdr[tos_state.current_node];

#line 65
  SpiByteFifoC$spdr[tos_state.current_node] = SpiByteFifoC$nextByte[tos_state.current_node];
  SpiByteFifoC$state[tos_state.current_node] = SpiByteFifoC$OPEN;
  SpiByteFifoC$SpiByteFifo$dataReady(temp);
}

# 38 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t SecDedEncoding$Code$encodeDone(char arg_0xb7347d00){
#line 38
  unsigned char result;
#line 38

#line 38
  result = MicaHighSpeedRadioM$Code$encodeDone(arg_0xb7347d00);
#line 38

#line 38
  return result;
#line 38
}
#line 38
# 97 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
static inline void SecDedEncoding$radio_encode_thread(void)
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

# 342 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline    void MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount)
#line 342
{
}

# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioSendCoordinator$byte(TOS_MsgPtr arg_0xb7352a10, uint8_t arg_0xb7352ba0){
#line 38
  MicaHighSpeedRadioM$RadioSendCoordinator$default$byte(arg_0xb7352a10, arg_0xb7352ba0);
#line 38
}
#line 38
# 81 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
static inline  result_t SecDedEncoding$Code$encode_flush(void)
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
# 152 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static inline  result_t SpiByteFifoC$SpiByteFifo$phaseShift(void)
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

# 98 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
static inline short clear_io_bit(char port, char bit)
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

# 46 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void SpiByteFifoC$PowerState$radioRxMode(void){
#line 46
  PowerStateM$PowerState$radioRxMode();
#line 46
}
#line 46
# 142 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static inline  result_t SpiByteFifoC$SpiByteFifo$rxMode(void)
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
# 343 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline    void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff)
#line 343
{
}

# 33 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$startSymbol(uint8_t arg_0xb73521e8, uint8_t arg_0xb7352370, TOS_MsgPtr arg_0xb7352500){
#line 33
  MicaHighSpeedRadioM$RadioReceiveCoordinator$default$startSymbol(arg_0xb73521e8, arg_0xb7352370, arg_0xb7352500);
#line 33
}
#line 33
# 43 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
static inline   uint16_t RadioTimingC$RadioTiming$getTiming(void)
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
# 146 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$ChannelMon$startSymDetect(void)
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
# 341 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline    void MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(uint8_t bitsPerBlock, uint8_t offset, TOS_MsgPtr msgBuff)
#line 341
{
}

# 33 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioSendCoordinator$startSymbol(uint8_t arg_0xb73521e8, uint8_t arg_0xb7352370, TOS_MsgPtr arg_0xb7352500){
#line 33
  MicaHighSpeedRadioM$RadioSendCoordinator$default$startSymbol(arg_0xb73521e8, arg_0xb7352370, arg_0xb7352500);
#line 33
}
#line 33
# 76 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
static inline   uint16_t RadioTimingC$RadioTiming$currentTime(void)
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
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$send(uint8_t arg_0xb7335c70){
#line 33
  unsigned char result;
#line 33

#line 33
  result = SpiByteFifoC$SpiByteFifo$send(arg_0xb7335c70);
#line 33

#line 33
  return result;
#line 33
}
#line 33
# 34 "/opt/tinyos-1.x/tos/platform/pc/RadioEncoding.nc"
inline static  result_t MicaHighSpeedRadioM$Code$encode(char arg_0xb7348db8){
#line 34
  unsigned char result;
#line 34

#line 34
  result = SecDedEncoding$Code$encode(arg_0xb7348db8);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 168 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$ChannelMon$idleDetect(void)
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
# 88 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
static inline  void SIG_OUTPUT_COMPARE2B_signal(void)
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

#line 153
static inline void ChannelMonC$event_channel_mon_handle(event_t *fevent, 
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

# 84 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
static inline void RadioTimingC$event_radio_timing_handle(event_t *fevent, 
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

# 120 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static inline  result_t SpiByteFifoC$SpiByteFifo$startReadBytes(uint16_t timing)
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
inline static  result_t MicaHighSpeedRadioM$SpiByteFifo$startReadBytes(uint16_t arg_0xb7334428){
#line 35
  unsigned char result;
#line 35

#line 35
  result = SpiByteFifoC$SpiByteFifo$startReadBytes(arg_0xb7334428);
#line 35

#line 35
  return result;
#line 35
}
#line 35
# 210 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 210
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/opt/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t MicaHighSpeedRadioM$Send$sendDone(TOS_MsgPtr arg_0xb77887e8, result_t arg_0xb7788978){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$RadioSend$sendDone(arg_0xb77887e8, arg_0xb7788978);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 101 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  void MicaHighSpeedRadioM$packetSent(void)
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

#line 344
static inline    void MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount)
#line 344
{
}

# 38 "/opt/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void MicaHighSpeedRadioM$RadioReceiveCoordinator$byte(TOS_MsgPtr arg_0xb7352a10, uint8_t arg_0xb7352ba0){
#line 38
  MicaHighSpeedRadioM$RadioReceiveCoordinator$default$byte(arg_0xb7352a10, arg_0xb7352ba0);
#line 38
}
#line 38
# 187 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$Code$decodeDone(char data, char error)
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
inline static  result_t SecDedEncoding$Code$decodeDone(char arg_0xb73476e8, char arg_0xb7347868){
#line 37
  unsigned char result;
#line 37

#line 37
  result = MicaHighSpeedRadioM$Code$decodeDone(arg_0xb73476e8, arg_0xb7347868);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 155 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
static inline void SecDedEncoding$radio_decode_thread(void)
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

#line 62
static inline  result_t SecDedEncoding$Code$decode(char d1)
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
inline static  result_t MicaHighSpeedRadioM$Code$decode(char arg_0xb7347258){
#line 35
  unsigned char result;
#line 35

#line 35
  result = SecDedEncoding$Code$decode(arg_0xb7347258);
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
# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr CrcFilter$UpperReceive$receive(TOS_MsgPtr arg_0xb7791a20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$RadioReceive$receive(arg_0xb7791a20);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 52 "/opt/tinyos-1.x/tos/system/CrcFilter.nc"
static inline  TOS_MsgPtr CrcFilter$LowerReceive$receive(TOS_MsgPtr msg)
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
inline static  TOS_MsgPtr MicaHighSpeedRadioM$Receive$receive(TOS_MsgPtr arg_0xb7791a20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = CrcFilter$LowerReceive$receive(arg_0xb7791a20);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 93 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  void MicaHighSpeedRadioM$packetReceived(void)
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

# 45 "/opt/tinyos-1.x/tos/platform/pc/PowerState.nc"
inline static   void SpiByteFifoC$PowerState$radioTxMode(void){
#line 45
  PowerStateM$PowerState$radioTxMode();
#line 45
}
#line 45
# 134 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static inline  result_t SpiByteFifoC$SpiByteFifo$txMode(void)
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

#line 155
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

# 40 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  result_t TransactionTableM$StdControl$init(void)
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
# 258 "SarpM.nc"
static inline  result_t SarpM$StdControl$init(void)
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
  result = rcombine(result, TimerM$StdControl$init());
#line 63
  result = rcombine(result, TransactionTableM$StdControl$init());
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
inline static   result_t TimerM$Clock$setRate(char arg_0xb75ef450, char arg_0xb75ef5d0){
#line 96
  unsigned char result;
#line 96

#line 96
  result = HPLClock$Clock$setRate(arg_0xb75ef450, arg_0xb75ef5d0);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 55 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$init(void)
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
# 59 "/opt/tinyos-1.x/tos/system/RandomLFSR.nc"
static inline   result_t RandomLFSR$Random$init(void)
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
# 56 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
static inline  result_t ChannelMonC$ChannelMon$init(void)
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
# 136 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$Control$init(void)
#line 136
{
  MicaHighSpeedRadioM$rec_ptr[tos_state.current_node] = &MicaHighSpeedRadioM$buffer[tos_state.current_node];
  MicaHighSpeedRadioM$send_state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  MicaHighSpeedRadioM$state[tos_state.current_node] = MicaHighSpeedRadioM$IDLE_STATE;
  return rcombine(MicaHighSpeedRadioM$ChannelMon$init(), MicaHighSpeedRadioM$Random$init());
}

# 60 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
static inline  result_t PacketSink$Control$init(void)
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
# 46 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  result_t TransactionTableM$StdControl$start(void)
{



  return SUCCESS;
}

# 87 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$start(void)
#line 87
{
  return SUCCESS;
}

# 59 "/opt/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t SarpM$Timer2$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(1U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59

#line 59
  return result;
#line 59
}
#line 59
inline static  result_t SarpM$Timer1$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(0U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 102 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/AttackM.nc"
static inline  uint8_t AttackM$Attack$isSelectiveForwarder(uint16_t myNodeID)
#line 102
{
  uint32_t cnt = 0;

#line 104
  for (cnt = 0; cnt < numSFAttackers; cnt++) {
      if (selectiveForwardAttackers[cnt] == myNodeID) {
          return 1;
        }
    }
  return 0;
}

static inline  uint16_t AttackM$Attack$initBehaviors(uint16_t myNodeID, int16_t *myGoodBehaviors, int16_t *myBadBehaviors)
#line 112
{
  uint32_t cnt = 0;

#line 114
  for (cnt = 0; cnt < numOnOffAttackers; cnt++) {
      if (onOffAttackers[cnt] == myNodeID) {
          *myGoodBehaviors = nGoodBehaviors[cnt];
          *myBadBehaviors = nBadBehaviors[cnt];
          return 1;
        }
    }
  if (AttackM$Attack$isSelectiveForwarder(myNodeID)) {
      *myGoodBehaviors = 0;
      *myBadBehaviors = 255;
    }
  else 
#line 124
    {
      *myGoodBehaviors = 255;
      *myBadBehaviors = 0;
    }
  return 0;
}

# 44 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/interfaces/Attack.nc"
inline static  uint16_t SarpM$Attack$initBehaviors(uint16_t arg_0xb7490790, int16_t *arg_0xb7490940, int16_t *arg_0xb7490af0){
#line 44
  unsigned short result;
#line 44

#line 44
  result = AttackM$Attack$initBehaviors(arg_0xb7490790, arg_0xb7490940, arg_0xb7490af0);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 160 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$yellowOff(void)
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
# 160 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static inline   result_t LedsM$Leds$yellowOff(void)
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
#line 97
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
#line 72
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
# 222 "SarpM.nc"
static inline  void SarpM$startApp(void)
{
  dbg(DBG_USR1, "%d started its App.\r\n", TOS_LOCAL_ADDRESS);
  SarpM$this_dmesg[tos_state.current_node].type = CONTROL_MSG_TYPE;
  SarpM$Leds$redOff();
  SarpM$Leds$greenOff();
  SarpM$Leds$yellowOff();
  SarpM$Attack$initBehaviors(SarpM$myAddr[tos_state.current_node], &SarpM$myGoodBehaviors[tos_state.current_node], &SarpM$myBadBehaviors[tos_state.current_node]);
  SarpM$nGoodBehaviors[tos_state.current_node] = SarpM$myGoodBehaviors[tos_state.current_node];
  SarpM$nBadBehaviors[tos_state.current_node] = SarpM$myBadBehaviors[tos_state.current_node];

  SarpM$Timer1$start(TIMER_REPEAT, 2100);
  SarpM$Timer2$start(TIMER_ONE_SHOT, 30000);
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
# 305 "SarpM.nc"
static inline  result_t SarpM$StdControl$start(void)
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
  result = rcombine(result, TimerM$StdControl$start());
#line 70
  result = rcombine(result, TransactionTableM$StdControl$start());
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
# 60 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$start(void)
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
# 185 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$radioStart(void)
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
# 129 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$Control$start(void)
#line 129
{
  MicaHighSpeedRadioM$PowerState$radioStart();
  return SUCCESS;
}

# 64 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
static inline  result_t PacketSink$Control$start(void)
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
inline static  result_t AMStandard$ActivityTimer$start(char arg_0xb7630bc0, uint32_t arg_0xb7630d58){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(9U, arg_0xb7630bc0, arg_0xb7630d58);
#line 59
  result = rcombine(result, TimerM$Timer$start(8U, arg_0xb7630bc0, arg_0xb7630d58));
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
# 133 "/opt/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4)
{
  return rcombine(r1, rcombine(r2, rcombine(r3, r4)));
}

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
inline static   result_t Nido$PowerState$init(int arg_0xb7774e80, int arg_0xb7773030){
#line 14
  unsigned char result;
#line 14

#line 14
  result = PowerStateM$PowerState$init(arg_0xb7774e80, arg_0xb7773030);
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
    union __nesc_unnamed4377 {
#line 627
      __extension__ unsigned long long int __ll;
#line 627
      unsigned long int __l[2];
    } 
#line 627
    __w;
#line 627
    union __nesc_unnamed4377 __r;

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

# 55 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static inline  result_t TransactionTableM$StdControl$stop(void)
{






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
# 322 "SarpM.nc"
static inline  result_t SarpM$StdControl$stop(void)
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
  result = rcombine(result, TimerM$StdControl$stop());
#line 78
  result = rcombine(result, TransactionTableM$StdControl$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 65 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$stop(void)
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
# 191 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static inline   void PowerStateM$PowerState$radioStop(void)
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
# 124 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static inline  result_t MicaHighSpeedRadioM$Control$stop(void)
#line 124
{
  MicaHighSpeedRadioM$PowerState$radioStop();
  return SUCCESS;
}

# 68 "/opt/tinyos-1.x/tos/system/PacketSink.nc"
static inline  result_t PacketSink$Control$stop(void)
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
  result = TimerM$Timer$stop(9U);
#line 68
  result = rcombine(result, TimerM$Timer$stop(8U));
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 128 "/opt/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine3(result_t r1, result_t r2, result_t r3)
{
  return rcombine(r1, rcombine(r2, r3));
}

# 246 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static inline  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet)
#line 246
{


  packet->group = TOS_AM_GROUP;
  return received(packet);
}

# 75 "/opt/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0xb7791a20){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$UARTReceive$receive(arg_0xb7791a20);
#line 75
  result = AMStandard$UARTReceive$receive(arg_0xb7791a20);
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
    union __nesc_unnamed4378 {
#line 842
      __extension__ unsigned long long int __ll;
#line 842
      unsigned long int __l[2];
    } 
#line 842
    __w;
#line 842
    union __nesc_unnamed4378 __r;

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

# 215 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
  TOS_MsgPtr received(TOS_MsgPtr packet)
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

#line 132
static void AMStandard$dbgPacket(TOS_MsgPtr data)
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

# 1441 "SarpM.nc"
static  TOS_MsgPtr SarpM$Receive$receive(TOS_MsgPtr n)
{
  int8_t loopCounter;
#line 1443
  int8_t *put;
#line 1443
  int8_t *get;

  dbg(DBG_USR3, "In receive in %s %d\r\n", "SarpM.nc", 1445);
  if (n->type > 19 && n->type < 32) {
      dbg(DBG_USR3, "addr: %d type: %d group:%d length:%d Data Length: %d\r\n", n->addr, n->type, n->group, n->length, 29);
    }
  else {
#line 1449
    dbg(DBG_USR3, "\r\nWrong Type %d\r\n\r\n", n->type);
    }
#line 1476
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




      SarpM$writeInQHere[tos_state.current_node] = (SarpM$writeInQHere[tos_state.current_node] + 1) % CIRCULAR_BUFFER_SIZE;
      SarpM$numMsgInQ[tos_state.current_node] = SarpM$numMsgInQ[tos_state.current_node] + 1;

      TOS_post(SarpM$processInMsg);
    }
#line 1498
    __nesc_atomic_end(__nesc_atomic); }


  return n;
}

# 50 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/NeighborTableM.nc"
static  result_t NeighborTableM$NeighborTable$processNeighborFromDiscMsg(Neighbor_Rec_withTrust_t neighbors[], Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t *numNeighbors, uint16_t *numOneHopNeighbors, uint16_t nodeId_l, uint8_t level_l, uint16_t parent_l, uint16_t *isOneHop, uint32_t timeCounter)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {

      if (*isOneHop == 1) {
          dbg(DBG_USR1, "processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
        }
      else {
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
#line 97
              break;
            }
        }


      if (neighborFound == 0) 
        {

          neighbors[*numNeighbors].node_id = nodeId_l;
          neighbors[*numNeighbors].level = level_l;
          neighbors[*numNeighbors].parent_id = parent_l;
          neighbors[*numNeighbors].isOne = 0;

          neighbors[*numNeighbors].trust.trustFP = 0.67;
          neighbors[*numNeighbors].trust.GFB = TRUST_GFB_START;
          neighbors[*numNeighbors].trust.BFB = TRUST_BFB_START;
          neighbors[*numNeighbors].trust.trustLP = 0.67;
          neighbors[*numNeighbors].trust.GLB = TRUST_GLB_START;
          neighbors[*numNeighbors].trust.BLB = TRUST_BLB_START;
          neighbors[*numNeighbors].trust.trustPR = 0.67;
          nmemset(& neighbors[*numNeighbors].trust.PB, 0, sizeof(PB_t ));

          neighbors[*numNeighbors].trust.PB.SWindow->GPB = 1;
          neighbors[*numNeighbors].trust.PB.SWindow->time = timeCounter;
#line 143
          if (*isOneHop == 1) 
            {
              myOneHopNeighbors[*numOneHopNeighbors] = &neighbors[*numNeighbors];
              (*numOneHopNeighbors)++;

              dbg(DBG_USR1, "Incrementing one-hop neighbors to %d\r\n", *numOneHopNeighbors);

              neighbors[*numNeighbors].isOne = 1;
            }
          *numNeighbors = *numNeighbors + 1;

          dbg(DBG_USR1, "%d added node %d, level %d\r\n", TOS_LOCAL_ADDRESS, nodeId_l, level_l);
        }


      dbg(DBG_USR1, "Done processing: %d, num one-hops: %d\r\n", nodeId_l, *numOneHopNeighbors);
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }






  return SUCCESS;
}

# 237 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static  void MessagingM$Messaging$putNeighborDiscoveryControlMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t whoIAm, uint16_t whoIHeard, uint16_t parent)
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

      *writeHere = (*writeHere + 1) % maxQSize;
      *numMsgOutQ = *numMsgOutQ + 1;
    }
#line 253
    __nesc_atomic_end(__nesc_atomic); }
}

# 329 "SarpM.nc"
static  void SarpM$processOutMsg(void)
{
  SarpM$sending[tos_state.current_node] = 1;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t *put;
#line 336
      uint8_t *get;




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

#line 359
          switch (type) {
              case DISCOVERY_MSG_TYPE: 

                SarpM$SendDisc$send(TOS_BCAST_ADDR, sizeof(ControlMsg ), &SarpM$outMsg[tos_state.current_node]);

              break;
              case CONTROL_MSG_TYPE: 



                break;
              case DATA_MSG_TYPE: 
                dbg(DBG_USR1, "%d sending DATA message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);
              SarpM$SendData$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(DataMsg ), &SarpM$outMsg[tos_state.current_node]);

              sendSarpParent(((DataMsg *)SarpM$outMsg[tos_state.current_node].data)->transaction_id, SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);


              break;
              case REPORT_REQUEST_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending REPORT_REQUEST message to %d, \r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);



              dbg(DBG_USR1, "%d sending REPORT_REQUEST message to %d sizeof %d \r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportRequestMsg ));

              SarpM$SendReportRequest$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportRequestMsg ), &SarpM$outMsg[tos_state.current_node]);
              break;
              case REPORT_RESPONSE_NO_FORWARD_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending REPORT_RESPONSE NO FORWARD message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);


              SarpM$SendReportNoForwardResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportResponseNoForwardMsg ), &SarpM$outMsg[tos_state.current_node]);




              break;
              case REPORT_RESPONSE_FORWARD_MSG_TYPE: 

                dbg(DBG_USR1, "%d sending REPORT_RESPONSE FORWARD message to %d\r\n", SarpM$myAddr[tos_state.current_node], SarpM$outMsg[tos_state.current_node].addr);


              SarpM$SendReportForwardResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(ReportResponseForwardMsg ), &SarpM$outMsg[tos_state.current_node]);




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


              SarpM$SendSpecificReportResponse$send(SarpM$outMsg[tos_state.current_node].addr, sizeof(SpecificReportResponseMsg ), &SarpM$outMsg[tos_state.current_node]);







              break;
              default: 
                break;
            }


          SarpM$readOutQHere[tos_state.current_node] = (SarpM$readOutQHere[tos_state.current_node] + 1) % CIRCULAR_BUFFER_SIZE;
          SarpM$numMsgOutQ[tos_state.current_node] = SarpM$numMsgOutQ[tos_state.current_node] - 1;
        }
    }
#line 444
    __nesc_atomic_end(__nesc_atomic); }
}

# 179 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static  result_t AMStandard$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data)
#line 179
{
  if (!AMStandard$state[tos_state.current_node]) {
      AMStandard$state[tos_state.current_node] = 1;
      if (length > DATA_LENGTH) {
          dbg(DBG_AM, "AM: Send length too long: %i. Fail.\n", (int )length);
          AMStandard$state[tos_state.current_node] = 0;
          return FAIL;
        }
      if (!TOS_post(AMStandard$sendTask)) {
          dbg(DBG_AM, "AM: post sendTask failed.\n");
          AMStandard$state[tos_state.current_node] = 0;
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

# 77 "/opt/tinyos-1.x/tos/platform/pc/PCRadio.h"
static void TOSH_uart_send(TOS_MsgPtr msg)
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

# 149 "/opt/tinyos-1.x/tos/system/tos.h"
static void *nmemcpy(void *to, const void *from, size_t n)
{
  char *cto = to;
  const char *cfrom = from;

  while (n--) * cto++ = * cfrom++;

  return to;
}

# 82 "/opt/tinyos-1.x/tos/platform/pc/UARTNoCRCPacketM.nc"
  void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)
#line 82
{
  UARTNoCRCPacketM$Send$sendDone(fmsg, fsuccess);
}

# 143 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success)
#line 143
{
  AMStandard$state[tos_state.current_node] = 0;
  AMStandard$SendMsg$sendDone(msg->type, msg, success);
  AMStandard$sendDone();

  return SUCCESS;
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

# 70 "/opt/tinyos-1.x/tos/system/RandomLFSR.nc"
static   uint16_t RandomLFSR$Random$rand(void)
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

# 90 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static   result_t LedsM$Leds$redOff(void)
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

#line 59
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

# 78 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static  uint8_t TransactionTableM$TransactionTable$transactionExistsAlready(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t myAddr)
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

#line 119
static  result_t TransactionTableM$TransactionTable$initializeTransaction(Transaction_Record_t transactionRecords[], uint32_t transaction_id, uint16_t originatingNode, uint16_t receivedFrom, Neighbor_Rec_withTrust_t *myOneHopNeighbors[], uint16_t numOneHopNeighbors, uint16_t myLevel, uint16_t isSource, Neighbor_Rec_withTrust_t *myPeers[], uint16_t numPeers, Neighbor_Rec_withTrust_t *myChildren[], uint16_t numChildren, uint16_t myAddr, uint16_t *tPointer)
{
#line 132
  *tPointer = (*tPointer + 1) % CIRCULAR_BUFFER_SIZE;
  transactionRecords[*tPointer].transaction_id = transaction_id;
  transactionRecords[*tPointer].originatingNode = originatingNode;
  transactionRecords[*tPointer].receivedFrom = receivedFrom;
  transactionRecords[*tPointer].isValid = 1;
  transactionRecords[*tPointer].sequenceNumber = 1;

  if (isSource == 1) {
    transactionRecords[*tPointer].packetsReceived = 0;
    }
  else {
#line 142
    transactionRecords[*tPointer].packetsReceived = 1;
    }
  transactionRecords[*tPointer].packetsForwarded = 1;
  transactionRecords[*tPointer].oneHopReported = 0;
  transactionRecords[*tPointer].oneHopReportedPacketsReceived = 0;
  transactionRecords[*tPointer].oneHopReportedPacketsForwarded = 0;
  transactionRecords[*tPointer].oneHopReportedPacketsForwardedTo = NO_PARENT;
  transactionRecords[*tPointer].twoHopReported = 0;
  transactionRecords[*tPointer].twoHopReportedPacketsReceived = 0;
  transactionRecords[*tPointer].processed = 0;
  transactionRecords[*tPointer].isALoop = 0;
  transactionRecords[*tPointer].lastParentTried = 255;
  transactionRecords[*tPointer].numberPossibleOtherParents = 0;
  transactionRecords[*tPointer].numberPossibleOtherParentsTried = 0;
  for (tnLoopCounter = 0; tnLoopCounter < MAX_NUMBER_OTHER_POSSIBLE_PARENTS; tnLoopCounter++) 
    transactionRecords[*tPointer].possibleOtherParents[tnLoopCounter] = 0;



  if (myLevel == 0) 
    {



      dbg(DBG_USR1, "is the root, and is the terminal point for this DATA packet\r\n");
      dbg(DBG_USR2, "is the root, and is the terminal point for this DATA packet\r\n");
    }
  else {

    if (myLevel == 1) 
      {

        transactionRecords[*tPointer].packetsForwardedTo = 0;

        dbg(DBG_USR1, "hears the root, and will forward all DATA to it\r\n");
        dbg(DBG_USR2, "hears the root, and will forward all DATA to it\r\n");
      }
    else 

      {
        if (TransactionTableM$Attack$ifLoopCreatorGetParent(myAddr) > 0) {
          transactionRecords[*tPointer].packetsForwardedTo = TransactionTableM$Attack$ifLoopCreatorGetParent(myAddr);
          }
        else {
#line 185
          transactionRecords[*tPointer].packetsForwardedTo = TransactionTableM$NeighborTable$getNewTransactionParent(myOneHopNeighbors, numOneHopNeighbors, myLevel, myPeers, numPeers, myChildren, numChildren, transactionRecords[*tPointer].receivedFrom, 255, 255, myAddr);
          }
      }
    }
#line 188
  transactionRecords[*tPointer].originalPacketsForwardedTo = transactionRecords[*tPointer].packetsForwardedTo;




  return SUCCESS;
}

# 46 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/AttackM.nc"
static  uint16_t AttackM$Attack$ifLoopCreatorGetParent(uint16_t myNodeId)
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

# 197 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static  Transaction_Record_Ptr TransactionTableM$TransactionTable$getThisTransactionPtr(Transaction_Record_t transactions[], uint32_t transaction_id)
{





  if (transaction_id == 0) {
    return (void *)0;
    }
#line 206
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id) {
        return &transactions[tLoopCounter];
        }
    }
#line 211
  return (void *)0;
}

# 125 "/opt/tinyos-1.x/tos/platform/pc/LedsM.nc"
static   result_t LedsM$Leds$greenOff(void)
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

# 214 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static  uint16_t TransactionTableM$TransactionTable$getTransactionParent(Transaction_Record_t transactions[], uint32_t transaction_id)
{
  for (tLoopCounter = 0; tLoopCounter < CIRCULAR_BUFFER_SIZE; tLoopCounter++) 
    {
      if (transactions[tLoopCounter].transaction_id == transaction_id) {
        if (transactions[tLoopCounter].lastParentTried == 255) {
          return transactions[tLoopCounter].packetsForwardedTo;
          }
        else {
#line 222
          return transactions[tLoopCounter].lastParentTried;
          }
        }
    }
#line 224
  return 0;
}

# 24 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static  void MessagingM$Messaging$putDataMessageInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t dst_node_id, uint16_t src_node_id, uint32_t transaction_id, uint16_t orig_node_id, uint16_t data, uint16_t lastToFindLoop, uint16_t canFixIt, uint16_t dontSendTo, uint16_t sequenceNumberIn)
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

      *writeHere = (*writeHere + 1) % maxQSize;
      *numMsgOutQ = *numMsgOutQ + 1;
    }
#line 43
    __nesc_atomic_end(__nesc_atomic); }
}

#line 185
static  void MessagingM$Messaging$putEndToEndReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsSent)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      outQ[*writeHere].type = END_TO_END_REPORT_RESPONSE_MSG_TYPE;
      endToEndRepRespMsgOut = (EndToEndReportResponseMsg *)outQ[*writeHere].data;



      endToEndRepRespMsgOut->responder = responder;
      endToEndRepRespMsgOut->transaction_id = transaction_id;
      outQ[*writeHere].addr = packetsReceivedFrom;
      endToEndRepRespMsgOut->originator = originator;
      endToEndRepRespMsgOut->packetsReceived = packetsReceived;
      endToEndRepRespMsgOut->packetsReceivedFrom = packetsReceivedFrom;

      *writeHere = (*writeHere + 1) % maxQSize;
      *numMsgOutQ = *numMsgOutQ + 1;
    }
#line 203
    __nesc_atomic_end(__nesc_atomic); }
}

#line 74
static  void MessagingM$Messaging$putReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id)
{
  dbg(DBG_USR1, "In M.prepreqoutq\r\n");
  /* atomic removed: atomic calls only */
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

    *writeHere = (*writeHere + 1) % maxQSize;
    *numMsgOutQ = *numMsgOutQ + 1;
  }
}

# 522 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static  void TransactionTableM$TransactionTable$addToTransactionCheckQ(Check_Transaction_Record_t queue[], Transaction_Record_Ptr ptr, uint16_t ones, uint16_t twos, uint16_t *writeHere, uint16_t maxQueueSize, uint16_t *numInQueue)
{

  dbg(DBG_USR1, "In addToTransactionCheckQ in TransactionTableM.nc\r\n");


  dbg(DBG_USR1, " ADD to Transactions to CheckQ, ones: %d, twos: %d\r\n", ones, twos);


  for (tLoopCounter = 0; tLoopCounter < maxQueueSize; tLoopCounter++) 
    {

      dbg(DBG_USR1, "WriteHere: %d, MaxQSize: %d, NumInQ: %d\r\n", *writeHere, maxQueueSize, *numInQueue);





      if (queue[tLoopCounter].transactionPtr != (void *)0) {
          if (queue[tLoopCounter].transactionPtr->transaction_id == ptr->transaction_id && *numInQueue != 0) 
            {

              dbg(DBG_USR1, "Transaction %04x is already in TransactionToCheckQ, so I'm not putting it there again\r\n", ptr->transaction_id);




              return;
            }
        }
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      queue[*writeHere].transactionPtr = ptr;
      queue[*writeHere].oneTimes = ones;
      queue[*writeHere].twoTimes = twos;
      *numInQueue = *numInQueue + 1;
      *writeHere = (*writeHere + 1) % maxQueueSize;
    }
#line 561
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static  result_t TimerM$Timer$start(uint8_t id, char type, 
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

#line 86
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

# 168 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static  result_t TimerM$Timer$stop(uint8_t id)
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

# 22 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrafficGeneratorM.nc"
static  float TrafficGeneratorM$TrafficGenerator$isTrafficGenerator(uint16_t node_id)
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

# 151 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static  void MessagingM$Messaging$putReportResponseNoForwardMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t originatingNode)
{
  /* atomic removed: atomic calls only */
  {
    reportRespForwardMsgOut = (ReportResponseForwardMsg *)outQ[*writeHere].data;
    reportRespForwardMsgOut->responder = responder;
    reportRespForwardMsgOut->transaction_id = transaction_id;
    if (originatingNode == packetsReceivedFrom) {
      outQ[*writeHere].type = REPORT_RESPONSE_NO_FORWARD_MSG_TYPE;
      }
    else {
#line 161
      outQ[*writeHere].type = REPORT_RESPONSE_FORWARD_MSG_TYPE;
      }
#line 162
    outQ[*writeHere].addr = packetsReceivedFrom;
    reportRespForwardMsgOut->packetsReceived = packetsReceived;
    reportRespForwardMsgOut->packetsReceivedFrom = packetsReceivedFrom;
    reportRespForwardMsgOut->packetsForwarded = packetsForwarded;
    reportRespForwardMsgOut->packetsForwardedTo = packetsForwardedTo;

    *writeHere = (*writeHere + 1) % maxQSize;
    *numMsgOutQ = *numMsgOutQ + 1;
  }
}

# 374 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TransactionTableM.nc"
static  void TransactionTableM$TransactionTable$processThisTransaction(Transaction_Record_Ptr thisTransaction, Neighbor_Rec_withTrust_t neighbors[], uint16_t numNeighbors, uint16_t whoIAm, uint8_t isGood, uint32_t timeCounter)



{


  one_gfb_inc = 0;
  one_bfb_inc = 0;
  one_glb_inc = 0;
  one_blb_inc = 0;
  two_gfb_inc = 0;
  two_bfb_inc = 0;
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
      one_glb_inc = 0;
      one_blb_inc = 2;
    }
  else 
    {
      one_glb_inc = 1;
      one_blb_inc = 0;
    }

  if (thisTransaction->oneHopReported == 1) 
    {
      if (thisTransaction->twoHopReported == 1) 
        {







          one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived;
          one_bfb_inc = thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived;
        }
      else 


        {



          one_gfb_inc = thisTransaction->oneHopReportedPacketsReceived;
          one_bfb_inc = thisTransaction->packetsForwarded - thisTransaction->oneHopReportedPacketsReceived;
        }
    }
  else 



    {
      if (thisTransaction->twoHopReported == 1) 
        {









          one_gfb_inc = thisTransaction->twoHopReportedPacketsReceived;
          one_bfb_inc = thisTransaction->packetsForwarded - thisTransaction->twoHopReportedPacketsReceived;
        }
      else 
        {



          one_gfb_inc = 0;
          one_bfb_inc = 0;
        }
    }


  if (thisTransaction->packetsForwardedTo != 0 && thisTransaction->packetsForwardedTo != 255) {

    TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(neighbors, thisTransaction->packetsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, one_gfb_inc, one_bfb_inc, one_glb_inc, one_blb_inc, isGood, timeCounter);
    }



  if (thisTransaction->oneHopReportedPacketsForwardedTo != 0 && thisTransaction->oneHopReportedPacketsForwardedTo != 255) {

    TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(neighbors, thisTransaction->oneHopReportedPacketsForwardedTo, numNeighbors, whoIAm, thisTransaction->transaction_id, two_gfb_inc, two_bfb_inc, two_glb_inc, two_blb_inc, isGood, timeCounter);
    }




  thisTransaction->processed = 1;
  thisTransaction->isValid = 0;
}

#line 231
static  void TransactionTableM$TransactionTable$adjustThisNeighborsOverallTrust(Neighbor_Rec_withTrust_t neighbors[], uint16_t node_id, uint16_t numNeighbors, uint16_t whoIAm, uint32_t transactionNumber, uint32_t GFBinc, uint32_t BFBinc, uint32_t GLBinc, uint32_t BLBinc, uint8_t isGood, uint32_t t)



{





  TransactionTableM$prev_neighbors[tos_state.current_node] = (Trust_Rec_t *)malloc(sizeof(Trust_Rec_t ) * numNeighbors);






  if (TransactionTableM$prev_neighbors[tos_state.current_node] != (void *)0) {


      dbg(DBG_USR3, "ALLOC FINISH:%d\r\n", 251);


      for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++) {
          TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter].GFB = neighbors[tnLoopCounter].trust.GFB;
          TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter].BFB = neighbors[tnLoopCounter].trust.BFB;
          TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter].trustFP = neighbors[tnLoopCounter].trust.trustFP;



          memmove((PB_t *)& TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter].PB, (PB_t *)& neighbors[tnLoopCounter].trust.PB, sizeof(PB_t ));
          TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter].trustPR = neighbors[tnLoopCounter].trust.trustPR;
          TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter].overallTrust = neighbors[tnLoopCounter].trust.overallTrust;
        }

      dbg(DBG_USR3, "Copy FINISH:%d\r\n", 266);
    }
  else 

    {
      dbg(DBG_USR3, "Alloc Failed:%d\r\n", 271);
    }


  for (tnLoopCounter = 0; tnLoopCounter < numNeighbors; tnLoopCounter++) 
    {
      if (neighbors[tnLoopCounter].node_id == node_id) 
        {

          neighbors[tnLoopCounter].trust.GFB += GFBinc;
          neighbors[tnLoopCounter].trust.BFB += BFBinc;

          neighbors[tnLoopCounter].trust.trustFP = TransactionTableM$Trust$calculateFP(GFBinc, BFBinc);






          neighbors[tnLoopCounter].trust.GLB += GLBinc;
          neighbors[tnLoopCounter].trust.BLB += BLBinc;
          neighbors[tnLoopCounter].trust.trustLP = TransactionTableM$Trust$calculateLP(neighbors[tnLoopCounter].trust.GLB, neighbors[tnLoopCounter].trust.BLB);


          if (TransactionTableM$prev_neighbors[tos_state.current_node] != (void *)0) {
              neighbors[tnLoopCounter].trust.PB.pointer = (neighbors[tnLoopCounter].trust.PB.pointer + 1) % 10;
              neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].time = t;




              if (TransactionTableM$evalPredictable(neighbors[tnLoopCounter].trust, TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter])) {



                  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].GPB = 1;
                  neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].BPB = 0;
                }
              else {
#line 308
                if (!TransactionTableM$evalPredictable(neighbors[tnLoopCounter].trust, TransactionTableM$prev_neighbors[tos_state.current_node][tnLoopCounter])) {



                    neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].GPB = 0;
                    neighbors[tnLoopCounter].trust.PB.SWindow[neighbors[tnLoopCounter].trust.PB.pointer].BPB = 1;
                  }
                }
            }
#line 316
          neighbors[tnLoopCounter].trust.trustPR = TransactionTableM$Trust$calculatePR(neighbors[tnLoopCounter].trust.PB, t);




          neighbors[tnLoopCounter].trust.overallTrust = TransactionTableM$Trust$calculateOverallTrust(neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR);
          tnForgettingCnt = 0;









          sendSarpTrust(transactionNumber, whoIAm, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.trustFP, neighbors[tnLoopCounter].trust.trustLP, neighbors[tnLoopCounter].trust.trustPR, neighbors[tnLoopCounter].trust.overallTrust, isGood);

          dbg(DBG_USR3, "tr:%d nd: %d ov:%f\r\n", transactionNumber, neighbors[tnLoopCounter].node_id, neighbors[tnLoopCounter].trust.overallTrust);
        }
    }
}

# 87 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrustM.nc"
static  float TrustM$Trust$calculatePR(PB_t PB_1, uint32_t timeCounter)
#line 87
{
  uint32_t GPB = 0;
#line 88
  uint32_t BPB = 0;
  uint16_t cnt = 0;
  uint8_t timeDiff = 0;

  for (cnt = 0; cnt < 10; cnt++) {
      timeDiff = timeCounter - PB_1.SWindow[cnt].time > (uint32_t )(uint32_t )(1000ul * 60ul * 60ul);
      if (timeDiff && (uint32_t )PB_1.SWindow[cnt].time != 0) {



          PB_1.SWindow[cnt].GPB = 0;
          PB_1.SWindow[cnt].BPB = 0;
          PB_1.SWindow[cnt].time = 0;
        }
      else {
          GPB += PB_1.SWindow[cnt].GPB;
          BPB += PB_1.SWindow[cnt].BPB;
        }
    }
  return (GPB + 1.0) / (GPB + BPB + 2.0);
}

# 947 "/opt/tinyos-1.x/tos/platform/pc/external_comm.c"
static void sendSarpTrust(uint32_t transaction, uint16_t source, uint16_t target, float trustFP, float trustLP, float trustPR, float overallTrust, int isGood)

{
  int sock;
#line 950
  int n;
  struct sockaddr_in name;

  char message[230];



  long myTime = getMyTime();


  sprintf(message, "<sarp><trust time=\"%ld\" transaction=\"%d\" source=\"%d\" target=\"%d\" trustFP=\"%f\" trustLP=\"%f\" trustPR=\"%f\" overallTrust=\"%f\" isGood=\"%d\"/></sarp>", myTime, transaction, source, target, trustFP, trustLP, trustPR, overallTrust, isGood);


  sock = socket(2, SOCK_DGRAM, IPPROTO_UDP);
  if (sock < 0) 
    {
      printf("Socket failure.\r\n");
      exit(0);
    }

  name.sin_family = 2;
  name.sin_port = htons(12000);
  name.sin_addr.s_addr = inet_addr("131.128.81.51");

  n = connect(sock, (struct sockaddr *)&name, sizeof name);
  if (n < 0) 
    {
      printf("Connection failed\r\n");
    }

  n = write(sock, message, strlen(message) + 1);

  if (n < 0) {
    printf("Message not sent.  Trying again. \r\n");
    }
#line 984
  close(sock);
}

# 101 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static  void MessagingM$Messaging$putSpecificReportRequestMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t transactionParent, uint16_t destination, uint16_t requestor, uint16_t originator, uint16_t originatorPacketCount, uint32_t transaction_id)
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


      *writeHere = (*writeHere + 1) % maxQSize;
      *numMsgOutQ = *numMsgOutQ + 1;
    }
#line 117
    __nesc_atomic_end(__nesc_atomic); }
}

# 148 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/TrustM.nc"
static  float TrustM$Trust$calculateForgettingFactor(uint32_t GB_1, uint32_t BB_1, float trustPR)



{

  float tmp = (GB_1 + 1.0) / (GB_1 + BB_1 + 2.0) * trustPR;

#line 155
  return 1.0 + tmp;
}

# 125 "/opt/tinyos-1.x/tos/../apps/sarp-0.4-dev/modules/MessagingM.nc"
static  void MessagingM$Messaging$putSpecificReportResponseMsgInOutQ(TOS_Msg outQ[], uint16_t *writeHere, uint16_t maxQSize, uint16_t *numMsgOutQ, uint16_t responder, uint16_t originator, uint32_t transaction_id, uint16_t packetsReceived, uint16_t packetsReceivedFrom, uint16_t packetsForwarded, uint16_t packetsForwardedTo, uint16_t transactionParent)
{
  /* atomic removed: atomic calls only */
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


    *writeHere = (*writeHere + 1) % maxQSize;
    *numMsgOutQ = *numMsgOutQ + 1;
  }
}

# 252 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
  void event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)
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

#line 170
  void event_spi_byte_handle(event_t *fevent, 
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

# 389 "/opt/tinyos-1.x/tos/platform/pc/hpl.c"
static uint8_t TOSH_rfm_rx_bit(void )
{
  uint8_t data;

#line 392
  data = tos_state.rfm->hears(tos_state.current_node);
  dbg(DBG_RADIO, "RFM: Mote %i got bit %x\n", tos_state.current_node, data);
  return data;
}

# 271 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
  void event_spi_byte_invalidate(event_t *fevent)
#line 271
{
  spi_byte_data_t *data = fevent->data;

#line 273
  data->valid = 0;
}

# 232 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static  result_t MicaHighSpeedRadioM$SpiByteFifo$dataReady(uint8_t data)
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

# 70 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static  result_t SpiByteFifoC$SpiByteFifo$send(uint8_t data)
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

# 167 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static   void PowerStateM$PowerState$radioTxMode(void)
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

# 86 "/opt/tinyos-1.x/tos/platform/pc/SecDedEncoding.nc"
static  result_t SecDedEncoding$Code$encode(char d)
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

# 224 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
static  result_t MicaHighSpeedRadioM$Code$encodeDone(char data1)
#line 224
{
  MicaHighSpeedRadioM$encoded_buffer[tos_state.current_node][(int )MicaHighSpeedRadioM$buf_end[tos_state.current_node]] = data1;
  MicaHighSpeedRadioM$buf_end[tos_state.current_node]++;
  MicaHighSpeedRadioM$buf_end[tos_state.current_node] &= 0x3;
  MicaHighSpeedRadioM$enc_count[tos_state.current_node] += 1;
  return SUCCESS;
}

#line 324
static short MicaHighSpeedRadioM$add_crc_byte(char new_byte, short crc)
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

# 173 "/opt/tinyos-1.x/tos/platform/pc/PowerStateM.nc"
static   void PowerStateM$PowerState$radioRxMode(void)
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

# 59 "/opt/tinyos-1.x/tos/platform/pc/hardware.c"
static short set_io_bit(char port, char bit)
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

# 101 "/opt/tinyos-1.x/tos/platform/pc/SpiByteFifoC.nc"
static  result_t SpiByteFifoC$SpiByteFifo$idle(void)
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

#line 276
  void event_spi_byte_end(event_t *fevent)
#line 276
{
  spi_byte_data_t *data = fevent->data;

#line 278
  data->ending = 1;
}

# 61 "/opt/tinyos-1.x/tos/platform/pc/ChannelMonC.nc"
static  result_t ChannelMonC$ChannelMon$startSymbolSearch(void)
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

#line 195
  void event_channel_mon_invalidate(event_t *fevent)
#line 195
{
  channel_mon_data_t *data = fevent->data;

#line 197
  data->valid = 0;
}

#line 178
  void event_channel_mon_create(event_t *fevent, int mote, long long ftime, int interval)
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

#line 136
static  result_t ChannelMonC$ChannelMon$stopMonitorChannel(void)
#line 136
{

  event_channel_mon_invalidate(channelMonEvents[tos_state.current_node]);
  channelMonEvents[tos_state.current_node] = (void *)0;

  ChannelMonC$CM_state[tos_state.current_node] = ChannelMonC$DISABLED_STATE;
  return SUCCESS;
}

# 130 "/opt/tinyos-1.x/tos/platform/pc/RadioTimingC.nc"
  void event_radio_timing_create(event_t *fevent, int mote, long long ftime, int interval)
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

  void event_radio_timing_invalidate(event_t *fevent)
#line 147
{
  radio_timing_data_t *data = fevent->data;

#line 149
  data->valid = 0;
}

# 157 "/opt/tinyos-1.x/tos/platform/pc/MicaHighSpeedRadioM.nc"
  result_t finishedTiming(void)
#line 157
{

  MicaHighSpeedRadioM$SpiByteFifo$startReadBytes(0);
  MicaHighSpeedRadioM$msg_length[tos_state.current_node] = MSG_DATA_SIZE - 2;
  MicaHighSpeedRadioM$calc_crc[tos_state.current_node] = 0;
  MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->time = tos_state.tos_time;
  MicaHighSpeedRadioM$rec_ptr[tos_state.current_node]->strength = 0;
  return SUCCESS;
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

#line 174
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

# 87 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static  bool AMStandard$Control$init(void)
#line 87
{
  result_t ok1;
#line 88
  result_t ok2;

  AMStandard$TimerControl$init();
  ok1 = AMStandard$UARTControl$init();
  ok2 = AMStandard$RadioControl$init();

  AMStandard$state[tos_state.current_node] = 0;
  AMStandard$lastCount[tos_state.current_node] = 0;
  AMStandard$counter[tos_state.current_node] = 0;
  dbg(DBG_BOOT, "AM Module initialized\n");

  return rcombine(ok1, ok2);
}

# 77 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static  result_t TimerM$StdControl$init(void)
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

# 103 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static  bool AMStandard$Control$start(void)
#line 103
{
  result_t ok0 = AMStandard$TimerControl$start();
  result_t ok1 = AMStandard$UARTControl$start();
  result_t ok2 = AMStandard$RadioControl$start();
  result_t ok3 = AMStandard$ActivityTimer$start(TIMER_REPEAT, 1000);



  AMStandard$state[tos_state.current_node] = 0;

  AMStandard$PowerManagement$adjustPower();

  return rcombine4(ok0, ok1, ok2, ok3);
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

# 119 "/opt/tinyos-1.x/tos/system/AMStandard.nc"
static  bool AMStandard$Control$stop(void)
#line 119
{
  result_t ok1 = AMStandard$UARTControl$stop();
  result_t ok2 = AMStandard$RadioControl$stop();
  result_t ok3 = AMStandard$ActivityTimer$stop();

  AMStandard$PowerManagement$adjustPower();
  return rcombine3(ok1, ok2, ok3);
}

# 91 "/opt/tinyos-1.x/tos/system/TimerM.nc"
static  result_t TimerM$StdControl$stop(void)
#line 91
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  return SUCCESS;
}

# 416 "/opt/tinyos-1.x/tos/platform/pc/Nido.nc"
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
  if (!strcmp(varname, "SarpM$tPointer"))
  {
    *addr = (uintptr_t)&SarpM$tPointer[__nesc_mote];
    *size = sizeof(SarpM$tPointer[__nesc_mote]);
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
  if (!strcmp(varname, "SarpM$myGoodBehaviors"))
  {
    *addr = (uintptr_t)&SarpM$myGoodBehaviors[__nesc_mote];
    *size = sizeof(SarpM$myGoodBehaviors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$myBadBehaviors"))
  {
    *addr = (uintptr_t)&SarpM$myBadBehaviors[__nesc_mote];
    *size = sizeof(SarpM$myBadBehaviors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$nGoodBehaviors"))
  {
    *addr = (uintptr_t)&SarpM$nGoodBehaviors[__nesc_mote];
    *size = sizeof(SarpM$nGoodBehaviors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$nBadBehaviors"))
  {
    *addr = (uintptr_t)&SarpM$nBadBehaviors[__nesc_mote];
    *size = sizeof(SarpM$nBadBehaviors[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$selectiveCounter"))
  {
    *addr = (uintptr_t)&SarpM$selectiveCounter[__nesc_mote];
    *size = sizeof(SarpM$selectiveCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$confidence"))
  {
    *addr = (uintptr_t)&SarpM$confidence[__nesc_mote];
    *size = sizeof(SarpM$confidence[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SarpM$transactionCnt"))
  {
    *addr = (uintptr_t)&SarpM$transactionCnt[__nesc_mote];
    *size = sizeof(SarpM$transactionCnt[__nesc_mote]);
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
  if (!strcmp(varname, "TransactionTableM$prev_neighbors"))
  {
    *addr = (uintptr_t)&TransactionTableM$prev_neighbors[__nesc_mote];
    *size = sizeof(TransactionTableM$prev_neighbors[__nesc_mote]);
    return 0;
  }

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
  SarpM$tPointer[__nesc_mote] = -1;
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
  SarpM$myGoodBehaviors[__nesc_mote] = 255;
  SarpM$myBadBehaviors[__nesc_mote] = 0;
  SarpM$nGoodBehaviors[__nesc_mote] = 255;
  SarpM$nBadBehaviors[__nesc_mote] = 0;
  SarpM$selectiveCounter[__nesc_mote] = 0;
  SarpM$confidence[__nesc_mote] = 0;
  SarpM$transactionCnt[__nesc_mote] = 0;
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
  TransactionTableM$prev_neighbors[__nesc_mote] = (void *)0;

  /* Module MessagingM */

  /* Module AttackM */

  /* Module TrafficGeneratorM */

}
