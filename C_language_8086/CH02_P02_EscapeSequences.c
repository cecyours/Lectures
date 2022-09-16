
#include<stdio.h>
int main()
{
	int i;
	printf("Hello %c\n",93);
	
	for(i=1;i<=200;i++)
	{
		printf("\t%d:%c",i,i);
	}

	

	printf("12\a34\t5\b\n6\b7\065 90");
	printf("123456\0987 890\n");
	for(i=0;i<=10;i++)
		printf("\f*");


}