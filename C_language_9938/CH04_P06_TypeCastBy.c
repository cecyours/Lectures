
#include<stdio.h>
int main()
{
	double x,ans;
	int n;
	printf("Enter the number : ");
	scanf("%lf",&x);

	n = (int)x;

	ans = x - n;
	printf("your ans is : %lf\n", ans);
}