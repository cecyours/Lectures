#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	printf("Your divind : %d\n",num%2);

	if(num%2==0)
	{
		printf("%d is even\n",num );
	}
	else
	{
		printf("%d is odd\n",num );
	}	



}