#include<stdio.h>
 int main()
{
	int a,c;

	printf("Enter 1 number : ");
	scanf("%d",&a);

	c=~a; 
	printf("~%d = %d\n",a,c); 
}