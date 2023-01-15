#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("enter a number");
	scanf("%d",&number);

	printf("%d => %d\n",number,number*number);

	getch();
}