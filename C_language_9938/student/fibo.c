#include<stdio.h>

void fibo(int a,int b,int n)
{
	int c;

	if(n==0)
		return; 

	c = a+b;
	printf("%d\n",c);

	fibo(b,c,n-1);
}

int main()
{
	fibo(-1,1,25);
}