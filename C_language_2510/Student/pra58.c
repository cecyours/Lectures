#include<stdio.h>

int sum(int a,int b)
{
    int c=a+b;
    return c;
}

void main()
{
    int a,b;
printf("enter the numbers : ");
scanf("%d,%d",&a,&b);

    int var1 =a;
    int var2 =b;
    int var3 =sum(var1,var2);

    printf("%d",var3);

//    return 0;


}