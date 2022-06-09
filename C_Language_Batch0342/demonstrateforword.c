#include<stdio.h>
#include <conio.h>
void main()
{
	char ch; 
	int i; 
	
	printf("Line 1\n");
	printf("Line 2\n");
	code:
	printf("\tLine 3\n");
	printf("\tLine 4\n");
	printf("\tLine 5\n");
//	scanf("%d",&i);
		printf("wanna display agian ? [y/n] : ");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if(ch=='y' || ch=='Y')
			goto code; 
			
	printf("Line 6\n");
	printf("Line 7\n"); 
}
