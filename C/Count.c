// Count number of elements in a given array who are greater than "X" input by the user.

#include<stdio.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28,29,2 } ,x,count=0,i, n=sizeof(arr)/4;
    printf("Enter a Number = ");
    scanf("%d",&x);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]>x){
            count +=1;
        }

    }
printf("%d Elements are greater than %d",count,x);
 
return 0;
}

