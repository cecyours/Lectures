
#include<stdio.h>
int main()
{
	char name[100] = {'c','o','\0','d','\0','e','r'};


	printf("Enter your name : ");
	scanf("%s",name);

	printf("welcome %s\n",name);
}