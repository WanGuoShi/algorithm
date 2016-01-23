/*************************************************************************
	> File Name: permutation.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月20日 星期三 15时35分26秒
 ************************************************************************/

#include <stdio.h>

void swap(char *a, char *b);
void permutation(char *s, int from, int to);

int main()
{
    char s[] = "aba";
    permutation(s, 0, 2);
    return 0;
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

void swap(char *a, char *b){
    char t;
    t = *a;
    *a = *b;
    *b = t;
}
