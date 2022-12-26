#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("test02.c","r");


	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c", ch);
	}



	fclose(fp);
}