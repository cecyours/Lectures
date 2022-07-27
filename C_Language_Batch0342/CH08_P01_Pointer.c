
// %u - numeric
// %p hexa
// %x hexa,X
#include<stdio.h>
int main()
{
	int i = 10;
	int *p;


	p = &i;

	printf("address of i : %X\n",&i);
	printf("value : %d\n", i);

	printf("----------------\n");

	printf("address : %d\n",p); // address 
	printf("value : %d\n",*p); // value
}