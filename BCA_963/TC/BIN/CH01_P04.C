#include<stdio.h>
#include<conio.h>

// array in structure
struct Student{
	int rollNo;
	char name[100];
	double marks[3];
	double total,avg;


};
void display(struct Student s)
{
	int i;
	printf("%4d \t %10s\t",s.rollNo,s.name);
	for(i=0;i<3;i++)
	{
		printf("%3.2lf\t",s.marks[i]);
		s.total = s.total+s.marks[i];
	}
	s.avg = s.total/3;
	printf("%3.2lf\t %3.2lf\n",s.total,s.avg);
}

void main()
{
	struct Student p;
	int i;
clrscr();
	printf("Enter your rollNo : ");
	scanf("%d",&p.rollNo);

	flushall();
	printf("Enter your name : ");
	gets(p.name);

	printf("Enter marks of 3 subject : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter marks for %d subjet : ",i+1);
		scanf("%lf",&p.marks[i]);
	}

	display(p);
getch();
}