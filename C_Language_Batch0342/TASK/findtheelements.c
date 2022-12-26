#include<stdio.h>
void main()
{
	int hello[100],i,n;
	int x,f=0;
	
	printf("Enter size : "); 
	scanf("%d",&n);
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		printf("hello [%d] = ",i);
		scanf("%d",&hello[i]);
	}
	
	printf("--------------------------\n");
	
	printf("Enter data to search : ");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(x==hello[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("%d is present. ",x);
	}
	else
	{
		printf("%d is absent. ",x);
}
}
