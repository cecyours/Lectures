#include<stdio.h>

void multiplied()
{
	int a,b;

	printf("Enter a,b :");
	scanf("%d,%d",&a,&b);

	printf("%d X %d = %d\n\n",a,b,a*b);

	printf("your answer is %d ....",a*b);
}

int main()
{
	multiplied();
}