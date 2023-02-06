#include<stdio.h>
#include<conio.h>
void main()
{
	char *ptr,ch;
	int i;
clrscr();
	printf("Enter your name : ");
	gets(ptr);

	printf("welcome %s \n",ptr);

	for(i=0;*(ptr+i)!=NULL;i++)
	{
		ch=*(ptr + i);

		if(ch>='A' && ch<='Z')
		{
			ch=ch+32;
		}
		printf("%c",ch);
	}
getch();
}