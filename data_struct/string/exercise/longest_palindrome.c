/*************************************************************************
	> File Name: longest_palindrome.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月19日 星期二 21时41分25秒
 ************************************************************************/

#include <stdio.h>

int GetLongestPalindrome(char *s, int n);

int main(){
    char s[] = "112abcdcba";
    printf("string %s's longest palindrome is :%d", s, GetLongestPalindrome(s, 10));
    return 0;
}

int GetLongestPalindrome(char *s, int n){
    int i, j, max, c;
    if(s == 0 || n < 1){
        return 0;
    }
    max = 0;

    for(i = 0; i < n; i++){
        //odd string
        for(j = 0; (i - j >= 0) && (i + j < n); j++){
            if(s[i - j] != s[i + j]){
                break;
            }
            c = j * 2 + 1;
        }
        if(c > max){
            max = c;
        }
        //even string
        for(j = 0; (i - j >= 0) && (i + j + 1 < n); j++){
            if(s[i - j] != s[i + j + 1]){
                break;
            }
            c = j * 2 + 2;
        }
        if(c > max){
            max = c;
        }
    }
    return max;
}
