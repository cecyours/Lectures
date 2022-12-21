#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	int size;
	printf("Enter a string : ");
	gets(str);
	
	printf("String : %s\n",str);
	size = strlen(str);
	printf("the length is : %d\n",size);
}

