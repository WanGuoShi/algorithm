/*************************************************************************
	> File Name: insert_sort_binary.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年02月23日 星期二 20时16分55秒
 ************************************************************************/

#include <stdio.h>

void insert_sort_binary(int *ch, int n);

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
    
    insert_sort_binary(ch, 9);
    printf("sort after:");
    for(i = 1; i < 9; i++)
    {
        printf("%3d", ch[i]);
    }
    printf("\n");
    return 0;
}

/* 
 * 折半插入排序
 *
 * 参数：
 *      ch   -- 待排序数组
 *      n    -- 待排序数组长度（数组ch[0]用做哨兵位）
 */
void insert_sort_binary(int *ch, int n)
{
    int i, j;
    int low, high, m;

    for(i = 2; i < n; i++)
    {
        ch[0] = ch[i];
        // 在ch[low .. high]中折半查找有序插入位置
        low = 1;
        high = i - 1;
        while(low <= high)
        {
            m = (low + high) / 2;
            if(ch[0] < ch[m])
            {
                high = m - 1;
            }
            else
            {
                low = m + 1;
            }
        }

        // 记录后移
        for(j = i - 1; j >= (high + 1); j--)
        {
            ch[j + 1] = ch[j];
        }
        ch[high + 1] = ch[0];
    }
}
