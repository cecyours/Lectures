#include<stdio.h>
void main()
{
	char str[100],ch='q',*pos=0;
	int i; 
	
	printf("Enter string : ");
	gets(str);
	
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
		pos = &str[i];
		printf(" '%c' is found at address %p\n",ch,pos);	
		}	
	}
	if(!pos)
	printf(" '%c' is not found\n",ch);
}	
