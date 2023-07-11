/*
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
*/

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

// 3. Write s program to print dize of an int , a float, a char and a double type variable.

/*
#include<stdio.h>
main()
{
 int x=123,y,z;
 y=x%10;
 printf("The last digit of %d is %d",x,y);
 z=y%y;
 printf("Now it became %d",y);
 return 0;    
}
*/

// 4. Write a program to make last digit stored as a zero in a variable. (Example if - 2345 the make it 2340 )
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a three digit or four digit number\n");
    scanf("%d",&x);
    x=(x/10)*10;
    printf("The Last digit is changed to zero - %d",x);
}

// 6. Assume price of 1 USD is INR 84.23 . Write a program to take the amount in INR and convert it into USD.
/*
#include<stdio.h>
main()
{
    float d=84.23,inr,m;
    printf("Enter amount in ruppes = ");
    scanf("%f",&inr);
    m=inr/d;
    printf("The amount in dollars is =%f",m);
    return 0;
}
*/
