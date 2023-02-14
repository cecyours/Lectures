#include<stdio.h>
#include<conio.h>

void main()
{
	char *s1,*s2;
	int i;
clrscr();
	printf("Enter s2 :" );
	gets(s2);

	for(i=0;*(s2+i)!=NULL;i++)
	{
	*(s1+i)=*(s2+i);
	}
	*(s1+i)=NULL;
	printf("s1 : %s",s1);
getch();
}