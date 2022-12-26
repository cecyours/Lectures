#include<stdio.h>

void swap(int *a,int *b)
{
	// code swap
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	printf("ph0 x : %d\ty : %d\n",*a,*b);

}

int main()
{
	int x,y;
	printf("Enter 2 numbers : ");
	scanf("%d-%d",&x,&y);

	swap(&x,&y);

	printf("ph1 x : %d\ty : %d\n",x,y);
}