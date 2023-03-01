
#include<stdio.h>
#include<stdlib.h>
double balance = 4999;
int main()
{
    double amount;

    printf("Enter the amount : ");
    scanf("%lf",&amount);


    if(balance-amount<0)
    {
        printf("Invalid ammount ..exit...");
        exit(0);
    }

    balance = balance - amount;

    printf("remaining amount : %lf\n",balance);

}