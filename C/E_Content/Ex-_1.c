// 1)	Write a C program to find the sum of individual digits of a positive integer.

#include<stdio.h>
int main(){
    int sum = 0 , k = 0 , num;
    printf("Enter a Positive Number whose digits are to be added=\t");
    scanf("%d",&num);
    while(num!=0){
        k=num%10;
        sum=sum+k;
        num=num/10;

    }
    printf("The Total of all digits is = %d",sum);
    return 0;
}