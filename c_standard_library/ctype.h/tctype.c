/*************************************************************************
	> File Name: tctype.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月11日 星期三 14时30分38秒
 ************************************************************************/

#include "ctype.h"
#include <stdio.h>
#include <assert.h>

/* display a printable character class */
static void prclass(const char *name, int (*fn)(int))
{
    int c;

    fputs(name, stdout);
    fputs(":", stdout);
    for(c = EOF; c <= UCHAR_MAX; ++c)
    {
        if((*fn)(c))
        {
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
    prclass("isalnum", &isalnum);
    prclass("isdigit", &isdigit);
    prclass("islower", &islower);
    prclass("isupper", &isupper);
    /* test macros for required characters */
    for(s = "0123456789"; *s; ++s)
    {
        assert(isdigit(*s) && isxdigit(*s));
    }
    for(s = "abcdefABCDEF"; *s; ++s)
    {
        assert(isxdigit(*s));
    }
    return 0;
}
