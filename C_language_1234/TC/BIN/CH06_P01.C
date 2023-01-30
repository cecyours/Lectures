#include<stdio.h>
#include<conio.h>
void main()
{
	char name[100] = {'h','e','l','l'};
clrscr();
	 printf("Enter your name : ");
	 //scanf("%s",name);
	 gets(name);


	 printf("welcome %s\n",name);
getch();
}