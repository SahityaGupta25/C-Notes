/*
Write a C program, which takes two integer operands and one operator form the user
performs the operation and then prints the result.(Consider the operators +,-,*, /, % and
use Switch Statement)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,res,ch;
printf("\t *********************");
printf("\n\tMENU\n");
printf("\t********************");
printf("\n\t(1)ADDITION");
printf("\n\t(2)SUBTRACTION");
printf("\n\t(3)MULTIPLICATION");
printf("\n\t(4)DIVISION");
printf("\n\t(5)REMAINDER");
printf("\n\t(0)EXIT");
printf("\n\t********************");
printf("\n\n\tEnter your choice:");
scanf("%d",&ch);
if(ch>=0 && ch<=5){
    switch (ch)
    {
        case 0:
            printf("Exit");
            exit(0);
        break;
        case 1:
    printf("Enter value of 'a' and 'b' =");
    scanf("%d %d",&a,&b);
    res= a+b;
    printf("Sum of both numbers is =%d",res);
        break;
        case 2:
    printf("Enter value of 'a' and 'b' =");
    scanf("%d %d",&a,&b);
    res= a-b;
    printf("Subtraction of both numbers is =%d",res);
        break;
        case 3:
    printf("Enter value of 'a' and 'b' =");
    scanf("%d %d",&a,&b);
    res= a*b;
    printf("Product of both numbers is =%d",res);
        break;
        case 4:
    printf("Enter value of 'a' and 'b' =");
    scanf("%d %d",&a,&b);
    res= a/b;
    printf("Division of both numbers is =%d",res);
        break;
      case 5:
    printf("Enter value of 'a' and 'b' =");
    scanf("%d %d",&a,&b);
    res= a%b;
    printf("Remainder is =%d",res);
        break;
    default:
    printf("Invalid choice");
        break;
    }
}
}