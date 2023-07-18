// Assignment 9 (Use of Any Loop)

// 8. Write a program to calculate whether a given number is prime or not.

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for ( i = 2; i <=x-1; i++){

        if (x%i==0){

            break;
        }
        
    }
    if (i==x-1)
    {
        printf("Prime Number");
    }
    else{
        printf("Not a Prime");
    }
    
        
    
    return 0;
}
*/

// 7. Write a program to Count digits in a given number.

/*
#include<stdio.h>
int main()
{
    int y,x,i=0;
    printf("Enter a Number\n");
    scanf("%d",&x);
    while (x!=0)
    {
        x=x/10;
        i++;
    }
    printf("%d",i);
return 0;
}
*/

// 9. Write a program to Calculate the LCM of two numbers.

/*
#include<stdio.h>
int main()
{
    int y=0,x,z;
    printf("Enter a Number\n");
    scanf("%d",&x);
    while (x!=0)
    {
        z=x%10;
        y=y*10+z;
        x=x/10;
    }
    printf("The Reverse Number is = %d",y);
    return 0;

}
*/

// 6. Calculate Factorial of a Numbers.

#include<stdio.h>
int main()
{
    int x,i,s;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for ( i = 1,s = 1; i <= x; i++)
    {
        s=s*i;
    }
    printf("The Factorial of %d is = %d",x,s);
    return 0;
}