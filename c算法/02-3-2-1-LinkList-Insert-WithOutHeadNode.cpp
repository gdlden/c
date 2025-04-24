#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define BOOL int
#define TRUE 1
#define FALSE 0

/** 
 *  不带头节点的链表插入
 * 虽然能跑，但是第一个元素没有插入成功，不知道是怎么回事
*/

// 链表定义
typedef struct LNode
{
    int data;
    struct LNode* next;
}LNode,*LinkList;

// 链表初始化
BOOL InitList(LNode* list) {
    list = NULL;
    return TRUE;
}

BOOL ListInsert(LNode* list,int posion,int data) {
    if(posion<1) {
        return FALSE;
    }
    if(posion==1) {
        LNode* s = (LNode*)malloc(sizeof(LNode));
        s->data = data;
        s->next = list;
        list = s;
        return TRUE;
    }
    LNode* c;
    int count=1;
    c = list;
    while (c != NULL && count<posion-1)
    {
        c = c->next;
        count++;
    }
    LNode* temp = (LNode*)malloc(sizeof(LNode));
    temp->data = data;
    temp->next = c->next;
    c->next = temp;
    return TRUE;
}

int main() {
    LNode L;
    InitList(&L);
    ListInsert(&L,1,1);
    ListInsert(&L,2,2);
    ListInsert(&L,3,4);
    printf("%d",L.data);
    
}