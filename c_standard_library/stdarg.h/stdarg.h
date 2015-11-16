/*************************************************************************
	> File Name: stdarg.h
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月16日 星期一 20时26分09秒
 ************************************************************************/

#ifndef _STDARG_H
#define _STDARG_H
        /* type definitions */
typedef char *va_list;
        /* macros */
#define va_arg(ap, T)   \
    (*(T*)(((ap) += _Bnd(T, _AUPBND)) - _Bnd(T, _ADNBND)))
#define va_end(ap)      (void)0
#define va_start(ap, A) \
    (void)((ap) = (char *)&(A) + _Bnd(A, _AUPBND))
#define _Bnd(X, bnd)    (sizeof (X) + (bnd) & ~(bnd))
#define _AUPBND     3
#define _ADNBND     0
#endif
