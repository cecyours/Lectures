#include<stdio.h>

int i,n;
void min_me(int *p)
{
	int min = *p;
	for(i=0;i<n;i++)
	{
		if(min>*(p+i))
		{
			min = *(p+i);
		}
	}

	printf("\n\nmin is : %d\n",min);
}

int main()
{
	int a[100];
	printf("Enter the size :");
	scanf("%d",&n);


	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[ %d ] :",i);
		scanf("%d",&a[i]);
	}

	min_me(a);
}