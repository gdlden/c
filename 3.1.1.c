#include "MyHeadFile.h"
#include <cstdio>
#include <cstdlib>
#define MAXSIZE 100
typedef struct LNode* List;
struct LNode {
    ElementType Element[MAXSIZE];
    int Length;
};

// 顺序查找
int SequentialSearch(List tbl, ElementType k)
{
    for (int i = tbl->Length; i >= 0; i--) {
        if (tbl->Element[i] == k)
            return i;
    }
}
int main(int argc, char const* argv[]) { 
    List li = (List)malloc(sizeof(List));
    int res = SequentialSearch(li,2);
    printf("%d",res);
    return 0; 
    
}
