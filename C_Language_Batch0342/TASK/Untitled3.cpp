#include<stdio.h>
void main()
{
	int marks;
	
	printf("Enter marks : ");
	scanf("%d",&marks);
	
	switch(marks){
		case 80 ...100 : printf("Grade A");break;
		case 60 ... 79 : printf("Grade B");break;
		case 40 ... 59 : printf("Grade C");break;
		case 20 ... 39 : printf("Grade D");break;
		case 0 ... 19 : printf("Grade E");break;

	}
}
