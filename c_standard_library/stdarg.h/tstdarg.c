/*************************************************************************
	> File Name: tstdarg.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月16日 星期一 20时47分36秒
 ************************************************************************/

#include <assert.h>
#include "stdarg.h"
#include <stdio.h>

/* type definitions */
typedef struct
{
    char ;
} Cstruct;

/* test variable argument list */
static int tryit(const char *fmt, ...)
{
    int ctr = 0;
    va_list ap;

    va_start(ap, fmt);
    for(; *fmt; ++fmt)
    {
        switch(*fmt)
        {
        case 'i':
            assert(va_arg(ap, int) == ++ctr);
            break;
        case 'd':
            assert(va_arg(ap, double) == ++ctr);
            break;
        case 'p':
            assert(va_arg(ap, char *) == ++ctr);
            break;
        case 's':
            assert(va_arg(ap, Cstruct) == ++ctr);
            break;
        }
    }
    va_end(ap);
    return (ctr);
}


int main(int argc, char *argv[])
{
    Cstruct x = {3};

    assert(tryit("iisdi", '\1', 2, x, 4.0, 5) == 5);
    assert(tryit("") == 0);
    assert(tryit("pdp", "\1", 2.0, "\3") == 3);
    printf("sizeof (va_list) = %u\n", sizeof (va_list));
    puts("SUCCESS testing <stdarg.h>");
    return (0);
}

