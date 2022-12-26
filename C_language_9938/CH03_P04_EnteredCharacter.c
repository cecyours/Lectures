#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);


	if(ch>='a' && ch<='z')
	{
		printf("small letter.\n");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("capital letter\n");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Digit...\n");
	}
	else{
		printf("special character...\n");
	}
}