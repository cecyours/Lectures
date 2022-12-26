#include<stdio.h>
#include<string.h>

int main()
{
	FILE *filePointer ;
	char dataTobeWritten[50]="Hello Jignesh";
	filePointer = fopen("GFgtest.c","a+");

	if(filePointer == NULL)
	{
		
		printf("GFgtest.c file failed to open...\n");

	}
	else
	{
		
		printf("The file is now opened...\n");
		printf("Enter your name : ");
		scanf("%s",dataTobeWritten);
		if(strlen ( dataTobeWritten) > 0)
		{
			fputs(dataTobeWritten,filePointer);
			fputs("\n",filePointer);
		}
		fclose(filePointer);

		printf("Data successfully written in file GFgtest.c\n");
		printf("The file is now closed.\n");
	}

}