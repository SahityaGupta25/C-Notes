// 1. Write a Recursive function to print first N natural numbers .

#include <stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    natural(x);
    return 0;
}

void natural(int x){
    if (x>=1)
    {
        /* code */
    natural(x-1);
    printf("%d",x);
    }
    
}

// 2. Write a Recursive function to print first N natural numbers in reverse order.

#include <stdio.h>
void rev(int);
int main()
{
    int x;
    printf("Enter UpperLimit = ");
    rev(x);
    return 0;
}

void rev(int x){
    if (x>=1)
    {
        /* code */
    printf("%d",x);
    rev(x-1);
    }
    
}

// 3. Write a Recursive function to print first N ODD natural numbers .

#include <stdio.h>
void oddnatural(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    oddnatural(x*2);
    return 0;
}

void oddnatural(int x){
    if (x>=1)
    {
    oddnatural(x-1);
if (x%2!=0)
{
    
    printf(" %d",x);
}

        
    }
    
}

// 4. Write a Recursive function to print first N ODD natural numbers in Reverse Order .

#include <stdio.h>
void oddnatural(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    oddnatural(x*2);
    return 0;
}

void oddnatural(int x){
if (x%2!=0)
{
    
    printf(" %d",x);
}
    if (x>=1)
    {
    oddnatural(x-1);

        
    }
    
}

// 5. Write a FUNCTION TO PRINT First N Even Natural Numbers.

#include <stdio.h>
void evennatural(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    evennatural(x*2);
    return 0;
}

void evennatural(int x){
    if (x>=2)
    {
    evennatural(x-1);
if (x%2==0)
{
    
    printf(" %d",x);
}

        
    }
    
}


// 6. Write a FUNCTION TO PRINT First N Even Natural Numbers in reverse order.


#include <stdio.h>
void evennatural(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    evennatural(x*2);
    return 0;
}

void evennatural(int x){
if (x%2==0)
{
    
    printf(" %d",x);
}
    if (x>=2)
    {
    evennatural(x-1);

        
    }
    
}


// 7. Write a FUNCTION TO PRINT Squares of N Natural Numbers.


#include <stdio.h>
void natural(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    natural(x);
    return 0;
}

void natural(int x){
    if (x>=1)
    {
        /* code */
    natural(x-1);
    printf("%d",x*x);
    }
    
}

// 10. Write a Recursive function of a given number.


#include <stdio.h>
void reverse(int);
int main()
{
    int x;
    printf("Enter value of n = ");
    scanf("%d",&x);
    reverse(x);
    return 0;
}

void reverse(int x){
    int s=0,r;
    if (x!=0)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
    reverse(x);
    }
    printf("%d",s);
    
}