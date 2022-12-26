#include<stdio.h>

float simple_int(float p, float r, float n)
{
	float si;
	si = (p * r * n)/100;
	return si;
}

int main()
{
	float a,b,c;
	float Intrest;

	printf("\n Enter Principal : \t");
	scanf("%f",&a);

	printf("\n Enter Year : \t");
	scanf("%f",&b);

	printf("\n Enter Rate : \t");
	scanf("%f",&c);

	Intrest = simple_int(a,b,c);
	printf("\n simple Intrest = %.2f\n",Intrest);
	printf("\n");
}