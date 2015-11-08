/*************************************************************************
	> File Name: fib.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月08日 星期日 17时43分53秒
 ************************************************************************/

#include<stdio.h>
#define NUM 13
int main()
{
    int i;
    int fib[NUM]= {1,1};

    for(i = 2; i < NUM; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i = 0; i < NUM; i++)
    {
        printf("%3dmonth robot num:%5d\n",(i+1),fib[i]);
    }
    getchar();
    return 0;
}
