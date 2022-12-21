#include<stdio.h>
#include<string.h>

int main()
{

	char str[100];
	int len;

	printf("Enter your string : ");
	scanf("%s",str);

	len = strlen(str);

	printf(" length of '%s' is => %d",str,len);
}