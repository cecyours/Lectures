#include<stdio.h>

union student
{
    int rollno;
    char div;
};

int main()
{
    union student s;

    printf("   enter div : ");
    scanf("%c",&s.div);

    printf("enter rollno : ");
    scanf("%d",&s.rollno);

    printf("--------------------\n");

    printf("rollno : %d\n",s.rollno);
    printf("   div : %c\n",s.div);

    return 0;
}