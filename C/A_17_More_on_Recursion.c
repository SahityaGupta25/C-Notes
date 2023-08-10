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


