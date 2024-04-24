#include<stdio.h>

//冒泡排序
int main(int argc, char const *argv[])
{
    int arr[10] = {2,2,99,97,98,0,90,100,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i= 0;i<len;i++){
       for (int j = 0; j < len-i-1; j++)
       {
         if(arr[j]>arr[j+1]) {
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
        }
    
       }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",arr[i]);

    }
    

    return 0;
}
