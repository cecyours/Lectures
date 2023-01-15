#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],ch='q',*pos=0;
	int i;
clrscr();
	printf("Enter a string : ");
	gets(str);

	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
		  pos = &str[i];
		  printf(" '%c' is found at address %p\n",ch,pos);
		}
	}

	if(!pos) //if pos points 0
		printf(" '%c' is not found\n",ch);

getch();
}