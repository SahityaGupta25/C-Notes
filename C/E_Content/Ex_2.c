// 2. Write a C program, which takes two integer operands and one operator from the user performs the operation and then prints the result.(Consider the operators +,-,*, /, % and use Switch Statement)

#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    printf("Enter a Operator = ");
    scanf("%c",&op);
    printf("\nEnter a Number = ");
    scanf("%d",&a);
    printf("\nEnter a Another Number = ");
    scanf("%d",&b);
    switch (op)
    {
    case '+':
        c=a+b;
        printf("+ = %d",c);
        break;
    case '-':
        c=a-b;
        printf("- = %d",c);
        break;
    case '*':
        c=a*b;
        printf("* = %d",c);
        break;
    case '/':
        c=a/b;
        printf("div = %d",c);
        break;
    case '%':
        c=a%b;
        printf("mod= %d",c);
        break;
    
    default:
    printf("Enter a valid Operator");
        break;
    }
    return 0;
}