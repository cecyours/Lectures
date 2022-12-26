#include<stdio.h>
int main()
{
	int i = 10; 
	int *p; 

	p=&i; 

	printf("address of i : %X\n",&i); 
	printf("Value : %d\n",i); 

	printf("------------------------------\n"); 

	printf("address ; % X\n",p); 
	printf("Value : %d\n",*p); 
}