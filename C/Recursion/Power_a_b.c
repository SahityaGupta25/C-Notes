#include <stdio.h>

int Power(int a,int b){
    if (b==0){
        return 1;
    }
    return a*Power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter the Base: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    printf("The Result is = %d",Power(a,b));
    return 0;
}