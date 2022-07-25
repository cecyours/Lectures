#include<stdio.h>
int main()
{
	int a=10,b=20,c=30; 
	int *p; 

	p=&a; 

	printf("a : %u\n",&a);
	printf("b : %u\n",&b); 
	printf("c : %u\n",&c);

	printf("pointer a : %u\n",p);
	p=p-2;
	printf("pointer b : %u\n",p);
	// p--;
	printf("pointer c : %u\n",p);

}