// 6. Calculate Factorial of a Numbers.
#include<stdio.h>
int main()
{
    int x,i,s;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1,s = 1; i <= x; i++)
        {
            s=s*i;
        }
printf("The Factorial of %d is = %d",x,s);
        return 0;
}
// 8. Write a program to calculate whether a given number is prime or not.
#include<stdio.h>
int main()
{
    int x,i;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 2; i <= x-1; i++)
        {
            if (x%i==0)
            {
                
            break;
            }
            
        }
    if (i==x)
    {
        printf("%d is a Prime Number",x);
    }
    else{
        printf("%d is not a Prime Number",x);
    }
    
        
    
return 0;
}

// 10. Write a program to Reverse a Given Number 


#include<stdio.h>
int main()
{
    int x,y=0,z;
        printf("Enter a Number = ");
        scanf("%d",&x);
        while (x!=0)
        {
            z=x%10;
            y=y*10+z;
            x=x/10;
        }
        printf("The Reverse is = %d",y);
        return 0;
}