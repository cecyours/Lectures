#include<stdio.h>

int main()
{
	int a=10,b=90,c=45,d=85;
	int *p;

	p = &a;

	printf("Value : %d address : %p\n",a,&a);
	printf("Value : %d address : %p\n",b,&b);
	printf("Value : %d address : %p\n",c,&c);
	printf("Value : %d address : %p\n",d,&d);

	printf("=========================\n");

	printf("Value : %d address : %p\n",*p,p);

	p = p-1;
	printf("Value : %d address : %p\n",*p,p);

	p = p-1;
	printf("Value : %d address : %p\n",*p,p);

	p = p-1;
	printf("Value : %d address : %p\n",*p,p);

	printf("==========================\n");

}