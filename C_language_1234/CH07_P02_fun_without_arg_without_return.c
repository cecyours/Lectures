#include<stdio.h>

void sum()
{
    /* get sum of 2 number */
    int a,b;

    printf("Enter the numbers : ");
    scanf("%d,%d",&a,&b);

    printf("%d + %d = %d\n",a,b,a+b);
}

int main()
{
    
        sum();
        sum();
        sum();
        
    return 0;
}