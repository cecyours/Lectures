#include<stdio.h>
#include<conio.h>

void main()
{

   float AC,AB,BC;
   float R;
  clrscr();
   printf("enter length AC:");
   scanf("%f",&AC);

   printf("enter length AB:");
   scanf("%f",&AB);

   printf("enter length BC");
   scanf("%f",&BC);

   printf("AC^2:%f\n", AC*AC);

   R = AB*AB + BC*BC;

   printf("AB^2+BC^2 %f",R);

  getch();

}