
#include<stdio.h>
#include<string.h>
void main()
{
	char mainString[100],subString[100];
	char *p;
	
	printf("Enter a main String : ");
	gets(mainString);
	
	printf("Enter sub/find string : ");
	gets(subString);
	
	p = strstr(mainString,subString);
	
	if(p)
	{
		printf("sub string is found : %p\n",p);
	}
	else{
		printf("sub string not found..");
	}
}
