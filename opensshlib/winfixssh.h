#ifndef WINFIXSSH_H
#define WINFIXSSH_H

typedef unsigned char u_int8_t;
typedef __int16 int16_t;
typedef unsigned __int16 u_int16_t;
typedef __int32 int32_t;
typedef unsigned __int32 u_int32_t;
typedef unsigned __int64 u_int64_t;

#define SIZEOF_CHAR 1
#define SIZEOF_SHORT_INT 2
#define SIZEOF_INT 4

#ifdef _MSC_VER
/* <wspiapi.h> only comes with Visual Studio. */
#define HAVE_WSPIAPI_H 1
#else
#undef HAVE_WSPIAPI_H
#endif

#define HAVE_GETADDRINFO 1
#define HAVE_GETNAMEINFO 1

#if 0
#define HAVE_SNPRINTF 1
#define HAVE_VASPRINTF 1
#define HAVE_VSNPRINTF 1
#endif

#define SNPRINTF_CONST const

#undef HAVE_ENDIAN_H
#undef HAVE_TTYENT_H
#undef HAVE_MAILLOCK_H
#undef HAVE_PATHS_H


#define HAVE_STRUCT_IP 1
/* #define HAVE_STRUCT_ICMP 1 */
#define HAVE_STRNCASECMP 1
#define HAVE_IP_IP_SUM 1
#define STDC_HEADERS 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_FCNTL_H 1
#define HAVE_ERRNO_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_MEMCPY 1
#define HAVE_STRERROR 1
/* #define HAVE_SYS_SOCKIO_H 1 */
/* #undef HAVE_TERMIOS_H */
#define HAVE_ERRNO_H 1
#define HAVE_GAI_STRERROR 1
/* #define HAVE_STRCASESTR 1 */
#define HAVE_NETINET_IN_SYSTEM_H 1
#define HAVE_NETINET_IF_ETHER_H 1
#define HAVE_SYS_STAT_H 1
/* #define HAVE_INTTYPES_H */

/* Without these, Windows will give us all sorts of crap about using functions
   like strcpy() even if they are done safely */
#define _CRT_SECURE_NO_DEPRECATE 1
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS 1
#endif 
#pragma warning(disable: 4996)

#endif