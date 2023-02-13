#include<stdio.h>

struct student 
{
    int rollno;
    char name[100];
};

void main()
{
    struct student s = {1,"shivam"};

    printf("\twelcome %s\n \tyour rollno %d  \n",s.name,s.rollno);
}