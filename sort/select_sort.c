/*************************************************************************
	> File Name: select_sort.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年03月08日 星期二 14时56分05秒
 ************************************************************************/

#include<stdio.h>

void select_sort(int arr[], int len);
void swap_int(int *a, int *b);

int main(int argc, char *argv[])
{
    int i;
    int arr[] = {9, 31, 23, 11, 8, 9, 3, 4};
    select_sort(arr, 8);
    for(i = 0; i < 8; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
 * 选择排序
 * 说明：
 *      首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，
 *      再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
 * 参数：
 *      arr     -- 待排序数组
 *      len     -- 待排序数组长度
 */
void select_sort(int arr[], int len)
{
    int i, j, min;
    for(i = 0; i < len - 1; i++)
    {
        min = i;
        for(j = i + 1; j < len; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap_int(&arr[min], &arr[i]);
    }
}

void swap_int(int *a, int *b)
{
    int *tmp;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}
