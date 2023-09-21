// Find the Second Largest Element in the given array.

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28,29,2 } ,max = INT_MIN ,smax = 0,i, n=sizeof(arr)/4;
  for ( i = 0; i < n; i++)
  {
    if (arr[i]>max){
        max = arr[i];
    }
  }
  printf("The Largest Element in this array = %d\n",max);
  
  for ( i = 0; i < n; i++)
  {
    if (arr[i]!=max && arr[i]>smax ){
        smax = arr[i];
    }
  }
    printf("The Second Largest Element in this array = %d",smax);
return 0;
}