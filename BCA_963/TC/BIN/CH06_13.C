#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
clrscr();
	printf("Enter a String : ");
	gets(str);

	strlwr(str);

	printf("String : %s\n",str);

getch();
}