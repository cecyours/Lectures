#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100],str2[10];
clrscr();
	printf("Enter First Name : ");
	scanf("%s",str1);

	printf("Enter Last Name : ");
	scanf("%s",str2);

	strcat(str1," "); // adding space
	strcat(str1,str2); //adding text after space

	printf("Hello %s\n",str1);
getch();
}