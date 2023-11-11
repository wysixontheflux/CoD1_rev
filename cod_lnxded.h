typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef ushort sa_family_t;

typedef struct termios termios, *Ptermios;

typedef uint tcflag_t;

typedef uchar cc_t;

typedef uint speed_t;

struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t c_ispeed;
    speed_t c_ospeed;
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct stat stat, *Pstat;

typedef ulonglong __u_quad_t;

typedef __u_quad_t __dev_t;

typedef ulong __ino_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};

typedef void * __gnuc_va_list;

typedef struct timeval timeval, *Ptimeval;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone * __timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct tm tm, *Ptm;

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
    long tm_gmtoff;
    char * tm_zone;
};

typedef __time_t time_t;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

#define BSD 199103

#define __STDC_VERSION__ 199900

#define _INTEGRAL_MAX_BITS 32

typedef struct _IO_FILE FILE;

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef int __jmp_buf[6];

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[32];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef long __fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[32];
};

typedef int __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef uint __useconds_t;

typedef struct hostent hostent, *Phostent;

struct hostent {
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
};

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char * pw_name;
    char * pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};

typedef void (* __sighandler_t)(int);

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef struct __dirstream DIR;

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef int (* __compar_fn_t)(void *, void *);

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_x86 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




