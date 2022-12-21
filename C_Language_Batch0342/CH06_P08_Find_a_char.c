#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],*p;
	int i;
	printf("Enter a string : ");
	gets(str);
	
	for(i=0;str[i];i++)
	{
		printf(" %p = %c\n",&str[i],str[i]);
	}
		
	p = strchr(str,'a');
	
	if(p)
	{
		printf("data found at %p position : ",p);
	}
	else{
		printf("data not found !!..");
	}
	
	
}
