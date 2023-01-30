
#include<stdio.h>
int main()
{
    int i=0,num;
    printf("enter the end number : ");
    scanf("%d",&num);

    while(i<=num)
    {
        printf("data : %d\n",i);
        i++;
    }

    return 0;
}