#include<stdio.h>
int main()
{
 	char ch;
 	printf("Enter Your Charcter : ");
 	scanf("%c" ,&ch);

 	if ((ch>='a' && ch<= 'z') || (ch>='A' && ch<= 'Z'))
 	{
 		printf("Alphabet\n");
 	}
 	else if(ch>='0' && ch<='9')
 	{
 		printf("digit\n");
 	}
 	else 
 	{
 		printf("special Charcter\n");
 	}


}