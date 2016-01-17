/*************************************************************************
	> File Name: changed_word.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月17日 星期日 20时45分47秒
 ************************************************************************/

#include <stdio.h>

int GetStringLength(char *s);
int StringContain(char *a, char *b);

int main()
{
    char a[] = "ABCD";
    char b[] = "DBCA";
    if(StringContain(a, b))
    {
        printf("String %s and String %s is changed word", a, b);
    }else{
        printf("String %s and String %s is not changed word", a, b);
    }
    return 0;
}

int StringContain(char *a, char *b)
{
    int hash = 0;
    int i;
    for(i = 0; i < GetStringLength(a); i++)
    {
        hash |= (1 << (a[i] - 'A'));
    }
    for(i = 0; i < GetStringLength(b); i++)
    {
        if((hash & (1 << (b[i] - 'A'))) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int GetStringLength(char *s)
{
    int length = 0;
    while(*s++ != '\0')
    {
        length++;
    }
    return length;
}
