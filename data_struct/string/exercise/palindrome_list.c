/*************************************************************************
	> File Name: palindrome_list.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年01月18日 星期一 11时30分22秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct list{
    Data data;
    struct list *next;
}*List;

int GetListLength(List L);
List ReverseList(List L);

int main(){
    List L, p;
    int i;
    List node = (List)malloc(sizeof(List));
    Data data = (Data)0;
    node->data = data;
    L = node;
    p = L;
    for(i = 1; i < 8; i++){
        List node = (List)malloc(sizeof(List));
        Data data = (Data)i;
        node->data = data;
        p->next = node;
        p = p->next;
    }
    p->next = 0;
    p = L;
    while(p->next != 0){
        printf("%3d",p->data); 
        p = p->next;
    } 
    printf("%3d",p->data); 

    //ReverseList
    printf("\n");
    ReverseList(L);
    p = L;
    while(p->next != 0){
        printf("%3d",p->data); 
        p = p->next;
    } 
    printf("%3d",p->data); 
    return 0;
}

List ReverseList(List L){
    int m = GetListLength(L);
    Data array[m];
    List tmp;
    int i = 0;
    tmp = L;
    while(tmp->next != 0){
        array[i++] = tmp->data;
        tmp = tmp->next;
    }
    array[m - 1] = tmp->data;
    tmp = L;
    i = m - 1;
    while(i >= 0){
        tmp->data = array[i];
        tmp = tmp->next;
        i--;
    }
}

int GetListLength(List L){
    List tmp = L;
    int length = 0;
    while(tmp->next != 0){
        length++;
        tmp = tmp->next;
    }
    return (length + 1);
}
