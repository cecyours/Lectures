#include<stdio.h>

int main()
{
	int array[]={1,2,3,4,5};

	int length=sizeof(array)/sizeof(array[0]);

	printf("Original array : \n");

	for(int i=0;i<length;i++)
	{
		printf("%d",array[i]);
	}

	printf("\n");

	printf("Array in reverse order : \n");

	for(int i=length-1;i>=0;i--)
	{
		printf("%d",array[i]);
	}
	return 0; 
}