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