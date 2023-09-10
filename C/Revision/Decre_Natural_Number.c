
#include <stdio.h>
int main(){
    int n;
    printf("How many natural numbers you want to print in reverse order");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

void reverse(int n){
    if (n==0)
        return n;
    printf("%d",n);
    reverse(n-1);

}
