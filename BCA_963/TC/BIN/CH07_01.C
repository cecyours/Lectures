#include<stdio.h>
#include<conio.h>
#include<math.h> // pow() function
void main()
{
	double x,y,ans;
   clrscr();
	 printf("Enter values as x,y : ");
	 scanf("%lf,%lf",&x,&y);

	 ans = pow(x,y); // x raise to y

	 printf("Answer : %.2lf\n",ans);

   getch();
}