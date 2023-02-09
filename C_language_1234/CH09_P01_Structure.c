#include<stdio.h>
struct Student { int rollNo; char name[100];};


void main()
{
    struct Student s = {1,"Sumit"};

    printf("Welcome %s, your rollNo %d\n",s.name,s.rollNo);

}