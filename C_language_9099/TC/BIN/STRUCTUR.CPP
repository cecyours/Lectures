//this is my first program
/*
	linux code : gcc
*/
#include<stdio.h>  //link section
#include<conio.h>
#include<math.h>

#define sum(x,y) x+y // definition section
#define A 20

int i = 30; //global variable section

void say()  //user defined section
{
	printf("hello World.... %d\n",i);
}
void main() // main function section
{
  clrscr();
	     say();
	     i = sum(3,5);
	     printf("sum : %d\n",i);

	     printf("data :> A = %d\n",A);

  getch();
}