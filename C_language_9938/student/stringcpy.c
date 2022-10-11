#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];

	printf("Enter your stringh :");
	scanf("%s",str1);


	strcpy(str2,str1);

	printf("str1 :'%s'\n",str1);
	printf("\ncopy str1\n\n");
	printf("str2 :'%s'\n",str2);
}