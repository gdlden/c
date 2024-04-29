#include<stdio.h>
#include<stdlib.h>

typedef struct SNode *Stack;
typedef  int ElementType;
struct SNode {
    ElementType Data;
    struct SNode *Next;
};

int main(int argc, char const *argv[])
{
    
    typedef struct Duoxiangshi
    {

    };
    
    return 0;
}

Stack CreateStack() {
    Stack s;
    s = (Stack)malloc(sizeof(struct SNode));
    s->Next = NULL;
    return s;
}
int IsEmpty(Stack S) {
    return (S->Next == NULL);
}

// 入栈
void Push(ElementType item,Stack S) {
    // 申请内存
    struct SNode* tempNode;
    tempNode = (struct SNode*)malloc(sizeof(struct SNode));

    // 装入数据
    tempNode->Data = item;

    // 使用头插法将临时节点插入栈顶

    // 注意：防止数据丢失，先将原来数据保存
    tempNode->Next = S->Next;
    S->Next = tempNode;
}

// 弹栈
ElementType Pop(Stack S) {
    // 删除第一个元素并且返回第一个元素的数据
    struct SNode* firstCell;
    ElementType TopElem;
    if(IsEmpty(S)) {
        printf("堆栈空");
        return NULL;
    } else {
        firstCell = S->Next;
        S->Next = firstCell->Next;
        TopElem = firstCell->Data;
        free(firstCell);
        return TopElem;
    }
}


