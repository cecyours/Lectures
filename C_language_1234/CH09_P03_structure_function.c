
#include<stdio.h>
#include<stdlib.h> 
struct Student{

    int rollNo;
    float marks;
    char name[100];

};

void getData(struct Student *s)
{
    printf("enter details for student  : \n");

    printf("  name : ");
    scanf("%s",s->name);

    printf("rollno : ");
    scanf("%d",&s->rollNo);

    printf(" marks : ");
    scanf("%f",&s->marks);

    
}
int main()
{
    struct Student s1,s2;

    getData(&s1);
    getData(&s2);

    if(s1.marks > s2.marks)
    {
        printf("GRADE A : %2d \t %10s \t %3.2f \n",s1.rollNo,s1.name,s1.marks);
        printf("GRADE B : %2d \t %10s \t %3.2f \n",s2.rollNo,s2.name,s2.marks);
    }
    else
    {
        printf("GRADE A : %2d \t %10s \t %3.2f \n",s2.rollNo,s2.name,s2.marks);
        printf("GRADE B : %2d \t %10s \t %3.2f \n",s1.rollNo,s1.name,s1.marks);
        
    }
    
}