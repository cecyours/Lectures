//find the character in given string..

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch,*p;


	printf("Enter a string : ");
	scanf("%s",str);

	// printf("Enter a character to find : ");
	// scanf("%c",&ch);

	ch = 'y';
	p = strchr(str,ch);

	if(p==NULL)
		printf("there is no data..\n");
	else
		printf("%c is found at %p\n",ch,p);
}