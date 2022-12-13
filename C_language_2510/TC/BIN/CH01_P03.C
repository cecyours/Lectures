void main()
{
	char name[100]; // string which has 100 size of characters
clrscr();

	printf("Enter your name : ");
	scanf("%s",name);


	if(strcmp(name,"shivam")==0)
	{
		printf("Welcome %s\n",name);
	}
	else
	{
		printf("Bye bye %s\n",name);
	}

getch();
}