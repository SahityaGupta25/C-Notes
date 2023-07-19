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
*/

/*
3.
*****
****
***
**
*

#include <stdio.h>
   int main()
   {
    int x,i,j;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i <= x; i++)
        {
            for ( j = 1; j <= x ; j++)
            {
                if (j<=6-i)
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
*/

/*4.
*****
 ****
  ***
   **
    *
    */
   /*
   #include <stdio.h>
   int main()
   {
    int x,i,j;
        printf("Enter a Number = ");
        scanf("%d",&x);
        for ( i = 1; i <= x; i++)
        {
            for ( j = 1; j <= x ; j++)
            {
                if (j>=i)
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
   */

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

/*
#include<stdio.h>
int main()
{
    int i,j;
    char x;
        
        for ( i = 1; i <= 4; i++)
        {
            x=48+i;
            for ( j = 1; j <= 4 ; j++)
            {
                if (j<=i)
                {
                    printf("%c",x--);
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
7. 
ABCDE
 ABCD
  ABC
   AB
    A
*/

/*
#include<stdio.h>
int main()
{
    int i,j;
    char x;
        
        for ( i = 1; i <= 4; i++)
        {
            x=65;
            for ( j = 1; j <= 4 ; j++)
            {
                if (j>=i)
                {
                    printf("%c",x++);
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
8.
1
23
456
78910
*/

#include<stdio.h>
int main()
{
    int i,j,s; 
     for ( i = 1,s=1; i <= 4; i++)
        {
            for ( j = 1; j <= 4 ; j++)
            {
                if (j<=i)
                {
                    
                    printf("%d",s++);
    
                    
                    
                }
                else{
                    printf(" ");
                }
                
                
            }
            printf("\n");
        }
            
                return 0; 
            }