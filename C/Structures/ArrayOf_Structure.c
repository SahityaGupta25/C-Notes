#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};

int main (){
struct student s1[3];
for (int i = 0; i <1 ; i++)
{
    scanf("%d %s %f",&s1[i].rollno,&s1[i].name,&s1[i].marks);
}

for (int i = 0; i < 1; i++)
{
    printf("%d %s %f",s1[i].rollno,s1[i].name,s1[i].marks);
}

return 0;
}
