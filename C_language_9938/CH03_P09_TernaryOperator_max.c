
#include<stdio.h>
int main()
{
	int a,b,max;

	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	max = (a>b)?a:b;

	printf("Max is : %d\n",max);
}