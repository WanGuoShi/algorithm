/*************************************************************************
	> File Name: bubble_sort.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年03月08日 星期二 20时48分21秒
 ************************************************************************/

#include<stdio.h>


void bubble_sort(int *arr, int len);
void swap_int(int *a, int *b);

int main(int argc, char *argv[])
{
    int i;
    int arr[] = {9, 31, 23, 11, 8, 9, 3, 4};
    bubble_sort(arr, 8);
    for(i = 0; i < 8; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return 0;
}

/*
 * 冒泡排序
 * 说明：
 *      1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
 *      2. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。
 *         这步做完后，最后的元素会是最大的数。
 *      3. 针对所有的元素重复以上的步骤，除了最后一个。
 *      4. 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
 * 参数：
 *      arr     -- 待排序数组
 *      len     -- 待排序数组长度
 */
void bubble_sort(int *arr, int len)
{
    int i, j;
    for(i = 0; i < len - 1; i++)
    {
        for(j = 0; j < len - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap_int(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap_int(int *a, int *b)
{
    int *tmp;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}
