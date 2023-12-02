#include<stdio.h>
int main(){
    int rem , ans = 0 , mul = 1 , num = 1101 ;
    while (num>0)
    {
        rem = num%10;
        num = num/10;
        ans = rem*mul+ans;
        mul = mul*2;

    }
    printf("This is decimal of 1101 =%d",ans);
    return 0;
    
}