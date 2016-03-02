/*************************************************************************
	> File Name: two_sum.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年03月02日 星期三 21时53分56秒
 ************************************************************************/

#include<stdio.h>

void two_sum(int data[], unsigned int length, int sum);

int main(int argc, char *argv[])
{
    int data[] = {1, 2, 4, 7, 8, 11, 15};
    two_sum(data, 6, 12);
    return 0;
}

/*
 * 寻找和为定值的两个数
 * 参数：
 *      data[] -- 输入数组
 *      length -- 数组长度
 *      sum    -- 定值
 * 注释：
 *      本函数假定数组已排序（升序）
 */
void two_sum(int data[], unsigned int length, int sum)
{
    int begin = 0;
    int end = length - 1;
    int csum;
    
    // 两头夹逼法
    while(begin < end)
    {
        csum = data[begin] + data[end];
        if(csum == sum)
        {
            printf("%d + %d = %d\n", data[begin], data[end], sum);

            // 找出所有满足条件的项
            begin++;
            end--;
        }
        else
        {
            if(csum < sum)
            {
                begin++;
            }
            else
            {
                end--;
            }
        }
    }
}
