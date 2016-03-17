/*************************************************************************
	> File Name: quick_sort.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年03月17日 星期四 20时41分23秒
 ************************************************************************/

typedef struct _Range
{
    int start,end;
} Range;

Range new_Range(int s, int e);
void swap(int *x, int *y);
void quick_sort(int arr[], const int len);

#include <stdio.h>

int main(int argc, char *argv[])
{
    int arr[] = {2, 4, 9, 34, 2, 45, 1, 3, 5, 45};
    quick_sort(arr, 10);
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%-3d",arr[i]);
    }
    printf("\n");
    return 0;
}

void quick_sort(int arr[], const int len)
{
    if (len <= 0)
        return;

    // r[]模拟堆栈，p为数量，r[p++]为push，r[--p]为pop且取得元素
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p)
    {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        int mid = arr[range.end];
        int left = range.start, right = range.end - 1;
        while (left < right)
        {
            while (arr[left] < mid && left < right)
                left++;
            while (arr[right] >= mid && left < right)
                right--;
            swap(&arr[left], &arr[right]);
        }
        if (arr[left] >= arr[range.end])
            swap(&arr[left], &arr[range.end]);
        else
            left++;
        r[p++] = new_Range(range.start, left - 1);
        r[p++] = new_Range(left + 1, range.end);
    }
}

Range new_Range(int s, int e)
{
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

