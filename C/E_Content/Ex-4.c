// 4. Write a C Program - using if else statements, to find the largest number
// among the given two integer numbers.

#include<stdio.h>
int main(){
   int a , b;
    printf("\nEnter a First Number = ");
    scanf("%d",&a);
    printf("\nEnter a Second Number = ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
    
    return 0;

}