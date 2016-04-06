/*************************************************************************
	> File Name: permutation.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月20日 星期三 15时35分26秒
 ************************************************************************/

/*
 * 字符串的全排列
 *
 * 题目描述：
 *     输入一个字符串,打印出该字符串中字符的所有排列。
 *     例如输入字符串abc,则输出由字符a、b、c 所能排列出来的所有字符串
 *     abc、acb、bac、bca、cab 和 cba。
 */

#include <stdio.h>

static void swap(char *a, char *b){
    char t;
    t = *a;
    *a = *b;
    *b = t;
}

void permutation(char *s, int from, int to){
    int i, j, k;
    if(to <= 1){
        return;
    }

    if(from == to){
        for(i = 0; i <= to; i++){
            printf("%c",s[i]);
        }
        printf("\n");
    }else{
        for(j = from; j <= to; j++){
            swap(&s[j], &s[from]);
            permutation(s, from + 1, to);
            swap(&s[j], &s[from]);
        }
    }
}

