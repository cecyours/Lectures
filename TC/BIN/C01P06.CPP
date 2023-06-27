#include<stdio.h>
#include<conio.h>
void main()
{
	float area,l,w;  // area = l*w;
clrscr();
	printf("Enter l : ");
	scanf("%f",&l);

	printf("Enter w : ");
	scanf("%f",&w);

	area = l*w;

	printf("area = %f\n",area);

getch();
}