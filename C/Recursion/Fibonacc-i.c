#include <stdio.h>

int Fibo(int n){
    if (n==1 || n==2){
        return 1;
    }
    else if (n==0)
    {
        /* code */
        return 0;
    }
    
    return Fibo(n-1)+Fibo(n-2);
}
int main(){
    int n,i,res;
    printf("How many terms you want to print = ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        res=Fibo(i);
    printf("%d\n",res);

    }
    
    return 0;
}