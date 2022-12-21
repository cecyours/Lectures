#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];

	printf("Enter your name : ");
	scanf("%s",name);

	strset(name,'*');

	printf("welcome %s\n",name);
}