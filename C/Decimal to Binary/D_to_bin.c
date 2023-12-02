#include<stdio.h>
int main(){
    int rem , ans = 0 , mul = 1 , num = 13 ;
    while (num>0)
    {
        rem = num%2;
        num = num/2;
        ans = rem*mul+ans;
        mul = mul*10;

    }
    printf("This is binary of 13 =%d",ans);
    return 0;
    
}