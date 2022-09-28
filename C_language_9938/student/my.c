#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch;
	printf("Enter any alphabet\n");
	scanf("%c",&ch);

	switch(ch){
		case'a':
		 

		case'A':
		 

		case'e':
		 
		case'E':
		 

		case'i':
		 

		case'I':
		 
		case'o':
	 

		case'O':
	 
		case'u':
		 
		case'U':
		printf("%c is vowel\n",ch );
		break;

		default:
		printf("%c is a consonant\n",ch );
		break;
	}
}