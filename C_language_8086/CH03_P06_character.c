// #include<stdio.h>
// int main()
// {
// 	char ch;

// 	printf("Enter Your Character : ");
// 	scanf("%c",&ch);

// 	if(!(ch>='a' && ch<='z') || (ch>= 'A' && ch<='Z'))
// 	{
// 		printf("alphabet\n");
// 	}

// 	else if(ch>='0' && ch<='9')
// 	{
// 		printf("digit\n");
// 	}
// 	else
// 	{
// 		printf("special Character..\n");
// 	}

// }



#include<stdio.h>
int main()
{
char ch;
	printf("Enter Your Character :" );
	scanf("%c" ,&ch);

	if(!(ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("alphabet\n");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("digit\n");
	}
	else 
	{
		printf("special Character\n");
	}
}


