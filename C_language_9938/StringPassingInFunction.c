#include<stdio.h>

int findlength(char name[])
{
	int i=0;
	while(name[i])
	{
		printf("len : %d-%c\n",i,name[i]);
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

	len = findlength(name);

	printf("len : %d\n",len);
}