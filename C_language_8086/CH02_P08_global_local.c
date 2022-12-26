
#include<stdio.h>

int a; //global-zero
int main()
{
	int b; //local-garbage

	printf("global : %d\n",a);
	printf("local : %d\n",b);
}