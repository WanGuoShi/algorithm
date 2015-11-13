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
    for(s = "abcdefghijkmnopqrstuvwxyz"; *s; ++s)
    {
        assert(islower(*s));
    }
    for(s = "ABCDEFGHIJKMNOPQRSTUVWXYZ"; *s; ++s)
    {
        assert(isupper(*s));
    }
    for(s = "!\"#%&'();<=>?[\\]*+,-./:^_{|}~"; *s; ++s)
    {
        assert(ispunct(*s));
    }
    for(s = "\f\n\r\t\v"; *s; ++s)
    {
        assert(isspace(*s));
    }
    assert(isspace(' ') && isprint(' '));
    assert(iscntrl('\a') && iscntrl('\b'));
    /* test macros for all valid codes */
    for(c = EOF; c <= UCHAR_MAX; ++c)
    {
        if(isdigit(c))
        {
            assert(isalnum(c));
        }
        if(isupper(c))
        {
            assert(isalpha(c));
        }
        if(islower(c))
        {
            assert(isalpha(c));
        }
        if(isalpha(c))
        {
            assert(isalnum(c) && !isdigit(c));
        }
        if(isalnum(c))
        {
            assert(isgraph(c) && !ispunct(c));
        }
        if(ispunct(c))
        {
            assert(isgraph(c));
        }
        if(isgraph(c))
        {
            assert(isprint(c));
        }
        if(isspace(c))
        {
            assert(c == ' ' || !isprint(c));
        }
        if(iscntrl(c))
        {
            assert(!isalnum(c));
        }
    }
    /* test functons for required characters */
    for(s = "0123456789"; *s; ++s)
    {
        assert((isdigit)(*s) && isxdigit(*s));
    }
    for(s = "abcdefABCDEF"; *s; ++s)
    {
        assert((isxdigit)(*s));
    }
    for(s = "abcdefghijkmnopqrstuvwxyz"; *s; ++s)
    {
        assert((islower)(*s));
    }
    for(s = "ABCDEFGHIJKMNOPQRSTUVWXYZ"; *s; ++s)
    {
        assert((isupper)(*s));
    }
    for(s = "!\"#%&'();<=>?[\\]*+,-./:^_{|}~"; *s; ++s)
    {
        assert((ispunct)(*s));
    }
    for(s = "\f\n\r\t\v"; *s; ++s)
    {
        assert((isspace)(*s));
    }
    assert((isspace)(' ') && (isprint)(' '));
    assert((iscntrl)('\a') && (iscntrl)('\b'));
    /* test functons for all valid codes */
    for(c = EOF; c <= UCHAR_MAX; ++c)
    {
        if((isdigit)(c))
        {
            assert((isalnum)(c));
        }
        if((isupper)(c))
        {
            assert((isalpha)(c));
        }
        if((islower)(c))
        {
            assert((isalpha)(c));
        }
        if((isalpha)(c))
        {
            assert((isalnum)(c) && !(isdigit)(c));
        }
        if((isalnum)(c))
        {
            assert((isgraph)(c) && !(ispunct)(c));
        }
        if((ispunct)(c))
        {
            assert((isgraph)(c));
        }
        if((isgraph)(c))
        {
            assert((isprint)(c));
        }
        if((isspace)(c))
        {
            assert(c == ' ' || !(isprint)(c));
        }
        if((iscntrl)(c))
        {
            assert(!(isalnum)(c));
        }
    }
    puts("SUCCESS testing <ctype.h>");
    return 0;
}
