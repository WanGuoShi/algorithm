/*************************************************************************
	> File Name: first_appear.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月23日 星期六 11时06分30秒
 ************************************************************************/

#include <stdio.h>

int FirstAppear(char *s, int size);

int main()
{
    int k;
    char s[] = "abcdda";
    if( (k = FirstAppear(s, 6)) != -1){
        printf("String %s : %c", s, s[k]);
    }else{
        printf("String %s don't have that char!", s);
    }
    return 0;
}

int FirstAppear(char *s, int size){
    int i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if(s[j] == s[i] && i != j){
                break;
            }
        }
        if(j == size){
            return i;
        }
    }
    return -1;
}
