#include<stdio.h>
void main()
{
	char name[100];
	int i;

	printf("Enter your name : ");
	scanf("%s",&name);

	for(i=0;i<=2;i++)
	{
		printf("%c",name[i]);
	}
 	printf("%c",name[i]); 
}