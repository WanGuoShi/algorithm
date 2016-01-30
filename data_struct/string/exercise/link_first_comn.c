/*************************************************************************
	> File Name: link_first_comn.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月30日 星期六 14时09分55秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Link
{
    Data data;
    struct Link *next;
} Link;

Link* first_comn_node(Link *L1, Link *L2);
int get_Link_length(Link *L);
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
    Link *La = L1;
    Link *Lb = L1;

    for(int i = 10; i < 19; i++)
    {
        Link *node1 = (Link*)malloc(sizeof(Link));
        node1->data = i;
        node1->next = La;
        La = node1;
    }
    for(int i = 11; i < 30; i++)
    {
        Link *node1 = (Link*)malloc(sizeof(Link));
        node1->data = i;
        node1->next = Lb;
        Lb = node1;
    }
    print_link(La);
    print_link(Lb);
    Link *p = first_comn_node(La, Lb);
    print_link(p);
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

int get_Link_length(Link *L)
{
    Link *tmp = L;
    int length = 0;
    while(NULL != tmp){
        tmp = tmp->next;
        length++;
    }
    return length;
}

Link* first_comn_node(Link *L1, Link *L2)
{
    int length1 = get_Link_length(L1);
    int length2 = get_Link_length(L2);
    int diff_length;

    Link *longLink, *shortLink;
    if(length1 > length2){
        diff_length = length1 - length2;
        longLink = L1;
        shortLink = L2;
    }else{
        diff_length = length2 - length1;
        longLink = L2;
        shortLink = L1;
    }

    int i;
    for(i = 0; i < diff_length; i++){
        longLink = longLink->next;
    }

    while((NULL != longLink) && (NULL != shortLink) && (longLink != shortLink))
    {
        longLink = longLink->next;
        shortLink = shortLink->next;
    }
    if(longLink == shortLink){
        return longLink;
    }
    return NULL;
}
