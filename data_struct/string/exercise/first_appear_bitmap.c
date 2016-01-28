/*************************************************************************
	> File Name: first_appear_bitmap.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月28日 星期四 13时51分32秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define SHIFT_FOUR(ch)  ch >> 4
#define MASK_0xf(ch)    ((ch & 0xf) << 1)

int firstAppearChar(char *s);

int main(int argc, char *argv[])
{
    char s[] = "123412";
    int k;
    k = firstAppearChar(s);
    if(k >= 0)
    {
        printf("%s firstAppearChar is %c", s, s[k]);
    }
    else
    {
        printf("%s don't have firstAppearChar", s);
    }
    return 0;
}

//采用2-bit整形数存储字符串出现的次数，00没有,01出现一次,11两次以上
int firstAppearChar(char *s)
{
    if(s == NULL)
    {
        return -1;
    }
    int len = strlen(s);
    int bitmap[16];
    //set bitmap zero
    int i;
    char ch;
    for(i = 0; i < len; i++)
    {
        ch = s[i];
        if(ch < 0)
        {
            ch += 256;
        }
        bitmap[SHIFT_FOUR(ch)] &= ~(1 << MASK_0xf(ch));
        bitmap[SHIFT_FOUR(ch)] &= ~(1 << (MASK_0xf(ch) + 1));
    }

    //set bitmap value, 00, 01, 11
    for(i = 0; i < len; i++)
    {
        ch = s[i];
        if(ch < 0)
        {
            ch += 256;
        }
        if(bitmap[SHIFT_FOUR(ch)] & (1 << (MASK_0xf(ch) + 1)))
        {
            bitmap[SHIFT_FOUR(ch)] |= 1 << MASK_0xf(ch);
        }
        else
        {
            bitmap[SHIFT_FOUR(ch)] |= 1 << (MASK_0xf(ch) + 1);
        }
    }

    //find the index of char
    for(i = 0; i < len; i++)
    {
        ch = s[i];
        if(ch < 0)
        {
            ch += 256;
        }
        if(bitmap[SHIFT_FOUR(ch)] & (1 << (MASK_0xf(ch) + 1)))
        {
            if(bitmap[SHIFT_FOUR(ch)] & (1 << MASK_0xf(ch)))
            {

            }
            else
            {
                return i;
            }
        }
    }
    return -1;
}
