
#include<stdio.h>
int main()
{
	int a[100],n,i,max,min;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] : ",i);
		scanf("%d",&a[i]);
	}

	max = a[0];
	min = a[0];

	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}

		if(min>a[i])
		{
			min = a[i];
		}
			
	}

	printf("\n max is : %d\n",max);
	printf("\n min is : %d\n",min);

}
