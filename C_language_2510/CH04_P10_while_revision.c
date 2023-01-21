
#include<stdio.h>
int main()
{

    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    while(num>0)
    {
        printf("your digit : %d\n",num%10);
        num = num/10;
    }

    return 0;
}