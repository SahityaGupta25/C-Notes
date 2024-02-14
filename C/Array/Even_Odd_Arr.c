// Read array of 5 integers and count even and odd 
#include<stdio.h>
int main(){

    int i, arr[10];
    int even=0,odd=0;
    printf("Enter 10 numbers\n");
    for ( i = 0; i < 5; i++)
    {
       scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("Even = %d ",even);
    printf("odd = %d ",odd);
    

    return 0;
}