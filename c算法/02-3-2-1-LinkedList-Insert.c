#include<stdio.h>
#include<stdlib.h>
/**
 * 
 * 带头节点的链表的插入
*/
#define BOOL int
#define TRUE 1
#define FALSE 0

// 链表结构体定义
typedef struct LNode
{
    int data;
    struct LNode* next;
    
}LNode,*LinkList;


// 链表初始化(带头结点)
BOOL InitList(LNode* list) {
    list = (LNode*)malloc(sizeof(LNode));
    if(list==NULL) {
        return FALSE;
    }
    list->next=NULL;
    list->data = NULL;
    return TRUE;
}

// 插入节点
BOOL ListInsert(LNode* list,int posion,int data) {
    if(posion<1) {
        return FALSE;
    }
    LNode* p;
    p=list;
    int index = 0;
    while(p!=NULL && index<posion-1) {
        p = p->next;
        index++;
    }
    if(p==NULL) {
        return FALSE;
    }
    LNode* c = (LNode*) malloc(sizeof(LNode));
    c->data = data;
    c->next = p->next;
    p->next = c;
    return TRUE;

}


int main() {
    LNode list;
    InitList(&list);
    ListInsert(&list,1,3);
    ListInsert(&list,2,4);
    printf("%d",list.next->next->data);
    

    return 0;
}