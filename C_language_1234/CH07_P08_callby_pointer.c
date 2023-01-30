#include<stdio.h>


void increment(double  *s)
{
    *s = *s+3000;

    printf("during increment : %lf\n",*s);


    // *s = 0;
}

void main()
{
    double salary;

    printf("Enter your salary : ");
    scanf("%lf",&salary);

    increment(&salary);

    printf("after increment : %lf\n",salary);

}