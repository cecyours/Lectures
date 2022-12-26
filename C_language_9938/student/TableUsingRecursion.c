#include<stdio.h>
int main()
{
	int i,j;
	int num1,num2;
	printf("Enter the first number to get table :");
	scanf("%d",&num1);
	printf("Enetr the last number :");
	scanf("%d",&num2);

	for(i=num1;i<num2;i++)
	{
		num1=i;
		printf(" next table of %d =>",num1);
		for(j=1;j<=10;j++)
		{
			printf("| %3d |",num1*j);
		}
		printf("\n");
	}
}