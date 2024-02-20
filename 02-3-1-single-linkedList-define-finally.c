#include<stdio.h>
#include<stdlib.h>

//宏定义一下，搞个布尔类型出来
#define BOOL int
#define TRUE 1
#define FALSE 0

/**
 * 不带头节点的单链表初始化，判空，获取指定位置元素
 * 
 * 
 * */

//定义链表结构体，作为链表的每一个节点的数据结构
typedef struct LNode
{
    //数据域，保存该节点的数据
    int data;
    //指针域，保存了下一个节点的地址
    struct LNode* next;
}LNode,*LinkList;

//获取表L中第i个位置的节点
LNode* GetElem(LinkList L,int i) {
    //根据传入i的范围来选择，小于零，非法，返回null
    if(i<0) {
        return NULL;
    } 
    //
    if(i==0) {
        return L;
    }
    int count = 1;
    while (L->next!=NULL)
    {
        if(count==i) {
            return L;
        }
        L = L->next;
        count++;
    }
}

//不带头节点的链表初始化
BOOL InitList(LinkList* L) {
    *L=NULL;
    return TRUE;
}

//返回0代表空，返回1代表不空
//判断单链表是否为空
BOOL Empty(LinkList L) {
    if(L==NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}
int main(int argc, char const *argv[])
{
    LinkList L;
    //由于初始化函数需要更改链表的值，因此应该传入该链表的地址
    InitList(&L);
    //这里打印看下初始化之后该单链表是否初始化成功
    printf("%p\n",L);
    printf("The LinkList is empty?: %d\n",Empty(L));
    printf("222233333333333333-----------------\n");
    system("pause");
    return 0;
}
