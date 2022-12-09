#include<stdio.h>
int main()
{
 int num;
 	printf("Enter the number : ");
 	scanf("%d",&num);

 	if(num%5==0 || num%3==0)
 		printf("luck %d\n",num);
 	else
 		printf("unluck %d\n",num);



}