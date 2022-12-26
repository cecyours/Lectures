#include<stdio.h>
#include<string.h>
void main()
{
	char password[] = "gpkCode";
	char input[100];
	int status;
	
	printf("Enter your password : ");
	gets(input);
	
	status = strcmp(password,input);
	
	if(!status)
	{
		printf("welcome");
	 } 
	 else{
	 	printf("bye bye...");
	 }
}
