#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100];
	int i,j;
clrscr();
	printf("Enter First Name : ");
	scanf("%s",str1);

	printf("Enter Last Name : ");
	scanf("%s",str2);

	for(i=0;str1[i];i++);

	str1[i++] = ' '; // insert space at next position
	for(j=0;str2[j];j++,i++)
	{
		str1[i] = str2[j];
	}
	str1[i]='\0';
	printf("Hello %s",str1);
getch();
}