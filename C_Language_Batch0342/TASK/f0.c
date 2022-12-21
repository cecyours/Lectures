#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	
	printf("Enter the first name : ");
	scanf("%s",str1);
	
	printf("Enter the last name : ");
	scanf("%s",str2);
	
	strcat(str1," ");
	strcat(str1,str2);
	
	printf("Hello %s\n",str1);
	
}
