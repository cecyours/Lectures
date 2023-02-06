#include<stdio.h>
#include<conio.h>
void main ()
{

	char *s1,*s2;
	int i,j;
	clrscr();

	printf("Enter s1 :");
	gets(s1);

	printf("Enter s2 :");
	gets(s2);
	for(i=0;*(s1+i)!=NULL;i++);
	for(j=0;*(s2+j)!=NULL;j++,i++)
	{
	*(s1+i)=*(s2+j);
	}
	printf("s1 : %s\n",s1);

getch();
}