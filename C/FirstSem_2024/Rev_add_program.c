// 4.	Write a program to reverse a number and find sum of the digits.

#include<stdio.h>

result(int num){
    int hold,sum=0,rev=0;
    for (int i = 0; i <=num; i++)
    {
        hold = num%10;
        sum = sum+hold;
        rev = (rev*10)+hold;
        num=num/10;



    }
    printf("The Sum of digit is = %d\n",sum);
    return rev;
}



int main(){
    int a=45231;
    printf("The Reverse of entered number is = %d",result(a));
    return 0;
}
