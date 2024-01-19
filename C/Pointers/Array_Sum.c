#include<stdio.h>
int main(){
    int sum=0,arr[]={25,66,24,16,29,93,46,2};
    int *p;
    for (p = &arr[0];p<=&arr[7]; p++)
    {
        sum+=*p;
    }
    printf("The Sum is =%d",sum);
    return 0;

}