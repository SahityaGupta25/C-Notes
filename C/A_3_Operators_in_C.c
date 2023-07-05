// 1. Write a Program to calculate size0f() a character constant.

/*

#include<stdio.h>
main()
{
    printf("The size of the character is = %d",sizeof('A'));

}

*/


// 2. Write a Program to calculate size0f() a Real Constant.

/*
#include<stdio.h>
main()
{
    printf("The size of the Real Constant is = %d",sizeof('4.6'));

}

*/

// 3.Write a Program with one char type variable . Assign 'A' in the variable . Now change the value variable from  'A' to 'B' using increment operator.

/*

#include <stdio.h>

int main() {
    // Write C code here
    char c='A';
    int d;
    ++c;

    
    printf("%c",c);

    return 0;
}

*/

// 4. Write a Program to print a unit digit.


#include <stdio.h>

int main() {
    // Write C code here
    int x=93,y;
    y=x%10;
    printf("The Unit digit of %d is = %d",x,y);
   

    return 0;
}