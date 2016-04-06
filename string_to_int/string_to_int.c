/*************************************************************************
	> File Name: string_to_int.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月17日 星期日 22时33分16秒
	> Modified Time: 2016年04月6日 星期三 16时29分
 ************************************************************************/

/*
题目描述：
输入一个由数字组成的字符串,把它转换成整数并输出。
例如:输入字符串"123",输出整数123。给定函数原型 int StrToInt(const char *str) 
实现字符串转换成整数的功能,不能使用库函数atoi。
*/

#include <string.h>
#include <ctype.h>
#include <limits.h>

int string_to_int(const char *s)
{
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
        if(sign > 0 && (n > INT_MAX/ 10 || (n == INT_MAX / 10 && c > INT_MAX % 10)))
        {
            n = INT_MAX;
            break;
        }
        else if(sign < 0 && (n > (unsigned)INT_MIN / 10 || (n == (unsigned)INT_MIN / 10 && c > (unsigned)INT_MIN % 10)))
        {
            n = INT_MIN;
            break;
        }
        n = n * 10 + c;
        s++;
    }
    return sign > 0 ? n : -n;
}

