// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float  x,y;
   
    // Write C code here
    printf("Enter a Number");
    scanf("%3f %4f",&x,&y); // x=1.23 y=80.769922
    printf("%f",x); //It is printing 3.00000000 because it is treating 3 as the second number
    printf("%f",y);

    return 0;
}