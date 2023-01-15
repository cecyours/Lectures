#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
clrscr();
	printf("Enter a number: ");
	scanf("%d,%d",&a,&b);

	c = ~a;  // bitwise negation( ~ )

	printf(" ~ %d = %d \n",a,c);
getch();
}