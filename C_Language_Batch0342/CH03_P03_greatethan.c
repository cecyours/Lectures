
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter 2 number : ");
	scanf("%d,%d",&a,&b);
	
	if(a>b)
	{
		printf("%d is greater than %d\n",a,b);
	}
	else
	{
		printf("%d is not greater than %d\n",a,b);
	}
}
