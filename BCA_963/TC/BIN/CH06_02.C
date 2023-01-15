#include<stdio.h>
#include<conio.h>
void main()
{
     char str1[100];
     char str2[100];
clrscr();
	printf("Enter the str1 : ");
	scanf("%s",str1); // no need of & due to string.

	 flushall(); // to clean the console inputs

	printf("Enter the str2 : ");
	gets(str2);

	printf("\n ------------- \n");
	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);
getch();
}