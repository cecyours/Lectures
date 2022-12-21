#include<stdio.h>
int main()
{
	int n;
	int i;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		
		printf("%d x %d = %d\n",n,i,n*i);
		i++;
	}
	printf(" hell of code...");
}
