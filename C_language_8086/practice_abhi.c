#include<stdio.h>
int main()
{
 int a[10] = {45,2,23,76,23,56,64,32,56,43};
 int i,sum=0;
 printf("Welcome : %d\n",a[76]);

 for (i=0;i<=9;i++)
 {
    sum = sum+a[i];
    printf("a[ %d ] =%d\n",i,a[i]);

 }
 printf("final sum : %d\n",sum);

}