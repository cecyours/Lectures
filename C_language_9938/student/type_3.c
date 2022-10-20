#include<stdio.h>

int sum()
{
	int a,b;
	printf("Enter a,b : \n");
	scanf("%d,%d",&a,&b);

	return a+b;
}

int main()
{
	int c;

	c = sum();

	printf("value.... %d\n",c);
}