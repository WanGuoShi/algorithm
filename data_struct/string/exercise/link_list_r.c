/*************************************************************************
	> File Name: link_list_r.c

	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月15日 星期五 19时44分55秒
 ************************************************************************/

/*
 * 链表反转:
 * 给出一个链表和一个数k，比如，链表为1→2→3→4→5→6，k=2，则翻转后
 * 2→1→6→5→4→3，若k=3，翻转后3→2→1→6→5→4，若k=4，翻转后4→3→2→1→6→5，用程序实现
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

typedef node* linkList;

void LeftRotateList(linkList L, int n, int k);
void ReverseList(linkList L, int from, int to);
linkList GetNode(linkList L, int index);

int main()
{
    int i, n = 6;
    linkList L, p;
    node* tmp = (node*)malloc(sizeof(node));
    tmp->data = 0;
    L=tmp;
    p=L;
    for(i = 1; i <= n; i++){
        node* tmp = (node*)malloc(sizeof(node));
        tmp->data = i;
        p->next = tmp;
        p = p->next;
    }

    //print list
    printf("List:");
    p=L->next;
    for(i = 1; i <= n; i++){
        printf("%3d", p->data);
        p = p->next;
    }
    LeftRotateList(L, 6, 2);
    printf("\nReverse 2:");
    p=L->next;
    for(i = 1; i <= n; i++){
        printf("%3d", p->data);
        p = p->next;
    }
    return 0;
}

void LeftRotateList(linkList L, int n, int k){
    ReverseList(L, 1, k);
    ReverseList(L, k + 1, n);
}

void ReverseList(linkList L, int from, int to){
    linkList From, To, tmp;
    tmp = (linkList)malloc(sizeof(linkList));
    while(from < to){
        From = GetNode(L, from++);
        To = GetNode(L, to--);
        //swap data
        tmp->data = From->data;
        From->data = To->data;
        To->data = tmp->data;
    }
}

linkList GetNode(linkList L, int index){
    linkList l; 
    l = L;
    while(index--)
    {
       l = l->next; 
    }
    return l;
}
