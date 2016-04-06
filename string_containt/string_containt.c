/*************************************************************************
	> File Name: string_containt.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月17日 星期日 20时45分47秒
    > Modified Time: 2016年4月6日 星期三 16时13分
 ************************************************************************/

/*
 题目描述：
 给定两个分别由字母组成的字符串A和字符串B,字符串B的长度比字符串A短。
 请问,如何最快地判断字符串B中所有字母是否都在字符串A里?
 */


#include <string.h>

int StringContain(char *a, char *b)
{
    int hash = 0;
    int i;
    for(i = 0; i < strlen(a); i++)
    {
        hash |= (1 << (a[i] - 'A'));
    }
    for(i = 0; i < strlen(b); i++)
    {
        if((hash & (1 << (b[i] - 'A'))) == 0)
        {
            return 0;
        }
    }
    return 1;
}

