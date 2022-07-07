#include<stdio.h>
void main()
{
	char str[100],ch;
	int i;
	
	printf("Enter the string : ");
	gets(str);
	
	printf("enter mask character : ");
	scanf("%c",&ch);
	
	for(i=0;str[i];i++)
	{
		str[i] = ch;
	}
	printf("masked string : %s\n",str);
}
