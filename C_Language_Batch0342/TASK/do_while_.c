#include<stdio.h>
void main()
{
	int n; 
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	do
	{
		printf("number %d\n",n);
		n++;
	} while(n<=100);
	
}
