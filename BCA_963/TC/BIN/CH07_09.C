#include<stdio.h>
#include<conio.h>
void increment(double *salary)
{
	*salary=*salary+5000;
	printf("      Salary in Function : %7.lf\n",*salary);
}
void main()
{
   double sal;
   clrscr();
	printf("Enter your salary : ");
	scanf("%lf",&sal);
	printf("\n  Salary before function : %7.lf\n",sal);
	 increment(&sal); // call by pointer
	printf("   Salary after function : %7.lf\n",sal);
   getch();
}