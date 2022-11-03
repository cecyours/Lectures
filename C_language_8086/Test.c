#include<stdio.h>
int main()
{
	int a=20,b=10;
	printf("Before swap a=%d,b=%d",a,b );
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter a swap a=%d,b=%d",a,b);


}