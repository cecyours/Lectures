#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],ch,*p;

	printf("Enter the string :");
	scanf("%s",str);

	ch ='a';
	p = strchr(str,ch);

	if(p==NULL)
		printf("there is no data ...:(");
	else
		printf("%c is found at %p\n\n:)",ch,p);
}