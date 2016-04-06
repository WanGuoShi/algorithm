/*************************************************************************
	> File Name: rotating_string
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月14日 星期四 15时24分18秒
    > Modified Time: 2016年4月6日 星期三 15时48分
 ************************************************************************/

/*
题目描述:
给定一个字符串，要求把字符串前面的若干个字符移动到字符串的尾部，如把字符串
"abcdef"前面的2个字符'a'和'b'移动到字符串的尾部，使得原字符串变成字符串
"cdefab"。请写一个函数完成此功能，要求对长度为n的字符串操作的时间复杂度为
O(n)，空间复杂度为 O(1)。
*/


static void reverse_string(char *s, int from, int to)
{
    char t;
    while(from < to)
    {
        t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

/*
 * 三步反转法
 *
 * 输入：
 *      字符串s，字符串长度n，反转位数m
 *
 * 输出：
 *      无
 */
void left_rotate_string(char *s, int n, int m)
{
    m %= n;         //m>n
    reverse_string(s, 0, m-1);
    reverse_string(s, m, n-1);
    reverse_string(s, 0, n-1);
}
