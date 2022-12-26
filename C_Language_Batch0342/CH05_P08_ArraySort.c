#include<stdio.h>
void main()
{
	int a[100],i,n,temp,j;
	printf("Enter size : ");
	scanf("%d",&n);
	
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	//sort
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n======+===++=====++=== \n\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}