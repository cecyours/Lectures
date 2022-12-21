#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char ch='$';
	
	printf("Enter the string : ");
	gets(str);
	
	strset(str,ch);
	
	printf("new string : %s\n",str);
}
