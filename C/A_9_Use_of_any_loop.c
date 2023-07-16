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
// 8. Prime no. or not.
#include<stdio.h>
int main()
{
    int x,i;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i < x; i++)
        {
           if (x%i!=0){
            continue;
           }
           else if (x%i==0)
           {
            printf("Not a Prime Number");
           }
           
           else{
            break;
           }
        }
printf("Prime Number");
return 0;
}

// 10. Reverse Number a two-digit number


#include<stdio.h>
int main()
{
    int x,y,z;
        printf("Enter a Number = ");
        scanf("%d",&x);
        y=x/10;
        z=x%10;
        printf("%d",z*10+y);
}