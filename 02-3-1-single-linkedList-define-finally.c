#include<stdio.h>
#include<stdlib.h>

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

//获取给定链表中的第i个节点
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
int InitList(LinkList* L) {
    L=NULL;
    return 0;
}

//返回0代表空，返回1代表不空
//判断单链表是否为空
int Empty(LinkList L) {
    if(L==NULL) {
        return 0;
    } else {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    printf("222233333333333333-----------------\n");
    system("pause");
    return 0;
}