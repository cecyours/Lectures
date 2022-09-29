#include<stdio.h>
int main()
{
	int array[100],size,i,location = 0;

	printf("Enter number of elements in array\n");
	scanf("%d",&size);

	printf("Enter %d integers\n",size );

	for(i = 0;i<size;i++)
		scanf("%d",&array[i]);

	for(i = 1;i<size;i++)
		if(array[i] < array[location])
			location = i;
		printf("minimum element id present at location %d and its value is : %d\n",location+1,array[location] );
}