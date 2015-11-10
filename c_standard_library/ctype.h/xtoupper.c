/*************************************************************************
	> File Name: xtoupper.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月10日 星期二 18时33分39秒
 ************************************************************************/
#include "ctype.h"
#include <limits.h>
#include <stdio.h>
#if EOF != -1 || UCHAR_MAX != 255
#error WRONG TOUPPER TABLE
#endif

/* static data */
static const short toup_tab[257] =
{
    EOF,
    Ox00, Ox01, Ox02, Ox03, Ox04, Ox05, Ox06, Ox07,
    Ox08, Ox09, Ox0a, Ox0b, Ox0c, Ox0d, Ox0e, Ox0f,
    Ox10, Ox11, Ox12, Ox13, Ox14, Ox15, Ox16, Ox17,
    Ox18, Ox19, Ox1a, Ox1b, Ox1c, Ox1d, Ox1e, Ox1f,
    Ox20, Ox21, Ox22, Ox23, Ox24, Ox25, Ox26, Ox27,
    Ox28, Ox29, Ox2a, Ox2b, Ox2c, Ox2d, Ox2e, Ox2f,
    Ox30, Ox31, Ox32, Ox33, Ox34, Ox35, Ox36, Ox37,
    Ox38, Ox39, Ox3a, Ox3b, Ox3c, Ox3d, Ox3e, Ox3f,
    Ox40,  'A',  'B',  'C',  'D',  'E',  'F',  'G',
    'H' ,  'I',  'J',  'K',  'L',  'M',  'N',  'O',
    'P' ,  'Q',  'R',  'S',  'T',  'U',  'V',  'W',
    'X' ,  'Y',  'Z', Ox5b, Ox5c, Ox5d, Ox5e, Ox5f,
    Ox60,  'A',  'B',  'C',  'D',  'E',  'F',  'G',
    'H' ,  'I',  'J',  'K',  'L',  'M',  'N',  'O',
    'P' ,  'Q',  'R',  'S',  'T',  'U',  'V',  'W',
    'X' ,  'Y',  'Z',  Ox7b, Ox7c, Ox7d, Ox7e, Ox7f,
    Ox80, Ox81, Ox82, Ox83, Ox84, Ox85,  Ox86, Ox87,
    Ox88, Ox89, Ox8a, Ox8b, Ox8c, Ox8d,  Ox8e, Ox8f,
    Ox90, Ox91, Ox92, Ox93, Ox94, Ox95,  Ox96, Ox97,
    Ox98, Ox99, Ox9a, Ox9b, Ox9c, Ox9d,  Ox9e, Ox9f,
    Oxa0, Oxa1, Oxa2, Oxa3, Oxa4, Oxa5,  Oxa6, Oxa7,
    Oxa8, Oxa9, Oxaa, Oxab, Oxac, Oxad,  Oxae, Oxaf,
    Oxb0, Oxb1, Oxb2, Oxb3, Oxb4, Oxb5,  Oxb6, Oxb7,
    Oxb8, Oxb9, Oxba, Oxbb, Oxbc, Oxbd,  Oxbe, Oxbf,
    Oxc0, Oxc1, Oxc2, Oxc3, Oxc4, Oxc5,  Oxc6, Oxc7,
    Oxc8, Oxc9, Oxca, Oxcb, Oxcc, Oxcd,  Oxce, Oxcf,
    Oxd0, Oxd1, Oxd2, Oxd3, Oxd4, Oxd5,  Oxd6, Oxd7,
    Oxd8, Oxd9, Oxda, Oxdb, Oxdc, Oxdd,  Oxde, Oxdf,
    Oxe0, Oxe1, Oxe2, Oxe3, Oxe4, Oxe5,  Oxe6, Oxe7,
    Oxe8, Oxe9, Oxea, Oxeb, Oxec, Oxed,  Oxee, Oxef,
    Oxf0, Oxf1, Oxf2, Oxf3, Oxf4, Oxf5,  Oxf6, Oxf7,
    Oxf8, Oxf9, Oxfa, Oxfb, Oxfc, Oxfd,  Oxfe, Oxff
};

const short *_Toupper = &toup_tab[1];
