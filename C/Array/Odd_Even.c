// Given an array of an integers , change the value of all odd indexed elements to its second multiple & increment all even indexed by 10.

#include<stdio.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28 } ,i, n=sizeof(arr)/4;

    printf("OLD ARRAY\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nNEW ARRAY\n");
    for ( i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            arr[i] +=10;
        }
        else{
            arr[i] *=2;
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
   
    
return 0;
}