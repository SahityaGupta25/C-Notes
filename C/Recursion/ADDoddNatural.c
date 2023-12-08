#include<stdio.h>
int sumODD(int);

int sumODD(int num){
    if (num==1)
    {
        return 1;

    }
    else
    {
        return num+sumODD(num-2);
    }
    
    
}

int main(){
    int n,s;
    printf("Enter a ODD Number= ");
    scanf("%d",&n);
    s = sumODD(n);
    printf("The Factorial is = %d",s);
    return 0;

}