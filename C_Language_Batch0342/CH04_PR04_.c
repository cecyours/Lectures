#include<stdio.h>
void main()
{
	float marks;
	
	printf("Enter marks : ");
	scanf("%f",&marks);
	
	if(marks>=33 && marks<=100)
	{
		printf("pass %c\n",3);
	}
	else 
	{
		printf("BETTER LUCK NEXT TIME !! %c\n",2);
	}
}
