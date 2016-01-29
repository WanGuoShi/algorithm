/*************************************************************************
	> File Name: link_intersect.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月29日 星期五 11时21分30秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Link{
    Data data;
    struct Link *next;
}Link;

Link* linkIntersect(Link *L1, Link *L2);

int main(int argc, char *argv[])
{
    Link *L1, *L2;
    L1 = (Link*)malloc(sizeof(Link));
    L2 = (Link*)malloc(sizeof(Link));
    L1->data = 0;
    L1->next = NULL;
    L2->data = 0;
    L2->next = NULL;
    for(int i = 0; i < 8; i++){
        Link *node1 = (Link*)malloc(sizeof(Link));
        Link *node2 = (Link*)malloc(sizeof(Link));
        node1->data = i + 1;
        node1->next = L1;
        L1 = node1;
        node2->data = i + 1;
        node2->next = L2;
        L2 = node2;
    }
    Link *tmp = linkIntersect(L1, L2);
    if(tmp != NULL){
        printf("L1 and L2 intersect in %d", tmp->data);
    }else{
        printf("L1 and L2 don't intersect.");
    }
    return 0;
}

Link* linkIntersect(Link *L1, Link *L2){
    Link *l1 = L1;
    Link *l2 = L2;

    while(l1 != NULL && l2 != NULL){
        if(l1 == l2){
            return l1;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return NULL;
}
