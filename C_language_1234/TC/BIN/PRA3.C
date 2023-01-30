#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100] ="HELLO bro",str2[100] = "BYE bro";
	char *ptr;
	int len,status;

clrscr();
	len = strlen(str1);
	printf("length : %d\n",len);

	strlwr(str1);
	printf("lowercase : %s\n",str1);

	strupr(str1);
	printf("upercae : %s\n",str1);

	strcat(str1,str2);
	printf("concinate : %s\n",strupr(str1));

	strcpy(str1,"SHIVAM");
	strcpy(str2,"shivam");

	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);

	status = strcmp(str1,str2);
	printf("compare status : %d\n",status);

		strcpy(str1,str2);
		ptr = strchr(str1,'H');

		if(ptr==NULL)
		{
			printf("character can not be find..\n");
		}
		else
		{
			printf("character find success fuly..\n");
		}


		ptr = strstr(str1,"bro");

		if(ptr==NULL)
		{
			printf("string can not be find..\n");
		}
		else
		{
			printf("string success fuly find..\n");
		}

		strrev(str1);
		printf("reverse string : %s\n",str1);

		strset(str1,3);
		printf("string set : %s\n",str1);

getch();
}