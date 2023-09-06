// A-14 Functions
// 1.Write a function to calculate area of Circle (TSRS).


#include <stdio.h>
float area(float);
int main() {
    // Write C code here
    float r,a;
    printf("Enter radius=\t");
    scanf("%f",&r);
    a=area(r);
    printf("The area of circle is = %f",a);
    return 0;
}
float area(float r){
    float p=3.14,a;
    a=p*(r*r);
    return a;

}

// 2. Write a function  to calculate Simple Intrest. (TSRS)





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

// 5. Write a function to print N ODD Natural Numbers (TSRN)

#include <stdio.h>
void number(int);
int main() {
    // Write C code here
    int x;
    printf("Enter a number=\t");
    scanf("%d",&x);
    number(x);
    return 0;
}
void number(int a){
   int i;
   for (int i = 1; i <= a*2; i+=2)
   {
    printf("%d\n",i);
   }
   
}

// 6.Write a function to calculate the factorial of a number.


#include <stdio.h>
int fact(int);
int main() {
    // Write C code here
    int x,y;
    printf("Enter a Number of which you want to calculate Factorial = ");
    scanf("%d",&x);
    y=fact(x);
    printf("The Factorial of %d is =%d",x,y);
    return 0;
}
int fact(int x){
   int z=1,i;
   for (int i = x; i >= 1; i--)
   {
    z=z*i;
   }
return z;   
}

// 7. Write a function to calculate the number of combination one can make from n items & r selected at a time (TSRS)

#include <stdio.h>
int comb(int,int);
int fact(int);
int main() {
    // Write C code here
    int n,r;
    printf("Enter a value of 'n' ");
    scanf("%d",&n);
    printf("Enter a value of 'r' ");
    scanf("%d",&r);
    printf("The Output is = %d",comb(n,r));
    return 0;
}
int comb(int n,int r){
  int x;
  x= fact(n)/fact(r)/fact(n-r);
return x;  
}
// 8. Write a function to calculate the number of arrangements one can make from n items & r selected at a time (TSRS)
#include <stdio.h>
int permu(int,int);
int fact(int);
int main() {
    // Write C code here
    int n,r;
    printf("Enter a value of 'n' ");
    scanf("%d",&n);
    printf("Enter a value of 'r' ");
    scanf("%d",&r);
    printf("The Output is = %d",permu(n,r));
    return 0;
}
int permu(int n,int r){
  int x;
  x= fact(n)/fact(n-r);
return x;  
}


// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)

#include <stdio.h>
int number(int,int);
int main() {
    // Write C code here
    int x,n,a;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter a Digit which you want to check");
    scanf("%d",&x);
    if (number(n,x))
    {
        printf("Given number contains a Given digit");
    }
    else 
    {
       printf("Given number do not contains a Given digit");
    }
    return 0;
}
int number(int n,int x){
    int b;
while (n!=0){
    b=n%10;
    if (b==x)
    {
        return 1;
    }
    else{
        n=n/10;
    }
    return 0;
}
    

}

// 10. Write a function to print all prime factors of a given number. For example , if the number is 36 , then your result should be 2,2,3,3 (TSRN)


        
