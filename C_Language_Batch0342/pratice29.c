
#include<stdio.h>
#define SUM(x,y) x+y
#define DIV(x,y) x/y

int main()
{
	int a,b;

	printf("Enter a,b : ");
	scanf("%d,%d",&a,&b);

	printf("%d + %d = %d\n",a,b,SUM(a,b));
	printf("%d / %d = %d\n",a,b,DIV(a,b));
}