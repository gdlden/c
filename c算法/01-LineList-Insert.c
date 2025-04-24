#include <stdio.h>
#include <stdlib.h>

#define InitSize 10
#define size 5
typedef struct
{
    int *data;
    int length;
    int MaxSize;
} SeqList;

// 线性表初始化
void InitList(SeqList *L)
{
    L->data = (int *)malloc(InitSize * sizeof(int));
    L->length = 0;
    L->MaxSize = InitSize;
}

// 线性表扩容
void IncreaseList(SeqList *p, int len)
{
    int *p2 = p->data;
    p->data = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < p->length; i++)
    {
        p->data[i] = p2[i];
    }
    p->MaxSize = p->MaxSize + len;
    free(p2);
}
//插入元素
int insertList(SeqList *L, int loc, int e)
{
    if (loc < 1 || loc > L->length + 1)
        return 1;
    //顺序表已经满了，就不能新增了
    if (L->length >= L->MaxSize)
        return 1;
    //被插入位置以后的元素往后移动一个位置
    for (int i = L->length; i>=loc; i--)
    {
        L->data[i] = L->data[i-1];
    }
    L->data[loc-1] = e;
    L->length++;
    return 0;    
}
//删除,删除失败返回1，删除成功返回1，并且e作为被删除的元素被返回
int deleteList(SeqList *L,int loc,int* e) {
    //要删除元素的位置如果不在顺序表的位置范围返回删除失败
    if(loc < 1 || loc>L->length ) {
        return 1;
    }
    *e = L->data[loc-1];
    for (int i = loc; i < L->length; i++)
    {
        L->data[i] = L->data[i+1];
    }
    L->length--;
    return 0;
}

int main(int argc, char const *argv[])
{
    SeqList L;
    InitList(&L);
    printf("扩容前的容量是多少呢：%d,长度是：%d\n", L.MaxSize, L.length);
    IncreaseList(&L, size);
    printf("扩容后的容量是：%d,长度是：%d\n", L.MaxSize, L.length);
    
    //测试新增
    int res = insertList(&L,1,2);
    printf("新增元素的结果是：%d\n",res);

    printf("----新增完成，看一下-----\n");
    for (int i = 0; i < L.MaxSize; i++)
    {
        printf("%d:%d\n",i,L.data[i]);
    }

    //初始化顺序表，为删除测试做准备
    for (int i = 0; i < 10; i++)
    {
        insertList(&L,i,i);
    }

    printf("--------都有数据了，看一下--------\n");
    for ( int i = 0; i < L.MaxSize; i++)
    {
        printf("%d:%d\n",i,L.data[i]);
    }
    //测试删除
    int e = -1;
    res = deleteList(&L,7,&e);
    printf("删除结果是：%d,e的值为：%d\n",res,e);
    //打印结果
    printf("---------删除了，看一下-------------\n");
    for ( int i = 0; i < L.MaxSize; i++)
    {
        printf("%d:222333%d\n",i,L.data[i]);
    }

    return 0;
}
