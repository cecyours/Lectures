#include<stdio.h>
void main()
{
	int x;
	
	printf("Enter the number : ");
	scanf("%d",&x);
	
	(x%2==0)?printf("even"):printf("Odd");
}
