#include<stdio.h>
#include<conio.h>
void main()
{
   char list[20][100]; // max 20 students
   int i,n;
   clrscr();
	printf("Enter no of Students [1-20] : ");
	scanf("%d",&n);
	  flushall();
	printf("Enter the list : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter name of student %d : ",i+1); //index+1
		gets(list[i]);
	}
	printf("\nEntered List : \n");
	for(i=0;i<n;i++)
	{
		printf("Student %d : %s\n",i+1,list[i]);
	}
   getch();
}