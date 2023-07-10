// 1.Write a program to check whether given number is a three digit or not.

/*
#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter first (a) number\n");
    scanf("%d",&a);
    printf("Enter Second (b) number\n");
    scanf("%d",&b);
    printf("Enter Third (c) number\n");
    scanf("%d",&c);
    if (a>b && b>c)
    {
        printf("a = %d is greater",a);
    }
    else if (b>a && b>c)
    {
        printf("b = %d is greater",b);
    }
    else{
        printf("c = %d is greater",c);
    }

    return 0;
}
*/

/*
// 2. Write a program which takes cost price & selling price of a product from the user. Now calculate  & print profit or loss percentage.


#include <stdio.h>
main()
{
    float cost,sell,price;
    printf("Enter Cost Price\n");
    scanf("%f",&cost);
    printf("Enter Selling Price\n");
    scanf("%f",&sell);
    price=sell-cost;
    if (sell>cost)
    {
        printf("Profit = %f%%",(price/cost)*100);
    }
    else{
        printf("Loss = %f%%",(price/cost)*100);
    }
    return 0;


}
*/

// 3.Write a program to take marks of 5 Subjects from the user . Assume marks are given out of 100 & passing is 33 . Now display whether the candidate passed the examination or failed.

/*
#include <stdio.h>
main()
{
    int a,b,c,d,e,marks;
    printf("Enter marks of first subject\n");
    scanf("%d",&a);
    printf("Enter marks of second subject\n");
    scanf("%d",&b);
    printf("Enter marks of third subject\n");
    scanf("%d",&c);
    printf("Enter marks of fourth subject\n");
    scanf("%d",&d);
    printf("Enter marks of fifth subject\n");
    scanf("%d",&e);
    marks=(a+b+c+d+e)/100*100;
    printf("%d",marks);
    if (marks>=33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
*/


// 4. Write a program to check whether a given alphbet is in uppercase or lowercase.

/*
#include <stdio.h>
main()
{
    char a;
    printf("Enter a single alphabet\n");
    scanf("%c",&a);
    if (a>=65 && a<=90)
    {
        printf("Upper Case");
    }
    else if (a>=97 && a<=122)
    {
        printf("Lower Case");
    }
    else{
        printf("Enter an Alphabet");
    }
    return 0;
}
*/

// 5. Write a program to check whether a given number is divisible by 2 and 3.

/*
#include <stdio.h>
main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if (a%2==0 && a%3==0)
    {
        printf("Divisible by 2 & 3");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}
*/

// 6. Write a program to check whether a given number is divisible by 7 or 3.

#include <stdio.h>
main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if (a%3==0 )
    {
        printf("Divisible by 3");
    }
    else if (a%7==0)
    {
       printf("Divisible by 7");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}