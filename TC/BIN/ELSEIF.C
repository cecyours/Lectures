#include<stdio.h>
#include<conio.h>
void main()
{      float marks;
clrscr();
       printf("Enter marks : ");
       scanf("%f",&marks);

       if(marks>=80 && marks<=100)
       {
		printf("S");
       }
       else if(marks>=65 && marks<80)
       {
		printf("A");
       }
       else if(marks>=50 && marks<65)
       {
		printf("B");
       }
       else if(marks>=33 && marks<50)
       {
		printf("C");
       }
       else
       {
		printf("\nBetter luck Next Time...");
       }

getch();
}