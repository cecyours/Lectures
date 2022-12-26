#include<stdio.h>
void main()
{
	int a[5] = {4,7,4,3,2,8};
	int i; 
	
	printf("data : %d\n ",a[0]);
	printf("data : %d\n ",a[1]);
	printf("data : %d\n ",a[2]);		
	printf("data : %d\n ",a[3]);
	printf("data : %d\n ",a[4]);

	for (i=0;i<5;i++)
	{
	printf("new data a[%d] : %d\n",i,a[i]);
	}
}
