// 1.Write a program to print "Radha" N times.

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter how many times you want to print 'Radha' = ");
    scanf("%d",&x);
    while (i<=x)
    {
        printf("Radha\n");
        i++;
    }
    return 0;
    
} 
*/

// 2.To print first 10 natural Numbers

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter how many natural number you want to print ");
    scanf("%d",&x);
    while (i<=x)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
    
} 
*/

// 3.To print first 10 natural number in reverse order.

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter from where you want to print numbers\n");
    scanf("%d",&x);
    while (i<=x)
    {
        printf("%d\n",x);
        x--;
    }
    return 0;
    
} 
*/

// 4.Print N odd natural numbers

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter how many odd natural number you want to print = ");
    scanf("%d",&x);
    while (i<=x*2)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
    
} 
*/

// 5.Print N odd natural no. in reverse order

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter how many odd natural number you want to print in reverse order = \n");
    scanf("%d",&x);
    x=(x*2)-1;
    if (x%2==0)
    {
    while (i<=x)
    {
        printf("%d\n",x);
        x-=2;
    }
    }
    else{
         while (i<=x*2)
    {
        printf("%d\n",x);
        x-=2;
    }
    
    }
    
return 0;

} 
*/

// 6.first N even natural no.

/*
#include<stdio.h>
int main()
{
    int i=2,x;
    printf("Enter how many Even natural number you want to print = ");
    scanf("%d",&x);
    while (i<=x*2)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
    
} 
*/

// 7. N even natural no. in reverse order.


/*
#include<stdio.h>
int main()
{
    int i=2,x;
    printf("Enter how many Even natural number you want to print in reverse order = \n");
    scanf("%d",&x);
    x=(x*2);
    if (x%2==0)
    {
    while (i<=x)
    {
        printf("%d\n",x);
        x-=2;
    }
    }
    else{
         while (i<=x*2)
    {
        printf("%d\n",x);
        x-=2;
    }
    
    }
    
return 0;

} 
*/

// 8. Square of 10 natural No.


/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter how many Squares you want to print = \n");
    scanf("%d",&x);
    while (i<=x)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
    
}
*/

// 9. Cube of N Natural No.

/*
#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter how many Squares you want to print = \n");
    scanf("%d",&x);
    while (i<=x)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
    
}
*/

// 10. Table of 5

#include<stdio.h>
int main()
{
    int i=1,x;
    printf("Enter a NUmber of which you want to see table of = \n");
    scanf("%d",&x);
    while (i<=10)
    {
        printf("%dx%d = %d\n",x,i,x*i);
        i++;
    }
    return 0;
    
}
