
#include<stdio.h>
int main()
{
	int a,b;

	printf("Enter 2 number : ");
	scanf("%d,%d",&a,&b);

	if(a>b)
	{
		printf("%d is max than %d\n",a,b );
	}

	if(a<b)
	{
		printf("%d is min than %d\n",a,b );
	}

	if(a==b)
	{
		printf("%d is eqal than %d\n",a==b);
	}

	if(a!=b)
	{
		printf("%d is notequal than %d\n",a!=b);
	}

	if(a>=b)
	{
		printf("%d is less than or equal %d\n",a<=b);
	}
	if(a>=b)
	{
		printf("%d is greater than or equal %d\n",a>=b);
	}
}



