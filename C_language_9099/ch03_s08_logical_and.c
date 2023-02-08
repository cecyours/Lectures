#include<stdio.h>
int main()
{
    float salary;

    printf("enter the salary : ");
    scanf("%f",&salary);


    if(salary>=10000 && salary<=20000)

    {
        printf("valid salary");
    }
    else
    {
        printf("invalid salary");
    }
    return 0;
}
