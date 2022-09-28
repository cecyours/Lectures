
#include<stdio.h>
int main()
{

	int x;
	float y,ans;

	printf("Enter a number : ");
	scanf("%f",&y);
	
	x = (int)y;
	ans = y-x;
	
	(ans>0)?printf("Hiii"):printf("Bye\n");
}