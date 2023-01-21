#include<stdio.h>
int main()
{
    float salary;
        
        printf("enter old salary : ");
        scanf("%f",&salary);

        salary += 1000;
        printf("new salary : %.2f\n",salary);
        
        return 0;
}