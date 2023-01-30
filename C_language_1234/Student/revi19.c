#include<stdio.h>
int main()
{
    int num,rev=0,rem=0;

    printf("enter the number : ");
    scanf("%d",&num);

    while(num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }

    printf("number : %d\n",rev);
    printf("number : %d\n",rem);
    printf("number : %d\n",num);
    return 0;
}