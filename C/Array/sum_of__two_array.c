// Read 2 arrays of size 5 and store sum in the third 
#include<stdio.h>
int main(){

 int i,arr[5],brr[5],crr[5];
 printf("Enter 5 Numbers of your choice\n");

 for ( i = 0; i < 5; i++)
 {
    
 scanf("%d",&arr[i]);
 }
 printf("Enter 5 more numbers\n");
 for ( i = 0; i < 5; i++)
 {
    
 scanf("%d",&brr[i]);
 }
 for ( i = 0; i < 5; i++)
 {
    crr[i] = arr[i]+brr[i];
 }
printf("The Final Numbers are\n");
for ( i = 0; i < 5; i++)
 {
    
 printf("%d,",crr[i]);
 }
 
    

    return 0;
} 