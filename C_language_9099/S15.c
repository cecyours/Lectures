#include<stdio.h>
#include<stdlib.h>

double balance = 6999;
int main()
{
    double amount;

    printf("Enter the amount : ");
    scanf("%lf",&amount);

    if(balance-amount<0)
    {
        printf("invalid amount...sorry guys...");
        exit(0);
    }

    balance = balance - amount;
    printf("remaining amount : %lf\n",balance);
}