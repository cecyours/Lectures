#include<stdio.h>
void sum()
{
	int a,b,c; // init 
	printf("---- addition ---- \n");
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);
	
	c = a+b;
	printf("%d + %d = %d \n",a,b,c);
}
void sub()
{
	int a,b,c;
	printf("---- substraction ---- \n");
	printf("Enter 2 numbers : ");
	scanf("%d-%d",&a,&b);
	c = a-b;
	printf("%d - %d = %d\n",a,b,c);
}
void main()
{
	sum();
	sub();
}