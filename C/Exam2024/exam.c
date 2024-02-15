// 1. Write a C program to find the sum of individual digits of a positive integer.
#include<stdio.h>
int main(){
    int arr[10],i;
    int sum=0;
    printf("Enter 5 Numbers\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
      
        
        sum=sum+arr[i];

    }
    printf("Sum = %d",sum);

    
    return 0;
}

