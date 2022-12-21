#include<stdio.h>
void sum(int a,int b)
{
	int c;
	c = a,b; 
	printf("%d + %d = %d",a,b,c);
}
void main()
{
	int a,b; 
	printf("Enter 2 number : ");
	scanf("%d,%d",&a,&b); 

	sum(a,b); 
}