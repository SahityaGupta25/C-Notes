#include<stdio.h>
int fact(int);

int fact(int n){
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
    
}

int main(){
    int n,facct;
    printf("Enter the number of which you want to calculate 'Factorial' = ");
    scanf("%d",&n);
    facct = fact(n);
    printf("The Factorial is = %d",facct);
    return 0;

}