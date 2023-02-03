

#include<stdio.h>
int main()
{
    int a[10] = {61,32,63,24,85,96,27,89,92,20};
    int i,sum=0;
    printf("welcome : %d\n",a[5]);

    for(i=0;i<10;i++)
    {
        sum = sum+a[i];
        printf("a[ %d ] = %d\n",i,a[i]);
    }
    printf("final sum : %d\n",sum);
}