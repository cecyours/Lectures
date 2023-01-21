#include<conio.h>
#include<stdio.h>
#include<string.h>

struct Student{
  int rollNo;
  char name[100];

  struct subjects{
	double maths;
	double english;
	double science;
	double total;
	char status[100];
  }s;

};
void main()
{
	struct Student p;
clrscr();
	  printf("Enter the rollNO : ");
	  scanf("%d",&p.rollNo);

	  flushall();

	  printf("Enter the name:");
	  //scanf("%s",&p.name);
	  gets(p.name);

	  printf("Enter math:");
	  scanf("%lf",&p.s.maths);

	  printf("Enter english:");
	  scanf("%lf",&p.s.english);

	  printf("Enetr science:");
	  scanf("%lf",&p.s.science);

	  p.s.total = p.s.maths+p.s.english+p.s.science;

	  if(p.s.total>=99)
	  {
	      strcpy(p.s.status,"Pass");
	  }
	  else
	  {
		strcpy(p.s.status,"Failed");
	  }

	   printf("%d\t %s\t %lf\t %lf\t %lf\t %lf %s\n",p.rollNo,p.name,p.s.maths,p.s.english,
	   p.s.science,p.s.total,p.s.status);

getch();
}