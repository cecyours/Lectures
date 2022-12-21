
#include<stdio.h>
int main()
{
	FILE *fp;

	char ch;
	int n;
	fp = fopen("Hello.txt","w+");


	fprintf(fp, "1234567890");

	printf("Enter the pointer position : ");
	scanf("%d",&n);
	/*todo: set reading pointer*/
	fseek(fp,n,0); // 3
	fgetc(fp); //+1
	fgetc(fp); //+1

	printf("data : %d\n",ftell(fp));
	// rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}

}