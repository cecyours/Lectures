#include<stdio.h>
int i,n; 
int find_max(int a[])
{
	int max = a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}

	}
	return max; 
}
int main()
{
	int a[100];
	int max_ans; 

	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		printf("a[ %d ] :",i);
		scanf("%d",&a[i]);
	}
	max_ans = find_max(a); 

	printf("max : %d\n",max_ans); 
}