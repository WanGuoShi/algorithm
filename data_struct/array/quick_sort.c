/*************************************************************************
	> File Name: quick_sort.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年02月19日 星期五 12时59分45秒
 ************************************************************************/

#include <stdio.h>

void quick_sort(int ch[], int left, int right);

int main(int argc, char *argv[])
{
    int ch[] = {98, 45, 23, 100, 12, 34, 120, 12, 32, 110, 97, 8};
    int i = 0;
    printf("source input:");
    while(i < 12)
    {
        printf("%4d",ch[i]);
        i++;
    }
    printf("\n");
    quick_sort(ch, 0, 11);
    i = 0;
    printf("sorted output:");
    while(i < 12)
    {
        printf("%4d",ch[i]);
        i++;
    }
    printf("\n");
    return 0;
}

void quick_sort(int ch[], int left, int right)
{
    if(left < right)
    {
        int i, j;
        int x;

        i = left;
        j = right;
        x = ch[i];

        while(i < j)
        {
            // 从右向左扫描，寻找比基数x小位置，然后进行交换
            while(i < j && ch[j] >= x)
            {
                j--;
            }
            if(i < j)
            {
                ch[i++] = ch[j];
            }

            // 从左向右扫描，寻找比基数x大位置，然后进行交换
            while(i < j && ch[i] <= x)
            {
                i++;
            }
            if(i < j)
            {
                ch[j--] = ch[i];
            }
        }
        ch[i] = x;
        quick_sort(ch, left, i - 1);
        quick_sort(ch, i + 1, right);
    }
}
