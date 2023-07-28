// A-14 Functions
// 1.Write a function to calculate area of Circle.


#include <stdio.h>
float area(float);
int main() {
    // Write C code here
    int r,p=3.14,a;
    printf("Enter two numbers=\t");
    scanf("%f",&r);
    a=area(r);
    printf("The area of circle is =%f",a);
    return 0;
}
float area(float a){
    float b;
    b=a*(b*b);
    return b;
}

// 3.Write a function that a function is even or odd . Return 1 if even , otherwise odd (TSRS)



#include <stdio.h>
int number(int);
int main() {
    // Write C code here
    int x,y;
    printf("Enter a number=\t");
    scanf("%d",&x);
    y=number(x);
    if (y==1)
    {
        printf("Even Number");
    }
    else{
        printf("ODD");
    }
    ;
    return 0;
}
int number(int a){
    int b;
    if (a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

// 4. Write a function to print N Natural Numbers (TSRN)

#include <stdio.h>
void number(int);
int main() {
    // Write C code here
    int x,y;
    printf("Enter a number=\t");
    scanf("%d",&x);
    number(x);
    return 0;
}
void number(int a){
   int b,i;
   for (int i = 1; i <= a; i++)
   {
    printf("%d\n",i);
   }
   
}