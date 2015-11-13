/*************************************************************************
	> File Name: errno.h
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月13日 星期五 18时56分26秒
 ************************************************************************/

#ifndef _ERRNO_H
#define _ERRNO_H
#ifndef _YVALS
#include "yvals.h"
#endif
        /* error codes */
#define EDOM    _EDOM
#define ERANGE  _ERANGE
#define EFPOS   _EFPOS
        /* ADD YOURS HERE */
#define _NERR   _ERRMAX     /* one more than last code */
        /* declarations */
extern int errno;
#endif
