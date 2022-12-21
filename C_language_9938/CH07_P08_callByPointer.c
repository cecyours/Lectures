

#include<stdio.h>

void increment(double *salary)
{
	*salary = *salary+6000;
	printf("salary during increment : %lf\n",*salary);

}

int main()
{
	double salary = 3000;

	printf("salary before increment : %lf\n",salary);
	increment(&salary);
	printf("salary after increment : %lf\n",salary);

}