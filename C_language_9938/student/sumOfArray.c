#include<stdio.h>
int main()
{
	int a[100];
	int i;
	int n,sum=0;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : ");
	for(i=0;i<n;i++)
	{
		printf("a[ %d ]", i);
		scanf("%d",&a[i]);

		sum += a[i];


	}

	printf("Your total sum :> %d \n",sum);
}