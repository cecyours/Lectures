#include<stdio.h>
int main()
{
	double marks;
	printf("Enter your 3 marks : ");
	scanf("%lf", &marks);

	if(marks>=90 && marks<=100)
	{
		printf("Grade A+\n");
	}
	else if(marks>=80 && marks<90)
	{
		printf("Grade A\n");
	}
	else if(marks>=60 && marks<80)
	{
		printf("Grade B\n");
	}
	else if(marks>=50 && marks<60)
	{
		printf("Grade C\n");
	}
	else if(marks>=33 && marks<50)
	{
		printf("Grade D\n");
	}

}