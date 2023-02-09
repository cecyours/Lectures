#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr[4],*p;
	int a=10,b=39,c=20,d=89,i;
clrscr();
/*
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	ptr[3] = &d;
  */
	// init the pointers

	p = &a;
	for(i=0;i<4;i++)
	{
	       ptr[i] = p--;
	}
	printf("\n--------\n");

	for(i=0;i<4;i++)
	{
		printf("%d at %X\n",*ptr[i],ptr[i]);
	}

getch();
}