#include <stdio.h>

int natural(int n){
    if (n==0)
        return;
    printf("%d\n",n);
    natural(n-1);
    printf("%d\n",n);
    return;

}
int main(){
    int n;
    printf("How many natural numbers you want to print in reverse order");
    scanf("%d",&n);
    natural(n);
    return 0;
}
