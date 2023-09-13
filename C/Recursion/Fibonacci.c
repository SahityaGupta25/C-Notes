// Write a function to calculate nth fibonacci number using recursion.

#include <stdio.h>

int Fibo(int n){
    if (n==1 || n==2){
        return 1;
    }
    return Fibo(n-1)+Fibo(n-2);
}
int main(){
    int n;
    printf("Enter the nth term");
    scanf("%d",&n);
    printf("The Result is = %d",Fibo(n));
    return 0;
}