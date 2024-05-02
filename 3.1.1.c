#include "MyHeadFile.h"
#define MAXSIZE 100
typedef struct LNode* List;
struct LNode {
    ElementType Element[MAXSIZE];
    int Length;
};

// 顺序查找
int SequentialSearch(List tbl, ElementType k)
{
    int i;
    tbl->Element[0] = k;
    for (i = tbl->Length; tbl->Element[i]!=k; i--) ;
    return i;
}

// 二分查找
int BinarySearch(List Tbl,ElementType K) {
    int left,right,mid,NoFound = -1;

    left = 1;
    right = Tbl->Length;
    while (left<=right) {
        mid = (left+right)/2;
        if(K<Tbl->Element[mid]) {
            right = mid-1;
        } else if(K>Tbl->Element[mid]) {
            left = mid+1;
        } else {
        return mid;
        }
    }
    return NoFound;
}
int main(int argc, char const* argv[]) { 
    List li = (struct LNode*)malloc(sizeof(struct LNode));
    for (int i = 0; i<MAXSIZE; i++) {
        li->Element[i] = i;
    }
    li->Length = MAXSIZE;
    // printf("%d",li->Length);
    // int res = SequentialSearch(li,11);
    int res = BinarySearch(li,14);
    printf("%d",res);
    return 0; 
}
