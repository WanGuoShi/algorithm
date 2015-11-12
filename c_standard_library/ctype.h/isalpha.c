/*************************************************************************
	> File Name: isalpha.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时10分39秒
 ************************************************************************/

#include "ctype.h"

int (isalpha)(int c)
{
    return (_Ctype[c] & (_LO|_UP|_XA));
}
