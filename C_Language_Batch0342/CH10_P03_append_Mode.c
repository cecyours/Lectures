#include<stdio.h>
int main()
{
	FILE *fp;

	char name[100];

	fp = fopen("myfile.txt","a");

	printf("Enter your name : ");
	scanf("%s",name);

	fprintf(fp, "%s\n",name );

	printf("operation done\n");

	fclose(fp);


}