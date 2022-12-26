
#include<stdio.h>
#include<stdlib.h>
	char ch;

void display()
{

	printf("do you wanna exit [y/n]? \n");
	scanf("%c",&ch);

	if(ch=='y' || ch=='Y')
	{
		printf("exit....\n");
		exit(0);
	}

	printf("Hello World...\n");
	return;
	printf("Hello Bye...\n");

}
int main()
{

	int i;

	// for(i=1;i<=10;i++)
	// 	{
	// 		if(i==5)
	// 		{
	// 			// break;// exit from loop
	// 			continue; //skip the iteration/ round
	// 		}
	// 		printf("value :: %d\n",i);
	// 	}


	display();

	printf("rest of file....\n");

}