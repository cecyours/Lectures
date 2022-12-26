#include<stdio.h>
void main()
{
	int my_era[100],i,n;
	int max=0,min=0;
	
	printf("enter size : ");
	scanf("%d",&n);
	
	printf("\n------------------\n");
	
	printf("Enter element : \n");
	for(i=0;i<n;i++)
	{
		printf("my_era[%d] = ",i);
		scanf("%d",&my_era[i]);
	}
	
	printf("------------------\n");
	min=max=my_era[0];
	for(i=0;i<n;i++)
	{
		if(max<my_era[i])
		{
			max = my_era[i];
		}
		if(min>my_era[i])
		{
			min = my_era[i];
		}		
}
	printf("min : %d,max : %d\n",min,max);
}

