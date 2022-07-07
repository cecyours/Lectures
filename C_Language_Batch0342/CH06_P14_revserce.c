#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,j;

	printf("Enter the String : ");
	gets(str1);
	
	for(i=0;str1[i];i++);
	
	printf("length : %d\n",i);
	
	for(j=0;i>=0;i--,j++)
	{
		str2[j] = str1[i];
		printf("%c",str2[j]);
	 } 
	 
	}
