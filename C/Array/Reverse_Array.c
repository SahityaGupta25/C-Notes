// Write a Program to Reverse the array without using any another array.

#include<stdio.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28,29,2 } ,i, n=sizeof(arr)/4,j=n-1,temp,k;
printf("OLD ARRAY\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        
    }
    while (i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
   printf("\nNEW ARRAY\n");
    for ( k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
        
    } 

return 0;
}

