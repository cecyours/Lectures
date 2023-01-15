#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
clrscr();
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	c = a >> b; // bitwise right-shift( >> )

	printf("%d >> %d = %d \n",a,b,c);
getch();
}