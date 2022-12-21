
#include<stdio.h>

void display(int n)
{
	if(n<0)
		return;
	printf("helloMe  %d\n",n);
	display(n-1);
}
int main()
{
	display(10);
}