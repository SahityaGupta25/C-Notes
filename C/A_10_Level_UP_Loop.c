// A-10 (Level up with Loops)

// 2. Write a program to find N terms of fibonacci series.

#include <stdio.h>

int main() {
    // Write C code here
    int x,i,t1=0,t2=1,t3;
    printf("Enter a number to print first N Terms = ");
    scanf("%d",&x);
    printf("%d\n%d\n",t1,t2);
    for ( i =2; i<=x-2; i++){
        t3=t1+t2;
    printf("%d\n",t3);
        t1=t2;
        t2=t3;

    }
return 0;
}

// 4. Write a program to calculate HCF of two numbers

/*
#include <stdio.h>

int main() {
    // Write C code here
    int x,i,y;
    printf("Enter two numbers=\t");
    scanf("%d %d",&x,&y);
    for ( i =x>y?x:y; i>=1; i--)
    {
        if (x%i==0 && y%i==0)
        {
            break;
        }
        
    }
    printf("The HCF is = %d",i);
    
}
*/
//6. Write a program to print prime number under 100.






// 9. Write a Program whether a Given Number is Armstrong or not.


/*
#include <stdio.h>

int main() {
    // Write C code here
    int x,r,m,s=0;
    printf("Enter a Number =\t");
    scanf("%d",&x);
    m=x;
        while(x!=0){
            r=x%10;
            s=s+r*r*r;
            x=x/10;
            
        }
      if(m==s)
        printf("Yes this is an Armstrong Number");
      else
        printf("Not an Armstrong Number");

    // printf(" %d-x %d-n %d-s %d-m %d-r ",x,s,m,r);

    return 0;
}
*/

// 10. Write a program to print all Armstrong Number under 1000.

/*
#include<stdio.h>
int main()
{
    int i,r,s,x; 
    printf("All Armstrong number under 1000\n");
    for ( i = 1; i <= 1000; i++)
        {
        s=0;
        x=i;
       while (x!=0)
       {
        r=x%10;
        s=s+r*r*r;
        x=x/10;
       
       }
       
       if (s==i)
       {
        printf("%d\n",i);
       }
        
       
        }
            
                return 0; 
            }
*/



