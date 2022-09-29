
#include<stdio.h>
int main()
{
	int a[100];
	int i;
	int n,sum=0;

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] = ",i );
		scanf("%d",&a[i]);

		sum += a[i];
	}

	printf("your total sum : %d\n",sum);


	/* n : 5
		
		12	12
		6	18
		10	28
		5	32
		7	39
		---------
		39

	*/
}