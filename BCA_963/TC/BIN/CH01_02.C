/*	structure of c program // documenation section
*/
#include<stdio.h>  //link section
#include<conio.h>  //link section

#define A 100  //definition section
#define SUM(x,y) x+y  //definition section

int i = 30; //global declaration section

void display() //user-defined section
{
	printf("Hello Friend !!!\n");
}

void main() //main section
{
clrscr();
	printf("Hello World\n");

	printf("sum of %d,%d is %d\n",A,i,SUM(A,i));

	display();

getch();
}