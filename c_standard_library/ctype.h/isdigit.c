/*************************************************************************
	> File Name: isdigit.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时14分30秒
 ************************************************************************/

#include "ctype.h"

int (isdigit)(int c)
{
    return (_Ctype[c] & _DI);
}