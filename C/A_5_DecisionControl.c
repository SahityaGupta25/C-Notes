// 6.Write a program to check whether a given number is a three digit number or not.
#include <stdio.h>
main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if (x>=100 && x<=999){
        printf("It is a Three Digit Number");
    }
    else{
        printf("Not a Digit Number");
    }
}
