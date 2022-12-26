
#include<stdio.h>
int main()
{
	int a=10,b=4;

	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	printf("%d + %d = %d\n", a,b,a+b);
	printf("%d - %d = %d\n", a,b,a-b);
	printf("%d / %d = %d\n", a,b,a/b);
	printf("%d * %d = %d\n", a,b,a*b);
	printf("%d %% %d = %d\n", a,b,a%b);


}