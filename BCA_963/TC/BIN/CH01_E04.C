#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Date{
  int dd,mm;
  char mmm[100];
};

void main()
{
	struct Date d[10];
	int n=2,i,mm;
clrscr();
	for(i=0;i<n;i++)
	{

		printf("Enter dd-mm : ");
		scanf("%d-%d",&d[i].dd,&d[i].mm);
		mm=d[i].mm;
		if(mm==1)
		{
			strcpy(d[i].mmm,"JANUARY");
		}
		else if(mm==2)
		{
			strcpy(d[i].mmm,"FABRUARY");
		}
		else if(mm==3)
		{
			strcpy(d[i].mmm,"MARCH");
		}
		else if(mm==4)
		{
			strcpy(d[i].mmm,"APRIL");
		}
		else if(mm==5)
		{
			strcpy(d[i].mmm,"MAY");
		}
		else if(mm==6)
		{
			strcpy(d[i].mmm,"JUNE");
		}
		else if(mm==7)
		{
			strcpy(d[i].mmm,"JULY");
		}
		else if(mm==8)
		{
			strcpy(d[i].mmm,"AUGUST");
		}
		else if(mm==9)
		{
			strcpy(d[i].mmm,"SEPTEMBER");
		}
	      else if(mm==10)
		{
			strcpy(d[i].mmm,"OCTOBER");
		}
		else if(mm==11)
		{
			strcpy(d[i].mmm,"NOVEMBER");
		}
	       else if(mm==12)
		{
			strcpy(d[i].mmm,"DECEMPER");
		}
		else
		{
			strcpy(d[i].mmm,"Invalid value..");
		}
	}
	//display

	for(i=0;i<n;i++)
	{
		printf("Date %d : %d-%d, %s\n",i+1,d[i].dd,d[i].mm,d[i].mmm);
	}
	getch();
}