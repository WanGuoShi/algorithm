/*************************************************************************
	> File Name: data_struct/string/reverse_string_0.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月15日 星期五 17时04分00秒
 ************************************************************************/

/*
 * 解法二:
 * 三步反转法
 */

#include<stdio.h>

void ReverseString(char *s, int from, int to);
void LeftRotateString(char *s, int n, int m);

int main()
{
    char s[]="abcdef";
    LeftRotateString(s, 6, 3);
    puts(s);
    return 0;
}

void ReverseString(char *s, int from, int to)
{
    char t;
    while(from < to)
    {
        t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

void LeftRotateString(char *s, int n, int m)
{
    m %= n;         //m>n
    ReverseString(s, 0, m-1);
    ReverseString(s, m, n-1);
    ReverseString(s, 0, n-1);
}
