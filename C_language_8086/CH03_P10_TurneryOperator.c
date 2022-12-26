#include<stdio.h>
int main()
{
	int a,b,min;
	printf("Enter 2 number : ");
	scanf("%d %d", &a,&b);

	min = (a<b)?a:b;

	printf("min is %d\n",min );
}