#include<stdio.h>
#include<conio.h>
void main()
{
	int a=12,b=4,c;
clrscr();
	c = a+b;
	printf("%d + %d = %d\n",a,b,c);

	c = a-b;
	printf("%d - %d  = %d \n",a,b,c);

	a = 10;
	b = 7;

	c = a*b;
	printf("%d * %d = %d \n",a,b,c);

	c = a/b;
	printf("%d / %d = %d \n",a,b,c);

	c = a%b;
	printf("%d %% %d = %d \n",a,b,c);
getch();
}