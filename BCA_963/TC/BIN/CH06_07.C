#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100];
clrscr();
	printf("Enter a string : ");
	gets(str1);

	strcpy(str2,str1); //str2 <- str1

	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);

getch();
}