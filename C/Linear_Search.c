// Search an element in an array 

#include<stdio.h>
int main(){
    int arr[] = {51,34,11,66,93,16,28,29,2 } ,flag = 0,x,i, n=sizeof(arr)/4;
    printf("Enter a Number which you want to search = ");
    scanf("%d",&x);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("Exists");
    }
    else{
        printf("Does not Exist");
    }
return 0;
}