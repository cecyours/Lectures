#include<stdio.h>
/*type 1: without return value, without args..*/
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