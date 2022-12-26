#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	float root 1,root 2,imaginary;
	float discriminant;

	printf("Enter values of a,b,c of quadratic equation(aX^2 + bX + c) :" );
	scanf("%f%f%f",&a,&b,&c);

	discriminant = (b  * b) - (4 * a * c);

	if(discriminant > 0)
	{
		root 1 = (-b + sqrt(discriminant)) / (2 * a);
		root 2 = (-b + sqrt(discriminant)) / (2 * a);

		printf("Two distinct and real roots exists : %.2f and %.2f ",root 1,root 2 );

	}

	else if (discriminant == 0)
	{
	
		root 1 = root 2 = -b / (2 * a);

		printf("Two equal and real roots exists : %.2f and %.2f",root 1,root 2 );

	}

	else if(discriminant < 0)
	{
		root 1 = root 2 = -b / (2 * a);
		imaginary = sqrt(-discriminant) / (2 * a);

		printf("Two distinct complex roots exists : %.2f + i%.2f and %.2f - i%.2f",root 1,imaginary,root 2,imaginary );
	}
}