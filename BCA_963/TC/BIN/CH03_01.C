#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
clrscr();
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b); // input 2 numbers separate by ,

	c = a%b;

	printf("         result : %d %% %d = %d\n",a,b,c);
getch();
}