// 6.Write a program to check whether a given number is a three digit number or not.

/*
#include <stdio.h>
main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if (x>=100 && x<=999){
        printf("It is a Three Digit Number");
    }
    else{
        printf("Not a Digit Number");
    }
}
*/

// 7.Write a program greater between two numbers . Print one number if both are the same.
/*
#include <stdio.h>
main()
{
    int a,b;
    printf("Enter First number\n");
    scanf("%d",&a);
    printf("Enter Second number\n");
    scanf("%d",&b);
    if (a>b){
        printf("First number is greater");
    }
    else if (a==b){
    printf("%d Both are same",a);
    }
    else{
      printf("Second number is greater");  
    }
    return 0;
 
}

*/

// 8. Write a program to check whether roots of a given quadratic equation are real & Distinct , real & equal or imaginary roots.

/*
#include <stdio.h>
main()
{
    int a,b,c,x;
    printf("Enter value of b (discriminant)\n");
    scanf("%d",&b);
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of c\n");
    scanf("%d",&c);
    x=b*b-4*a*c;
    if (x>0){
        printf("Real & Distinct roots");
    }
    else if (x==0){
        printf("Real & Equal Roots");
        
    }
    else{
        printf("Imaginary Roots");
    }
    return 0;


    
}
*/

// 9.Write a program to check whether a given is a leap year or not.
 
/*
 #include <stdio.h>
main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Yes it is a Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;

}
*/

