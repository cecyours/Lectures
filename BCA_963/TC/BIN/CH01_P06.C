//array of structure

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Student{
	int rollNo;
	char name[100];
	double marks[3],total,avg;
	char status[100];
};

void display(struct Student s)
{
	int i;
	printf("%3d | %10s |",s.rollNo,s.name);
	for(i=0;i<3;i++)
	{
		printf(" %3.2lf |",s.marks[i]);
		s.total = s.total+s.marks[i];
	}
	s.avg = s.total/3;
	if(s.avg>33)
	{
		strcpy(s.status,"Pass");
	}
	else
	{
		strcpy(s.status,"Failed");
	}

	printf(" %3.2lf | %3.2lf | %10s\n",s.total,s.avg,s.status);
}

void main()
{
      struct Student s[100];
      int n,i,j;
clrscr();

	printf("Enter number of student : ");
	scanf("%d",&n);

	printf("Enter data : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter data for Student %d.\n",i+1);
		printf("RollNo : ");
		scanf("%d",&s[i].rollNo);

		flushall();
		printf("Name : ");
		gets(s[i].name);

		printf("\nEnter marks :\n");
		for(j=0;j<3;j++)
		{
			printf("Subject %d : ",j+1);
			scanf("%lf",&s[i].marks[j]);
		}
		clrscr();

	}

	printf("\n--------------------\n");
	printf("%3s | %10s | %6s | %6s | %6s | %6s | %6s | %10s\n","Sr.","Name","Maths","sci","eng","total","avg","status");

	printf("%3s + %10s + %6s + %6s + %6s + %6s + %6s + %10s\n","---","----","-----","---","---","-----","---","------");

	for(i=0;i<n;i++)
	{
		display(s[i]);
	}

getch();
}