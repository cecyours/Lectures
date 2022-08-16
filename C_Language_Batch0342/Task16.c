#include<stdio.h>
int main()
{
	int a=10;
	int *p; 
	int **q; 
	int ***w; 

	p = &a; 
	q = &p; 
	w = &q; 

	printf("address of a : %u -> %u\n",p,&a); 
	printf("address of p : %u -> %u\n",q,&p);

	printf("value of a : %d\n", **q);
	printf("value of a : %d\n", ***w); 


}