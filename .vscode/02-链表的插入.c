#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

int ListInsert(LinkList *L,int i,int e) {
    if(i<1)
        return 1;
    LNode *p;
    int j = 0;
    p = L;
    while (p!=NULL && j<i-1)
    {
        p=p->next;
        j++;
    }
    if(p==Null)
        return 1;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
        return 0;
    

}