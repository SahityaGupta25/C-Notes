#include <stdio.h>

int Suum_parameter(int n,int s){
    if (n==0){
        printf("%d",s);
        return;
    }
    Suum_parameter(n-1,n+s);
    return;
}
int main(){
    int n;
    printf("How many sum of natural numbers you want to print = ");
    scanf("%d",&n);
    Suum_parameter(n,0);
    return 0;
}
