#include<stdio.h>

void increment(double *salary)
{
	*salary = *salary +10000;
	printf("Salary during increment : %.2lf\n",*salary);
}

int main()
{

	double salary = 15000;

	printf("salary before increment : %.2lf\n",salary);
	increment(&salary);
	printf("salary after increment : %.2lf\n",salary);
	
}