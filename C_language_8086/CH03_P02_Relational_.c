
#include<stdio.h>
int main()
{
	int a=10,b=30;
	printf("Enter 2 number : ");
	scanf("%d,%d",&a,&b);

	printf("%d >  %d : %d\n",a,b,a>b); // 0
	printf("%d <  %d : %d\n",a,b,a<b); // 1
	printf("%d == %d : %d\n",a,b,a==b);// 0
	printf("%d != %d : %d\n",a,b,a!=b);// 1
	printf("%d >= %d : %d\n",a,b,a>=b);// 0
	printf("%d <= %d : %d\n",a,b,a<=b);// 1


}