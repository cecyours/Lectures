#include<stdio.h>
void main()
{
	int a[100],i,n,temp,j; 
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the element : \n"); 
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i); 
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j]; 
				a[j] = temp; 
			}
		}
	}
	printf("\n====+=====+====+===== \n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}