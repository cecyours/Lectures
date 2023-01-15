#include<stdio.h>
#include<conio.h>
void display()
{
	printf("Hello World\t");
	display();
}
void main()
{
   clrscr();
	    display();
   getch();
}