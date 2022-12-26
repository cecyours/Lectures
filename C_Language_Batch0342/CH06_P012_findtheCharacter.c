#include<stdio.h>
void main()
{
	char ch;
	char str[100];
	int f = 0,i;
	
	printf("Enter the string : ");
	gets(str);
	
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
			f = 1;
			break;
		}
	}
	
	if(f==1)
	{
		printf("%c is found ..",ch);
	}
	else{
		printf("%c is not found..",ch);
	}
}
