
// #include<stdio.h>
// int main()
// {
// 	float p,r,t,int_amt;
// 	printf("principle,rate of intrest & time to find simple intrest: \n");
// 	scanf("%f,%f,%f",&p,&r,&t);
// 	int_amt=(p*r*t)/100;
// 	printf("simple intrest = %f",int_amt);



// }
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two number");
	scanf("%d %d" ,&num1,&num2 );
	if(num1<num2)
	{
		printf("%d is smaller number", num1 );
	}
	else if(num2<num1)

	{
		printf("%d is smaller number",num2 );
	}
	else
	{
		printf("%d and %d are equal", num1,num2 );

	} 
}