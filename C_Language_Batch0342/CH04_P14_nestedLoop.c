#include<stdio.h>
void main()
{
	int i,j,n;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j%2==0 && i%2==0)
			printf("   ");
			  else
			printf(" * ");
		}
		printf("\n");
	}
}
