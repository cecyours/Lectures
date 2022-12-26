
#include<stdio.h>
int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d",&n);

	if(n<0)
		n = n*-1;

	printf("value of n : %d\n",n);
}