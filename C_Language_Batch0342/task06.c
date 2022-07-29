#include<stdio.h>
int main()
{
	int i=10; 
	int *p; 

	printf("Address of i : %x\n",&i); 
	scanf("Value : %d\n",i); 

	printf("---------------------\n");

	printf("Address of i : %x\n",p); 
	scanf("Value : %d\n",*p); 

}