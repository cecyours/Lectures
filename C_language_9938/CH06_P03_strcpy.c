// todo: copy one string to another..

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];

	printf("Enter your string : ");
	scanf("%s",str1);

 	strcpy(str2,str1); // str2 = str1

 	printf("str 1: %s\n",str1);
 	printf("str 2: %s\n",str2);
}