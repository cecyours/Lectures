#include<stdio.h>

void devid()
{
	int a,b;

	printf("Enter a,b : ");
	scanf("%d,%d",&a,&b);

	printf("%d %% %d = %d\n\n",a,b,a%b);

	printf("your answer is %d ....\n",a%b);
}

int main()
{
	devid();
}