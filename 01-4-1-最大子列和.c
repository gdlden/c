// 给定n个整数的序列{a1,a2,...,an},求函数f(i,j)=max{0,累加ij}的最大值。即，求该序列中所有子序列中最大的和。

#include <stdio.h>
int MaxSubseqSum1(int list[],int n) {
    int max=0;
    //从头到尾进行遍历，得到每一个子列，并计算子列和
    for(int i = 0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int thisSum=0;
            for(int k=i;k<=j;k++) {
                thisSum += list[k];
            }
            if(thisSum>=max) {
                max = thisSum;
            }
        }
    }
    return max;
}

int MaxSubseqSum2(int list[],int n) {
    int thisSum=0 ;
    int max=0;
    for(int i=0;i<n;i++) {
        thisSum = 0;
        for(int j=i;j<n;j++) {
            thisSum += list[j];
            if(thisSum>=max) {
                max = thisSum;
            }
        }
    }
    return max;
}

// 分治
int Max3(int a,int b,int c) {
    return a>b ? a>c ?a:c:b>c?b:c;
}
int divideAndConquer(int list[],int left,int right) {
    int maxLeftSum;
    int maxRightSum;
    int maxLeftBoderSum;
    int maxRightBoderSum;

    int leftBoderSum;
    int rightBoderSum;
    int center;
    int i;

    if(left==right) {
        if(list[left]>0) {
            return list[left];
        } else {
        return 0;
        }
    }
    center = (left+right)/2;
    maxLeftSum = divideAndConquer(list,left,center);
    maxRightSum = divideAndConquer(list,center+1,right);
    
    maxLeftBoderSum = 0;
    leftBoderSum  = 0;
    for(i=center;i>=left;i--) {
        leftBoderSum += list[i];
        if(leftBoderSum>maxLeftBoderSum) {
            maxLeftBoderSum = leftBoderSum;
        }
    }
    maxRightBoderSum =0;
    rightBoderSum = 0;
    for(i=center+1;i<=right;i++) {
        rightBoderSum += list[i];
        if(rightBoderSum>maxRightBoderSum) {
            maxRightBoderSum = rightBoderSum;
        }
    }
    return Max3(maxLeftSum,maxRightSum,maxLeftBoderSum+maxRightBoderSum);

}
int MaxSubseqSum3(int list[],int n) {
    return divideAndConquer(list,0,n-1);
}

int MaxSubseqSum4(int list[],int n) {
    int i;
    int thisSum=0;
    int max=0;
    for(i=0;i<n;i++)  {
        thisSum += list[i];
        if(thisSum>max) {
            max=thisSum;
        } else if(thisSum<0){
            thisSum=0;
        }
    }
    return max;
}


int main() {
    int TESTNUM = 100000;
    int list[TESTNUM];
    for(int i=0;i<TESTNUM;i++) {
       if(i%2==0) {
         list[i]=i;
       } else {
       list[i]=-i;
       }
    }
    
    int res = MaxSubseqSum4(list,TESTNUM);
    printf("该序列的最大子列和是：%d",res);
    return 0;
}