#include<stdio.h>
int main(){
int a = 5;
int *p = &a;
printf("%p",&a);
printf("\n%p",p);
printf("\n%p",&p);
return 0;
}
// ^ In pointer variable only base address will be assigned pf variable

// ? Pointer variable size does not depenend on the type of data.