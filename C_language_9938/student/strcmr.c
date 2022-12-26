#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100];
	char name2[100];

	int f;

	printf("Enter the string :");
	scanf("%s",name1);

	printf("Enter the string :");
	scanf("%s",name2);

	f = strcmp(name1,name2);

	printf("Data ...:%d\n",f);

	if(f==0)
	{
		printf("both are same ...\n");
	}

	else{
		printf("both are diffrent ....\n");
	}
}