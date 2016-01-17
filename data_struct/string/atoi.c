/*************************************************************************
	> File Name: atoi.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月17日 星期日 22时33分16秒
 ************************************************************************/

#include <stdio.h>

int StrToInt(const char *s);
int isspace(char s);
int isdigit(char s);

int main()
{
    const char s[] = "  -123456";
    puts(s);
    printf("%d",StrToInt(s));
    return 0;
}

int StrToInt(const char *s){
    const int MaxInt = (int)((unsigned)~0 >> 1);
    const int MinInt = -(int)((unsigned)~0 >> 1) - 1;
    unsigned int n = 0;

    if(s == 0)
    {
        return 0;
    }
    while(isspace(*s))s++;

    int sign = 1;
    if(*s == '+' || *s == '-')
    {
        if(*s == '-')
        {
            sign = -1;
        }
        s++;
    }

    while(isdigit(*s))
    {
        int c = *s - '0';
        if(sign > 0 && (n > MaxInt / 10 || (n == MaxInt / 10 && c > MaxInt % 10)))
        {
            n = MaxInt;
            break;
        }
        else if(sign < 0 && (n > (unsigned)MinInt / 10 || (n == (unsigned)MinInt / 10 && c > (unsigned)MinInt % 10)))
        {
            n = MinInt;
            break;
        }
        n = n * 10 + c;
        s++;
    }
    return sign > 0 ? n : -n;
}

int isspace(char s){
    if(s == ' '){
        return 1;
    }
    return 0;
}
int isdigit(char s){
    int d = s - '0';
    if(d < 0 || d > 9){
        return 0;
    }
    return 1;
}

