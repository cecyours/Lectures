
#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");

	for(i=0;i<n;i++)
	{
		printf(" a[ %d ] = ", i);
		scanf("%d",&a[i]);
	}


	/*todo: sort array*/
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}

	printf("----------------\n");
	/*todo: print*/
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] = %d\n",i,a[i]);
	}

}
 