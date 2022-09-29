
#include<stdio.h>
int main()
{
	int a[100],i,n,num,f=1;

	printf("enter the size: ");
	scanf("%d",&n);

	printf("Enter the array : \n");

	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i );
		scanf("%d",&a[i]);
	}

	/*element to search*/
	printf("\nEnter the element to search : ");
	scanf("%d",&num);


	for(i=0;i<n;i++)
	{

		if(num==a[i])
		{
			f = 0;
			break;
		}
	}

	if(f==0)
		printf("your %d is found..\n",num );
	else
		printf("your %d is not found..\n",num );



}