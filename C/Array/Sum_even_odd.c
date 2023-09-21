// Find the difference between the sum of elements at even indicies to the sum of elements at odd indicies.

#include<stdio.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28,29,2 } ,x=0,y=0,i, n=sizeof(arr)/4;
 for ( i = 0; i < n; i++)
 {
    if (i%2==0){
        x += arr[i];
    }
    else{
        y += arr[i];
    }
 }
 printf("Sum of ODD indicies = %d\nSum of Even indicies = %d\n",y,x);
 printf("Difference = %d",x-y);

 
 
return 0;
}


