#include<stdio.h>
void main()
{
	char name[100];
	int len;
	
	printf("Enter name : ");
	gets(name);
	len = strlen(name);
	printf("length of %s is %d.\n",name,len);
	
}
