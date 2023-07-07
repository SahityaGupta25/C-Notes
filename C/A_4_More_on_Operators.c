// 1.Write a program to input three digit number and display the sum of the digits.
#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a three digit number = ");
    scanf("%d",&a);
    printf("First digit = %d\n",a/100);
    printf("Middle digit = %d\n",a/10%10);
    printf("Last digit = %d\n",a%10);
    printf("Sum of these three digits is = %d",(a/100)+(a/10%10)+(a%10));
    return 0;
}

// 2.Write program to find ASCII code of the character '+'.

/*
#include<stdio.h>
main()
{
    char a='+';
    printf("The ASCII code of '+' is = %d",a);
    return 0; 
}
*/