// 8. Prime no. or not.
#include<stdio.h>
int main()
{
    int x,i;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i < x; i++)
        {
           if (x%i!=0){
            continue;
           }
           else if (x%i==0)
           {
            printf("Not a Prime Number")
           }
           
           else{
            break;
           }
        }
printf("Prime Number");
return 0;
}
