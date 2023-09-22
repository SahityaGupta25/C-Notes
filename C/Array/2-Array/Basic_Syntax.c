#include<stdio.h>
int main(){
    int arr[2][4] = {51,34,11,66,93,16,28,29} ,i,j, n=sizeof(arr)/4;

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