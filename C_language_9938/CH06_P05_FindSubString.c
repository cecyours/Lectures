
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100],*p;

	printf("Enter a string : ");
	scanf("%s",&str1);

	printf("Enter a string : ");
	scanf("%s",&str2);

	p = strstr(str1,str2);

	if(p==NULL)
		printf("no data\n");
	else
		printf("data found...\n");
}