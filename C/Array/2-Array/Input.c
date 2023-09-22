#include<stdio.h>
int main(){
    int arr[2][4] ,i,j, n=sizeof(arr)/4;

    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            arr[i][j] = 66;
        }
        printf("\n");
    }
    
for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}