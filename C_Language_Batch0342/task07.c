#include<stdio.h>
void main()
{
	int a,b,c; 
	int pa,pb,pc; 

	pa=&a; 
	pb=&b; 
	pc=&c;

	printf("Enter a number : ");
	scanf("%d",pa); 

	printf("Enter a number : ");
	scanf("%d",pb); 

	pc = pa+pb; 

	printf("%d + %d = %d",a,b,c);

}