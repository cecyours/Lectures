#include<stdio.h>
void main()
{
	int a[10] = {1,3,2,5,3,8,9,7,4,4,6,3};
	int i; 
	
	printf("data : %d\n",a[10]);
	printf("data : %d\n",a[3]);
	printf("data : %d\n",a[2]);
	printf("data : %d\n",a[5]);
	printf("data : %d\n",a[3]);
	printf("data : %d\n",a[8]);
	printf("data : %d\n",a[9]);
	printf("data : %d\n",a[7]);
	printf("data : %d\n",a[1]);
	printf("data : %d\n",a[4]);
	printf("data : %d\n",a[6]);		
	printf("data : %d\n",a[3]);
	
	printf("-------------------------\n");
	
	
	for(i=0;i<10;i++)
	{
		printf("new Data a [%d] = %d\n",i,a[i]);
	}
									
}
