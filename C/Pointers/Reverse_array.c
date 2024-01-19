// Reversing a Series of Numbers in Array using Pointers

#include<stdio.h>
int main(){
int n=5,arr[5];
int *p;
printf("Enter %d number",n);
for ( p=arr; p <= arr+(n-1); p++)
{
    scanf("\n%d",p);
    printf("%d\t",p);
}
for (p=arr+(n-1);p>=arr; p--)
{
    printf("%d\t",*p);
    
}


 return 0 ;
}