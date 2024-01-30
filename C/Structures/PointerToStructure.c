#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};

int main (){
struct student s={1,"Sahtya",66};
struct student *ptr=&s;
printf("Roll No. =%d",ptr->rollno);



return 0;
}
