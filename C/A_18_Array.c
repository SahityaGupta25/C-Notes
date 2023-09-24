// 1. Write a program to calculate the sum of numbers stored in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,s=0,a[10];
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        s=s+a[i];
    }
    printf("The Sum of all numbers is = %d",s);
    
    return 0;
}


// 2. Write a program to calculate the Average of numbers stored in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,s=0,a[10];
    float avg;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        s=s+a[i];
        avg=s/10.0;
    }
    printf("The Sum of all numbers is = %0.2f",avg);
    
    return 0;
}

// 3. Write a program to calculate the sum of even and odd numbers entered by the user stored in an array of size 10 . Take array values from the user.


#include <stdio.h>

int main() {
    // Write C code here
    int i,s=0,a[10];
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=9; i++)
    {
    s=s+a[i];
    }
    printf("The Sum of all numbers is = %d",s);
    
    return 0;
}


// 4. Write a program to calculate the greatest number in an array entered by the user stored in an array of size 10 . Take array values from the user. 



#include <stdio.h>

int main() {
    // Write C code here
    int i,a[10],large,j;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }

    large=a[9];
    for ( i = 1; i < 9; i++)
    {
        if (large<a[i])
        {
            large=a[i];
        }
        
    }
    printf("The Largest Number in this Array is = %d",large);
    
    return 0;
}


// 5. Write a program to calculate the smallest number in an array entered by the user stored in an array of size 10 . Take array values from the user.



#include <stdio.h>

int main() {
    // Write C code here
    int i,a[10],small,j;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }

    small=a[0];
    for ( i = 1; i < 10; i++)
    {
        if (small>a[i])
        {
            small=a[i];
        }
        
    }
    printf("The Smallest Number in this Array is = %d",small);
    
    return 0;
}


// 6. Write a program to sort an array values entered by the user stored in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,a[10],j,temp;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("OLD Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }
 printf("\n");
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; 
            }
            
        }
        
    }
    printf("New Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }

    
    return 0;
}


// 7. Write a program to calculate the second Largest number in an array entered by the user stored in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,a[10],large,j,s_large;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }

    large=a[9];
    for ( i = 0; i < 9; i++)
    {
        if (large<a[i])
        {
            large=a[i];
        }
        
    }
    s_large=a[8];
    for ( i = 0; i < 8; i++)
    {
        if (a[i] != large && s_large<a[i])
        {
            s_large=a[i];
        }
        
    }
    
    printf("The Smallest Number in this Array is = %d",large);
    
    return 0;
}

// 8. Write a program to calculate the second smallest number in an array entered by the user stored in an array of size 10 . Take array values from the user.


#include <stdio.h>

int main() {
    // Write C code here
    int i,a[10],small,s_small,j;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }
printf("\n");
    small=a[0];
    for ( i = 1; i < 10; i++)
    {
        if (small>a[i])
        {
            small=a[i];
        }
        
    }
    s_small=__INT_MAX__;
    for ( i = 1; i < 10; i++)
    {
        if (a[i] != small && s_small>a[i])
        {
            s_small=a[i];
        }
        
    }
    printf("\n");
    printf("The Second Smallest Number in this Array is = %d",s_small);
    
    return 0;
}

// 9. Write a program to sort an array in Decending Order in an array of size 10 . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,a[10],j,temp;
    printf("Enter 10 Numbers\n");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("OLD Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }
 printf("\n");
    for ( i = 0; i < 10; i++)
    {
        for ( j = i+1; j < 10; j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; 
            }
            
        }
        
    }
    printf("New Array\n");
    for  (i = 0; i <=9; i++)
    {
    printf("%d ",a[i]);
    }

    
    return 0;
}

// 10. Write  a program in C to copy the elements of are array into another array . Take array values from the user.

#include <stdio.h>

int main() {
    // Write C code here
    int i,n;
    printf("How many numbers you want to enter = ");
    scanf("%d",&n);
    printf("Enter %d Numbers\n",n);
    int arr[n],brr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n OLD ARRAY 'arr'\n");
     for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n NEW ARRAY 'brr'\n");
     for ( i = 0; i < n; i++)
    {
        brr[i] = arr[i];
        printf("%d ",brr[i]);
    }
    
   
    
    
    return 0;
}

//  int printar(int arr[],int n);
//     int i;
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return i;