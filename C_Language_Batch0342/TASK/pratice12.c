#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,j; 
	
	printf("Enter the first name : ");
	scanf("%s",str1);
	
	printf("Enter the last name : ");
	scanf("%s",str2);
	
	for(i=0;str1[i];i++);
	
	str1[i++] = ' '; 
	for(j=0;str2[j];j++,i++)
	{
		str1[i] = str2[j];
	}
	str1[i]='\0';
	printf("HELLO %s",str1);
}
