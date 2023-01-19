
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100]="Hello HaPPPY",str2[100]="World";
	int len,status;
 clrscr();
	len = strlen(str1);
	printf("length : %d\n",len);

	strlwr(str1);//lowercase
	printf("lowercase : %s\n",str1);

	strupr(str1);//uppercase
	printf("uppercase : %s\n",str1);

	strcat(str1,str2); //str1 = str1+str2;
	printf("concinate : %s\n",strlwr(str1));

	strcpy(str1,"ABC");
	strcpy(str2,"ABC");

	printf("Str1 : %s\n",str1);
	printf("str2 : %s\n",str2);


       status = strcmp(str1,str2);
       printf("compare status : %d\n",status);


 getch();
}