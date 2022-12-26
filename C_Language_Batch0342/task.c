#include<stdio.h>
void increment(int *salary)
{
	*salary = *salary+1000; 
	printf("does it work : %d\n",*salary);

}
int main()
{
	int x = 9000; 

	printf("Old salary : %d\n",x);

	increment(&x);

	printf("New salary : %d\n",x);
	return 0; 
}