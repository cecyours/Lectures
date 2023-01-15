#include<stdio.h>
#include<conio.h>
void main()
{
	char password[10] = "Gke11";
	char input[10];
	int status=0,i;
clrscr();
	printf("Enter password : ");
	gets(input);

	for(i=0;input[i];i++)
	{
		if(password[i]!=input[i])
		{
		   status = password[i]-input[i];
		   break;
		}
	}
	if(!status)
	{
		printf("Login succeed !! ;) status : %d\n",status);
	}
	else
	{
		printf("Login Field !! :(  status : %d\n",status);
	}
getch();
}