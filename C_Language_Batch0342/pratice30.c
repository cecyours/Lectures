
#include<stdio.h>
int main()
{
	FILE *fp;

	char ch;
	int n; 
	fp = fopen("Helo.txt","w+");


	fprintf(fp,"1234567890");

	printf("Enter the pointer position : ");
	scanf("%d",&n);

	fseek(fp,n,0);
	fgetc(fp);
	fgetc(fp);

	printf("data : %d\n",ftell(fp));

	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
}