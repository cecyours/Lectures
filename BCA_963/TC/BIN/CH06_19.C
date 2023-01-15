#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[100];
clrscr();
	printf("Enter a String : ");
	gets(str);
	strrev(str);
	printf("Reverse : %s\n",str);
getch();
}