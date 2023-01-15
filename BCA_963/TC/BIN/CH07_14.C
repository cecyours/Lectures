#include<stdio.h>
#include<conio.h>
void display(int n)
{
	if(n==0) //Basecase
		return; //exit from recursion
	printf("Hello World\t");
	n--; //for Basecase
	display(n);
}
void main()
{
   clrscr();
		display(10);
   getch();
}