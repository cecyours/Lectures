#include<stdio.h>
#include<conio.h>

/*
	NOTE : we don't need to declate it with data type.
	because it predicts the type of itself by type of literal.
*/
#define A 200 //A = 100
int main()
{
clrscr();
      printf("	Value of A : %d\n",A);

      //A = 100; /* this will give an error. */
      #undef A //undefining the A so we can redefine it with new value
      #define A 400  //changing the constant

      printf("	Value of A : %d\n",A);
getch();
}