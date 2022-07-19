#include<stdio.h>
void main()
{
	float marks; 
	
	printf("Enter the marks : ");
	scanf("%f",&marks);
	
	if(marks>=33 && marks<=100)
	{
		printf("pass %c\n");
	}
	else 
	{
		printf("BETTER LUCK NEXT TIME !! %c\n");
	}
}