void _DT_INIT(void);
void FUN_0804a018(void);
int usleep(__useconds_t __useconds);
int mkdir(char *__path,__mode_t __mode);
void __strtod_internal(void);
int rename(char *__old,char *__new);
int execl(char *__path,char *__arg,...);
char * strncat(char *__dest,char *__src,size_t __n);
int vsprintf(char *__s,char *__format,__gnuc_va_list __arg);
char * strchr(char *__s,int __c);
ssize_t write(int __fd,void *__buf,size_t __n);
tm * localtime(time_t *__timer);
ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len);
int fileno(FILE *__stream);
int strcmp(char *__s1,char *__s2);
int close(int __fd);
void dlsym(void);
int fprintf(FILE *__stream,char *__format,...);
__pid_t fork(void);
char * getenv(char *__name);
__sighandler_t signal(int __sig,__sighandler_t __handler);
int fflush(FILE *__stream);
int seteuid(__uid_t __uid);
int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout);
int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg);
char * strerror(int __errnum);
int tcsetattr(int __fd,int __optional_actions,termios *__termios_p);
void __frame_state_for(void);
passwd * getpwuid(__uid_t __uid);
int * __errno_location(void);
long ftell(FILE *__stream);
int system(char *__command);
int chmod(char *__file,__mode_t __mode);
int access(char *__name,int __type);
int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n);
void * malloc(size_t __size);
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
void * memmove(void *__dest,void *__src,size_t __n);
ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len);
int remove(char *__filename);
void abort(void);
void __deregister_frame_info(void);
void __sigsetjmp(void);
int __xstat(int __ver,char *__filename,stat *__stat_buf);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg);
int fseek(FILE *__stream,long __off,int __whence);
time_t time(time_t *__timer);
int fputs(char *__s,FILE *__stream);
char * strstr(char *__haystack,char *__needle);
void longjmp(__jmp_buf_tag *__env,int __val);
uint sleep(uint __seconds);
void __strtol_internal(void);
void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar);
int strncmp(char *__s1,char *__s2,size_t __n);
in_addr_t inet_addr(char *__cp);
void dlerror(void);
void __libc_start_main(void);
void * realloc(void *__ptr,size_t __size);
char * strcat(char *__dest,char *__src);
char * asctime(tm *__tp);
int printf(char *__format,...);
int bind(int __fd,sockaddr *__addr,socklen_t __len);
__uid_t getuid(void);
int fcntl(int __fd,int __cmd,...);
void * memcpy(void *__dest,void *__src,size_t __n);
int fclose(FILE *__stream);
char * ctime(time_t *__timer);
int closedir(DIR *__dirp);
int gettimeofday(timeval *__tv,__timezone_ptr_t __tz);
void srand(uint __seed);
DIR * opendir(char *__name);
int snprintf(char *__s,size_t __maxlen,char *__format,...);
int gethostname(char *__name,size_t __len);
hostent * gethostbyname(char *__name);
int strcasecmp(char *__s1,char *__s2);
void dlclose(void);
void exit(int __status);
void * calloc(size_t __nmemb,size_t __size);
int sscanf(char *__s,char *__format,...);
void free(void *__ptr);
int ioctl(int __fd,ulong __request,...);
char * getcwd(char *__buf,size_t __size);
int isatty(int __fd);
void * memset(void *__s,int __c,size_t __n);
void _exit(int __status);
char * strncpy(char *__dest,char *__src,size_t __n);
FILE * fopen(char *__filename,char *__modes);
int sprintf(char *__s,char *__format,...);
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);
int socket(int __domain,int __type,int __protocol);
dirent * readdir(DIR *__dirp);
double modf(double __x,double *__iptr);
int rand(void);
void __register_frame_info_table(void);
void __register_frame_info(void);
int tcgetattr(int __fd,termios *__termios_p);
ssize_t read(int __fd,void *__buf,size_t __nbytes);
__uid_t geteuid(void);
void __gmon_start__(void);
void __bzero(void *__s,size_t __n);
void dlopen(void);
char * strcpy(char *__dest,char *__src);
void processEntry entry(undefined4 param_1,undefined4 param_2);
void FUN_0804a6b0(void);
void FUN_0804a704(void);
void FUN_0804a710(void);
void FUN_0804a738(void);
undefined * FUN_0804a744(void);
void FUN_0804a780(uint *param_1);
void FUN_0804a81c(uint *param_1);
void FUN_0804a9b8(uint *param_1);
void FUN_0804aab4(uint *param_1,uint *param_2);
void FUN_0804ad2c(uint *param_1);
void FUN_0804aee4(uint *param_1);
void FUN_0804b010(uint *param_1,uint *param_2,byte *param_3);
void FUN_0804b3c0(char *param_1,int param_2,undefined4 *param_3);
void FUN_0804b7cc(int param_1,int param_2,int param_3,undefined4 *param_4);
int FUN_0804b9ac(int param_1,undefined4 *param_2);
void FUN_0804bab0(void);
int FUN_0804bac8(int param_1);
undefined4 FUN_0804baf8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
undefined4 FUN_0804bb9c(void);
void FUN_0804bbac(int param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 FUN_0804bc68(void);
undefined4 FUN_0804bc74(void);
undefined4 FUN_0804bc80(void);
int FUN_0804bc8c(int param_1);
int FUN_0804bca4(int param_1);
undefined4 * FUN_0804bcbc(int param_1);
void FUN_0804bd48(void);
void FUN_0804bdf0(int *param_1);
void FUN_0804c040(int *param_1,int param_2);
void FUN_0804c338(int *param_1);
undefined4 FUN_0804c454(float *param_1,float *param_2,undefined4 *param_3);
int FUN_0804c568(undefined4 *param_1,undefined4 *param_2);
int FUN_0804c648(float *param_1,float *param_2,float *param_3);
undefined4 FUN_0804c8b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5);
void FUN_0804caf4(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6);
undefined4 FUN_0804cd28(int *param_1);
void FUN_0804ceec(int *param_1);
void FUN_0804d754(int *param_1,int *param_2);
undefined4 FUN_0804dfb4(uint param_1,uint param_2,undefined4 param_3,int param_4,float *param_5);
void FUN_0804e334(float *param_1,int *param_2);
undefined4 FUN_0804e640(float *param_1,int *param_2);
void FUN_0804e944(float *param_1,int param_2);
undefined4 FUN_0804ef34(float *param_1,int param_2);
undefined4 FUN_0804f49c(float *param_1,int param_2);
void FUN_0804f764(float *param_1);
undefined4 FUN_0804f7fc(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,undefined4 *param_6);
void FUN_0804f930(int *param_1);
void FUN_0804fad0(int *param_1);
void FUN_0804fb7c(float *param_1,float param_2);
int * FUN_0804fdc0(int *param_1);
void FUN_0804fe60(int *param_1,float *param_2,float param_3,float param_4,int **param_5,int **param_6);
void FUN_0805046c(int **param_1,float *param_2,float param_3,float param_4);
void FUN_080508fc(int *param_1);
void FUN_08050bac(int *param_1,int **param_2,undefined4 param_3);
void FUN_08050fe0(int param_1);
void FUN_08051020(int *param_1,float *param_2);
undefined4 FUN_080510a0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0805114c(int *param_1);
void FUN_080511b0(int param_1,float *param_2,float *param_3);
undefined4 FUN_0805123c(int *param_1,float *param_2,float param_3);
void FUN_080512f0(int *param_1);
void FUN_08051330(int *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_080513c4(int *param_1);
void FUN_08051420(undefined4 *param_1,char *param_2,float *param_3,undefined4 param_4,float *param_5);
void FUN_080515d4(void);
void FUN_08051984(undefined4 *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5);
void FUN_08051b00(undefined4 param_1);
void FUN_08051b18(undefined4 param_1);
ushort * FUN_08051b30(int param_1,int param_2,uint param_3,undefined4 *param_4,int param_5);
void FUN_08052894(float *param_1,ushort *param_2);
void FUN_08052a58(float *param_1,ushort *param_2);
undefined4 FUN_08053280(float *param_1,ushort *param_2);
void FUN_080536c8(int param_1,undefined4 param_2);
bool FUN_080537a0(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_080538d0(int param_1,undefined4 param_2);
void FUN_0805391c(int param_1,undefined4 param_2);
uint FUN_080539b0(float *param_1,int param_2);
void FUN_08053afc(void);
void FUN_08053bf0(float *param_1,int param_2,float *param_3,float *param_4);
int FUN_08053cfc(int param_1);
uint FUN_08053d34(float *param_1);
undefined4 FUN_08053d94(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
void FUN_08053e6c(int param_1,int param_2,int param_3);
bool FUN_08053f44(int param_1,int param_2);
undefined4 FUN_08053f78(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
void FUN_08054054(int *param_1,uint param_2);
void FUN_08054094(int *param_1,uint param_2);
void FUN_0805416c(int param_1,int param_2);
uint FUN_080541f0(float *param_1,uint param_2);
void FUN_08054260(int param_1,int param_2);
longdouble FUN_080542e0(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_08054458(float *param_1,float *param_2);
void FUN_08054648(int param_1,int param_2);
void FUN_0805475c(float *param_1);
void FUN_08054a38(int param_1);
void FUN_08054b1c(float *param_1);
undefined4 FUN_08054c48(float *param_1,float *param_2,float *param_3);
void FUN_08054e90(float *param_1,float *param_2);
void FUN_08055608(int param_1,int param_2);
undefined4 FUN_08055794(int param_1,float *param_2,float *param_3,float *param_4,float param_5);
undefined4 FUN_08055980(float *param_1,float *param_2,float param_3,float param_4);
void FUN_08055c04(float *param_1);
void FUN_08055ee8(int param_1);
void FUN_08055fe0(int param_1,uint param_2,float param_3,float param_4,float *param_5,float *param_6);
void FUN_08056310(undefined4 *param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7,uint param_8,int param_9,int *param_10);
void FUN_080568d8(float *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7,float *param_8,float *param_9,undefined4 param_10);
int FUN_08056d6c(float *param_1,int param_2);
int FUN_08057240(int param_1,int param_2);
undefined4 FUN_08057374(float *param_1,float *param_2,float param_3,float param_4);
undefined4 FUN_08057500(float *param_1);
void FUN_08057c40(int param_1);
void FUN_08057d34(int param_1,uint param_2,float param_3,float param_4,float *param_5,float *param_6);
int FUN_08058050(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7,uint param_8,int param_9,int *param_10);
void FUN_080585c8(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7,float *param_8,float *param_9,undefined4 param_10);
void FUN_080588ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void FUN_08058934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
void FUN_08058978(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
void FUN_080589c4(float *param_1,float *param_2);
void FUN_08058a30(int param_1,int param_2);
void FUN_08058a6c(undefined4 param_1,int param_2);
void FUN_08058a98(float *param_1,float *param_2,float *param_3,float *param_4);
longdouble FUN_08058b2c(float *param_1,float *param_2);
longdouble FUN_08058b68(float param_1);
void FUN_08058bb8(int param_1,int param_2);
undefined4 FUN_08058c5c(undefined4 param_1,int param_2);
undefined4 FUN_08058cbc(int param_1,float *param_2,undefined4 param_3,float *param_4,float param_5);
void FUN_08058dd0(void);
void FUN_08058e9c(int *param_1);
void FUN_08058f80(int *param_1,float *param_2,float *param_3);
void FUN_08059344(int **param_1,int **param_2,int **param_3);
void FUN_080594c4(undefined4 *param_1);
void FUN_08059590(int *param_1,int param_2);
void FUN_080596d8(float *param_1,int *param_2,float param_3,float param_4,float *param_5,float *param_6);
void FUN_080599c8(int param_1,int *param_2,float param_3,float param_4,float *param_5,float *param_6);
int FUN_08059c28(int param_1,int *param_2,float param_3,float param_4,float *param_5,float *param_6);
void FUN_08059e94(int param_1,int *param_2,float param_3,float param_4,float *param_5,float *param_6);
int FUN_0805a058(int param_1,int *param_2,float param_3,float param_4,float *param_5,float *param_6);
undefined4 FUN_0805a214(uint *param_1,int *param_2,float param_3,float param_4,float *param_5,float *param_6);
undefined4 FUN_0805a540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0805a58c(float *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
bool FUN_0805a670(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
void FUN_0805a6d8(int param_1);
void FUN_0805a708(int param_1);
void FUN_0805a734(int param_1);
void FUN_0805a760(int param_1);
undefined4 FUN_0805a788(int param_1,int param_2,int param_3,int param_4,float param_5);
int FUN_0805a874(int param_1);
undefined4 FUN_0805a88c(void);
void FUN_0805a8a0(int param_1,uint *param_2);
void FUN_0805aa7c(void);
void FUN_0805ab50(void);
void FUN_0805acc0(void);
void FUN_0805adc0(char *param_1,int param_2);
void FUN_0805aef8(char *param_1,int *param_2);
void FUN_0805af78(char *param_1);
void FUN_0805afe0(undefined4 param_1);
void FUN_0805b0b4(void);
void FUN_0805b0dc(uint *param_1);
void FUN_0805b168(void);
void FUN_0805b1d4(void);
void FUN_0805b21c(code *param_1);
undefined4 FUN_0805b24c(void);
undefined * FUN_0805b258(uint param_1);
void FUN_0805b27c(uint param_1,undefined4 param_2,undefined4 param_3);
undefined * FUN_0805b2b8(void);
void FUN_0805b320(undefined4 param_1,undefined4 param_2);
void FUN_0805b398(undefined4 param_1);
void FUN_0805b3b0(void);
void FUN_0805b3f0(uint *param_1);
void FUN_0805b4b0(void);
void FUN_0805b4f8(void);
undefined4 FUN_0805b580(char *param_1);
void FUN_0805b608(char *param_1,char *param_2);
void FUN_0805b740(uint *param_1,uint *param_2);
bool FUN_0805bb98(uint *param_1);
void FUN_0805bd60(uint *param_1,uint *param_2);
void FUN_0805c114(int param_1);
int FUN_0805c1bc(uint *param_1);
int FUN_0805c490(uint *param_1);
int FUN_0805c760(uint *param_1);
undefined4 FUN_0805ca38(char *param_1,char *param_2);
long FUN_0805cc18(uint *param_1,int *param_2,int param_3,int param_4);
undefined4 FUN_0805dd58(uint *param_1);
undefined4 FUN_0805dfac(uint *param_1);
undefined4 FUN_0805e1b0(uint *param_1,int param_2);
void FUN_0805e3b0(int param_1,char *param_2);
int FUN_0805e4b4(int param_1,size_t param_2,int param_3);
size_t FUN_0805e9dc(char *param_1,void **param_2);
int FUN_0805f168(undefined4 param_1,undefined4 param_2);
int FUN_0805f6e8(char *param_1,char *param_2,int *param_3);
int FUN_0805f748(uint *param_1,uint *param_2,int param_3,int *param_4);
int FUN_0805ff08(undefined4 param_1,undefined4 param_2,char *param_3,int param_4);
void FUN_08060034(int param_1,int param_2);
void FUN_08060180(int param_1);
undefined4 FUN_080602c0(uint **param_1,uint **param_2);
void FUN_0806056c(uint *param_1,uint *param_2);
void FUN_08060ce4(uint *param_1,undefined4 param_2,int param_3,int param_4);
void FUN_08061070(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
char ** FUN_08061558(char *param_1,undefined4 param_2,undefined4 param_3);
void FUN_08061888(uint param_1,uint param_2);
void FUN_08061980(void);
void FUN_08061a5c(int param_1);
void FUN_08061c6c(undefined4 param_1);
void FUN_080621e4(undefined4 param_1);
undefined4 FUN_08062388(undefined4 param_1,int *param_2,int param_3);
bool FUN_0806249c(void);
void FUN_080624b0(void);
void FUN_080625a4(void);
void FUN_080625f8(void);
undefined4 FUN_08062650(int param_1);
void FUN_08062698(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_080626b8(int *param_1);
undefined4 FUN_080626f8(int param_1);
undefined4 FUN_0806272c(void);
long FUN_08062738(int param_1);
void FUN_080627a4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_080627c4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool FUN_080627ec(undefined4 param_1);
size_t FUN_08062830(void *param_1,size_t param_2,int param_3);
size_t FUN_080628f4(void *param_1,size_t param_2,int param_3);
void FUN_080629b8(int param_1);
void FUN_080629e0(void);
void FUN_080629f4(int param_1);
void FUN_08062a2c(int param_1,void *param_2,size_t param_3);
void FUN_08062b28(int param_1);
void FUN_08062b64(int param_1);
undefined4 FUN_08062b88(char *param_1,char *param_2);
void FUN_08062c04(int param_1);
void FUN_08062c50(void);
undefined4 FUN_08062c58(int param_1);
uint FUN_08062c7c(char *param_1,int param_2);
int FUN_08062cd4(int param_1);
void FUN_08062d70(uint *param_1,uint *param_2,uint *param_3,void *param_4);
void FUN_08062ef0(char *param_1);
undefined4 FUN_08062f08(int param_1);
void FUN_08062f4c(char *param_1);
void FUN_08062f70(void);
void FUN_08062f84(void);
undefined4 FUN_08062f98(int param_1);
void FUN_08062fb0(char *param_1,char *param_2,char param_3);
undefined4 FUN_08063000(char *param_1,char *param_2);
void FUN_08063090(undefined4 param_1,undefined4 param_2);
void FUN_080630e0(int param_1,float *param_2,float *param_3,float param_4);
void FUN_080632a0(float *param_1,float *param_2,float *param_3);
void FUN_08063388(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_080634ac(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_08063628(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_08063708(float *param_1,float *param_2,float *param_3);
void FUN_08063818(float *param_1,float *param_2);
void FUN_0806395c(float *param_1,float *param_2,float *param_3);
void FUN_08063acc(float *param_1,float *param_2,float *param_3);
void FUN_08063c3c(float *param_1,float *param_2,float *param_3);
void FUN_08063dac(float *param_1,float *param_2,float *param_3);
void FUN_08063f38(float *param_1,float *param_2);
void FUN_08064058(float *param_1,float *param_2);
void FUN_080646fc(float *param_1);
longdouble FUN_08064844(float *param_1,float *param_2);
void FUN_08064968(float *param_1,float *param_2);
void FUN_08064ba4(float *param_1,float *param_2);
void FUN_08064de4(float *param_1,float *param_2);
bool FUN_08064fec(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_080650f0(float *param_1,int param_2,float *param_3);
longdouble FUN_080651f8(float param_1,int param_2);
longdouble FUN_080653d4(float param_1,float *param_2);
void FUN_08065520(int *param_1);
longdouble FUN_08065534(uint *param_1);
longdouble FUN_0806555c(uint *param_1);
void FUN_0806558c(undefined4 param_1);
longdouble FUN_0806559c(float param_1,float param_2);
int FUN_080655dc(int param_1,int param_2);
void FUN_0806560c(float *param_1,float *param_2);
void FUN_08065680(int param_1);
longdouble FUN_0806569c(float param_1);
int FUN_080656f0(int param_1);
int FUN_0806571c(int param_1);
byte FUN_0806574c(float *param_1);
void FUN_080657cc(uint param_1,undefined4 *param_2);
longdouble FUN_0806581c(float *param_1,float *param_2);
void FUN_08065844(float *param_1,float *param_2,float *param_3);
void FUN_0806586c(float *param_1,float *param_2,float *param_3);
void FUN_08065894(undefined4 *param_1,undefined4 *param_2);
void FUN_080658b4(float *param_1,float param_2,float *param_3);
void FUN_080658d8(float *param_1,float param_2,float *param_3,float *param_4);
undefined4 FUN_08065908(int param_1,int param_2);
longdouble FUN_0806594c(float *param_1,float *param_2);
longdouble FUN_08065990(float *param_1,float *param_2);
void FUN_080659cc(float *param_1,float *param_2,float *param_3);
void FUN_08065a18(float *param_1,float *param_2);
longdouble FUN_08065a38(float *param_1);
longdouble FUN_08065a98(float *param_1);
void FUN_08065ae8(float *param_1);
void FUN_08065b5c(float *param_1);
longdouble FUN_08065bc8(float *param_1,float *param_2);
void FUN_08065c38(float *param_1);
void FUN_08065c58(float *param_1,float param_2,float *param_3);
void FUN_08065c84(void);
void FUN_08065cc0(float *param_1,float *param_2,float *param_3);
longdouble FUN_08065d24(float *param_1,float *param_2);
longdouble FUN_08065d5c(float *param_1,float *param_2);
void FUN_08065d8c(float *param_1,float param_2);
longdouble FUN_08065e2c(float *param_1);
longdouble FUN_08065e8c(float *param_1);
longdouble FUN_08065edc(float *param_1);
longdouble FUN_08065f70(float *param_1);
void FUN_08065ff4(float *param_1,float *param_2);
void FUN_080660e4(float *param_1,float *param_2);
void FUN_0806619c(float param_1,float *param_2,float *param_3);
void FUN_080661fc(float *param_1,int param_2);
void FUN_080662c0(undefined4 *param_1,undefined4 *param_2);
void FUN_08066304(undefined4 *param_1,undefined4 *param_2);
void FUN_08066380(float *param_1,float *param_2,float *param_3);
void FUN_080663e4(float *param_1,float *param_2,float *param_3);
void FUN_08066448(float *param_1,float *param_2,float *param_3);
void FUN_080664b4(float *param_1,float *param_2,float *param_3);
void FUN_08066520(float *param_1,float *param_2,float *param_3);
void FUN_08066598(float *param_1,float *param_2);
void FUN_08066610(float *param_1,float param_2);
void FUN_08066664(float *param_1,float *param_2,float *param_3);
void FUN_08066700(float *param_1,float *param_2);
longdouble FUN_0806672c(float *param_1);
longdouble FUN_08066784(float param_1);
longdouble FUN_080667a4(float *param_1);
void FUN_080667f0(float param_1,undefined4 *param_2);
void FUN_0806682c(float param_1,undefined4 *param_2);
void FUN_08066868(float param_1,float *param_2);
undefined4 FUN_080668a0(float param_1,float param_2,float param_3);
undefined4 FUN_08066928(float param_1,float param_2,float param_3,float param_4);
void FUN_080669d0(float *param_1,float *param_2);
longdouble FUN_08066a34(float param_1);
longdouble FUN_08066a74(float param_1,float param_2,float param_3);
void FUN_08066ac8(float param_1,float param_2);
void FUN_08066b38(float *param_1,float *param_2,float *param_3);
longdouble FUN_08066c90(float param_1);
longdouble FUN_08066cd0(float param_1);
void FUN_08066d24(float param_1);
void FUN_08066d88(float param_1);
longdouble FUN_08066dfc(float param_1,float param_2);
longdouble FUN_08066e54(int param_1,int param_2);
void FUN_08066ec0(undefined4 *param_1,undefined4 *param_2);
void FUN_08066eec(float *param_1,float *param_2,float *param_3);
void FUN_08066f7c(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_08067010(undefined4 *param_1);
void FUN_08067058(undefined4 *param_1,undefined4 *param_2);
void FUN_0806709c(undefined4 param_1,int param_2);
void FUN_080670e4(float param_1,float *param_2);
void FUN_0806717c(float *param_1,float *param_2,float *param_3);
void FUN_08067204(int param_1);
void FUN_08067238(float *param_1,undefined *param_2);
void FUN_08067314(undefined4 *param_1,undefined4 *param_2);
longdouble FUN_0806735c(float param_1);
longdouble FUN_08067398(float *param_1,float *param_2);
void FUN_08067404(float *param_1,float param_2,float param_3);
void FUN_08067464(float *param_1);
void FUN_080674fc(undefined4 *param_1,undefined4 *param_2);
void FUN_0806751c(float *param_1,float param_2,float *param_3);
void FUN_08067550(float *param_1,float *param_2,float *param_3);
void FUN_0806758c(float *param_1,undefined4 param_2,float *param_3,float *param_4);
longdouble FUN_080675ec(float param_1);
longdouble FUN_08067628(float *param_1);
uint * FUN_08067660(uint *param_1,uint *param_2,int param_3);
undefined4 FUN_08067774(char *param_1,char *param_2,int param_3);
char * FUN_08067974(uint *param_1);
void FUN_08067a04(void);
void FUN_08067b1c(void);
void FUN_08067c5c(void);
void FUN_08067e24(void);
undefined4 * FUN_08067f1c(size_t param_1);
void FUN_08067fc4(undefined4 param_1);
void FUN_08067fdc(undefined4 param_1);
void * FUN_08067ff4(size_t param_1,int param_2);
void * FUN_08068090(size_t param_1,int param_2);
uint FUN_0806810c(char *param_1,int param_2);
void FUN_08068150(char *param_1,char *param_2,undefined4 param_3);
void * FUN_080681e8(size_t param_1);
void FUN_08068224(void *param_1);
int FUN_0806823c(int param_1);
void FUN_08068294(void);
void FUN_0806829c(void);
void FUN_080682c8(void);
void FUN_08068384(void);
void FUN_08068438(void);
void FUN_08068484(void);
void FUN_080684d0(void);
void FUN_080684e4(void);
bool FUN_080684f8(uint param_1);
bool FUN_0806851c(void);
void FUN_0806853c(void);
void FUN_08068588(void);
int FUN_0806859c(int param_1);
void FUN_080685e8(void);
void FUN_080685fc(void);
void FUN_08068610(void);
void FUN_08068624(void *param_1);
undefined4 FUN_08068674(void);
void FUN_08068690(undefined4 param_1);
void FUN_080686a0(void);
void FUN_080686bc(void);
int FUN_080686d0(void);
time_t FUN_080686ec(int *param_1);
void FUN_0806875c(void);
void FUN_080687d4(void);
void FUN_080687e0(char *param_1,int param_2);
int FUN_080688b8(undefined4 param_1);
undefined4 FUN_08068970(uint *param_1,char *param_2);
void FUN_08068ac0(undefined4 param_1,uint *param_2,int param_3,int param_4,int param_5);
void FUN_08068f54(int param_1);
int FUN_080690c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
int FUN_0806939c(int param_1,int *param_2);
void FUN_0806951c(uint param_1,int param_2);
void FUN_080699d0(char *param_1,int param_2);
undefined4 FUN_08069c04(char *param_1,int param_2);
int * FUN_08069c90(char *param_1,int param_2);
undefined4 FUN_08069dfc(int param_1);
undefined * FUN_08069f00(undefined4 param_1);
void FUN_0806a054(int param_1,uint *param_2);
void FUN_0806a758(undefined4 param_1);
void FUN_0806b160(char *param_1,char *param_2);
void FUN_0806b250(void);
void FUN_0806b428(int param_1);
int FUN_0806b4b4(int param_1,int param_2);
int FUN_0806b4e8(int param_1,int param_2);
undefined4 FUN_0806b51c(int param_1);
void FUN_0806b530(int param_1,uint *param_2);
void FUN_0806b760(char *param_1);
void FUN_0806b79c(char *param_1);
void FUN_0806b7ec(void);
void FUN_0806b93c(int param_1,char *param_2);
void FUN_0806bb0c(char *param_1);
void FUN_0806bbd4(char *param_1);
void FUN_0806bcb0(void);
undefined4 * FUN_0806bdb0(undefined4 *param_1);
undefined4 FUN_0806bed4(void);
void FUN_0806c240(void);
void FUN_0806c410(undefined4 param_1);
void FUN_0806c534(undefined4 param_1);
void FUN_0806c654(char *param_1);
void FUN_0806ce88(void);
void FUN_0806d22c(char *param_1);
void FUN_0806d2f8(char *param_1,uint *param_2);
void FUN_0806d43c(int *param_1);
void FUN_0806d674(void);
undefined4 FUN_0806d71c(int param_1,size_t param_2,undefined4 param_3,undefined4 param_4);
void FUN_0806d868(undefined4 *param_1);
void FUN_0806d8a0(undefined *param_1,int param_2,int param_3);
void FUN_0806d8d0(void);
void FUN_0806d910(void);
int FUN_0806d988(void);
undefined4 FUN_0806da48(void);
void FUN_0806dae0(void);
void FUN_0806daf4(void);
void FUN_0806dafc(void);
undefined4 FUN_0806db58(int param_1,int param_2,char *param_3,size_t param_4);
undefined4 FUN_0806dbbc(void);
char * FUN_0806dbc8(void);
int FUN_0806dbd4(char *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0806dc68(undefined4 param_1);
void FUN_0806dca0(void);
void FUN_0806dd48(void);
void FUN_0806de08(void);
void FUN_0806dec0(void);
void FUN_0806dedc(int param_1,int param_2);
void FUN_0806df08(undefined4 param_1);
void FUN_0806df3c(char *param_1);
undefined4 FUN_0806df90(void);
void FUN_0806e00c(void);
void FUN_0806e03c(undefined4 *param_1);
undefined4 * FUN_0806e0d4(undefined4 *param_1);
void FUN_0806e128(undefined4 *param_1,undefined4 param_2);
void FUN_0806e19c(void);
void FUN_0806e1d4(void);
void FUN_0806e1e8(undefined4 param_1);
void FUN_0806e24c(undefined4 param_1);
void FUN_0806e2ac(void);
int FUN_0806e32c(int param_1);
void FUN_0806e3ec(undefined4 param_1);
undefined * FUN_0806e468(int param_1);
undefined * FUN_0806e498(int param_1);
void FUN_0806e4c8(undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4,undefined2 param_5);
void FUN_0806e5f4(undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4,undefined2 param_5);
void FUN_0806e714(int param_1,undefined4 param_2);
void FUN_0806e77c(int param_1,undefined4 param_2);
void FUN_0806e7e8(void);
void FUN_0806e848(undefined4 param_1);
void FUN_0806e860(undefined4 param_1);
void FUN_0806e878(undefined4 param_1);
void FUN_0806e890(undefined4 param_1);
void FUN_0806e8ac(undefined4 param_1);
void FUN_0806e8c4(undefined4 param_1);
void FUN_0806e8e0(undefined4 param_1);
int FUN_0806e8fc(int param_1,int *param_2,int param_3);
undefined4 FUN_0806e960(char *param_1);
undefined4 * FUN_0806e9b4(char *param_1);
char ** FUN_0806ea34(char *param_1,char *param_2,uint param_3);
int FUN_0806ecd4(undefined4 param_1,char *param_2,int param_3);
void FUN_0806ef30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0806ef7c(uint *param_1);
void FUN_0806f0b0(undefined4 param_1,undefined4 param_2);
void FUN_0806f0cc(undefined4 param_1,undefined4 param_2);
void FUN_0806f0e8(undefined4 param_1,float param_2);
void FUN_0806f16c(undefined4 param_1);
void FUN_0806f188(void);
void FUN_0806f220(void);
void FUN_0806f248(int *param_1,undefined4 param_2);
void FUN_0806f290(void);
void FUN_0806f2e0(void);
void FUN_0806f428(void);
void FUN_0806f530(void);
void FUN_0806f6b4(int param_1);
void FUN_0806f7ec(void);
longdouble FUN_0806f8a0(undefined4 param_1);
undefined4 FUN_0806f8c8(undefined4 param_1);
undefined * FUN_0806f8ec(undefined4 param_1);
void FUN_0806f910(undefined4 param_1,undefined *param_2,undefined4 param_3);
void FUN_0806f94c(code *param_1);
undefined4 FUN_0806f97c(void);
void FUN_0806fa08(undefined4 param_1);
void FUN_0806fa8c(undefined4 param_1);
void FUN_0806fb20(void);
void FUN_0806fbec(undefined4 param_1,undefined4 param_2,uint param_3);
undefined * FUN_0806fc30(uint param_1);
undefined * FUN_0806fc84(uint param_1);
void FUN_0806fcd4(uint param_1,undefined4 param_2,undefined4 param_3);
void FUN_0806fd34(void);
void FUN_0806fd78(void);
void FUN_0806fdbc(void);
void FUN_0806fe04(void);
void FUN_0806fe64(void);
void FUN_0806fe9c(void);
int FUN_0806feb0(undefined4 param_1);
undefined4 FUN_0806ffb8(undefined4 param_1,int *param_2);
undefined4 FUN_08070240(char *param_1,undefined4 *param_2);
int * FUN_08070364(int *param_1,int *param_2,int *param_3);
int FUN_08070470(char *param_1,int param_2);
void FUN_080708ec(void);
undefined4 FUN_080709c0(char *param_1,undefined4 param_2);
undefined4 FUN_08070b1c(char *param_1,undefined4 param_2,int param_3);
undefined4 * FUN_08070e90(void);
void FUN_080710bc(undefined4 param_1,undefined4 param_2);
void FUN_080712fc(undefined4 param_1,char *param_2);
void FUN_080713e8(void);
void FUN_08071488(undefined4 param_1,undefined4 param_2);
undefined1 * FUN_08071580(void);
undefined * FUN_08071600(void);
undefined * FUN_08071664(void);
undefined1 * FUN_080716cc(void);
undefined * FUN_080717a4(void);
void FUN_0807182c(void);
bool FUN_08071898(undefined4 param_1);
undefined1 * FUN_08071920(uint *param_1,char param_2);
undefined4 FUN_080719a0(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_08071a0c(void);
void FUN_08071adc(void);
void FUN_08071b18(void);
void FUN_08071b60(int param_1,int param_2);
void FUN_08071d20(int *param_1,byte param_2);
void FUN_08071eec(int param_1,int param_2,int param_3);
void FUN_08071f7c(int param_1,int param_2);
void FUN_08072214(int param_1,int param_2);
void FUN_08072398(int *param_1);
int FUN_0807249c(undefined4 *param_1,int *param_2,int param_3);
void FUN_080724fc(undefined4 *param_1,int *param_2,int param_3,uint *param_4);
void FUN_0807256c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4);
void FUN_080725b4(int param_1,int param_2,uint *param_3);
uint FUN_08072600(int param_1,int *param_2);
void FUN_0807263c(int param_1,int param_2,int param_3);
char ** FUN_080726c0(uint *param_1);
undefined4 * FUN_08072758(undefined4 param_1,uint *param_2);
void FUN_08072898(undefined4 param_1,uint *param_2);
void FUN_080729e0(void);
undefined4 * FUN_08072a38(undefined4 param_1);
undefined * FUN_08072a7c(undefined4 param_1);
longdouble FUN_08072acc(undefined4 param_1);
longdouble FUN_08072b1c(undefined4 param_1,undefined4 param_2);
undefined4 FUN_08072b3c(undefined4 param_1,undefined4 param_2);
undefined4 FUN_08072b5c(undefined4 param_1);
void FUN_08072bac(undefined4 param_1);
longdouble FUN_08072bf8(char *param_1);
void FUN_08072c78(int param_1);
void FUN_08072cb0(uint *param_1);
void FUN_08072d90(char *param_1);
void FUN_08072dc4(undefined4 param_1);
void FUN_08072e00(void);
void FUN_08072e54(void);
undefined4 FUN_08072ea8(void);
void FUN_08072eb4(void);
undefined4 * FUN_08072ed0(int param_1);
undefined4 * FUN_08072efc(size_t param_1);
undefined4 * FUN_08072f40(int param_1);
undefined4 * FUN_08072f6c(size_t param_1);
void FUN_08072fb0(int param_1);
void FUN_08072fd4(void);
void FUN_08072fdc(void);
void FUN_08072ff0(int param_1,char *param_2);
void FUN_08073038(int param_1,char *param_2);
undefined4 FUN_08073080(int param_1,undefined4 *param_2);
undefined4 FUN_080731a0(int param_1,undefined4 *param_2,int param_3,int param_4);
undefined4 FUN_08073510(char *param_1,uint *param_2);
char ** FUN_080735e4(int param_1,char *param_2);
char ** FUN_08073654(char **param_1,char *param_2);
int FUN_08073694(int param_1,char *param_2);
void FUN_080736e0(int param_1);
undefined4 FUN_08073810(int param_1,uint *param_2,int param_3,uint **param_4,uint **param_5);
undefined4 FUN_08073a54(undefined4 param_1,undefined4 param_2,int param_3,uint **param_4,uint **param_5);
void FUN_08073e8c(char *param_1);
undefined4 FUN_08073eec(int param_1);
undefined4 FUN_080741c4(int param_1,undefined4 *param_2);
undefined4 FUN_0807427c(int param_1);
undefined4 FUN_080744a0(int param_1);
int FUN_08074b04(uint *param_1);
char ** FUN_08074cb8(undefined4 param_1,uint **param_2);
undefined4 FUN_08074e88(int param_1,int param_2);
undefined4 FUN_08074fb8(int param_1);
undefined4 FUN_08075080(undefined4 param_1);
undefined4 FUN_08075100(int param_1,byte *param_2,uint *param_3,undefined8 *param_4,int param_5);
undefined4 FUN_08075c24(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
undefined4 FUN_08075f30(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4);
undefined4 FUN_080762a0(int param_1);
undefined4 FUN_0807636c(undefined4 param_1);
void FUN_080763b0(int param_1);
undefined4 FUN_08076464(int param_1);
undefined4 FUN_08076564(int param_1);
undefined4 FUN_08076668(int param_1);
undefined4 FUN_08076790(int param_1);
undefined4 FUN_080768a8(int param_1);
undefined4 FUN_080769f0(int param_1);
undefined4 FUN_08076b7c(int param_1,uint *param_2);
undefined4 FUN_08076d98(undefined4 param_1,char *param_2);
undefined4 FUN_08076e08(undefined4 param_1,int param_2,uint param_3,int param_4);
undefined4 FUN_08077054(int param_1,char *param_2);
undefined4 FUN_08077110(undefined4 param_1,char *param_2);
char * FUN_08077168(char *param_1);
char * FUN_0807729c(undefined4 param_1,undefined4 param_2,char *param_3);
void FUN_080773dc(int param_1);
undefined4 FUN_08077560(int param_1,int *param_2);
undefined4 FUN_080775ec(int param_1,char *param_2,undefined4 *param_3);
bool FUN_08077658(undefined4 param_1,undefined4 param_2);
undefined4 FUN_08077694(int param_1,int param_2,uint param_3,undefined4 *param_4);
void FUN_08077754(int param_1);
void FUN_080777c8(int param_1,undefined4 *param_2);
bool FUN_08077838(int param_1);
undefined4 FUN_08077858(int param_1,undefined4 param_2);
bool FUN_080778d0(undefined4 param_1);
undefined4 FUN_08077908(undefined4 param_1);
void FUN_08077990(void);
void FUN_08077a20(int param_1,char *param_2);
void FUN_08077ab4(int param_1,undefined4 param_2);
void FUN_08077ac8(undefined4 param_1);
int FUN_08077ae0(undefined4 param_1);
undefined4 FUN_08077b4c(int param_1);
void FUN_08077b9c(void);
void FUN_08077be0(int param_1,undefined4 param_2,int param_3);
void FUN_08077c34(int param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_08077c9c(int param_1,int param_2);
void FUN_08077d00(void);
undefined4 * FUN_08077d08(undefined4 *param_1);
void FUN_08077d64(undefined4 param_1);
undefined4 FUN_08077d80(int param_1,undefined4 *param_2);
undefined4 FUN_08077df8(uint *param_1,char *param_2);
void FUN_08077e8c(int param_1);
uint FUN_08077efc(char *param_1);
void FUN_08077f3c(char **param_1,int param_2);
void FUN_08077f88(int param_1);
undefined4 FUN_08077ff8(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_08078054(int param_1);
void FUN_0807807c(int param_1);
void FUN_08078108(undefined4 param_1);
void FUN_08078120(undefined4 param_1);
bool FUN_08078138(int param_1);
bool FUN_080781a0(int param_1);
undefined4 FUN_0807821c(undefined4 param_1);
undefined4 FUN_0807823c(undefined4 param_1);
void FUN_08078290(int param_1,int *param_2);
void FUN_08078404(int param_1,char *param_2);
void FUN_0807844c(int param_1,char *param_2);
undefined4 FUN_08078494(int param_1);
undefined4 FUN_0807855c(int param_1,undefined *param_2);
undefined4 FUN_080786f8(int param_1,undefined *param_2,int param_3);
void FUN_080788a4(char *param_1,uint param_2,uint *param_3,longdouble *param_4);
undefined4 FUN_08078a3c(int param_1,undefined *param_2);
undefined4 FUN_08078ca8(int param_1,undefined *param_2);
undefined4 FUN_08078d74(int param_1,char *param_2);
undefined4 FUN_08078e4c(int param_1,undefined4 *param_2);
undefined4 FUN_08079060(undefined4 param_1,char *param_2);
undefined4 FUN_080790d4(int param_1,int param_2,uint param_3,int param_4);
undefined4 FUN_08079344(int param_1,char *param_2);
undefined4 FUN_080793a4(undefined4 param_1,char *param_2);
void FUN_080793f8(uint *param_1);
void FUN_080794a4(uint *param_1);
longdouble FUN_08079550(undefined4 param_1);
int FUN_08079604(undefined4 param_1);
undefined4 FUN_080796a4(int param_1,uint *param_2);
char * FUN_0807974c(char *param_1);
char * FUN_080798b0(void *param_1,size_t param_2,char *param_3);
bool FUN_0807995c(undefined4 param_1,undefined4 param_2);
undefined4 FUN_0807999c(int param_1,int param_2,uint param_3,undefined4 *param_4);
void FUN_080799fc(int param_1);
void FUN_08079a10(int param_1,undefined4 *param_2);
int FUN_08079a34(int param_1);
void FUN_08079a50(int param_1,int param_2);
void FUN_08079a98(int param_1,undefined4 param_2);
undefined4 FUN_08079aa8(int param_1);
void FUN_08079ab8(int param_1);
bool FUN_08079b04(int param_1);
char * FUN_08079b1c(int param_1,int param_2);
void FUN_08079b54(int param_1);
void FUN_08079b84(undefined4 param_1);
undefined4 FUN_08079ba4(int param_1,int param_2);
undefined4 FUN_08079c28(int param_1,undefined4 *param_2);
int FUN_08079c98(int param_1);
void FUN_08079cb0(undefined4 param_1,int param_2);
void FUN_08079e38(int *param_1,undefined4 param_2);
uint FUN_0807a2b4(int param_1,uint param_2);
uint FUN_0807a38c(int param_1,uint param_2);
void FUN_0807a4ac(undefined4 *param_1);
void FUN_0807a4e0(int param_1,int param_2,uint param_3);
void FUN_0807a588(int param_1,int param_2,uint param_3);
void FUN_0807a5d4(int param_1,int param_2,uint param_3);
void FUN_0807a620(undefined4 *param_1,uint *param_2);
void FUN_0807a758(undefined4 *param_1,uint *param_2);
void FUN_0807a8a0(undefined4 *param_1,uint param_2,uint param_3,int param_4);
void FUN_0807a9a4(undefined4 *param_1,uint param_2,int *param_3,uint *param_4);
void FUN_0807b7f8(int param_1,uint param_2,uint *param_3,uint *param_4);
void FUN_0807c0e0(undefined4 *param_1,int param_2,int param_3,int param_4);
void FUN_0807c4c8(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void FUN_0807c904(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5);
undefined4 FUN_0807cbe0(int param_1,void *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,undefined4 param_6,int param_7);
void FUN_0807cd78(undefined4 *param_1,int param_2,int *param_3,int param_4);
void FUN_0807cf5c(int param_1,int param_2,int param_3,int param_4);
void FUN_0807d0f8(undefined4 *param_1,undefined *param_2,int param_3);
void FUN_0807e310(int param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_0807eeb8(void *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0807eef0(undefined4 *param_1,void *param_2,size_t param_3);
void FUN_0807ef30(undefined4 *param_1,uint param_2,int param_3);
void FUN_0807efac(undefined4 *param_1);
void FUN_0807efe4(undefined4 *param_1);
int FUN_0807f03c(undefined *param_1,undefined4 param_2,int param_3);
void FUN_0807f090(undefined4 *param_1,undefined param_2);
void FUN_0807f0bc(undefined4 *param_1,undefined2 param_2);
void FUN_0807f0ec(undefined4 *param_1,undefined4 param_2);
void FUN_0807f11c(undefined4 *param_1,float param_2);
void FUN_0807f174(int param_1);
uint FUN_0807f18c(int param_1,int param_2);
uint FUN_0807f1f8(int param_1);
int FUN_0807f23c(undefined4 param_1,undefined *param_2,int param_3);
uint FUN_0807f294(int param_1);
int FUN_0807f2c0(int param_1);
undefined4 FUN_0807f2f0(int param_1);
undefined1 * FUN_0807f320(int param_1);
undefined1 * FUN_0807f388(int param_1);
undefined1 * FUN_0807f3fc(int param_1);
longdouble FUN_0807f470(int param_1);
void FUN_0807f4a8(int param_1,void *param_2,size_t param_3);
void FUN_0807f4ec(uint *param_1,char *param_2,int param_3);
void FUN_0807f5c0(int param_1,void *param_2);
void FUN_0807f698(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0807f6c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0807f6f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0807f728(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0807f758(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4);
void FUN_0807f79c(undefined4 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4);
void FUN_0807f7e0(void);
void FUN_0807f860(undefined4 *param_1,float param_2);
uint FUN_0807f8bc(int param_1,uint param_2,int param_3);
void FUN_0807f960(undefined4 *param_1,uint param_2,uint param_3,uint param_4,int param_5);
uint FUN_0807fa64(int param_1,uint param_2,uint param_3,int param_4);
void FUN_0807fb20(undefined4 *param_1,uint param_2,uint param_3,int param_4);
uint FUN_0807fba4(int param_1,uint param_2,int param_3);
void FUN_0807fc1c(undefined4 *param_1,byte param_2,byte param_3,byte param_4);
uint FUN_0807fcd0(int param_1,byte param_2,uint param_3);
void FUN_0807fd3c(undefined4 *param_1,ushort param_2,ushort param_3,ushort param_4);
int FUN_0807fdf4(int param_1,ushort param_2,int param_3);
void FUN_0807fe60(void **param_1);
void FUN_0807ff34(int param_1);
void FUN_0808011c(int *param_1);
void FUN_08080320(int *param_1,undefined *param_2,undefined *param_3);
undefined4 FUN_080804f0(int *param_1,char *param_2);
void FUN_08080920(uint param_1);
void FUN_08080a8c(uint param_1);
undefined4 FUN_08080c38(char *param_1,undefined4 *param_2);
void FUN_08080d28(uint param_1,size_t param_2,int *param_3,int param_4);
undefined4 FUN_08080dec(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
bool FUN_08080e60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
undefined4 FUN_08080ed8(int param_1);
undefined *FUN_08080ef4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
bool FUN_08080fc0(int param_1,undefined4 *param_2,int param_3);
void FUN_08081064(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_080810c0(undefined2 param_1);
void FUN_0808119c(undefined4 param_1,undefined4 *param_2);
void FUN_08081204(int *param_1,undefined4 param_2,int param_3);
void FUN_080812a4(int *param_1,undefined4 param_2,int param_3);
void FUN_08081350(void);
void FUN_08081380(uint param_1,size_t param_2,void *param_3);
void FUN_080813d8(void);
void FUN_080813e0(void);
void FUN_08081420(void);
void FUN_08081428(void);
void FUN_08081430(void);
undefined4 FUN_08081438(void);
void FUN_08081444(void);
void FUN_0808144c(void);
void FUN_08081454(void);
void FUN_0808145c(void);
void FUN_08081464(void);
void FUN_0808146c(void);
void FUN_08081474(void);
void FUN_0808147c(void);
void FUN_08081484(void);
void FUN_0808148c(void);
void FUN_08081494(void);
void FUN_0808149c(void);
void FUN_080814a4(void);
undefined4 FUN_080814ac(void);
void FUN_080814b8(void);
undefined4 FUN_080814c0(void);
void FUN_080814cc(void);
void FUN_080814d4(void);
void FUN_080814dc(void);
void FUN_080814e4(void);
void FUN_080814ec(void);
void FUN_080814f4(void);
void FUN_08081500(char *param_1);
void FUN_08081550(char *param_1);
int FUN_08081598(char *param_1);
undefined * FUN_08081634(char **param_1,int param_2);
undefined * FUN_0808170c(char **param_1,int param_2);
void FUN_08081b48(undefined4 *param_1,char *param_2,int param_3);
void FUN_08081bd8(undefined4 param_1);
void FUN_08081c60(void);
void FUN_08081ca4(void);
void FUN_08081cc0(undefined4 param_1);
void FUN_08081cd8(undefined4 param_1);
void FUN_08081cf0(undefined4 param_1);
undefined4 FUN_08081d08(void);
void FUN_08081d1c(undefined4 *param_1);
void FUN_08081d68(undefined4 *param_1);
undefined1 * FUN_08081dbc(undefined4 *param_1);
undefined4 FUN_08081e74(void);
void FUN_08081e80(void);
void FUN_08081ec0(undefined4 *param_1,undefined4 *param_2);
void FUN_08081f00(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_08081f44(int *param_1,int param_2);
void FUN_08081fcc(char **param_1);
longdouble FUN_08081ffc(undefined4 *param_1);
undefined4 FUN_08082068(undefined4 *param_1);
void FUN_080820cc(undefined4 *param_1,int param_2,int param_3);
void FUN_0808216c(undefined4 *param_1,int param_2,int param_3,int param_4);
void FUN_08082254(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_080823a0(char *param_1,size_t param_2,char *param_3);
undefined * FUN_080823cc(char *param_1);
char * FUN_08082460(uint *param_1,char *param_2);
void FUN_080825d4(uint *param_1,char *param_2);
void FUN_080826d4(uint *param_1,char *param_2);
void FUN_080827d4(uint *param_1,char *param_2,char *param_3);
void FUN_080829e8(uint *param_1,char *param_2,char *param_3);
undefined4 FUN_08082bf8(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,code *param_6,code *param_7);
void FUN_08082dd0(void);
char * FUN_08082e04(char *param_1);
void FUN_08082e28(char *param_1,char *param_2);
void FUN_08082e4c(uint *param_1,undefined4 param_2,undefined4 param_3);
void FUN_08082ee4(uint *param_1,char *param_2);
uint FUN_08082f64(int param_1,int param_2);
void FUN_08082f88(int param_1,int param_2);
void FUN_08082fac(int param_1,int param_2);
bool FUN_08082fd0(int param_1);
bool FUN_08082fec(int param_1);
bool FUN_0808300c(int param_1);
undefined4 FUN_0808302c(int param_1);
bool FUN_08083058(int param_1);
undefined4 FUN_0808307c(int param_1);
undefined4 FUN_080830a8(int param_1);
undefined4 FUN_080830e8(char *param_1,char *param_2);
undefined4 FUN_0808315c(char *param_1,char *param_2,int param_3);
undefined4 FUN_080831a0(char *param_1,char *param_2,int param_3);
char * FUN_08083200(char *param_1);
char * FUN_0808322c(char *param_1);
char * FUN_0808325c(char *param_1,char param_2);
void FUN_08083288(char *param_1,char *param_2,int param_3);
void FUN_080832b8(uint *param_1,int param_2,char *param_3);
char * FUN_08083344(char *param_1);
int FUN_08083394(char param_1);
undefined4 FUN_080833bc(char *param_1,char *param_2,int param_3);
undefined4 FUN_08083410(char *param_1,char *param_2);
int FUN_08083460(short param_1);
void FUN_0808347c(undefined4 param_1);
undefined4 * FUN_08083494(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * FUN_080834cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void FUN_08083504(undefined4 param_1);
void FUN_08083524(void);
undefined * FUN_080835d8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_08083618(char *param_1);
void FUN_0808365c(char **param_1,char *param_2,char *param_3);
void FUN_080836b4(float *param_1,float *param_2,float *param_3);
void FUN_0808371c(int param_1,float *param_2,float *param_3);
void FUN_08083780(float *param_1,float *param_2,float *param_3);
void FUN_08083800(int param_1,float *param_2,float *param_3);
longdouble FUN_08083864(float param_1);
longdouble FUN_08083880(float param_1);
void FUN_0808389c(float *param_1,undefined4 param_2,float param_3,float param_4,float param_5);
int FUN_0808391c(int param_1);
int FUN_08083938(short param_1);
int FUN_08083944(uint param_1);
undefined4 FUN_08083974(undefined4 param_1);
uint * FUN_08083980(uint *param_1,uint param_2,uint param_3);
undefined4 * FUN_08083a2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
longdouble FUN_08083a48(uint param_1);
longdouble FUN_08083a90(float param_1);
int * FUN_08083aa0(void);
int * FUN_08083b9c(void);
void FUN_08083c68(void);
void FUN_08083de4(void);
undefined4 FUN_08084014(void);
void FUN_080840c8(void);
void FUN_08084288(void);
void FUN_08084394(void);
void FUN_08084524(void);
void FUN_080846b4(void);
void FUN_08084974(void);
void FUN_08084a3c(void);
void FUN_08084bc8(void);
void FUN_08084bd0(void);
void FUN_08084be4(void);
void FUN_08084c68(void);
void FUN_08084c94(void);
void FUN_08084cc0(void);
void FUN_08084d3c(void);
void FUN_08084d54(void);
void FUN_08084d64(void);
void FUN_08084d74(void);
void FUN_08084d90(undefined4 param_1,undefined4 param_2);
void FUN_0808514c(void);
void FUN_08085498(void);
void FUN_08085cf4(int *param_1,undefined4 param_2);
void FUN_08085eec(int *param_1);
void FUN_08086168(int param_1);
void FUN_08086290(int param_1,undefined4 param_2);
void FUN_0808674c(int param_1);
void FUN_08086ab4(int param_1);
void FUN_08086d58(int param_1,undefined4 param_2,int param_3);
undefined4 FUN_08086e08(int *param_1,undefined4 param_2);
void FUN_08086fa4(int *param_1,undefined4 param_2,int param_3);
void FUN_080872ec(int *param_1,int param_2);
int FUN_0808753c(void);
void FUN_08087784(void);
void FUN_080877d8(undefined4 *param_1,undefined4 *param_2);
void FUN_08087880(int *param_1,int param_2);
void FUN_0808789c(int *param_1,int *param_2);
void FUN_080878f4(int param_1);
void FUN_08087960(int param_1);
void FUN_080879fc(int param_1);
void FUN_08087a2c(int param_1);
void FUN_08087a64(int param_1);
void FUN_08087af8(undefined4 param_1);
void FUN_08087b14(int param_1);
void FUN_08087b28(int param_1);
undefined4 FUN_08087b90(undefined4 param_1,int param_2);
void FUN_08087d34(char *param_1);
char * FUN_08087dcc(undefined4 *param_1);
void FUN_08089124(undefined4 param_1);
undefined4 FUN_08089208(void);
int FUN_0808923c(int param_1);
int FUN_08089258(int param_1);
int FUN_08089270(int param_1);
undefined * FUN_08089288(int *param_1);
int FUN_080892cc(int param_1);
void FUN_080892f4(void);
void FUN_08089350(undefined4 param_1);
undefined4 FUN_08089418(undefined4 param_1,undefined4 param_2);
void FUN_080894bc(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_08089510(int param_1,undefined4 param_2);
void FUN_08089544(int param_1);
undefined4 FUN_080895d0(undefined4 param_1,undefined4 param_2);
void FUN_08089640(int *param_1,undefined4 param_2);
undefined FUN_080896a4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_080896fc(undefined4 param_1,int param_2);
void FUN_08089740(undefined4 param_1);
void FUN_08089774(undefined4 param_1);
void FUN_080897a8(undefined4 param_1,undefined4 param_2);
void FUN_080897e0(undefined4 param_1,undefined4 param_2);
void FUN_08089818(undefined4 param_1);
void FUN_08089830(undefined4 param_1);
void FUN_08089848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_08089880(int param_1,undefined4 *param_2);
void FUN_080898d0(undefined4 param_1);
undefined4 FUN_08089910(undefined4 param_1,undefined4 param_2);
undefined4 FUN_08089978(undefined4 param_1,undefined4 param_2);
void FUN_080899dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_08089a0c(undefined4 param_1,undefined4 param_2);
void FUN_08089a34(undefined4 param_1,undefined4 param_2);
void FUN_08089a5c(undefined4 param_1);
undefined4 FUN_08089a7c(undefined4 param_1,undefined4 param_2);
void FUN_08089ab0(undefined4 param_1);
void FUN_08089ad4(undefined4 param_1);
void FUN_08089afc(undefined4 param_1);
void FUN_08089b1c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_08089b4c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_08089b7c(float *param_1,float *param_2,float *param_3);
void FUN_08089be8(void);
void FUN_08089bf0(uint param_1,uint *param_2);
void FUN_08089df0(void);
void FUN_08089f04(void);
void FUN_0808a12c(undefined4 param_1);
void FUN_0808a220(undefined4 param_1);
void FUN_0808a94c(void);
void FUN_0808ad8c(undefined4 param_1);
void FUN_0808afcc(undefined4 param_1);
void FUN_0808b05c(uint param_1,undefined *param_2,int param_3);
undefined4 * FUN_0808b0c8(int param_1);
undefined4 * FUN_0808b0e4(int param_1,int param_2,char *param_3);
void FUN_0808b148(int param_1,int param_2,char *param_3,undefined4 param_4);
void FUN_0808b1d0(int param_1,undefined4 *param_2);
void FUN_0808b25c(int param_1,undefined4 param_2,int param_3);
void FUN_0808b2c8(void);
void FUN_0808b30c(void);
void FUN_0808b3dc(int param_1);
void FUN_0808b45c(void);
void FUN_0808b4ac(int param_1);
void FUN_0808b52c(void);
uint FUN_0808b580(int param_1,char *param_2);
void FUN_0808b680(int *param_1,int param_2,char *param_3);
void FUN_0808b900(int param_1,undefined4 param_2,char *param_3);
void FUN_0808ba0c(undefined4 param_1);
void FUN_0808bbc4(void);
void FUN_0808bd58(void);
void FUN_0808bfa8(void);
void FUN_0808c1ac(void);
void FUN_0808c404(void);
void FUN_0808c63c(void);
void FUN_0808c870(void);
void FUN_0808cab8(void);
void FUN_0808cbc0(void);
void FUN_0808cccc(int param_1);
void FUN_0808cdf8(int param_1);
void FUN_0808d268(void);
undefined1 * FUN_0808d28c(char *param_1);
undefined4 FUN_0808d2dc(int param_1);
void FUN_0808d318(undefined4 param_1);
void FUN_0808d34c(int param_1);
undefined4 FUN_0808d378(void);
void FUN_0808d3d4(void);
void FUN_0808d43c(void);
void FUN_0808d4d0(int param_1);
void FUN_0808dc74(int param_1,int param_2,int param_3);
void FUN_0808dcf8(undefined4 param_1);
void FUN_0808dd10(undefined4 param_1);
void FUN_0808dd48(undefined4 param_1,int *param_2);
void FUN_0808ddcc(void);
void FUN_0808de60(int param_1,byte *param_2,int param_3);
void FUN_0808dee0(int *param_1,undefined4 param_2);
void FUN_0808e298(undefined4 param_1,int param_2,int *param_3);
void FUN_0808e4a8(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6);
int * FUN_0808e68c(int param_1);
int FUN_0808eeb8(int *param_1);
undefined4 FUN_0808ef7c(int param_1,int *param_2,int *param_3);
void FUN_0808f130(int *param_1);
void FUN_0808f680(int param_1,int *param_2);
void FUN_0808f844(int *param_1);
void FUN_0808fb84(void);
void FUN_0809045c(void);
void FUN_080906d0(int param_1,undefined4 param_2);
void FUN_08090740(int param_1,int param_2,int param_3);
void FUN_08090804(int param_1);
void FUN_0809088c(undefined4 param_1);
void FUN_080908b0(undefined4 *param_1);
void FUN_08090f18(int param_1,int param_2);
void FUN_0809105c(float *param_1,int param_2);
undefined4 FUN_08091498(int param_1,int param_2);
undefined4 FUN_080915c4(int param_1,int param_2);
void FUN_080916f4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,int param_11);
void FUN_08091a7c(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9);
undefined4 FUN_08091d00(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6,undefined4 param_7);
uint FUN_08091ea8(undefined4 param_1,int param_2,uint param_3);
void FUN_08091f94(int param_1);
void FUN_08091fc4(int param_1);
void FUN_08092020(void);
undefined * FUN_0809203c(char *param_1,int param_2);
void FUN_08092158(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14);
void FUN_080921c0(void);
void FUN_080921e0(int param_1);
void FUN_0809221c(void);
void FUN_08092280(undefined4 *param_1);
undefined FUN_080922c0(undefined2 param_1,undefined2 param_2,char param_3,char param_4,char param_5);
int FUN_080927d8(short param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,uint param_6,ushort param_7,int param_8);
void FUN_08092a40(short param_1,undefined2 param_2);
undefined2 FUN_08092b28(undefined4 param_1,int *param_2);
void FUN_08092c6c(int param_1,undefined4 param_2);
void FUN_080930e4(undefined4 param_1);
void FUN_080930f4(undefined4 *param_1,undefined2 param_2,undefined4 param_3);
void FUN_080931a8(undefined4 param_1);
int FUN_080931c0(short param_1);
void FUN_0809323c(int param_1);
undefined4 FUN_0809326c(int param_1);
void FUN_08093288(short param_1);
void FUN_08093320(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_0809336c(undefined4 *param_1,undefined4 param_2);
void FUN_0809340c(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
void FUN_080934e0(undefined2 param_1,undefined4 param_2);
void FUN_08093618(undefined2 param_1,undefined4 param_2);
void FUN_08093758(undefined2 param_1);
void FUN_0809382c(undefined2 param_1);
void FUN_080938fc(undefined2 param_1);
void FUN_08093a28(undefined2 param_1);
void FUN_08093b58(undefined2 param_1);
void FUN_08093c88(char param_1,undefined4 param_2,undefined4 param_3);
void FUN_08093d78(undefined2 param_1,undefined4 param_2);
void FUN_08093e44(undefined4 param_1,undefined2 param_2,undefined4 param_3);
void FUN_08093f98(undefined4 param_1,undefined2 param_2,undefined4 param_3);
void FUN_080940d8(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4);
void FUN_08094228(int *param_1);
void FUN_08094320(int *param_1,undefined4 param_2);
void FUN_080946f4(undefined4 param_1,uint param_2,char param_3,undefined4 param_4);
void FUN_08094824(undefined4 param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5);
void FUN_08094974(undefined4 param_1,int param_2,char param_3,undefined4 param_4);
void FUN_08094aa8(undefined4 param_1,uint param_2,char param_3,undefined4 param_4);
void FUN_08094be4(int *param_1,int **param_2,char param_3);
void FUN_08095154(undefined4 param_1,int *param_2,int **param_3,undefined4 param_4,char param_5);
void FUN_080956fc(void);
void FUN_08095848(int *param_1);
void FUN_0809590c(int *param_1);
void FUN_08095a5c(int **param_1,undefined4 param_2);
void FUN_08095b4c(int **param_1,undefined param_2,undefined4 param_3);
void FUN_08095ccc(undefined4 *param_1);
void FUN_08096438(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_08096578(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_080966b8(undefined4 param_1,undefined4 param_2,byte param_3,undefined4 param_4);
void FUN_080967ec(undefined4 *param_1);
void FUN_08096bb8(int *param_1,undefined param_2,undefined4 param_3);
void FUN_08096d34(undefined4 *param_1,undefined4 param_2);
void FUN_08096fa0(void);
void FUN_08097038(int *param_1);
void FUN_08097140(int *param_1,int *param_2,undefined4 param_3);
void FUN_08097274(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_080973a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_08097574(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0809784c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_08097a74(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_08097d90(int *param_1,undefined4 param_2);
void FUN_08097f0c(int *param_1,undefined4 param_2);
void FUN_08098088(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void FUN_080981e4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void FUN_08098388(undefined4 param_1,int **param_2,undefined4 param_3,undefined4 param_4);
void FUN_080984cc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_080987d4(int *param_1,uint param_2);
void FUN_0809893c(undefined4 param_1);
void FUN_08098a20(undefined4 param_1);
void FUN_08098b04(undefined4 *param_1);
void FUN_08098fe8(void);
void FUN_08099150(int *param_1,undefined4 param_2);
void FUN_08099278(int *param_1);
void FUN_0809938c(int param_1,undefined4 param_2);
void FUN_08099558(int param_1,undefined4 param_2);
void FUN_080996c4(int *param_1,undefined4 param_2);
void FUN_080997a4(int param_1,undefined2 param_2);
void FUN_08099948(int *param_1,undefined param_2);
void FUN_080999e0(int *param_1,undefined param_2,undefined4 param_3);
void FUN_08099a34(int *param_1,undefined4 param_2);
undefined4 FUN_08099a78(uint *param_1,uint *param_2);
void FUN_08099aa4(int *param_1);
void FUN_08099ad4(void);
void FUN_08099b50(void);
void FUN_08099bf0(void);
undefined * FUN_08099c40(undefined4 *param_1);
void FUN_0809a038(undefined4 param_1,undefined4 param_2);
void FUN_0809a054(undefined4 param_1,undefined4 param_2);
void FUN_0809a070(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0809a090(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0809a0b0(undefined4 param_1);
bool FUN_0809a0d0(undefined4 param_1);
void FUN_0809a22c(void);
bool FUN_0809a370(uint param_1);
bool FUN_0809a394(uint param_1);
bool FUN_0809a3b4(uint param_1);
undefined4 FUN_0809a3d4(char *param_1);
int FUN_0809a404(undefined4 param_1,undefined4 param_2);
void FUN_0809a4bc(void);
void FUN_0809a4e8(void);
short FUN_0809a4f8(ushort param_1);
undefined2 FUN_0809a54c(undefined4 param_1);
void FUN_0809a570(void);
void FUN_0809a5fc(void);
void FUN_0809a640(void);
void FUN_0809a6c0(undefined4 param_1);
void FUN_0809a70c(void);
void FUN_0809a780(void);
void FUN_0809a870(uint param_1,int param_2);
uint FUN_0809aa08(uint param_1,int param_2);
void FUN_0809aba4(int param_1);
void FUN_0809ad08(void);
uint FUN_0809ae08(int param_1);
int FUN_0809af1c(int param_1);
undefined4 FUN_0809af6c(void);
void FUN_0809af78(ushort param_1,int param_2);
undefined * FUN_0809b04c(undefined4 param_1,undefined4 param_2);
void FUN_0809b070(int param_1,int param_2);
bool FUN_0809b14c(int param_1,int param_2);
void FUN_0809b230(void);
void FUN_0809b300(void);
void FUN_0809b410(undefined4 param_1);
char * FUN_0809b5d4(uint *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0809b89c(undefined4 param_1,uint *param_2,int param_3);
void FUN_0809b9b0(uint param_1,int param_2);
void FUN_0809bb04(undefined4 param_1,char *param_2);
void FUN_0809bbb0(undefined4 param_1,char *param_2);
undefined4 FUN_0809bc3c(void);
void FUN_0809bc48(code *param_1);
void FUN_0809bcb8(code *param_1);
void FUN_0809bd54(code *param_1);
void FUN_0809bda4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined *param_4);
undefined4 * FUN_0809be8c(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_0809bea0(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_0809beb4(undefined4 *param_1,undefined4 param_2);
int * FUN_0809bee0(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_0809bf14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int * FUN_0809bf4c(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_0809bf80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int * FUN_0809bfc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int * FUN_0809bff8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
int * FUN_0809c03c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int * FUN_0809c07c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
int * FUN_0809c0c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
int ** FUN_0809c118(int **param_1,undefined4 param_2);
int ** FUN_0809c15c(int **param_1,undefined4 param_2,int *param_3);
int * FUN_0809c194(int *param_1,int param_2,undefined4 param_3);
int * FUN_0809c1d4(int *param_1,int param_2,undefined4 *param_3);
ushort FUN_0809c200(char *param_1,uint param_2);
undefined2 FUN_0809c3a8(uint *param_1);
undefined2 FUN_0809c434(char *param_1,byte param_2,uint param_3,undefined4 param_4);
undefined2 FUN_0809c858(int param_1,byte param_2,int param_3,undefined4 param_4);
void FUN_0809c8b0(ushort param_1,char *param_2,uint param_3);
void FUN_0809ca58(undefined *param_1,byte *param_2,int param_3);
int FUN_0809cac4(ushort param_1);
uint FUN_0809cae8(int param_1);
void FUN_0809cb08(void);
undefined2 FUN_0809cb64(uint *param_1);
undefined2 FUN_0809cbc4(uint *param_1,undefined param_2,undefined4 param_3);
undefined2 FUN_0809cc28(uint *param_1,undefined param_2);
undefined2 FUN_0809cc8c(uint *param_1,undefined param_2,undefined4 param_3);
undefined2 FUN_0809ccf0(uint *param_1,undefined param_2);
void FUN_0809cd54(ushort param_1,byte param_2);
void FUN_0809cd80(ushort param_1);
void FUN_0809cd94(ushort param_1);
void FUN_0809ce04(ushort param_1,undefined4 param_2);
void FUN_0809ce3c(ushort *param_1,ushort param_2);
undefined2 FUN_0809ced4(uint *param_1);
undefined2 FUN_0809cf34(float param_1);
undefined2 FUN_0809cfb4(undefined4 param_1);
undefined2 FUN_0809d034(float *param_1);
void FUN_0809d0c8(byte param_1);
undefined2 FUN_0809d1c0(undefined4 param_1);
void FUN_0809d244(void);
int FUN_0809d258(int param_1);
void FUN_0809d284(int param_1);
void FUN_0809d2d0(void);
uint FUN_0809d788(ushort param_1,uint param_2);
void FUN_0809db4c(undefined4 *param_1,int param_2);
void FUN_0809dcf0(ushort param_1);
void FUN_0809df80(ushort param_1);
undefined2 FUN_0809e0f0(ushort param_1,int param_2);
ushort FUN_0809e1c4(uint param_1,ushort param_2);
void FUN_0809e394(uint param_1,ushort param_2);
void FUN_0809e4d4(uint param_1,uint param_2);
void FUN_0809e6a0(uint param_1,uint param_2);
void FUN_0809e858(ushort param_1,undefined2 param_2);
void FUN_0809ea5c(ushort param_1,int *param_2);
ushort FUN_0809ebc8(ushort *param_1);
void FUN_0809ecf0(int param_1,uint param_2);
void FUN_0809eef0(int param_1,uint param_2);
void FUN_0809f0f4(undefined2 param_1,undefined4 param_2,undefined2 param_3);
uint FUN_0809f1bc(uint param_1,undefined4 param_2);
undefined2 FUN_0809f2b4(undefined4 param_1,uint param_2);
uint FUN_0809f3bc(int param_1,uint param_2);
void FUN_0809f5a0(uint *param_1,int *param_2);
undefined2 FUN_0809fa4c(ushort param_1,int *param_2);
undefined2 FUN_0809fd44(ushort param_1,int *param_2);
void FUN_080a00a4(ushort param_1,int *param_2);
void FUN_080a022c(ushort param_1,undefined2 param_2);
undefined4 * FUN_080a033c(void);
void FUN_080a0414(byte param_1,undefined4 *param_2);
void FUN_080a0618(undefined4 *param_1,uint param_2,char param_3);
void FUN_080a0748(uint *param_1);
uint FUN_080a08c8(undefined4 param_1);
void FUN_080a09cc(ushort param_1);
longdouble FUN_080a0b50(ushort param_1);
void FUN_080a0c4c(ushort param_1);
longdouble FUN_080a0d4c(int param_1,float *param_2);
void FUN_080a0e30(uint param_1);
void FUN_080a10b0(ushort param_1);
void FUN_080a12b0(void);
void FUN_080a157c(void);
void FUN_080a1640(void);
void FUN_080a1868(void);
void FUN_080a1c30(undefined4 param_1);
undefined4 FUN_080a1f18(ushort param_1);
void FUN_080a1fd8(void);
void FUN_080a211c(int param_1);
int FUN_080a2218(int param_1,int param_2);
void FUN_080a2260(void);
void FUN_080a2268(void);
void FUN_080a22d8(void);
undefined4 FUN_080a2370(void);
undefined2 FUN_080a237c(ushort param_1);
uint FUN_080a2394(ushort param_1);
void FUN_080a23ac(ushort param_1);
undefined2 FUN_080a2478(ushort param_1);
void FUN_080a2490(uint param_1,ushort param_2);
void FUN_080a24c4(ushort param_1);
uint FUN_080a24f8(void);
uint FUN_080a2580(void);
uint FUN_080a2610(void);
uint FUN_080a26ac(undefined2 param_1);
undefined2 FUN_080a274c(ushort param_1);
void FUN_080a2764(undefined4 *param_1);
void FUN_080a2818(ushort param_1);
void FUN_080a28e0(ushort param_1);
void FUN_080a28f8(void);
void FUN_080a2918(undefined4 *param_1);
void FUN_080a2954(int param_1);
void FUN_080a2974(int param_1);
void FUN_080a29b4(int param_1,uint param_2);
void FUN_080a2a0c(int param_1,uint param_2);
undefined4 FUN_080a2a78(int param_1);
uint FUN_080a2a90(int param_1);
undefined2 FUN_080a2aa4(ushort param_1,uint param_2);
undefined2 FUN_080a2b64(ushort param_1,ushort param_2);
undefined2 FUN_080a2c34(undefined2 param_1,int param_2);
undefined2 FUN_080a2c64(undefined2 param_1,undefined4 param_2);
undefined2 FUN_080a2c8c(undefined2 param_1,ushort param_2);
void FUN_080a2cb8(undefined2 param_1,ushort param_2);
void FUN_080a2cdc(ushort param_1,undefined4 *param_2);
void FUN_080a2d7c(ushort param_1,undefined4 *param_2);
undefined * FUN_080a2da4(ushort param_1);
void FUN_080a2dbc(ushort param_1);
void FUN_080a2e4c(ushort param_1,int *param_2);
void FUN_080a2f00(ushort param_1,undefined4 *param_2);
void FUN_080a2f28(uint *param_1);
undefined2 FUN_080a3010(ushort param_1);
uint FUN_080a3028(ushort param_1);
uint FUN_080a3060(ushort param_1);
undefined2 FUN_080a3078(ushort param_1);
undefined2 FUN_080a3140(ushort param_1);
undefined2 FUN_080a3210(ushort param_1);
bool FUN_080a3228(ushort param_1);
bool FUN_080a3248(ushort param_1);
uint FUN_080a326c(ushort param_1);
void FUN_080a3284(void);
void FUN_080a32d8(undefined2 *param_1);
void FUN_080a3380(ushort param_1);
undefined2 FUN_080a3438(ushort param_1);
void FUN_080a3450(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_080a34c4(undefined param_1);
undefined FUN_080a34e4(void);
void FUN_080a34fc(undefined2 param_1);
undefined2 FUN_080a351c(void);
void FUN_080a3538(undefined2 param_1);
void FUN_080a35ac(short param_1);
undefined2 FUN_080a3650(void);
undefined2 FUN_080a36bc(void);
void FUN_080a373c(undefined4 param_1);
longdouble FUN_080a3758(void);
void FUN_080a3770(undefined4 *param_1);
void FUN_080a37c8(void);
void FUN_080a382c(undefined4 param_1);
undefined4 FUN_080a384c(void);
void FUN_080a3864(int param_1);
int FUN_080a3898(void);
void FUN_080a38c0(ushort param_1);
uint FUN_080a38ec(void);
void FUN_080a391c(undefined4 param_1,undefined4 param_2);
void FUN_080a3944(undefined4 param_1,int param_2);
undefined2 FUN_080a3970(ushort param_1);
uint FUN_080a39a4(ushort param_1);
void FUN_080a39d8(char param_1,uint param_2);
void FUN_080a3a3c(void);
void FUN_080a3a4c(void);
undefined2 FUN_080a3aa8(char *param_1,int *param_2);
void FUN_080a3b48(undefined4 param_1,undefined4 param_2);
void FUN_080a3be4(undefined2 param_1);
void FUN_080a3bfc(undefined4 *param_1);
undefined4 FUN_080a3c30(float *param_1);
undefined4 FUN_080a3de0(float *param_1);
undefined4 FUN_080a3fa0(float *param_1);
undefined4 FUN_080a4160(undefined4 *param_1);
undefined4 FUN_080a4230(float *param_1,float *param_2);
undefined4 FUN_080a4430(float **param_1,float **param_2);
uint FUN_080a45f0(float **param_1,float **param_2,ushort param_3,uint param_4,float **param_5);
void FUN_080a6ebc(undefined2 param_1);
void FUN_080a6fac(undefined2 param_1);
void FUN_080a72e4(undefined2 param_1,undefined2 param_2,undefined4 *param_3);
void FUN_080a77d4(undefined2 param_1);
undefined2 FUN_080a79c4(undefined2 param_1,undefined4 param_2,int param_3);
void FUN_080a7b24(void);
uint FUN_080a7d74(uint param_1);
undefined4 FUN_080a7e9c(uint param_1);
uint * FUN_080a7fac(uint *param_1,uint param_2,int param_3);
int * FUN_080a81b0(int *param_1,uint param_2);
longdouble FUN_080a8350(uint param_1);
undefined2 FUN_080a846c(uint param_1);
undefined * FUN_080a857c(uint param_1);
undefined2 FUN_080a86cc(uint param_1);
void FUN_080a880c(uint param_1,undefined4 *param_2);
int FUN_080a896c(undefined *param_1);
undefined4 FUN_080a8a88(uint param_1,undefined4 *param_2);
undefined4 FUN_080a8c1c(uint param_1);
void FUN_080a8cd8(undefined *param_1);
void FUN_080a8de8(int param_1,undefined4 param_2);
void FUN_080a8ee8(undefined4 param_1);
undefined2 FUN_080a8fe8(ushort *param_1);
void FUN_080a90e4(undefined4 param_1,undefined4 param_2);
void FUN_080a91d8(void);
void FUN_080a91f0(void);
void FUN_080a9208(undefined4 param_1);
undefined4 FUN_080a9218(void);
void FUN_080a9224(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined4 *param_5,undefined4 param_6);
void FUN_080a92e0(undefined2 param_1,undefined2 param_2);
void FUN_080a939c(undefined2 param_1,undefined2 param_2,int param_3);
void FUN_080a946c(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4);
void FUN_080a954c(undefined2 param_1);
undefined2 FUN_080a95ec(int param_1,undefined4 param_2);
undefined2 FUN_080a9674(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_080a970c(int param_1,undefined4 param_2);
void FUN_080a9768(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_080a97d4(undefined2 param_1);
void FUN_080a97ec(undefined4 param_1,uint param_2);
bool FUN_080a9834(void);
void FUN_080a984c(undefined4 param_1);
void FUN_080a98b8(undefined4 param_1);
undefined4 FUN_080a9928(uint param_1);
undefined4 FUN_080a99b8(void);
void FUN_080a99c4(undefined4 param_1);
void FUN_080a9a3c(undefined4 param_1);
void FUN_080a9abc(undefined4 param_1);
void FUN_080a9b38(undefined4 param_1);
void FUN_080a9bb0(void);
void FUN_080a9c24(undefined2 param_1);
void FUN_080a9cb0(undefined4 param_1,undefined4 param_2);
void FUN_080a9d50(void);
void FUN_080a9dec(undefined4 param_1);
void FUN_080a9e80(undefined4 param_1);
void FUN_080a9f10(undefined2 param_1);
void FUN_080a9f9c(undefined4 param_1);
void FUN_080aa02c(void);
void FUN_080aa0b8(void);
void FUN_080aa110(undefined2 param_1);
void FUN_080aa158(undefined4 param_1);
void FUN_080aa208(undefined4 param_1,undefined4 param_2);
void FUN_080aa2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void FUN_080aa330(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_080aa374(undefined4 param_1,undefined4 param_2,undefined2 param_3);
void FUN_080aa3d0(uint param_1);
void FUN_080aa470(void);
void FUN_080aa4d4(void);
void FUN_080aa4f0(char *param_1,int param_2);
undefined4 FUN_080aa57c(void);
undefined4 FUN_080ab6b0(void);
uint FUN_080ab8e8(void);
undefined4 * FUN_080ab9cc(int param_1,int param_2);
undefined4 FUN_080abafc(void);
void FUN_080ae338(undefined4 param_1,undefined4 *param_2);
void FUN_080ae3d0(undefined4 param_1);
void FUN_080ae418(int param_1);
void FUN_080ae46c(void);
int FUN_080ae4a0(undefined4 param_1,int param_2);
void FUN_080ae518(int param_1);
void FUN_080ae560(FILE **param_1,FILE *param_2);
void FUN_080ae5c0(undefined4 *param_1);
undefined4 * FUN_080ae624(int param_1,uint param_2);
void FUN_080ae700(char *param_1);
void FUN_080ae728(size_t param_1);
void FUN_080ae740(void *param_1,size_t param_2);
void FUN_080ae75c(void *param_1);
int FUN_080ae774(void);
int FUN_080ae858(int param_1);
void FUN_080ae900(undefined4 param_1);
undefined4 FUN_080ae928(void);
uint FUN_080ae940(uint param_1,byte *param_2,uint param_3);
int FUN_080aea80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
int FUN_080aeb18(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
uint FUN_080aebc0(uint param_1,byte *param_2,uint param_3);
undefined * FUN_080aec8c(void);
undefined4 FUN_080aeca0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,int param_8);
undefined4 FUN_080aeec0(int param_1,void *param_2,uint param_3);
uint FUN_080aefc0(int *param_1,int *param_2);
undefined4 FUN_080af368(int param_1);
undefined4 FUN_080af434(undefined4 *param_1,undefined4 *param_2);
uint FUN_080af604(int param_1,uint param_2);
void FUN_080af778(int **param_1);
char FUN_080af928(int *param_1,int param_2);
char FUN_080afb6c(int *param_1,int param_2);
char FUN_080aff0c(int *param_1,int param_2);
undefined4 FUN_080b03ac(int param_1);
undefined4 FUN_080b0448(int param_1,uint param_2,int param_3);
void FUN_080b0514(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_080b0540(int param_1);
undefined4 * FUN_080b05e0(int param_1,undefined4 param_2,int param_3);
void FUN_080b06d0(uint *param_1,byte **param_2);
void FUN_080b13f4(int *param_1,int param_2,int *param_3);
undefined4 FUN_080b1480(int *param_1,int param_2);
void FUN_080b1534(int param_1,void *param_2,size_t param_3);
bool FUN_080b1568(int *param_1);
void FUN_080b1580(int param_1,byte **param_2,int param_3);
undefined4 *FUN_080b1dc8(undefined param_1,undefined param_2,undefined4 param_3,undefined4 param_4,int param_5);
void FUN_080b1e0c(undefined4 param_1,int param_2);
undefined4 FUN_080b1e30(int param_1,int param_2,int param_3,int param_4,int param_5,byte **param_6);
undefined4 FUN_080b21c0(int param_1,int param_2,char *param_3,int param_4);
int FUN_080b2388(byte **param_1,int param_2);
undefined4 FUN_080b2758(char **param_1);
undefined4 FUN_080b2874(int param_1);
undefined4 FUN_080b28cc(int param_1,int param_2,uint param_3);
undefined4 FUN_080b296c(int param_1);
void FUN_080b29c4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_080b29e4(int param_1);
undefined4 FUN_080b2a20(int *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,uint *param_7,int param_8,uint *param_9,uint *param_10);
int FUN_080b312c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5);
int FUN_080b31cc(uint param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9);
undefined4 FUN_080b332c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
int FUN_080b3360(int param_1,int param_2,int param_3);
void FUN_080b3470(int param_1,int *param_2);
void FUN_080b3654(int param_1,int *param_2);
void FUN_080b3b6c(int param_1,int param_2,int param_3);
int FUN_080b4118(int param_1);
void FUN_080b43bc(int param_1,int param_2,int param_3,int param_4);
void FUN_080b4658(int param_1);
void FUN_080b48d0(int param_1,int param_2,int param_3,uint param_4);
void FUN_080b4bf8(int param_1,int param_2,int param_3);
void FUN_080b5024(int param_1);
bool FUN_080b509c(int param_1,int param_2,int param_3);
void FUN_080b5138(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
void FUN_080b51d4(int param_1);
void FUN_080b5258(int param_1);
uint FUN_080b52c4(uint param_1,int param_2);
void FUN_080b52ec(int param_1);
void FUN_080b5350(int param_1);
void FUN_080b53d4(int param_1,undefined *param_2,int param_3,int param_4);
int FUN_080b54b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4);
int FUN_080b5550(char *param_1,char *param_2,int param_3);
int FUN_080b55d8(FILE *param_1);
FILE ** FUN_080b56f4(char *param_1);
int FUN_080b58e8(FILE **param_1,int *param_2,undefined4 *param_3,void *param_4,uint param_5,void *param_6,uint param_7,void *param_8,uint param_9);
int FUN_080b5cb8(int param_1,uint *param_2,undefined4 param_3);
int FUN_080b5e60(FILE **param_1,char **param_2,char **param_3,int *param_4);
undefined4 FUN_080b6014(void **param_1);
int FUN_080b6158(int param_1,void *param_2,void *param_3);
FILE ** FUN_080b6304(char *param_1,undefined4 param_2);
undefined4 FUN_080b6360(FILE **param_1);
undefined4 FUN_080b63a4(int param_1,undefined4 *param_2);
FILE * FUN_080b63cc(FILE **param_1,undefined *param_2,FILE *param_3);
int FUN_080b644c(int param_1);
int FUN_080b64a4(int param_1);
undefined4 FUN_080b6520(int param_1,undefined4 *param_2);
undefined4 FUN_080b6540(int param_1,undefined4 param_2);
void FUN_080b6590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
undefined4 FUN_080b65d0(int param_1);
undefined4 FUN_080b6650(int param_1);
undefined4 FUN_080b6670(int param_1);
uint FUN_080b669c(int param_1,void *param_2,uint param_3);
char * FUN_080b6724(void);
void FUN_080b6730(undefined4 param_1,int param_2,int param_3);
void FUN_080b674c(undefined4 param_1,undefined4 param_2);
undefined * FUN_080b6764(int param_1);
void FUN_080b6780(int *param_1,int *param_2);
void FUN_080b6e9c(uint *param_1);
void FUN_080b7048(undefined4 *param_1,int param_2);
void FUN_080b70a0(uint *param_1,undefined *param_2,uint param_3);
void FUN_080b7160(int param_1,code *param_2);
undefined2 FUN_080b8268(int param_1,int param_2,int param_3);
void FUN_080b8370(ushort *param_1,int param_2,float param_3,float param_4,int param_5);
void FUN_080b8904(ushort *param_1,int param_2,float param_3,float param_4,int param_5);
void FUN_080b8e98(int param_1,int param_2,float param_3,int param_4);
void FUN_080b903c(ushort *param_1,float *param_2,float *param_3,float param_4);
void FUN_080b96b0(int param_1,float param_2,float *param_3,float param_4,float param_5);
longdouble FUN_080b9854(int param_1);
undefined4 FUN_080b9978(int param_1);
longdouble FUN_080b9bc0(ushort *param_1,short *param_2);
void FUN_080b9d88(int param_1,short *param_2,short param_3);
void FUN_080ba8b4(int param_1,char param_2);
void FUN_080bab18(int param_1,float param_2,char param_3);
undefined4 FUN_080baee8(int param_1);
void FUN_080bb130(int param_1);
longdouble FUN_080bb36c(int param_1,float param_2);
void FUN_080bb6c4(ushort *param_1,short *param_2);
void FUN_080bbab0(int param_1,float param_2,char param_3);
void FUN_080bbea8(int param_1,float param_2,float *param_3,char param_4,char param_5);
void FUN_080bc62c(int *param_1,int param_2,int param_3);
void FUN_080bc9bc(int *param_1,int param_2,float param_3,float *param_4,char param_5,char param_6);
void FUN_080bcef8(int *param_1,int param_2);
undefined FUN_080bd0ec(int *param_1,uint param_2);
void FUN_080bd1e8(int *param_1,int param_2,float param_3);
void FUN_080bd35c(int *param_1,int param_2,float param_3,float param_4);
void FUN_080bd520(int *param_1);
undefined4 FUN_080bd674(int param_1,float param_2,float param_3,undefined4 param_4,char param_5,short param_6,short param_7);
void FUN_080bd968(undefined4 *param_1,int param_2);
void FUN_080bdaf0(int param_1,int param_2);
void FUN_080bdca4(uint param_1,int param_2);
void FUN_080bdf64(int *param_1,uint param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8);
void FUN_080be128(undefined2 *param_1);
void FUN_080be2b4(int *param_1);
void FUN_080be46c(int *param_1);
void FUN_080be538(int *param_1,int param_2);
int FUN_080be728(void);
int FUN_080be740(void);
void FUN_080be758(void);
void FUN_080be838(void);
void FUN_080be868(void);
void FUN_080be880(undefined4 param_1);
void FUN_080be8f4(undefined4 *param_1);
void FUN_080be9a4(int param_1,uint param_2,undefined4 param_3);
void FUN_080be9fc(int param_1,ushort param_2,undefined4 param_3,ushort param_4,ushort param_5,ushort param_6);
void FUN_080bea4c(undefined4 param_1,int param_2,code *param_3);
int * FUN_080bea78(int param_1,code *param_2);
void FUN_080beac0(int *param_1,code *param_2);
undefined4 FUN_080beaf4(undefined4 *param_1);
void FUN_080beb00(undefined4 param_1,float param_2,float *param_3,undefined4 param_4);
void FUN_080beb7c(undefined4 param_1,ushort *param_2);
void FUN_080bec40(undefined4 param_1,ushort *param_2);
void FUN_080bece8(int param_1);
longdouble FUN_080bed5c(int param_1,int param_2);
longdouble FUN_080bed84(int param_1,int param_2);
longdouble FUN_080bedc8(int param_1,int param_2);
undefined4 FUN_080bee08(int param_1,int param_2);
undefined2 FUN_080bee80(int param_1,int param_2);
int FUN_080bee98(int param_1,int param_2,int param_3);
char * FUN_080beeb0(int param_1,int param_2);
undefined4 FUN_080beedc(undefined4 *param_1);
undefined4 FUN_080beee8(int param_1);
void FUN_080beef8(int **param_1);
void FUN_080bef88(int *param_1,undefined4 param_2);
void FUN_080befb4(int *param_1,undefined4 param_2);
undefined4 FUN_080bf008(int *param_1,float param_2,int param_3);
undefined4 FUN_080bf0d8(undefined4 *param_1);
void FUN_080bf0f0(int *param_1);
void FUN_080bf130(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 *param_4,undefined4 param_5);
void FUN_080bf1c8(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 *param_4);
void FUN_080bf268(int param_1,int param_2,float *param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6);
void FUN_080bf36c(int param_1,int param_2,float *param_3,float *param_4,undefined4 param_5);
undefined4 FUN_080bf4a4(int *param_1,int param_2);
void FUN_080bf53c(int param_1,int param_2,float param_3);
void FUN_080bf60c(int *param_1,int param_2,float param_3);
void FUN_080bf718(int *param_1,int param_2,float param_3);
void FUN_080bf838(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8);
undefined4 FUN_080bf8ac(int *param_1,uint param_2,uint param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,undefined4 param_9);
void FUN_080bf9c4(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8);
void FUN_080bfa38(int *param_1,int param_2,float param_3);
void FUN_080bfb58(int *param_1,int param_2);
int FUN_080bfc3c(int param_1);
void FUN_080bfcf4(undefined4 *param_1,int param_2,char param_3);
void FUN_080bfde8(undefined4 param_1);
undefined4 FUN_080bfe00(int param_1,int param_2);
bool FUN_080bfe28(int param_1,int param_2);
void FUN_080bfe44(int param_1,int param_2,undefined4 param_3);
void FUN_080bfea0(undefined4 param_1);
void FUN_080bfeb0(int param_1);
void FUN_080bff8c(uint param_1,undefined4 param_2);
undefined4 FUN_080bffe4(int *param_1,uint param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8);
void FUN_080c017c(int param_1,int param_2,undefined4 param_3);
byte FUN_080c01bc(int param_1,int param_2);
undefined4 FUN_080c01ec(int param_1,int param_2,short param_3);
void FUN_080c022c(int param_1);
void FUN_080c02c0(int *param_1,short *param_2);
void FUN_080c03c8(byte *param_1,short **param_2,code *param_3);
void FUN_080c07e4(int param_1);
undefined4 * FUN_080c0a00(undefined4 param_1,code *param_2);
int FUN_080c0c54(undefined4 param_1,code *param_2);
int FUN_080c1164(undefined4 param_1,short *param_2,char *param_3);
float * FUN_080c1280(int *param_1,int param_2,code *param_3);
undefined * FUN_080c13f8(undefined4 param_1,int param_2,code *param_3);
void FUN_080c1a1c(int param_1,int param_2,float *param_3,void *param_4,float *param_5);
void FUN_080c1d00(int param_1,float *param_2);
int FUN_080c203c(int param_1,float *param_2,int param_3,float *param_4,float *param_5,uint param_6);
undefined4 FUN_080c241c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_080c2560(undefined4 param_1);
bool FUN_080c2570(int param_1);
void FUN_080c2588(undefined4 param_1);
void FUN_080c2598(short *param_1,short *param_2);
void FUN_080c264c(short *param_1,short *param_2);
void FUN_080c26d4(void);
void FUN_080c26dc(int param_1);
void FUN_080c2720(int param_1);
bool FUN_080c27c4(undefined4 param_1);
void FUN_080c27ec(undefined4 *param_1,undefined4 *param_2);
int FUN_080c2874(int param_1);
int FUN_080c2890(int param_1);
int FUN_080c28ac(int param_1,short param_2);
void FUN_080c28e0(int param_1,undefined4 *param_2,undefined4 *param_3);
int FUN_080c2918(int param_1,undefined4 *param_2,int param_3);
char * FUN_080c2954(int param_1,int param_2,int param_3);
undefined4 * FUN_080c2990(undefined4 *param_1,code *param_2);
int FUN_080c2a08(int param_1);
int FUN_080c2a18(int param_1);
undefined FUN_080c2a28(undefined *param_1);
void FUN_080c2a38(int param_1,int *param_2,short param_3);
undefined4 * FUN_080c2ab0(undefined4 *param_1,int param_2);
undefined4 FUN_080c2ac8(int param_1);
undefined4 FUN_080c2ad8(int param_1);
int FUN_080c2ae8(int param_1);
void FUN_080c2af8(int param_1,float *param_2,float *param_3,int param_4,int param_5);
undefined4 FUN_080c2b3c(undefined4 *param_1);
undefined4 FUN_080c2b48(int param_1);
int FUN_080c2b58(int param_1);
int FUN_080c2b6c(int param_1);
void FUN_080c2b80(int param_1,float param_2);
void FUN_080c2bc4(float param_1);
int FUN_080c2bf0(int param_1,float param_2);
void FUN_080c2c80(int param_1);
void FUN_080c2dec(int param_1);
void FUN_080c2ff8(int param_1,uint param_2,int param_3);
void FUN_080c31cc(int param_1,int param_2);
void FUN_080c337c(int param_1,int param_2);
void FUN_080c4198(int **param_1,uint param_2,int *param_3,int **param_4,undefined2 param_5);
void FUN_080c4394(int param_1,undefined2 *param_2,int param_3,int param_4);
void FUN_080c4564(int param_1,float *param_2,float *param_3,int param_4,float *param_5);
void FUN_080c4cf8(void);
void FUN_080c4d28(void);
uint FUN_080c4d58(int param_1,int param_2);
undefined4 FUN_080c4d7c(int param_1,int param_2);
int FUN_080c4db0(int param_1,int param_2);
void FUN_080c4dcc(int **param_1,int param_2);
int FUN_080c4ea0(int param_1);
bool FUN_080c4eb8(int param_1,int param_2);
bool FUN_080c4ef0(int param_1,int param_2);
void FUN_080c4f10(int param_1,int param_2);
undefined FUN_080c4f44(int param_1);
undefined4 FUN_080c4f54(int param_1,int param_2);
void FUN_080c4f6c(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_080c4f90(int param_1);
void FUN_080c4fa8(int param_1,int *param_2);
undefined4 FUN_080c5008(int param_1,int param_2,int param_3);
undefined4 FUN_080c5050(int param_1,int param_2,int param_3);
int FUN_080c5098(int param_1,int param_2);
undefined4 FUN_080c50e4(int param_1,int param_2,int param_3,int param_4);
char * FUN_080c511c(int param_1,int param_2,int param_3,int param_4);
int FUN_080c5170(int param_1,undefined4 param_2);
undefined4 FUN_080c51f8(int param_1,int param_2);
undefined4 FUN_080c5254(undefined4 *param_1);
undefined4 FUN_080c5260(int param_1);
undefined FUN_080c52b0(int param_1);
void FUN_080c52c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5);
void FUN_080c53a4(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_080c53d0(int param_1,uint param_2);
undefined4 FUN_080c5420(char *param_1);
void FUN_080c54a0(void *param_1,int param_2,size_t param_3);
void FUN_080c54c0(void *param_1,void *param_2,size_t param_3);
void FUN_080c54e0(char *param_1);
void FUN_080c5658(char *param_1);
void FUN_080c576c(void);
undefined * FUN_080c5898(void);
int FUN_080c5fe4(undefined4 param_1,undefined *param_2,int *param_3,undefined4 param_4);
undefined4 * FUN_080c61e4(undefined4 *param_1);
void FUN_080c6478(char *param_1);
void FUN_080c6558(undefined4 param_1,int param_2);
void FUN_080c6750(int param_1,undefined4 *param_2);
void FUN_080c6870(int param_1,int param_2);
void FUN_080c69e0(void);
void FUN_080c69e8(void);
void FUN_080c69f0(undefined4 param_1,int param_2,int param_3,undefined4 param_4);
void FUN_080c6a14(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_080c6a34(void);
void FUN_080c6a3c(void);
void FUN_080c6a88(void);
void FUN_080c6a90(int param_1);
void FUN_080c6ad8(void);
undefined4 FUN_080c6b78(void);
undefined4 FUN_080c6b84(void);
undefined4 FUN_080c6b90(void);
undefined4 FUN_080c6b9c(void);
undefined4 FUN_080c6ba8(void);
undefined4 FUN_080c6bb4(void);
undefined4 FUN_080c6bc0(void);
undefined4 FUN_080c6bcc(void);
void FUN_080c6bd8(void);
void FUN_080c6bfc(void);
void FUN_080c6c18(char *param_1,int param_2);
void FUN_080c6cc8(char *param_1,uint param_2);
void FUN_080c6d48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_080c6de8(void);
void FUN_080c6df0(void);
void FUN_080c6e04(void);
void FUN_080c6e2c(void);
void FUN_080c6e74(void);
void FUN_080c6ef4(void);
void FUN_080c6f38(void);
void FUN_080c6f6c(undefined4 *param_1);
undefined4 * FUN_080c6fe4(void);
undefined4 * FUN_080c7018(void);
void FUN_080c704c(char *param_1);
void FUN_080c70a8(int param_1);
int FUN_080c7114(char *param_1);
void FUN_080c7138(void);
void FUN_080c7154(void);
void FUN_080c715c(void);
void FUN_080c7164(void);
void FUN_080c716c(void);
void FUN_080c717c(undefined4 param_1);
undefined4 FUN_080c71f0(undefined4 *param_1,int param_2);
undefined4 FUN_080c72f8(int param_1,undefined4 param_2);
void FUN_080c7438(void);
void FUN_080c757c(void);
int FUN_080c7684(char *param_1,char *param_2);
void FUN_080c7844(void);
void FUN_080c786c(int param_1);
void FUN_080c7914(size_t param_1,void *param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_080c7a00(char *param_1,undefined4 *param_2);
void FUN_080c7a80(void);
void FUN_080c7ad0(void);
void FUN_080c7aec(int *param_1,undefined2 *param_2);
void FUN_080c7b44(int param_1,undefined4 *param_2);
undefined * FUN_080c7b68(undefined4 param_1,undefined4 param_2);
undefined4 FUN_080c7ba0(char *param_1,undefined2 *param_2);
void FUN_080c7c0c(void);
void FUN_080c7ce0(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4,int *param_5);
int FUN_080c7f7c(char *param_1,uint *param_2,int param_3,int *param_4,int param_5);
undefined1 * FUN_080c831c(void);
void FUN_080c83cc(char *param_1);
undefined * FUN_080c83e8(void);
undefined * FUN_080c8410(void);
undefined * FUN_080c841c(void);
undefined * FUN_080c845c(void);
void FUN_080c849c(int *param_1);
undefined4 FUN_080c84dc(void);
void FUN_080c84e8(void);
void FUN_080c84f0(void);
char * FUN_080c84f8(void);
int FUN_080c8520(void);
undefined4 FUN_080c859c(void);
void FUN_080c85a8(void);
void FUN_080c85b0(undefined4 param_1);
void FUN_080c85d0(undefined4 param_1);
void FUN_080c85f0(undefined4 param_1);
undefined4 FUN_080c8610(void);
float ** FUN_080c8634(float *param_1,float **param_2,float *param_3);
undefined4 __regparm1 FUN_080c8810(undefined4 param_1_00,float *param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080c8894(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c88b0(void);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080c88d8(char *param_1,char *param_2,undefined4 param_3);
void FUN_080c890c(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080c8918(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c8968(void);
void __i686.get_pc_thunk.bx(void);
int FUN_080c898c(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c89b4(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080c89e0(void);
void __i686.get_pc_thunk.bx(void);
int FUN_080c8a3c(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c8a64(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c8b74(void);
void __i686.get_pc_thunk.bx(void);
bool FUN_080c8c6c(undefined4 param_1);
int FUN_080c8cc4(int param_1);
int FUN_080c8cd4(int param_1);
int FUN_080c8ce4(uint param_1,int *param_2);
void __i686.get_pc_thunk.bx(void);
uint FUN_080c8d7c(int param_1,int param_2,code **param_3,int param_4,undefined4 *param_5);
void __i686.get_pc_thunk.bx(void);
int FUN_080c8e50(int param_1,int *param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080c8ea0(int param_1,undefined4 param_2,undefined4 param_3);
void __i686.get_pc_thunk.bx(void);
int * FUN_080c8f08(undefined4 param_1,int *param_2,undefined4 param_3);
void FUN_080c8f78(void);
void __i686.get_pc_thunk.bx(void);
int FUN_080c8f84(int *param_1,int param_2,int *param_3,int *param_4);
void __i686.get_pc_thunk.bx(void);
undefined8 FUN_080c92e8(void);
void __i686.get_pc_thunk.bx(void);
undefined8 FUN_080c93a8(undefined4 param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9474(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9494(void);
void __i686.get_pc_thunk.bx(void);
undefined * FUN_080c94b0(undefined *param_1);
void __i686.get_pc_thunk.bx(void);
undefined * FUN_080c94d8(undefined *param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9504(void);
void __i686.get_pc_thunk.bx(void);
int FUN_080c9524(void);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080c954c(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9570(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c959c(size_t param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080c95d4(void *param_1);
void __i686.get_pc_thunk.bx(void);
int __cplus_type_matcher(int param_1,code *param_2,int param_3);
void __i686.get_pc_thunk.bx(void);
void FUN_080c966c(code *param_1,code *param_2,code *param_3);
void __i686.get_pc_thunk.bx(void);
void FUN_080c96e0(int param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9790(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c97c0(int param_1,int param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9994(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9a38(void);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080c9ad8(void);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080c9b0c(int *param_1);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080c9b44(undefined4 *param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9b6c(undefined4 *param_1,byte param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080c9ba4(undefined4 *param_1);
void __i686.get_pc_thunk.bx(void);
void _._13bad_exception(undefined4 *param_1,byte param_2);
byte * FUN_080c9c10(byte *param_1,uint *param_2);
byte * FUN_080c9c5c(byte *param_1,uint *param_2);
void FUN_080c9ca4(int *param_1,int *param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080c9d28(undefined4 *param_1,int param_2);
int FUN_080c9f18(int *param_1);
void FUN_080c9f48(int *param_1,int *param_2,uint *param_3,uint *param_4);
void __i686.get_pc_thunk.bx(void);
void FUN_080c9fb8(undefined4 *param_1);
void __i686.get_pc_thunk.bx(void);
int FUN_080ca0fc(uint param_1);
void __i686.get_pc_thunk.bx(void);
byte * FUN_080ca194(int param_1,uint **param_2);
void __i686.get_pc_thunk.bx(void);
int * FUN_080ca2e4(int *param_1,undefined4 *param_2,int param_3,int *param_4);
void __i686.get_pc_thunk.bx(void);
void __register_frame_info(undefined4 param_1,undefined4 *param_2);
void __i686.get_pc_thunk.bx(void);
void __register_frame(undefined4 param_1);
void __i686.get_pc_thunk.bx(void);
void __register_frame_info_table(undefined4 param_1,undefined4 *param_2);
void __i686.get_pc_thunk.bx(void);
void __register_frame_table(undefined4 param_1);
void __i686.get_pc_thunk.bx(void);
int * __deregister_frame_info(int param_1);
void __i686.get_pc_thunk.bx(void);
void __deregister_frame(undefined4 param_1);
void __i686.get_pc_thunk.bx(void);
undefined4 * __frame_state_for(uint param_1,undefined4 *param_2);
void FUN_080ca9b4(int *param_1,int *param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080caab4(void *param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080cab54(int param_1,byte param_2);
void __i686.get_pc_thunk.bx(void);
undefined FUN_080cab8c(char **param_1,char **param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080cabd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __i686.get_pc_thunk.bx(void);
void FUN_080cac1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __i686.get_pc_thunk.bx(void);
void FUN_080cac64(undefined4 *param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080cac9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080cacd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void __i686.get_pc_thunk.bx(void);
int FUN_080cad34(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cae84(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_080caeac(undefined4 *param_1);
void __i686.get_pc_thunk.bx(void);
uint FUN_080caebc(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080caeec(undefined4 *param_1);
void __i686.get_pc_thunk.bx(void);
void _._8bad_cast(undefined4 *param_1,byte param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080caf5c(undefined4 *param_1);
void __i686.get_pc_thunk.bx(void);
void _._10bad_typeid(undefined4 *param_1,byte param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cafcc(undefined4 *param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb000(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __i686.get_pc_thunk.bx(void);
undefined4 *FUN_080cb048(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __i686.get_pc_thunk.bx(void);
uint FUN_080cb0a4(char **param_1,char **param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 FUN_080cb0d8(int param_1,int param_2,undefined4 param_3);
void __i686.get_pc_thunk.bx(void);
bool FUN_080cb570(int param_1);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb5c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb644(undefined4 *param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb67c(undefined4 *param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb6b4(undefined4 *param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb6ec(undefined4 *param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
void FUN_080cb724(code *param_1,code *param_2,undefined4 param_3,undefined4 param_4,code *param_5,undefined4 param_6);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb778(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb7c0(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb808(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb850(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb898(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb8e0(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb928(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb970(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cb9b8(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cba00(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cba48(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cba90(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbad8(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbb20(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbb68(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbbb0(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbbf8(void);
void FUN_080cbc40(void);
void FUN_080cbc68(void);
undefined4 * FUN_080cbc74(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbca4(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbce4(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * __tf9type_info(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbd90(void);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbddc(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cbe28(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * __tf16__user_type_info(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cbec4(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbef4(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cbf90(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cbfc0(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc05c(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * __tf19__pointer_type_info(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc0d8(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * __tf16__attr_type_info(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc154(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cc184(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc1d0(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * __tf16__func_type_info(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc24c(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cc27c(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc2c8(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cc2f8(void);
void __i686.get_pc_thunk.bx(void);
void FUN_080cc344(undefined4 param_1,undefined4 param_2);
void __i686.get_pc_thunk.bx(void);
undefined4 * FUN_080cc374(void);
void _DT_FINI(void);
undefined __gmon_start__();
int __finitef(float __value);
int __finite(double __value);
undefined __finitel();

