
#include<string.h>
#include<stdio.h>
int main()
{
	char name[100];
	printf("Enter the string : ");
	scanf("%s",name);


	strlwr(name);

	printf("your name in lowercase : %s",name);

}