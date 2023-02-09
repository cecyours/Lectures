#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int i,n;

struct student
{
    int rollno;
    char name[100];
    float marks;
    bool status;
    char status_text[100];
};

void getstudentdata(struct student s[])
{
    printf("enter the size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter details of student %d\n",i+1);

        printf("  name :" );
        scanf("%s",s[i].name);

        printf("rollno : ");
        scanf("%d",&s[i].rollno);

        printf(" marks : ");
        scanf("%f",&s[i].marks);

        if(s[i].marks>=33 && s[i].marks<=100)
        {
            s[i].status = true;
            strcpy(s[i].status_text,"pass");
        }

        else
        {
            s[i].status = false;
            strcpy(s[i].status_text,"failed");
        }
    }
}

void displayresult(struct student s[])
{
    printf("%2s | %10s | %6s | %2s | %10s\n","sr","name","marks","st","status");

    printf("%2s | %10s | %6s | %2s | %10s\n","--","----------","------","--","----------");

    for(i=0;i<n;i++)
    {
        printf("%2d | %10s | %4.2f | %2d | %10s\n",s[i].rollno,s[i].name,s[i].marks,s[i].status,s[i].status_text);
    }
}

int main()
{
    struct student s[100];


    getstudentdata(s);
    displayresult(s);

    return 0;
}