#include<stdio.h>
#include<conio.h>
void main()
{
	float a[100],sum=0,avg;
	int i,n; //index & size must be an integer
clrscr();
	printf("Enter the size : ");
	scanf("%d",&n);

	printf("Enter the data : \n");
	for(i=0;i<n;i++)
	{
	     printf("Enter a[ %d ] = ",i);
	     scanf("%f",&a[i]);

	     sum = sum+a[i];  // addition of all element into 'sum'
	}
	avg = sum/n; // for average

	printf("\nThe array :\n");
	for(i=0;i<n;i++)
		printf("a[ %d ] = %.2f\n",i,a[i]);
	/*
		NOTE: you don't need to define block '{}',
		if you have only one statement
	*/
	printf("\nsum : %.2f,\t",sum);
	printf("avg : %.2f\n",avg
	);
getch();
}