/*************************************************************************
	> File Name: combination.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月23日 星期六 10时23分12秒
 ************************************************************************/

#include <stdio.h>

void combination(char *result, char *s, int size, int resPos);

int main()
{
    char s[] = "abc";
    char result[] = "abc";
    combination(result, s, 3, 0);
    return 0;
}

void combination(char *result, char *s, int size, int resPos){
    if(resPos == size){
        puts(result);
    }else{
        for(int i = 0; i < size; i++){
            result[resPos] = s[i];
            combination(result, s, size, resPos + 1);
        }
    }
}
