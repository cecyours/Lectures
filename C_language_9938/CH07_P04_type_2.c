#include<stdio.h>
/*type 2: without return value, with args..*/
void sum(int a,int b)
{
	printf("%d + %d = %d\n",a,b,a+b );
}
int main()
{

	int a,b;

	printf("Enter a,b : ");
	scanf("%d,%d",&a,&b);

	sum(a,b);
}