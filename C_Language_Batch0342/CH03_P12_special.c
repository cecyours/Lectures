#include<stdio.h>

void main()
{
	int a=10,*p;
	
	p = &a;
	
	printf("value : %d\t address %p\n",a,&a);
	printf("value : %d\t address %X\n",*p,p);
	
	printf("int size : %d\n",sizeof(a));
	printf("%d \n",3+2*4-2);
}
