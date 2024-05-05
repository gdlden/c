#include<math.h>
#include<stdio.h>
#include <time.h>
// 计算多项式函数值
// f(x)=a0+a1*x+a2*x^2+...+an-1*xn-1+anxn
// 多项式的系数放在数组a中，阶数n。

clock_t start,stop;
double duaration;
#define MAXN 100
#define MAXK 1e7

//方法一，直接计算
double f1(int n,double a[],int x) {
    double p = a[0];
    for (int i=1; i<=n; i++) {
        p += a[i] * pow(x,i);
    }
    return p;
}

// 方法二：秦九韶法（提公因式）
// 此算法看着有点像是递推法
double f2(int n,double a[],int x) {
    double p = a[n];
    for (int i=n; i>0; i--) {
        p = a[i-1] + x * p;
    }
    return p;
}
void run(double(* f)(int,double* ,double),double a[],int case_n) {
    int i;
    
    start = clock();
    for(i=0;i<MAXK;i++) {
        (*f)(MAXN-1,a,1.1);
    }
    stop = clock();
    duaration = ((double)stop-start)/CLK_TCK/MAXK;
    printf("ticks%d=%f\n",case_n,(double)(stop-start));
    printf("duartion%d=%6.2e\n",case_n,duaration);
}
int main() {
    int i;
    double a[MAXN];
    for(i=0;i<MAXN;i++) {
        a[i] = (double)i;
    }
    run(f1,a,1);
    run(f2,a,2);
    return 0;
}