#include<stdio.h>
void main()
{
	int i,j;
	
	char str1[100],str2[100];
	printf("Enter the first name : ");
	gets(str1);
	
	printf("Enter the last name : ");
	gets(str2);
	
	for(i=0;str1[i];i++);
	
	str1[i++]=' ';
	for(j=0;str2[j];j++,i++)
	{
		str1[i] = str2[j];
	}
	str1[i] = '\0';
	printf("new string : %s\n",str1);
}
