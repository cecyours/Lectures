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

		switch(d[i].mm)
		{
			case 1:
			strcpy(d[i].mmm,"JANUARY");break;
			case 2:
			strcpy(d[i].mmm,"FABRUARY");break;
			case 3:
			strcpy(d[i].mmm,"MARCH");break;
			case 4:
			strcpy(d[i].mmm,"APRIL");break;
			case 5:
			strcpy(d[i].mmm,"MAY"); break;
			case 6:
			strcpy(d[i].mmm,"JUNE");break;
			case 7:
			strcpy(d[i].mmm,"JULY");break;
			case 8:
			strcpy(d[i].mmm,"AUGUST");break;
			case 9:
			strcpy(d[i].mmm,"SEPTEMBER");break;
			case 10:
			strcpy(d[i].mmm,"OCTOBER");break;
			case 11:
			strcpy(d[i].mmm,"NOVEMBER");break;
			case 12:
			strcpy(d[i].mmm,"DECEMPER");break;
			default:
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