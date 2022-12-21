
#include<string.h>
#include<stdio.h>
int main()
{
	char name1[100];
	char name2[100];
	
	int f;
	printf("Enter the string : ");
	scanf("%s",name1);

	printf("Enter the String : ");
	scanf("%s",name2);

	f =strcmp(name1,name2);

	printf("data : %d\n",f);

	if(f==0)
	{
		printf("both are same..\n");
	}
	else{
		printf("both are different..\n");
	}
}