// Pointer

// Q.1 Write a function to swap values of two in variables of calling function. (TSRS)


#include<stdio.h>
void swap(int* , int*);
int main(){
    int a,b ;
    printf("Enter the value of 'a'\n");
    scanf("%d",&a);
    printf("Enter the value of 'b'\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Now the value of a = %d\n",a);
    printf("Now the value of b = %d",b);
    

}

void swap(int *x, int *y ){
int z;
z=*x;
*x=*y;
*y=z;



}