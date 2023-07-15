// Write  a program to add numbers entered by user .
//  User enter any number of numbers until he enter 0.
#include<stdio.h>
int main()
{
    int x,sum=0;
    while (1>0){
        printf("Enter a Number = ");
        scanf("%d",&x);
        if (x==0){
            printf("You have Entered 0\n");
            break;
        }
        else{
            sum=sum+x;
        }
        }
printf("The sum of Numbers is = %d",sum+x);
return 0;
}