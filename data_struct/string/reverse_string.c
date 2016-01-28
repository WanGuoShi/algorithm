/*************************************************************************
	> File Name: reverse_string.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月14日 星期四 15时24分18秒
 ************************************************************************/

/*
题目描述:
给定一个字符串，要求把字符串前面的若干个字符移动到字符串的尾部，如把字符串
“abcdef”前面的2个字符'a'和'b'移动到字符串的尾部，使得原字符串变成字符串
“cdefab”。请写一个函数完成此功能，要求对长度为n的字符串操作的时间复杂度为
O(n)，空间复杂度为 O(1)。
*/

#include <stdio.h>

void LeftShiftOne(char *s, int n);
void LeftRotateString(char *s, int n, int m);

int main()
{
    char s[]="abcdef";
    LeftRotateString(s,6,2);
    puts(s);
    return 0;
}

void LeftShiftOne(char *s, int n){
    char t = s[0];
    for(int i = 1; i < n; i++){
        s[i-1] = s[i];
    }
    s[n - 1] = t;
}

    while(m--){
        LeftShiftOne(s,n);
    }
}
