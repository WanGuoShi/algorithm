/*************************************************************************
	> File Name: isspace.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时22分22秒
 ************************************************************************/

#include "ctype.h"

int (isspace)(int c)
{
    return (_Ctype[c] & (_CN|_SP|_XS));
}

