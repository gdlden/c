#include <stdio.h>
#include <stdlib.h>

#define InitSize 10
typedef struct 
{
    /* data */
    int *date;
    int MaxSize;
    int length;
}SeqList;

void InitList(SeqList *L) {
    L->date = (int *)malloc(InitSize*sizeof(int));
    L->length = 0;
    L->MaxSize = InitSize;
}
void IncreaseSize(SeqList *L,int len) {
    int* p = L->date;
    L->date = (int*)malloc((L->length+len)*sizeof(int));
    for (int i = 0; i < L->length; i++)
    {
        L->date[i] = p[i];
    }
    L->MaxSize = L->MaxSize+len;
    free(p);
}
int main(int argc, char const *argv[])
{
    SeqList L;
    InitList(&L);
    printf("初始化后L的最大容量是：%d\n",L.MaxSize);
    IncreaseSize(&L,5);
    printf("扩容后L的最大容量:%d\n",L.MaxSize);
    /* code */
    return 0;
}

