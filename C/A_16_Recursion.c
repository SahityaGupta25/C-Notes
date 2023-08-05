// 1. Write a Recursive function to print first N natural numbers .
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