
#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int rollNo;
    char name[100];
    float marks;
};

int main()
{
    struct Student s1,s2;


    printf("Enter details for Student 1 : \n");
    
    printf("  name : ");
    scanf("%s",s1.name);

    printf("RollNo : ");
    scanf("%d",&s1.rollNo);
    
    printf(" Marks : ");
    scanf("%f",&s1.marks);
    
    system("clear");

    printf("Enter details for Student 2 : \n");
    
    printf("  name : ");
    scanf("%s",s2.name);

    printf("RollNo : ");
    scanf("%d",&s2.rollNo);
    
    printf(" Marks : ");
    scanf("%f",&s2.marks);
    
    system("clear");
    

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
    return 0;
}