#include<stdio.h>

int n,i;
int a,b;
void reverse(int a[])
{

	for(i=n-1;i>=0;i--)
	{
		printf("a[ %d ] : %d\n",i,a[i]);
	}
}

int main()
{
	int a[100];

	printf("Enter your size : ");
	scanf("%d",&n);

	printf("Enter your array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[ %d ] = ",i);
		scanf("%d",&a[i]);
	}


	reverse(a);
}