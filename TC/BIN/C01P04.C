#include<stdio.h>
#include<conio.h>
void main()
{
	int day;
clrscr();
	printf("Enter a day number : ");
	scanf("%d",&day);

	if(day==1)
	{
		textattr(day);
		cprintf("Monday");
	}
	else if(day==2)
	{
		textattr(day);
		cprintf("Tuesday");
	}
	else if(day==3)
	{
		textattr(day);
		cprintf("Wednesday");
	}
	else
	{
		textattr(4);
		cprintf("Day number invalid..");
	}

getch();
}