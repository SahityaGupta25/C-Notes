// 5. Write a C program to find the factorial of a given integer number using
// non-recursive functions.
#include<stdio.h>
int main (){
    int num , product = 1, i ;
    printf("Enter a number = ");
    scanf("%d",&num);
    for ( i = 2; i <num+1; i++)
    {
        product *= i;
    }
    printf("The Factorial of %d is = %d",num,product);

    return 0;
}

//Recursive function
#include<stdio.h>
int main (){
    int num;
    printf("Enter a number of which you want to calculate factorial = ");
    scanf("%d",&num)

    return 0;
}

