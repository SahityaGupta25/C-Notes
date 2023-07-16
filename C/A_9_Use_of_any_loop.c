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

// 7. Write a program to Count digits in a given number.


#include<stdio.h>
int main()
{
    int x,i,c=0;
        printf("Enter a Number = ");
        scanf("%d",&x);
        while (x!=0)
        {
            x=x/10;
            c++;
        }
        printf("The Digits in this number is = %d",c);
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
// 9. Write a program to calculate to Calculate the LCM of two numbers.


// 10. Write a program to Reverse a Given Number 
int main()
{
    int x,y,i;
        printf("Enter two Numbers \n");
        scanf("%d %d",&x,&y);
        for ( i = 1; i <= x*y; i++)
        {
            if (i%x==0 && i%y==0)
            {
                break;
            }
        }
        printf("LCM of %d & %d is = %d",x,y,i);
        
        return 0;
}

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