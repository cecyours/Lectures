
#include<stdio.h>
int main()
{
	int x;

		printf("Enter the number : ");
		scanf("%d",&x);

		if(x>10)
		{
			printf("your number is : %d\n",++x);
		}
		else{
			printf("your less number is : %d\n",--x);
		}
}