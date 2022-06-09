
#include<stdio.h>
int main()
{
	int a[5] = {4,6,2,7,9,3};
	int i;

	printf("data : %d\n",a[0]);
	
	printf("data : %d\n",a[1]);
	printf("data : %d\n",a[2]);
	printf("data : %d\n",a[3]);
	printf("data : %d\n",a[38]);

	
	for(i=0;i<5;i++)
	{
		printf("new Data a[%d]: %d\n",i,a[i]);
	}
}
