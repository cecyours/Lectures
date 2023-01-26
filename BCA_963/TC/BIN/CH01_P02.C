#include<conio.h>
#include<stdio.h>
#include<string.h>

struct Student{
	int rollNo;
	char name[100]; //string
	float marks;
	char status[100];
};
void main()
{
	struct Student s;
   clrscr();
	  printf("Enter your rollNo : ");
	  scanf("%d",&s.rollNo);

	  printf("Enter your name : ");
	  scanf("%s",s.name); //gets()

	  printf("Enter your marks : ");
	  scanf("%f",&s.marks);

	  if(s.marks>=33)
	  {
		strcpy(s.status,"Pass");
	  }
	  else
	  {
		strcpy(s.status,"Better luck next time");
	  }

	  textattr(4);
	  cprintf("\n\n%d\t %s\t %.2f\t %s",s.rollNo,s.name,s.marks,s.status);
   getch();
}