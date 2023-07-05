// 1. Calculate the Average of Three Numbers (Integers) given by the User.

/* #include<stdio.h>

main()
{
    int a,b,c;
    printf("Enter Value of a = ");
    scanf("%d",&a);
    printf("Enter Value of b = ");
    scanf("%d",&b);
    printf("Enter Value of c = ");
    scanf("%d",&c);
    printf("The average of these numbers are = %d",(a+b+c)/3);
    return 0;
}

// 2. Write a Program to calculate the circumference of circle.


#include<stdio.h>

main()
{
    int p=3.14,r;
    printf("Enter the value of radius");
    scanf("%d",&r);
    printf("The Circumference of circle is = %d",2*p*r);
}

// 3. Write a Program to calculate Simple Intrest

#include<stdio.h>

main()
{
    int p,r,t;
    printf("Enter Value of Principal = ");
    scanf("%d",&p);
    printf("Enter Value of Rate = ");
    scanf("%d",&r);
    printf("Enter Value of Time = ");
    scanf("%d",&t);
    printf("The Simple Intrest is = %d",(p*r*t)/100);
}

// 4. Write a Program to calculate volume of cuboid.
#include<stdio.h>

main()
{
    int l,b,h;
    printf("Enter Length = ");
    scanf("%d",&l);
    printf("Enter Breadth = ");
    scanf("%d",&b);
    printf("Enter Height = ");
    scanf("%d",&h);
    printf("The Volume of Cuboid is = %d",l*b*h);
    return 0;
}


// 5. Write a Program to ask a user about the cost price and selling price banana per dozen . Calculate profit earned upon selling 25 bananas.

#include<stdio.h>

main()
{
    float cost,sell,margin;
    printf("Enter the Cost Price of 12 Bananas = ");
    scanf("%f",&cost);
    printf("Enter the Sale Price of 12 Bananas = ");
    scanf("%f",&sell);
    margin=(sell-cost)*25/12;
    printf("The Profit We Earned upon Selling 25 bananas is = %f",margin);
    return 0;
}

// 6. Write a program to input a character from the user and print the ASCII code.
#include <stdio.h>
main()
{
    char x;
    printf("Enter a character");
    scanf("%c",&x);
    
     printf("The Character you entered is %c ",x);
     printf("and it\'s ASCII Code is = %d",x);
    return 0;



}


// 7. Write a Program to Print the ASCII Code from the user and print it's corresponding character.

   #include <stdio.h>
main()
{
    int x;
    printf("Enter a Number(ASCII)");
    scanf("%d",&x);
    
     printf("The Number(ASCII) you entered is %d ",x);
     printf("and it\'s Character Code is = %c",x);
    return 0;



} */


// 8. Write a Program to input three characters from user and print  their corresponding Number(ASCII).



#include <stdio.h>
main()
{
    char a , b, c;
    printf("Enter the First character = ");
    scanf("%c",&a);
    printf("The Character Code you entered is '%c' and it\'s Number(ASCII) is = %d",a,a);

    printf("Enter the First character = ");
    scanf("%c",&b);
    printf("The Character Code you entered is '%c' and it\'s Number(ASCII) is = %d\n",b,b);

    printf("Enter the Third character = ");
    scanf("%c",&c);
    printf("The Character Code you entered is '%c' and it\'s Number(ASCII) is = %d",c,c);
   
    
     return 0;
}


// 9. Write a Program to input Date in this format DD/MM/YYYY & convert it and give outuput in this Day-DD Month-MM Year-YYYY
#include <stdio.h>
main()
{
    int d,m,y;
    char c_1,c_2;
    printf("Enter Date in this format==>> DD/MM/YYYY ");
    scanf("%d %c %d %c %d",&d,&c_1,&m,&c_2,&y);
    printf("Your Entered Date is==> %d%c%d%c%d\n",d,c_1,m,c_2,y);
    printf("Day-%d Month-%d Year-%d",d,m,y);
}


// 10. Write a Program to input time in this format HH:MM and give output like this HH hour & MM minute.

#include <stdio.h>
main()
{
    int h,m;
    char c;
    printf("Enter Time in this format ==>> 'HH:MM'  =");
    scanf("%d%c%d",&h,&c,&m);
    printf("%d Hours & %d Minutes",h,m);
    return 0;
}