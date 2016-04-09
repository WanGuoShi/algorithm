/*************************************************************************
	> File Name: is_palindrome.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月18日 星期一 11时10分33秒
 ************************************************************************/

/*
 * 回文判断
 *
 * 题目描述：
 *     回文,英文palindrome,指一个顺着读和反过来读都一样的字符串,比如madam、我爱我,这样的短句
 *     在智力性、趣味性和艺术性上都颇有特色,中国历史上还有很多有趣的回文诗。
 *     那么,我们的第一个问题就是:判断一个字串是否是回文?
*/

int is_palindrome(const char *s, int n)
{
    if(s == 0 || n < 1)
    {
        return 0;
    }
    const char *first, *second;
    int m = ((n >> 1)-1) > 0 ? ((n >> 1) - 1) : 0;
    first = s + m;
    second = s + n - 1 - m;
    while(first > s)
    {
        if(*first != *second)
        {
            return 0;
        }
        first--;
        second++;
    }
    return 1;
}
