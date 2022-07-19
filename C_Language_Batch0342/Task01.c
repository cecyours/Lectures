#include<stdio
.h>

void increment(int salary)
{
	salary = salary+1000; 
	printf("does it works : %d\n",salary);
}
int main()
{
	int salary = 9000; 

	printf("Old salary : %d\n",salary);

	increment(salary);

	printf("New salary : %d\n",salary);
	return 0; 
}