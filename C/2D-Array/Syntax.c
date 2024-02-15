#include<stdio.h>
int main(){
    int arr[2][3],i,j;
    int sum=0;
    printf("Enter 6 Digits\n");
    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    for ( i = 0; i <2; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        printf("%d\t",arr[i][j]);
            
        }
    }
    printf("\n");
    printf("The Sum is = %d",sum);
    

    return 0;
}