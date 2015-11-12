/*************************************************************************
	> File Name: isxdigit.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时25分01秒
 ************************************************************************/

#include "ctype.h"

int (isxdigit)(int c)
{
    return (_Ctype[c] & _XD);
}
