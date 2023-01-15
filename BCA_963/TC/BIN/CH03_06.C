#include<stdio.h>
#include<conio.h>
void main()
{

	char ch;
clrscr();
	printf("Enter a character : ");
	scanf("%c",&ch);

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("%c is alphabet.\n",ch);
	}
	else
	{
		printf("%c is not aphabet.\n",ch);
	}

getch();
}