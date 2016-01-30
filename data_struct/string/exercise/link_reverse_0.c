/*************************************************************************
	> File Name: link_reverse_0.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月30日 星期六 11时58分01秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Link
{
    Data data;
    struct Link *next;
} Link;

void reverse_link(Link *L);

int main(int argc, char *argv[])
{
    Link *L1;
    L1 = (Link*)malloc(sizeof(Link));
    L1->data = 9;
    L1->next = NULL;
    for(int i = 8; i > 0; i--)
    {
        Link *node1 = (Link*)malloc(sizeof(Link));
        node1->data = i;
        node1->next = L1;
        L1 = node1;
    }
    reverse_link(L1);
    return 0;
}

void reverse_link(Link *L)
{
    if(NULL == L)
    {
        return;
    }
    else
    {
        reverse_link(L->next);
    }
    printf("%3d", L->data);
}

