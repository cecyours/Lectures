#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter 2 number : ");
	scanf("%d,%d",&a,&b);
	
	printf("%d > %d = %d\n",a,b,a>b);
	printf("%d < %d = %d\n",a,b,a<b);
	printf("%d >= %d = %d\n",a,b,a>=b);
	printf("%d <= %d = %d\n",a,b,a<=b);
	printf("%d != %d = %d\n",a,b,a!=b);
	printf("%d == %d = %d\n",a,b,a==b);
	
	
}
