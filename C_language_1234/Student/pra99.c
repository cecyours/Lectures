#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    char name[100];
    float marks;
};

int main()
{
    struct student s1,s2;


    printf("enter details for student 1 : \n");

    printf("   name : ");
    scanf("%s",s1.name);

    printf("roll no : ");
    scanf("%d",&s1.rollno);

    printf(" marks : ");
    scanf("%f",&s1.marks);

    system("clear");



    printf("enter details for student 2 : \n");

    printf("   name : ");
    scanf("%s",s2.name);

    printf("roll no : ");
    scanf("%d",&s2.rollno);

    printf(" marks : ");
    scanf("%f",&s2.marks);

    system("clear");


    if(s1.marks > s2.marks)
    {
        printf("GRADE A : %2d \t %10s \t %3.2f \n",s1.rollno,s1.name,s1.marks);
        printf("GRADE B : %2d \t %10s \t %3.2f \n",s2.rollno,s2.name,s2.marks);
    }
    else
    {
        printf("GRADE A : %2d \t %10s \t %3.2f \n",s2.rollno,s2.name,s2.marks);
        printf("GRADE B : %2d \t %10s \t %3.2f \n",s1.rollno,s1.name,s1.marks);
    }

    return 0;
}