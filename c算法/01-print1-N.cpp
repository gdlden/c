#include<iostream>
#include<stdio.h>
using namespace std;

void PrintN(int N);
void PrintNDigui(int N);
int main() {
    int N;
    scanf("%d",&N);
    // PrintN(N);
    PrintNDigui(N);
    return 0;
}
void PrintN(int N) {
    for(int i=1;i<=N;i++) {
        printf("%d\n",i);
    }
}


void PrintNDigui(int N) {
    if(N) {
        PrintNDigui(N-1);
        printf("%d\n",N);
    }
    return;
}