void main()
{

 char name[100],ch='0';
 int i=0;
clrscr();
	printf("Enter your name : ");
	while(1)
	{
		ch = getch();

		if(ch=='-')
		{
			break;
		}
		name[i]=ch;
		i++;

	}

	name[i]= '\0';
	printf("welcome %s",name);
getch();
}