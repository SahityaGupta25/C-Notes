// 3. Write a C program - using gets() and puts() do display the input character.

#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Enter your name = ");
    gets(name);
    printf("Entered string\n");
    puts(name);
}