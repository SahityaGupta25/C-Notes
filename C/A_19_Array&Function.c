// 1. Write a function to find greatest number in an array of any size.

#include <stdio.h>
int great(int brr[],int n){
    int i,max=brr[0];
    for ( i = 0; i < n; i++)
    {
        if (max < brr[i])
        {
            max = brr[i];
        }
    
    }
    return max;
}
    int main(){
    int arr[] = {5,4,1,66,9,6} ,i, max=arr[0] , n=sizeof(arr)/4;
    printf("The Answer is  = %d",great(arr,n));
    
   
    

}

// 2. Write a function to find smallest number in an array of any size.
    

#include <stdio.h>
int great(int brr[],int n){
    int i,max=brr[0];
    for ( i = 0; i < n; i++)
    {
        if (max > brr[i])
        {
            max = brr[i];
        }
    
    }
    return max;
}
    int main(){
    int arr[] = {5,4,1,66,9,6} ,i, max=arr[0] , n=sizeof(arr)/4;
    printf("The Smallest number in  this array is = %d",great(arr,n));
    
   return 0;
}
    



