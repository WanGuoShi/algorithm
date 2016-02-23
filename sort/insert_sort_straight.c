/*************************************************************************
	> File Name: insert_sort_straight.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年02月23日 星期二 19时21分25秒
 ************************************************************************/

#include <stdio.h>

void insert_sort_straight(int *ch, int n);

int main(int argc, char *argv[])
{
    int ch[9] = {0,49, 38, 65, 97, 76, 13, 27, 49};
    int i;
    printf("sort before:");
    for(i = 1; i < 9; i++)
    {
        printf("%3d", ch[i]);
    }
    printf("\n");
    
    insert_sort_straight(ch, 9);
    printf("sort after:");
    for(i = 1; i < 9; i++)
    {
        printf("%3d", ch[i]);
    }
    printf("\n");
    return 0;
}

/* 
 * 直接插入排序
 *
 * 参数：
 *      ch   -- 待排序数组
 *      n    -- 待排序数组长度（数组ch[0]用做哨兵位）
 */
void insert_sort_straight(int *ch, int n)
{
    int i, j;
    for(i = 2; i < n; i++)
    {
        if(ch[i] < ch[i - 1])
        {
            ch[0] = ch[i];      //复制为哨兵
            ch[i] = ch[i - 1];
            for(j = i - 2; ch[0] < ch[j]; j--)
            {
                ch[j + 1] = ch[j];  //记录后移
            }
            ch[j + 1] = ch[0];
        }
    }
}
