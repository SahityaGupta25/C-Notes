/*
1.
*
**
***
****
*****
*/
/*
#include<stdio.h>
int main()
{
    int x,i,j;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i <= x; i++){
            for ( j = 1; j <= x ; j++){
                if (j<=i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");}
                return 0; }
*/


/*
2.

    *
   **
  ***
 ****
*****

*/

#include<stdio.h>
int main()
{
    int x,i,j;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i <= x; i++)
        {
            for ( j = 1; j <= x ; j++)
            {
                if (j>=6-i)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
                
            }
            printf("\n");
        }
                return 0; 
            }

/*
5.
1
12
123
1234
12345

*/

/*
#include<stdio.h>
int main()
{
    int x,i,j;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i <= x; i++)
        {
            for ( j = 1; j <= x ; j++)
            {
                if (j<=i)
                {
                    printf("%d",j);
                }
                else{
                    printf(" ");
                }
                
                
            }
            printf("\n");
        }
                return 0; 
            }
*/

/*
6.
1
21
321
4321
54321

*/
