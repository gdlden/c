#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define MAXK 1e7
clock_t start,stop;
double duration;
void myFunc();
int main(int argc, char const *argv[])
{
    start = clock();
    for (int i = 0; i < MAXK; i++)
    {
        myFunc();
        /* code */
    }
    stop = clock();
    duration = (stop-start)/CLK_TCK/MAXK; /*函数单次运行的时间*/
    printf("ticks1 = %f\n",(double)(stop-start));
    printf("duration1 = %6.2e\n",duration);
    

    return 0;
}
void myFunc() {
    ;
}
