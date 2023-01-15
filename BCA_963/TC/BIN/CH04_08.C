#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
clrscr();
	 for(i=1; i<=10; i++)
	 {
		textattr(13); //display msg in color :)
		cprintf("Good morning %c !!\n\r",3);
	 }
getch();
}