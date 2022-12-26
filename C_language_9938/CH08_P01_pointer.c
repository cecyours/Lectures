
#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *p;

	p = &a;
	
	printf("value : %d address : %p\n", a,&a);
	printf("value : %d address : %p\n", b,&b);
	printf("value : %d address : %p\n", c,&c);
	
	printf("===================\n");
	
	printf("value : %d address : %p\n", *p,p);
	p = p-1;
	printf("value : %d address : %p\n", *p,p);
	
	p=p-1;
	printf("value : %d address : %p\n", *p,p);


}