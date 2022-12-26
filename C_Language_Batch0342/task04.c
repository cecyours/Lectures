#include<stdio.h>


void increment(int *salary)
{

	*salary = *salary+1000; 
	printf("does it work : %d\n",*salary); 
}
int main()
{
	int salary = 9000; 

	printf("old salary : %d\n",salary);

	increment(&salary);

	printf("New salary : %d\n",salary);
	return 0; 
}