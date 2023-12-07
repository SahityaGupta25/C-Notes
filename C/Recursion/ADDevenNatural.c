#include<stdio.h>
int sumEvenn(int);

int sumEvenn(int num){
    if (num==0)
    {
        return 0;
    }
    else
    {
        return num+sumEvenn(num-2);
    }
    
    
}

int main(){
    int n,s;
    printf("Enter value of 'N'");
    scanf("%d",&n);
    s = sumEvenn(n);
    printf("The Factorial is = %d",s);
    return 0;

}