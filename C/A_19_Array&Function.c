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

// 3. Write a function to sort an array of any size.


#include <stdio.h>
int sort(int brr[],int n){
    int i,temp,j;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            /* code */
        if (brr[i]>brr[j])
        {
           temp = brr[i];
           brr[i]= brr[j];
           brr[j] = temp;
        }
        }
        
    
    }
   for ( i = 0; i < n; i++)
   {
    printf("%d ",brr[i]);
   }
   
}  

  int main(){
    int arr[] = {5,4,1,66,9,6} ,i, max=arr[0] , n=sizeof(arr)/4;
    sort(arr,n);
    
   return 0;
}

// 5.Write a function to find the first occurrence of the adjacent  duplicate values in the array . Function has to return  value of the element.

// 6. Write  a function to swap two elements of given array with specified indicies.

#include <stdio.h>
int swap(int brr[],int n,int a,int b){
    int temp ,i;
    temp = brr[a];
    brr[a] = brr[b];
    brr[b] = temp;
for ( i = 0; i < n; i++)
{
    printf("%d ",brr[i]);
}

} 

  int main(){
    int arr[] = {5,4,1,66,9,6} ,a,b,i, max=arr[0] , n=sizeof(arr)/4;
    printf("Enter Index Number which you want to swap\n");
    printf("Enter the Index Number 1 = ");
    scanf("%d",&a);
    printf("\nEnter the Index Number 2 = ");
    scanf("%d",&b);
    swap(arr,n,a,b);
    
   return 0;
}

// 7. Write a function to count a total number of duplicate elements in an array . (Means elements that occurs 2 times in an array.)


#include<stdio.h>
int count(int brr[],int n){
    int i,j,count=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (brr[i]==brr[j])
            {
                count+=1;
            }
            
        }
        
    }
    return count;
}


  int main(){
    int arr[] = {5,4,1,66,5,1,9,6} ,i, max=arr[0] , n=sizeof(arr)/4;
    printf("The Total Duplicate Elements in this array is = %d",count(arr,n));
    
   return 0;
}



