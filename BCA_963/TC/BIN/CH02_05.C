#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
clrscr();
	printf("Enter number : ");
	scanf("%d",&a);
	printf("Enter number : ");
	scanf("%d",&b);

	c = a+b;  // sum of a,b stored in c

	printf("%d + %d = %d\n",a,b,c);

getch();
}