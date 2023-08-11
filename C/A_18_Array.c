// 1. Write a program to calculate the sum of numbers stored in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,s=0,a[10];
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        s=s+a[i];
    }
    printf("The Sum of all numbers is = %d",s);
    
    return 0;
}


// 2. Write a program to calculate the Average of numbers stored in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,s=0,a[10];
    float avg;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        s=s+a[i];
        avg=s/10.0;
    }
    printf("The Sum of all numbers is = %0.2f",avg);
    
    return 0;
}