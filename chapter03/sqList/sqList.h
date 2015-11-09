/*************************************************************************
> File Name: sqList.h
> Author: daemon
> Mail: 1182248598@qq.com
> Created Time: 2015年11月09日 星期一 19时42分16秒
************************************************************************/

#ifndef _SQLIST_H
#define _SQLIST_H

/**
* 线性表的顺序实习
*/

    typedef struct _sqList sqList;

    typedef void  *listValue;
    
    typedef ((void*)0) LIST_NULL;
    
    int initList(sqList &l);
    int destroyList(sqList &l);
    int clearList(sqList &l);
    int listEmpty(sqList l);
    int listLength(sqList l);
    listValue getElem(sqList l,int i);
#endif
