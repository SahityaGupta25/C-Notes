#include<stdio.h>
int main(){
    int i;
    char str[10];
    printf("Enter a String");
   gets(str);
//    gets is a pre-defined function will consider white space and allows them to use in string 
    printf("Entered String = %s",str);
    return 0;
}