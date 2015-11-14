/*************************************************************************
	> File Name: tlimits.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月14日 星期六 19时23分41秒
 ************************************************************************/

#include "limits.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    /* test basic properties of limits.h macros */
    printf("CHAR_BIT = %2i  MB_LEN_MAX = %2i\n\n",CHAR_BIT, MB_LEN_MAX);
    printf("CHAR_MAX = %10i     CHAR_MIN = %10i\n",CHAR_MAX, CHAR_MIN);
    printf("SCHAR_MAX = %10i    SCHAR_MIN = %10i\n",SCHAR_MAX, SCHAR_MIN);
    printf("UCHAR_MAX = %10u\n\n", UCHAR_MAX);
    printf("SHRT_MAX = %10i     SHRT_MIN = %10i\n",SHRT_MAX, SHRT_MIN);
    printf("USHRT_MAX = %10u\n",USHRT_MAX);
    printf("INT_MAX = %10i   INT_MIN = %10i\n",INT_MAX, INT_MIN);
    printf("UINT_MAX = %10i\n\n", UINT_MAX);
    printf("LONG_MAX = %101i  LONG_MIN = %101i",LONG_MAX, LONG_MIN);
    printf("ULONG_MAX = %101u\n\n",ULONG_MAX);
    return 0;
}

