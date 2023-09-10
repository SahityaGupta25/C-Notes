#include <stdio.h>
int main(){
    int n;
    printf("How many natural numbers you want to print in reverse order");
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