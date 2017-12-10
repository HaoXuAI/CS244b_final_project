/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if last argument of authunix_create is a gid_t *. */
#define AUTHUNIX_GID_T 1

/* Define if you must run \"df -k\" to get BSD-formatted output */
/* #undef DF_NEEDS_DASH_K */

/* Define if compiling with dmalloc. */
/* #undef DMALLOC */

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define to be the size of GMP's mp_limb_t type. */
#define GMP_LIMB_SIZE 8

/* Type pointed to by 3rd argument of getgrouplist. */
#define GROUPLIST_T gid_t

/* Define if msghdr has msg_accrights field for passing file descriptors. */
/* #undef HAVE_ACCRIGHTS */

/* Define to 1 if you have the `arc4random' function. */
/* #undef HAVE_ARC4RANDOM */

/* Define to 1 if you have the <arpa/nameser_compat.h> header file. */
#define HAVE_ARPA_NAMESER_COMPAT_H 1

/* Define to 1 if you have the `auth_userresponse' function. */
/* #undef HAVE_AUTH_USERRESPONSE */

/* Define to 1 if you have the `bindresvport' function. */
#define HAVE_BINDRESVPORT 1

/* Define if SO_REUSEADDR allows same user to bind non-SO_REUSEADDR port */
/* #undef HAVE_BSD_REUSEADDR */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define if system headers declare clock_gettime. */
#define HAVE_CLOCK_GETTIME_DECL 1

/* Define if system has cmsghdr structure for passing file descriptors. */
#define HAVE_CMSGHDR 1

/* Define if you have SYSV-style /dev/ptmx and /dev/pts/. */
#define HAVE_DEV_PTMX 1

/* Define if you have /dev/pts and /dev/ptc devices (as in AIX). */
/* #undef HAVE_DEV_PTS_AND_PTC */

/* Define if your kernel has the Arla file system's XFS device */
/* #undef HAVE_DEV_XFS */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the first element of a grouplist is the effective gid */
/* #undef HAVE_EGID_IN_GROUPLIST */

/* Define if this machine has Linux epoll support */
#define HAVE_EPOLL 1

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `getegid' function. */
#define HAVE_GETEGID 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the `getspnam' function. */
#define HAVE_GETSPNAM 1

/* Define if gmp.h overloads C++ operators */
/* #undef HAVE_GMP_CXX_OPS */

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define if system headers declare a int32_t type. */
#define HAVE_INT32_T 1

/* Define if system headers declare a int64_t type. */
#define HAVE_INT64_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define if this machine has FreeBSD kqueue support */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <login_cap.h> header file. */
/* #undef HAVE_LOGIN_CAP_H */

/* Define if the MAP_NOSYNC option for mmap is available */
/* #undef HAVE_MAP_NOSYNC */

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mlockall' function. */
#define HAVE_MLOCKALL 1

/* Define if system headers declare a mode_t type. */
#define HAVE_MODE_T 1

/* Define if you have mpz_xor in your GMP library. */
#define HAVE_MPZ_XOR 1

/* Define if off_t is 64 bits wide. */
#define HAVE_OFF_T_64 1

/* Define if you have the openpty function. */
#define HAVE_OPENPTY 1

/* Define to 1 if you have the <pam/pam_appl.h> header file. */
/* #undef HAVE_PAM_PAM_APPL_H */

/* Define if struct passwd has pw_expire field */
/* #undef HAVE_PASSWD_PW_EXPIRE */

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define to 1 if you have the <pty.h> header file. */
#define HAVE_PTY_H 1

/* Define to 1 if you have the `pwrite' function. */
#define HAVE_PWRITE 1

/* Define if system headers declare a rlim_t type. */
#define HAVE_RLIM_T 1

/* Define if struct sockaddr has sa_len field. */
/* #undef HAVE_SA_LEN */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 if you have the `setlogin' function. */
/* #undef HAVE_SETLOGIN */

/* Define if you have the setusercontext function */
/* #undef HAVE_SETUSERCONTEXT */

/* Define if we're compiling with full sfsmisc library */
/* #undef HAVE_SFSMISC */

/* Define if system headers declare a socklen_t type. */
#define HAVE_SOCKLEN_T 1

/* Define if system headers declare a ssize_t type. */
#define HAVE_SSIZE_T 1

/* Define if struct sockaddr_storage has __ss_len field */
/* #undef HAVE_SS_LEN_UNDERSCORES */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if system headers declare a struct sockaddr_storage type. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/rusage.h> header file. */
/* #undef HAVE_SYS_RUSAGE_H */

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
/* #undef HAVE_SYS_STROPTS_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Allow tame to use the GNU Pth library */
/* #undef HAVE_TAME_PTH */

/* Define if sys/time.h defines a struct timespec. */
#define HAVE_TIMESPEC 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define if system headers declare a u_char type. */
#define HAVE_U_CHAR 1

/* Define if system headers declare a u_int type. */
#define HAVE_U_INT 1

/* Define if system headers declare a u_int16_t type. */
#define HAVE_U_INT16_T 1

/* Define if system headers declare a u_int32_t type. */
#define HAVE_U_INT32_T 1

/* Define if system headers declare a u_int64_t type. */
#define HAVE_U_INT64_T 1

/* Define if system headers declare a u_int8_t type. */
#define HAVE_U_INT8_T 1

/* Define if system headers declare a u_long type. */
#define HAVE_U_LONG 1

/* Define if select can take file descriptors >= FD_SETSIZE */
#define HAVE_WIDE_SELECT 1

/* Define to 1 if you have the `xdr_int64_t' function. */
#define HAVE_XDR_INT64_T 1

