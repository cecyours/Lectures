
#include<stdio.h>
int n,i;
void reverse(int a[])
{
	for(i=n-1;i>=0;i--)
	{
		printf("a[ %d ] : %d\n",i,a[i]);
	}
	printf("sdvds\n");
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,0};
	n=10;

	reverse(a);

}