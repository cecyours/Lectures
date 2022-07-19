#include<stdio.h>


void increment(int *salary)
{
	*salary=*salary+1000;
	printf("does it works : %d\n",*salary);
	increment(&x);
	
}
int main()
{
	int x=9000; 
	printf("old salary : %d\n",x);

	increment(&x);

	printf("new salary : %d\n",x);
	return 0; 
}