/* Define to 1 if you have the `xdr_longlong_t' function. */
#define HAVE_XDR_LONGLONG_T 1

/* Define to 1 if you have the `xdr_u_int64_t' function. */
/* #undef HAVE_XDR_U_INT64_T */

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define to 1 if you have the `__seterr_reply' function. */
/* #undef HAVE___SETERR_REPLY */

/* Define is lsof supports the -D option */
/* #undef LSOF_DEVCACHE */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to be the directory where mail spools are stored (for REX server) */
#define MAILPATH "/var/mail"

/* Define if system headers do not declare bindresvport. */
/* #undef NEED_BINDRESVPORT_DECL */

/* Define if system headers do not declare dn_expand. */
/* #undef NEED_DN_EXPAND_DECL */

/* Define if system headers do not declare dn_skipname. */
/* #undef NEED_DN_SKIPNAME_DECL */

/* Define if system headers do not declare fchdir. */
/* #undef NEED_FCHDIR_DECL */

/* Define if system headers do not declare flock. */
/* #undef NEED_FLOCK_DECL */

/* Define if system headers do not declare getrusage. */
/* #undef NEED_GETRUSAGE_DECL */

/* Define if system headers do not declare mkstemp. */
/* #undef NEED_MKSTEMP_DECL */

/* Define if system headers do not declare pread. */
/* #undef NEED_PREAD_DECL */

/* Define if system headers do not declare pwrite. */
/* #undef NEED_PWRITE_DECL */

/* Define if system headers do not declare res_init. */
/* #undef NEED_RES_INIT_DECL */

/* Define if system headers do not declare res_mkquery. */
/* #undef NEED_RES_MKQUERY_DECL */

/* Define if system headers do not declare sys_signame. */
#define NEED_SYS_SIGNAME_DECL 1

/* Define if system headers do not declare xdr_callmsg. */
/* #undef NEED_XDR_CALLMSG_DECL */

/* Name of package */
#define PACKAGE "sfslite"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Path for the C preprocessor command */
#define PATH_CPP "/usr/bin/cpp"

/* Full path of df command */
#define PATH_DF "/usr/bin/df"

/* Full path of dmesg command */
#define PATH_DMESG "/usr/bin/dmesg"

/* Full path of fstat command */
/* #undef PATH_FSTAT */

/* Full path of logger command */
#define PATH_LOGGER "/usr/bin/logger"

/* Full path of ls command */
#define PATH_LS "/usr/bin/ls"

/* Full path of lsof command */
/* #undef PATH_LSOF */

/* Full path of netstat command */
#define PATH_NETSTAT "/usr/bin/netstat"

/* Full path of nfsstat command */
/* #undef PATH_NFSSTAT */

/* Full path of ntpq command */
/* #undef PATH_NTPQ */

/* Full path of ps command */
#define PATH_PS "/usr/bin/ps"

/* Full path of sessreg command */
/* #undef PATH_SESSREG */

/* Full path of su command */
#define PATH_SU "/usr/bin/su"

/* Full path of vmstat command */
#define PATH_VMSTAT "/usr/bin/vmstat"

/* Full path of w command */
#define PATH_W "/usr/bin/w"

/* Full path of xauth command */
/* #undef PATH_XAUTH */

/* Define if putenv makes a copy of its argument */
/* #undef PUTENV_COPIES_ARGUMENT */

/* Use Python memory alloc funcs */
/* #undef PYMALLOC */

/* Define if setgroups is declared in <grp.h>. */
#define SETGROUPS_NEEDS_GRP_H 1

/* Define if SO_SNDBUF/SO_RCVBUF can exceed 64K. */
#define SFS_ALLOW_LARGE_BUFFER 1

/* Path to the strongest random number device, if any. */
#define SFS_DEV_RANDOM "/dev/urandom"

/* Toggle callback2.h with CB signaling */
#define SFS_HAVE_CALLBACK2 1

/* Define if the stat structure has a st_atimespec field. */
/* #undef SFS_HAVE_STAT_ST_ATIMESPEC */

/* Define if the stat structure has a st_mtim field. */
#define SFS_HAVE_STAT_ST_MTIM 1

/* Define if the stat structure has a st_mtimespec field. */
/* #undef SFS_HAVE_STAT_ST_MTIMESPEC */

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if utmp must be managed with BSD-style ttyent functions */
#define USE_TTYENT 1

/* Define if system header files typedef u_int64_t as unsigned long long */
/* #undef U_INT64_T_IS_LONG_LONG */

/* Version number of package */
#define VERSION "1.2.6pre1"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* The C++ type name of the x_ops field in struct XDR. */
#define xdr_ops_t XDR::xdr_ops

/* What the second argument of xdr_getlong points to */
#define xdrlong_t long
