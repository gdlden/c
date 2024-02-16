#include<stdio.h>
#include<stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;   
}LNode,*LinkList;

int InitList(LinkList *L ) {
    L = (LNode*)malloc(sizeof(LNode));

    if(L==NULL)
        return 1;
    (*L)->next = NULL;
    return 0;
}
int main(int argc, char const *argv[])
{
    
    printf("test\n");
    return 0;
}

