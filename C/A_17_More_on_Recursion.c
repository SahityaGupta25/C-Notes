// 5. Write a recursive function to calculate sum of given digit.

#include <stdio.h>
int sumd(int);
int main(){
    int n,s;
    printf("Enter a Number = ");
    scanf("%d",&n);
    s=sumd(n);
    printf("The Sum of this %d number is = %d",n,s);
}



int sumd(int n){ 
    if (n==0)
        return 0;
    return n%10+sumd(n/10);

    
}

// 8. Write a recursive function to print first N fibonacci Series .



#include <stdio.h>
int fib(int);
int main(){
    int n,i;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d",fib(n));
    }
    
    return 0;
}



int fib(int n){ 
    if (n==1 || n==2)
        return 1;
    return (fib(n-1)+fib(n-2));

    
}
