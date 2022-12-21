
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0,num;

	printf("Enter the number : ");
	scanf("%d",&num);

	sum = num;

	while(sum<=100)
	{

		system("clear"); // cls
		printf("sum is : %d\n", sum);
		printf("\nEnter the number : ");
		scanf("%d",&num);

		sum += num; // sum =sum+num;
	}
		printf("sum is : %d\n", sum);

}