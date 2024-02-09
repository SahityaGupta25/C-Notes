#include<stdio.h>
int main(){
    int i;
    char str[10];
    printf("Enter a String");
    // while using %s no need to write '&' and no need to run a for loop to print string.
    scanf("%s",str);
    printf("Entered String = %s",str);
    return 0;
}