
// 2-2*4/2+3

#include<stdio.h>
void main()
{
	int a=10,b=3,c=4,d=6,ans;

	ans = a*b-d/b+c;
	/*
	ans = 10*3-6/3+4
		= 30-6/3+4
		= 30-2+4
		= 28+4
		= 32
	*/
	printf("your ans : %d\n",ans );
}