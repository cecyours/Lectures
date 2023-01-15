#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i;
clrscr();
	printf("Enter a string : ");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i] = str[i]-32;
	}
	printf("String : %s\n",str);
getch();
}