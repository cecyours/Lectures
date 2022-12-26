#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	int **q; // q -> p -> a
	int ***w;


	p = &a;
	q = &p;
	w = &q;

		printf("address of a : %u -> %u\n",p,&a);
		printf("address of p : %u -> %u\n",q,&p);


		/*p stores address of a */
		printf("value of a : %d\n", **q);

		printf("value of a : %d\n", ***w);


	}