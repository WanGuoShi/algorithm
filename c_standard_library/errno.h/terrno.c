/*************************************************************************
	> File Name: terrno.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月13日 星期五 19时34分14秒
 ************************************************************************/

#include <assert.h>
#include "errno.h"
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    assert(errno == 0);
    perror("No error reported as");
    errno = ERANGE;
    assert(errno == ERANGE);
    perror("Range error reported as");
    errno = 0;
    assert(errno == 0);
    //sqrt(1.0);
    //assert(errno == EDOM);
    perror("SUCCESS testing <errno.h>");
    return (0);
}


