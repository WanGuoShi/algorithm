/*************************************************************************
	> File Name: islower.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时18分49秒
 ************************************************************************/

#include "ctype.h"

int (islower)(int c)
{
    return (_Ctype[c] & _LO);
}
