/*************************************************************************
	> File Name: filter_char.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月30日 星期六 16时03分43秒
 ************************************************************************/

#include <stdio.h>

void filter_char(char *sourse, char *key);

int main(int argc, char *argv[])
{
    char sourse[] = "I Love China.Do you Love it.";
    char key[] = "aei";
    printf("%s, key: %s\n",sourse, key);
    filter_char(sourse, key);
    printf("%s",sourse);
    return 0;
}

void filter_char(char *sourse, char *key)
{
    if(NULL == sourse || NULL == key)
    {
        return;
    }

    const int hash_length = 256;
    unsigned int hash[hash_length];

    int i;
    for(i = 0; i < hash_length; i++)
    {
        hash[i] = 0;
    }

    char *tmp = key;
    while('\0' != *tmp)
    {
        hash[*tmp++]++;
    }

    char *fast, *slow;
    fast = slow = sourse;
    while('\0' != *fast)
    {
        if(0 == hash[*fast])
        {
            *slow = *fast;
            slow++;
        }
        fast++;
    }
    *slow = '\0';
}
