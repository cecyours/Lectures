#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[100];
	int rollNo;
	int mark;
	char status[100];
};

void main()
{
clrscr();
	struct student s[100];
	int i,n;

	printf("Enter Number of student : ");
	scanf("%d",&n);

	printf("Enter Data : ");

	for(i=0;i<n;i++)
	{
		flushall();
		printf("Enter Student Name : ");
		gets(s[i].name);

		printf("Enter student RollNo : ");
		scanf("%d",&s[i].rollNo);

		printf("Enter Your Mark : ");
		scanf("%d",&s[i].mark);

		if(s[i].mark<=25)
		{
			strcpy(s[i].status,"fail");
		}
		else
		{
			strcpy(s[i].status,"pass");
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%s\t %d\t %d\t %s\t",s[i].name,
		s[i].rollNo,s[i].mark,s[i].status);
	}
getch();
}