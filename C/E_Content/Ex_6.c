// 6. Write a C Program to extract a portion of a string from a character string

#include<stdio.h>
int main(){
    int i;
    char x[]={'s','a','h','t','y','a','\0'};
    for ( i = 2; i < 6; i++)
    {
    printf("%c",x[i]);
        
    }
    
    return 0;
}