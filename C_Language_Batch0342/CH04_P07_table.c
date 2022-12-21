#include<stdio.h>
void main()
{
	int i;
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}


}


