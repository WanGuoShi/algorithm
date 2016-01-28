/*************************************************************************
	> File Name: first_appear_hash.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月28日 星期四 11时56分12秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int firstAppearChar(char *s);

int main(int argc, char *argv[])
{
    char s[] = "abcdabceefa";
    int k;
    if(k = firstAppearChar(s) >= 0){
        printf("%s firstAppearChar is %c.", s, s[k]);
    }else{
        printf("%s don't have firstAppearChar.", s);
    }
    return 0;
}

//采用hash表，存储字符，遍历计数
int firstAppearChar(char *s){
    if(s == NULL){
        return -1;
    }
    int hash[256];
    memset(hash, 0, sizeof(hash));

    char *tmp = s;
    while(*tmp != '\0'){
        if(*tmp >= 0){
            hash[*tmp++]++;
        }else{
            hash[*(tmp++)+256]++;
        }
    }

    //hash下标
    int index;
    tmp = s;
    //字符串下标
    int i = 0;
    while(*tmp != '\0'){
        if(*tmp >= 0){
            index = *tmp;
        }else{
            index = *tmp + 256;
        }
        
        if(hash[index] == 1){
            return i;
        }else{
            tmp++;
            i++;
        }
    }
}
