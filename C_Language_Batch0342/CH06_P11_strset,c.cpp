
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char ch='@';
	
	printf("Enter the String : ");
	gets(str);
	
	strset(str,ch);
	
	printf("new String : %s\n",str);
}
