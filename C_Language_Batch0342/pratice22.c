#include<stdio.h>
int main()
{
	FILE *fp;

	char name[100];

	char ch;
	fp	= fopen("myfile.txt","a+");
	printf("Enter the data : ");
	scanf("%s",name);

	fprintf(fp,"%s\n",name);

	fseek(fp,0,0);

	printf("--------------------\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
}