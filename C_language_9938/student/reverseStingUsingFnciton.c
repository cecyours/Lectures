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

void reverse(char name[])
{
	char tmp;
	int i,j,n;
	n=findlength(name);

	for(i=0,j=n-1;i<j;i++,j--)
	{
		tmp = name[i];
		name[i] = name[j];
		name[j] = tmp;
	}

	printf("\nreverse done....\n");
}

int main()
{
	char name[100];

	printf("Enter your name : \n");
	scanf("%s",name);
	reverse(name);

	printf("\nMy Reverse is : %s\n",name);
}