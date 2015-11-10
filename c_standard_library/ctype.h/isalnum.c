/*************************************************************************
	> File Name: isalnum.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月10日 星期二 18时17分03秒
 ************************************************************************/

#include"ctype.h"

int (isalnum)(int c)
{
    return (_Ctype[c] & (_DI|_LO|_UP|_XA));
}

