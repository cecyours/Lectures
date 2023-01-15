#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int *pa,*pb,*pc;
   clrscr();
	pa = &a;
	pb = &b;
	pc = &c;

	printf("Enter 1st number : ");
	scanf("%d",pa);

	printf("Enter 2nd number : ");
	scanf("%d",pb);

	*pc = *pa+*pb;

	printf("%d + %d = %d\n",a,b,c);

   getch();
}