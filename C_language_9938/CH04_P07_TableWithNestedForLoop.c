
#include<stdio.h>
int main()
{
	int start,end;
	int i,j;

	printf("Enter a start,end : ");
	scanf("%d,%d",&start,&end);

	for(j=1;j<=10;j++)
{

	for(i=start;i<=end;i++)
	{
		printf("%2d x %2d = %2d    ",i,j,i*j);
	}
	printf("\n");
}
}