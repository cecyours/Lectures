#include<stdio.h>
void main()
{
	int rollno;
	char div;
	
	printf("Enter details [div-rollno]: ");
	scanf("%c-%d",&div,&rollno);
	
	switch(div)
	{
		case 'A':
		case 'a': 
			switch(rollno){
				case 1 ... 20: printf("Iron Man");break;
				case 21 ... 40: printf("Hulk");break;
				case 41 ... 60: printf("thor");break;
				default: printf("invalid..");
			} break;
		
		case 'B':
		case 'b': 
			switch(rollno){
				case 1 ... 20: printf("rocket");break;
				case 21 ... 40: printf("captain");break;
				case 41 ... 60: printf("veison");break;
				default: printf("invalid..");
			} break;
			
		case 'C':
		case 'c': 
			switch(rollno){
				case 1  ... 20: printf("wonder woman");break;
				case 21 ... 40: printf("natasha");break;
				case 41 ... 60: printf("hella");break;
				default: printf("invalid..");
			} break;		
		case 'D':
		case 'd': 
			switch(rollno){
				case 1  ... 20: printf("black penther");break;
				case 21 ... 40: printf("super man");break;
				case 41 ... 60: printf("bat man");break;
				default: printf("invalid..");
			} break;
		
		default:printf("invalid div...");
	}
}
