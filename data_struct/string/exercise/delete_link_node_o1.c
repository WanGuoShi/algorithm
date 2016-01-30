/*************************************************************************
	> File Name: delete_link_node_o1.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月30日 星期六 13时27分14秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Link
{
    Data data;
    struct Link *next;
} Link;

void delete_link_node_o1(Link *L, Link *p);
Link* get_link_node(Link *L, int index);
void print_link(Link *L);

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
    print_link(L1);
    Link *p = get_link_node(L1, 4);
    delete_link_node_o1(L1, p);
    print_link(L1);
    return 0;
}

void print_link(Link *L)
{
    printf("\n**************************\n");
    Link *tmp = L;
    while(NULL != tmp)
    {
        printf("%3d", tmp->data);
        tmp = tmp->next;
    }
}

Link* get_link_node(Link *L, int index)
{
    Link *tmp = L;
    int i;
    for(i = 0; i < index; i++)
    {
        tmp = tmp->next;
    }
    return tmp;
}

void delete_link_node_o1(Link *L, Link *p)
{
    //如果要删除的不是最后一个节点
    if(NULL == p->next)
    {
        p->data = p->next->data;
        Link *tmp = p->next;
        p->next = tmp->next;
        free(tmp);
    }
    else
    {
        Link *tmp = L;
        while(tmp->next != p)
        {
            tmp = tmp->next;
        }
        tmp->next = p->next;
        free(p);
    }
}
