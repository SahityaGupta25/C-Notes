#include <stdio.h>

int power(int n){
    int a,b;
    if (n==0){
        return 1;
    }
    a=power(n-1);
    b=2*a;
    return b;
    
}
int main(){
    int n;
    printf("Enter the nth term");
    scanf("%d",&n);
    printf("The Result is = %d",power(n));
    return 0;
}