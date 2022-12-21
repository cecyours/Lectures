#include<stdio.h>
/*type 2: with return value, without args..*/
int sum()
{

	int a,b;

	printf("Enter a,b : ");
	scanf("%d,%d",&a,&b);

	return a+b;
}
int main()
{
	int c;

	c = sum();

	printf("value : %d\n",c );

}