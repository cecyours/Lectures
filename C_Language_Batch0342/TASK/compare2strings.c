#include<stdio.h>
#include<string.h>
void main()
{
	char password[] = "hello";
	char input[100]; 
	char status; 
	
	printf("Enter password : "); 
	gets(input);
	
	status = strcmp(password,input);
	printf("status : %d\n",status);
	
	if(!status)
	{
		printf("wellcome ;) \n");
	}
	else 
	{
		printf("error \n");
	}
	
}
