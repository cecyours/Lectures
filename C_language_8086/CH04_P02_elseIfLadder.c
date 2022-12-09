
#include<stdio.h>
int main()
{
	double marks;
	printf("enter your marks : ");
	scanf("%lf",&marks);

	if(marks>=80 && marks<=100)
	{
		printf("grade A+\n");
	}
	else if(marks>=70 && marks<80)
	{
		printf("grade A\n");
	}
	else if(marks>=50 && marks<70)
	{
		printf("grade B\n");
	}
	else {
		printf("Failed.\n");
	}

}