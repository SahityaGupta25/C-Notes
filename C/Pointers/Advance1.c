#include<stdio.h>
int main(){
    const int a=-11;
    int *p=&a;
    *p=25;
    printf("%d",*p);
    return 0 ;
}