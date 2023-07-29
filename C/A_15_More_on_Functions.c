// A-15 More_on_Functions
// 1. Write a function to find lcm between 2 numbers.
#include <stdio.h>
int lcm (int,int);
int main() {
    // Write C code here
    int x,f,y;
    printf("Enter two numbers=\t");
    scanf("%d %d",&x,&y);
    f=lcm(x,y);
    printf("The LCM of both numbers is =%d",f);
return 0;
}

int lcm(int x,int y){
    int i,j,a;
    for ( i = 2; i <= x<y?x:y ; i++)
    {
        if (x%i==0 && y%i==0)
        {
            break;
        }
        
    }
 return i;   
}
