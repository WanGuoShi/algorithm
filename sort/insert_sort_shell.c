/*************************************************************************
	> File Name: insert_sort_shell.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年02月24日 星期三 20时12分10秒
 ************************************************************************/

#include <stdio.h>

void insert_sort_shell(int *arr, int len);

int main(int argc, char *argv[])
{
    int ch[9] = {21, 49, 38, 65, 97, 76, 13, 27, 49};
    int i;
    printf("sort before:");
    for(i = 0; i < 9; i++)
    {
        printf("%3d", ch[i]);
    }
    printf("\n");
    
    insert_sort_shell(ch, 9);
    printf("sort after:");
    for(i = 0; i < 9; i++)
    {
        printf("%3d", ch[i]);
    }
    printf("\n");
    return 0;
}

/*
 * 希尔排序
 * 参数：
 *      arr     -- 待排序数组
 *      len     -- 待排序数组长度
 */
void insert_sort_shell(int *arr, int len)
{
    int gap, i, j;      // gap -- 步长
    int temp;
    for(gap = len >> 1; gap > 0; gap >>= 1)
    {
        for(i = gap; i < len; i++)
        {
            temp = arr[i];
            
            // 寻找插入位置，及移动相应的数据
            for(j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
            {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
    }
}
