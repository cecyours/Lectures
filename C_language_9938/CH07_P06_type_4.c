#include<stdio.h>
/*type 4: with return value, with args..*/
int sum(int a,int b)
{
	return a+b;
}
int main()
{

	int a,b,c;

	printf("Enter a,b : ");
	scanf("%d,%d",&a,&b);
	c = sum(a,b);

	printf("%d + %d = %d\n",a,b,c);
}