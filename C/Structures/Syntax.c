#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    struct student s1={25,"sahtya",44};
    struct student s2 = {66,"Vasu",93};

    printf("%d %s %f",s1.rollno,s1.name,s1.marks);

    return 0;
}