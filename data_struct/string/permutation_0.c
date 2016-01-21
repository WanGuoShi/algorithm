/*************************************************************************
	> File Name: permutation_0.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月21日 星期四 15时50分41秒
 ************************************************************************/

#include <stdio.h>

int permutation(char *s, int m);

int main(){
    char s[] = "132";
    while(permutation(s, 3)){
        puts(s);
    }
    return 0;
}

int permutation(char *s, int m){
    int i;
    for(i = m - 2; (i >= 0) && (s[i] >= s[i + 1]); i--);

    if(i < 0){
        return 0;
    }

    int k;
    for(k = m - 1; (k >= i) && (s[k] <= s[i]); k--);

    //swap s[i], s[k]
    char t;
    t = s[i];
    s[i] = s[k];
    s[k] = t;

    //reverse i ~ m
    for(int j = 1; j <= (m - i - 1) / 2; j++){
        t = s[i + j];
        s[i + j] = s[m - j];
        s[m - j] = t;
    }
    return 1;
}
