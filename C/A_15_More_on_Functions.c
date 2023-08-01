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