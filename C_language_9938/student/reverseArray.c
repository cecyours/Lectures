#include<stdio.h>
int main()

{
	int arr[]={1,2,3,4,5,6,7,8,9,10};

	int n = sizeof(arr)/sizeof(arr[0]);

	printf("Original array :\n");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}

	printf("\n");


	printf("Array in reverse order : \n");
	for(int i=n-1;i>=0;i-)
	{
		printf("%d",arr[i]);
	}
}