#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    float marks;
    char name[100];
};

void getdata(struct student *s)
{
    printf("enter details for student : \n");

    printf("   name : ");
    scanf("%s",s->name);

    printf("roll no : ");
    scanf("%d",&s->rollno);

    printf(" marks : ");
    scanf("%f",&s->marks);
}

int main()
{
    struct student s1,s2;

    getdata(&s1);
    getdata(&s2);

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
}