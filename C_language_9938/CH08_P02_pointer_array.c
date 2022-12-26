
#include<stdio.h>
int main()
{
	int a[100];
	int *p,n,i;

	p = a; // array name is a memory location of first element.
	// p = &a[0];  

	printf("\t\t\tstart address : %u\n",p );
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter your array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[ %d ] : ",i);
		scanf("%d",(p+i));
	}

	printf("\t\t\tend address : %u\n",p);

	printf("\n\n=====================\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}