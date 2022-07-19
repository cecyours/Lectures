#include<stdio.h>
#include<string.h>
void main()
{
	char mainstring[100],substring[100];
	char *p;
	
	printf("Enter the mainstring : ");
	gets(mainstring);
	
	printf("Enter the substring : ");
	gets(substring);
	
	p = strstr(mainstring,substring);
	
	if(p)
	{
		printf("sub string is found : %p\n",p);
	}
	else{
		("sub string is not found... ");
	}
}
