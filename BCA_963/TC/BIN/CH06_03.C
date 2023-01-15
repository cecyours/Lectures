#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char name[100];
   int len;
clrscr();
	printf("Enter name : ");
	gets(name);

	len = strlen(name);

	printf("length of %s is %d.\n",name,len);
getch();
}