#include<stdio.h>
int main()

{
	int a[100];
	int *p,n,i;

	p = a;

	printf("\t\t\tstart address : %u\n",p);
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter Your Array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[ %d ] : \n",i);
		scanf("%d",(p+i));

	}

	printf("\t\t\tEnd address : %u\n",p);


	printf("\n\n============================\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
