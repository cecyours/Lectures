#include<stdio.h>
void main()
{
	int rollno;
	
	printf("Enter rollno :  ");
	scanf("%d",&rollno);
	
	switch(rollno){
		
		case 1 ...10 : printf("Class A");break;
		case 11 ...21 : printf("Class B");break;
		case 22 ...31 : printf("Class C");break;
		case 32 ...41 : printf("Class D");break;
		default:printf("indvoiled value");
	}
}
