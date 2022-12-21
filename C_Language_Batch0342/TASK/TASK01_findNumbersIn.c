#include<stdio.h>
void main()
{
	int a[100],i,n;
	int pos=0,neg=0,zero=0;
	
	printf("Enter the size  :");
	scanf("%d",&n);
	
	printf("Enter the array: \n");
	for(i=0;i<n;i++)
	{
		printf(" a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	// check
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
		else{
			zero++;
		}
	}
	printf(" No of +ve : %d\n",pos);
	printf(" No of -ve : %d\n",neg);
	printf("No of zero : %d\n",zero);
}
