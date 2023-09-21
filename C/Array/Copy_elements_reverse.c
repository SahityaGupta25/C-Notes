// Write a program to copy the content of one array into another in the reverse order.

#include<stdio.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28,29,2 } ,x=0,y=0,i, n=sizeof(arr)/4,brr[n];
printf("OLD ARRAY\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        
    }
  printf("\nREVERSE ARRAY\n");  
  for ( i = 0; i < n; i++)
    {
        brr[i] = arr[n-i-1];        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",brr[i]);
        
    }

return 0;
}