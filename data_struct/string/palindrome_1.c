/*************************************************************************
	> File Name: palindrome_1.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月18日 星期一 11时10分33秒
 ************************************************************************/

#include <stdio.h>

int IsPalindrome(const char *s, int n);

int main()
{
    const char s[] = "abcdcba";
    if(IsPalindrome(s, 7)){
        printf("string %s is palindrome",s);
    }else{
        printf("string %s is not palindrome",s);
    }
    return 0;
}

int IsPalindrome(const char *s, int n){
    if(s == 0 || n < 1){
        return 0;
    }
    const char *first, *second;
    int m = ((n >> 1)-1) > 0 ? ((n >> 1) - 1) : 0;
    first = s + m;
    second = s + n - 1 - m;
    while(first > s){
        if(*first != *second){
            return 0;
        }
        first--;
        second++;
    }
    return 1;
}
