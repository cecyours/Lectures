#include<stdio.h>
#include<conio.h>
  void main()
  {
	int a,b,c;
	int max;
  clrscr();
	 printf("Enter 3 numbers : ");
	 scanf("%d,%d,%d",&a,&b,&c);

	 if(a>b)
	 {
		if(a>c)
		{
			max = a;
		}
		else{
			max = c;
		}
	 }
	 else{

		if(b>c)
		{
			max = b;
		}
		else
		{
			max = c;
		}

	 }
	 printf("%d is max..",max);
  getch();


  }