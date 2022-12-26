// #include<stdio.h>
// int main()
// {

// float marks ;

// 	printf("Enter your marks : ");
// 	scanf("%f" ,&marks);

// 	if(marks>=80 && marks<=100)
// 	{
// 		printf("A\n");
// 	}
// 	else if(marks>=60 && marks<80)
// 	{
// 			printf("B\n");
// 	}


// }


#include<stdio.h>
int main ()
{
	float marks;
	printf("Enter your marks : ");
	scanf("%f" , &marks);

	if(marks>= 80 && marks <=100)
	{
		printf("A\n");
	}
	else if(marks>=60 && marks <80)
	{
		printf("B\n");
	}
	else if(marks>=40 && marks < 60)
	{
		printf("C\n");
	}

}









