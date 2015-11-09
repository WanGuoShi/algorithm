/*************************************************************************
	> File Name: hanoi.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月09日 星期一 18时21分27秒
 ************************************************************************/

#include<stdio.h>

void move(int n,char x,char y,char z)
{
    if(n == 1)
    {
        printf("%c --> %c\n",x,z);
    }
    else
    {
        move(n-1,x,z,y);
        printf("%c --> %c\n",x,z);
        //getchar();
        move(n-1,y,x,z);
    }
}

int main(int argc,char *argv[])
{
    int num;
    printf("请输入盘子数：");
    scanf("%d",&num);
    move(num,'a','b','c');
    return 0;
}
