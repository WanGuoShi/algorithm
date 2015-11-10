/*************************************************************************
	> File Name: xctype.c
	> Author:
	> Mail:
	> Created Time: 2015年11月10日 星期二 20时23分49秒
 ************************************************************************/

#include "ctype.h"
#include <limits.h>
#include <stdio.h>
#if EOF != -1 || UCHAR_MAX != 255
#error WORNG CTYPE TABLE
#endif

/* macro */
#define XDI     (_DI|_XD)
#define XLO     (_LO|_XD)
#define XUP     (_UP|_XD)

/* static data */
static const short ctyp_tab[257]=
{
    0, /× EOF */
    _BB, _BB, _BB, _BB, _BB, _BB, _BB, _BB   
    _BB, _CN, _CN, _CN, _CN, _BB, _BB, _BB
    _BB, _BB, _BB, _BB, _BB, _BB, _BB, _BB   
    _BB, _BB, _BB, _BB, _BB, _BB, _BB, _BB   
    _SP, _PU, _PU, _PU, _PU, _PU, _PU, _PU
    _PU, _PU, _PU, _PU, _PU, _PU, _PU, _PU
    XDI, XDI, XDI, XDI, XDI, XDI, XDI, XDI,
    XDI, XDI, _PU, _PU, _PU, _PU, _PU, _PU,
    _PU, XUP, XUP, XUP, XUP, XUP, _PU, _UP,
    _UP, _UP, _UP, _UP, _UP, _UP, _UP, _UP,
    _UP, _UP, _UP, _UP, _UP, _UP, _UP, _UP,
    _UP, _UP, _UP, _PU, _PU, _PU, _PU, _PU,
    _PU, XLO, XLO, XLO, XLO, XLO, XLO, _LO,
    _LO, _LO, _LO, _LO, _LO, _LO, _LO, _LO,
    _LO, _LO, _LO, _LO, _LO, _LO, _LO, _LO,
    _LO, _LO, _LO, _PU, _PU, _PU, _PU, _BB,
};

const short *_Ctype = &ctyp_tab[1];