/*************************************************************************
	> File Name: isgraph.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月12日 星期四 16时16分49秒
 ************************************************************************/

#include "ctype.h"

int (isgraph)(int c){
    return (_Ctype[c] & (_DI|_LO|_PU|_UP|_XA));
}
