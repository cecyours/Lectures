#include<stdio.h>


void swap(int x,int y)

int main()
{
	int a = 1000;
	int b = 2000;

	printf("Before swap , value of a : %d\n",a);
	printf("Before swap , value of b : %d\n",b);

	swap (a,b);

	printf("After swap , value of a : %d\n",a);
	printf("After swap , value of b : %d\n",b);
}

void swap(int x,int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}