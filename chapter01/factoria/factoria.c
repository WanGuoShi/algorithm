/*************************************************************************
	> File Name: factoria.c
	> Author: daemon
	> Mail: 1182248598@qq.com
	> Created Time: 2015年11月08日 星期日 18时13分57秒
 ************************************************************************/

#include<stdio.h>
int fact(int n);
int main(){
    int i;
    printf("请输入要求阶乘的一个整数：");
    scanf("%d",&i);
    printf("%d的阶乘结果是：%d\n",i,fact(i));
    return 0;
}
int fact(int n){
    if(n <= 1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
