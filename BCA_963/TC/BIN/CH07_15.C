#include<stdio.h>
#include<conio.h>
void display(int n)
{
	if(n==0)
		return;

	printf("Recursion Incoming : %d\n",n);
	n--;
	display(n);
	printf("--- -- Recursion Outgoing : %d\n",n);

}
void main()
{
   clrscr();
	   display(5);
   getch();
}