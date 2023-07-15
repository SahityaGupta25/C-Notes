/*Write a Program which asks user to enter an even number ,computer will give user at most 3 chances , if user failed to answer in any of the chances "Game Over" messge should be displayed on the screen , otherwise "You Win message should be displayed and game stops immediately"  */
#include<stdio.h>
int main()
{
    int i=1,x;
    
    while (i<=3)
    {
        printf("Enter an Even Number = ");
        scanf("%d",&x);
        
        if (x%2==0)
        {
            break;

        }
        else if (i==3)
        {
            break;
        }   
        else 
        {
            printf("One More Chance\n");
        }
        i++;
    }
        
if (x%2==0)
{
    /* code */
    printf("You WIN");
}
else
{
    printf("Game Over");
}
    
}