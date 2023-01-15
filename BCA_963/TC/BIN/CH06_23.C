#include<stdio.h>
#include<conio.h>
void main()
{
   char names[5][100] = {"Sia", "Rio", "Heema", "Jiya", "Rohit"};
   int i,n=5;
   clrscr();
	  printf("Students : \n");
	  printf("------------\n");

	  for(i=0;i<n;i++)
	  {
		printf("%s\n",names[i]);
	  }
   getch();
}