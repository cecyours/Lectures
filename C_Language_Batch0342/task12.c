#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0; 
	int *p; 
	int min,max; 
	printf("Enter the size : ");
	scanf("%d",&n); 

	printf("address of 1st elements : %p\n",&a[0]);
	printf("address of 1st elements : %p\n",a);

	p = a; 
	p = &a[0];
	printf("Enter the array : \n"); 
	for(i=0;i<n;i++)
	{
		printf("a [ %d ] =",i); 
		scanf("%d",&a[i]); 
	} 
	printf("-------------------------------\n"); 
	min = *p; 
	max = *p; 
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] = %d\n",i,a[i]); 

		if(*(p+i)<min)
		{
			min = *(p+i); 
		}
		if(*(p+i)>max); 
		{
			max = *(p+i); 
		}
	}
 	printf("min : %d\tmax : %d\n",min,max); 
}