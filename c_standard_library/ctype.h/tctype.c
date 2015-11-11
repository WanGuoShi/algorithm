/*************************************************************************
	> File Name: tctype.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月11日 星期三 14时30分38秒
 ************************************************************************/

#include "ctype.h"
#include <stdio.h>

/* display a printable character class */
static void prclass(const char *name, int (*fn)(int))
{
    int c;

    fputs(name, stdout);
    fputs(":", stdout);
    for(c = EOF; c <= UCHAR_MAX; ++c){
        if((*fn)(c)){
            fputc(c, stdout);
        }
    }
    fputs("\n", stdout);
}

int main(int argc, char *argv[])
{
    char *s;
    int c;
            /* display printable classes */
    prclass("ispunct", &ispunct);

    return 0;
}
