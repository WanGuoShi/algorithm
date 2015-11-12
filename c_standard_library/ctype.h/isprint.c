/*************************************************************************
	> File Name: isprint.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时20分09秒
 ************************************************************************/

#include "ctype.h"

int (isprint)(int c)
{
    return (_Ctype[c] & (_DI|_LO|_PU|_SP|_UP|_XA));
}
