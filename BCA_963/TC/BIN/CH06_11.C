#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
clrscr();
	printf("Enter a string : ");
	gets(str);

	strupr(str);

	printf("String : %s\n",str);
getch();
}