#include<stdio.h>
void main()
{
	float a[100],sum=0,avg; 
	int i,n; 
	
	printf("Enter the size : ");
	scanf("%d",&n);
	
	printf("Enter the data : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[ %d ] = ",i);
		scanf("%f",&a[i]);
		
		sum = sum+a[i];
			
	}	
		avg = sum/n;
		printf("\nThe array :\n");
		for(i=0;i<n;i++)
			printf("a[ %d ] = %.2f\n",i,a[i]);
			
		printf("\nsum : %.2f,\t",sum);
		printf("avg : %.2f,\n",avg);
		//4x3
}
