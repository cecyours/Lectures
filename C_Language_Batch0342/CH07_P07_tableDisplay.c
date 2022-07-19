
#include<stdio.h>
void displayTable(int n)
{
	int i;

	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d \n",n,i,n*i);
	}
}

int main()
{
	int x;
	printf("Enter the number : ");
	scanf("%d",&x);

	displayTable(x);

}