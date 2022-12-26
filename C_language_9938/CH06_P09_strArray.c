

#include<stdio.h>
int main()
{
	char names[10][100];
	int n,i;
	
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter names \n");

	for(i=0;i<n;i++)
	{
		printf("Enter your name : %d\n",i+1);
		scanf("%s",names[i]);
	}

	printf("----------------\n");
	for(i=0;i<n;i++)
	{
		printf(" welcome %s\n\n",names[i]);
	}
}