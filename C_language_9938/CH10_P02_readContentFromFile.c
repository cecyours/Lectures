
#include<stdio.h>
int main()
{
		FILE *fp;
		char a;
		int A,B,C,D;
		char name[100];

		fp =fopen("GameZero.c","r+");


		printf("Enter your 3 number :\n");
		scanf("%d %d %d",&A,&B,&C);

		D = A + B - C;

		printf("=======================================================================\n");

		printf("\t\tTotala %d + %d - %d = %d",A,B,C,D);

	 

	while((a = fgetc(fp))!=EOF)
	{
		printf("%c",a);
	}
	fclose(fp);
}