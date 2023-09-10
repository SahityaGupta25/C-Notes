// 1. Write a function to print N Natural Numbers

#include<stdio.h>
int main(){
    int n;
    printf("How many natural numbers you want to print");
    scanf("%d",&n);
    natural(n);
    return 0;
}

void natural(int n){
    if (n==0)
        return n;
    natural(n-1);
    printf("%d",n);

}