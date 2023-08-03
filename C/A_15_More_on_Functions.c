// A-15 More_on_Functions
// 1. Write a function to find LCM between 2 numbers. (TSRS)
#include <stdio.h>
int lcm(int, int);
int main()
{
    // Write C code here
    int x, f, y;
    printf("Enter two numbers=\t");
    scanf("%d %d", &x, &y);
    f = lcm(x, y);
    printf("The LCM of both numbers is =%d", f);
    return 0;
}

int lcm(int x, int y)
{
    int i, j, a;
    for (i = 2; i <= x < y ? x : y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    return i;
}

// 2. Write a function to find HCF between 2 numbers. (TSRS)

#include <stdio.h>
int hcf(int, int);
int main()
{
    // Write C code here
    int x, f, y;
    printf("Enter two numbers=\t");
    scanf("%d %d", &x, &y);
    f = hcf(x, y);
    printf("The LCM of both numbers is =%d", f);
    return 0;
}

int hcf(int x, int y)
{
    int i, j, a;
    for (i = x < y ? x : y; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    return i;
}

// 3. Write a function to check whether a given number is Prime or not . (TSRS)

#include <stdio.h>
int prime(int);
int main()
{
    // Write C code here
    int x, p;
    printf("Enter a Numbers =\t");
    scanf("%d", &x);
    p = prime(x);
    if (p == 1)
    {
        printf("It's a prime number");
    }
    else
    {
        printf("It's  not a prime no.");
    }

    return 0;
}

int prime(int x)
{
    int i;
    for (i = 2; i <= x - 1; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>
int prime(int);
int main()
{
    int n, p;
    printf("Enter a Number");
    scanf("%d", &n);
    p = prime(n);
    printf("The next Prime Number is = %d", p);
    return 0;
}

int prime(int x)
{
    int i, j;
    for (i = x; i <= x * 2; i++)
    {
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j != 0)
            {

                printf("%d", j);
                return i;
            }
        }
    }
}

// 9. Write a function to print all armstrong numbers between two given numbers (TSRN)

#include <stdio.h>
void arm(int, int);
int main()
{
    // Write C code here
    int x, y;
    printf("Enter a Lowerlimit =\t");
    scanf("%d", &x);
    printf("Enter a Upperlimit =\t");
    scanf("%d", &x);
    arm(x, y);

    return 0;
}

void arm(int x, int y)
{
    int i, r;
    for (i = x; i <= y; i++)
    {
        int s = 0;
        while (x != 0)
        {
            r = x % 10;
            s = s + r * r * r;
            x = x / 10;
        }
        if (s == i)
        {
            printf("%d", s);
        }
    }
}

// 10. Write a function to find the  sum of First N terms of the series 1!/1 + 2!/2 ............. n!/n (TSRS).

#include <stdio.h>
int terms(int);
int main()
{
    int n, t;
    printf("Enter value of Nth Term = ");
    scanf("%d", &n);
    t = terms(n);
    printf("The next Prime Number is = %d", t);
    return 0;
}
int terms(int n)
{
    int i, f , j, s = 0;
    for (i = 1; i <= n; i++)
    {
        f=1;
        for (j = 1; j <= i; j++)
        {
            f = f * j;
            s = f / i + s;
        }
    }
}
