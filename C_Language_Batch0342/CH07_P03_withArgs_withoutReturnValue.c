#include<stdio.h>
void sum(int a,int b)
{
	int c;
	c = a+b;
	printf("%d + %d = %d\n",a,b,c);
}

void main()
{
	int a,b;
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);
	
	sum(b,a);
}