// 1. Define a structure Employee with member variables id , name , salary.


// #include<stdio.h>

// struct Employee {
//     int id;
//     char name[20];
//     int salary;
    

// };

// int main (){
//     struct Employee xyz={101,"Mathew",660000};
//     printf("id=%d\nname=%s\nSalary=%d",xyz.id,xyz.name,xyz.salary);
// }




//  2. Write a function to take input to display Employee Data from the user (Question 1).

#include<stdio.h>

struct Employee {
    int id;
    char name[20];
    int salary;
    

};

int main (){
    struct Employee xyz[3];
for (int i = 0; i < 3; i++)
{
    scanf("%d %s %d",&xyz[i].id,&xyz[i].name,&xyz[i].salary);
    
}
for (int i = 0; i < 3; i++)
{
    
    printf("id=%d\nname=%s\nSalary=%d",xyz[i].id,xyz[i].name,xyz[i].salary);
}



}
