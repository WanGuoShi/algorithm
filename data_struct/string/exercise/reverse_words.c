/*************************************************************************
	> File Name: reverse_words.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月17日 星期日 14时05分25秒
 ************************************************************************/

#include <stdio.h>

void ReverseWords(char *(s[]), int from, int to);

int main()
{
    char *(s[]) = {"I","am","a","student."};
    ReverseWords(s, 0, 3);
    for(int i = 0; i < 4; i++){
        while(*s[i] != '\0'){
            printf("%c",*s[i]++);
        }
        printf(" ");
    }
    return 0;
}

void ReverseWords(char *(s[]), int from, int to){
    char *tmp;
    while(from < to){
        tmp = s[from];
        s[from++] = s[to];
        s[to--] = tmp;
    }
}
