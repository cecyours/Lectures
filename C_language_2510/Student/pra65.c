#include<stdio.h>

void increment(double *salary)
{
    double increment = 6000;
    *salary = *salary+increment;
    printf("increment : %.0f\n",increment);
    printf("salary after increment : %.0f\n",*salary);
    

}

int main()
{
    double salary = 3000;
    printf("salary before increment : %.0f\n",salary);
    increment(&salary);
    printf("salary after increment : %.0f\n",salary);


}