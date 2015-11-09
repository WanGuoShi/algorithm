/*************************************************************************
  > File Name: sqList.c
  > Author: daemon
  > Mail: 1182248598@qq.com
  > Created Time: 2015年11月09日 星期一 19时48分42秒
 ************************************************************************/
#include<stdlib.h>
#include"sqList.h"
struct _sqList
{
    listValue data;
    int length;
    int listSize;
};
