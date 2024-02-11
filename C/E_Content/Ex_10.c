// 10. Write a C Program – using pointers To Swap the Values of Two Variables.
#include<stdio.h>
#include<string.h>
int main(){
    int x,y,*a=&x,*b=&y,c;
    printf("Enter the values of x & y = ");
    scanf("%d %d",&x,&y);
    c=*b;
    *b=*a;
    *a=c;
    printf("Swapped values are = %d %d",x,y); 

    return 0;
}