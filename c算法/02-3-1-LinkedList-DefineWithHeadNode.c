#include<stdio.h>
#include<stdlib.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

typedef struct LNode
{
    int data;
    struct LNode* next;
}LNode,*LinkList;


//初始化带头节点的单链表
BOOL InitList(LNode* L) {
    //生成头节点
    L = (LNode*)malloc(sizeof(LNode));
    if(L==NULL) {
        return FALSE;
    }
    L->next = NULL;
    return TRUE;
}

//看链表是否为空链表
BOOL Empty(LNode L) {
    return L.next==NULL?TRUE:FALSE;
}

int main(int argc, char const *argv[])
{
    //该指针保存的是头节点的地址
    LNode L;
    //初始化
    InitList(&L);
    printf("After Init:%p",L);
    return 0;
}

