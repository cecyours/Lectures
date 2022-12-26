
#include<stdio.h>

int findLength(char name[])
{
	int i=0;
	while(name[i])
	{
		printf("len : %d-%c\n",i,name[i] );
		i++;
	}

	return i;
}

int main()
{
	char name[100];
	int len;

	printf("Enter your name : ");
	scanf("%s",name);

	len = findLength(name);

	printf("len :  %d\n", len);
}