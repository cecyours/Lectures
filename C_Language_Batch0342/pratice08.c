#include<stdio.h>

int main()
{
	FILE *fp; 

	char ch; 

	fp = fopen("zzz.txt","r");


	while((ch = fgetc(fp))!=EOF)
	{
		printf("%c",ch); 
	}
}