#include<stdio.h>

void sum()
{
	int a,b;

	printf("Enter a,b : ");
	scanf("%d,%d",&a,&b);

	printf("%d + %d = %d\n",a,b,a+b );
}
int main()
{
	sum();
}