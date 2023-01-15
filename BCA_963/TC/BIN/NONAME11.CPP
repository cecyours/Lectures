#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char name[100];

clrscr ();
	textattr(131);
	cprintf("Enter your name :");
	gets(name);

	strrev(name);
	textattr(12);
	cprintf("reverse name : %s\n\r",name);

	strupr(name);
	textattr(13);
	cprintf("upper name : %s\n\r",name);

	strlwr(name);
	textattr(11);
	cprintf("lower name : %s\n\r",name);

	strset(name,41);
	textattr(141);
	cprintf("set name : %s\n\r",name);

getch();
}