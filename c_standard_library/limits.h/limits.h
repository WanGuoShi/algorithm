/*************************************************************************
	> File Name: limits.h
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月14日 星期六 19时07分48秒
 ************************************************************************/

/* limits.h standard header -- 8-bit version */
#ifndef _LIMITS_H
#define _LIMITS_H
#ifndef _YVALS
#include "yvals.h"
#endif
        /* char properties */
#define CHAR_BIT    8
#if _CSIGN
#define CHAR_MAX    127
#define CHAR_MIN    (-127-_C2)
#else
#define CHAR_MAX    255
#define CHAR_MIN    0
#endif
        /* int properties */
#if _ILONG
#define INT_MAX     2147483647
#define INT_MIN     (-2147483647-_C2)
#define UINT_MAX    4294967295
#else
#define INT_MAX     32767
#define INT_MIN     (-32767-_C2)
#define UINT_MAX    65535
#endif
        /* long properties */
#define LONG_MAX    2147483647
#define LONG_MIN    (-2147483647-_C2)
        /* mulitibyte properties */
#define MB_LEN_MAX  _MBMAX
        /* signed char properties */
#define SCHAR_MAX   127
#define SCHAR_MIN   (-127-_C2)
        /* short properties */
#define SHRT_MAX    32767
#define SHRT_MIN    (-32767-_C2)
        /* unsigned properties */
#define UCHAR_MAX   255
#define ULONG_MAX   4294967295
#define USHRT_MAX   65535
#endif
