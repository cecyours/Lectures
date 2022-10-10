// todo: find len of string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len;

	printf("Enter your string : ");
	scanf("%s",str);

	len = strlen(str);

	printf("%d is length of '%s'\n",len,str);
}