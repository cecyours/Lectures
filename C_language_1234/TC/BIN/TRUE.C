#include<stdio.h>
#include<conio.h>
void main()
{    int a,b,c;
clrscr();
      printf("Enter 2 numbers : ");
       scanf("%d%d",&a,&b);
       printf("a : %d\t b: %d\n",a,b);
       if(a>b && a!=b)
       {
		printf("a>b && a!=b true\n");
       }
       else
       {
		printf("a>b && a!=b false\n");
       }
	//---------------------
	if(a>b || a!=b)
       {
		printf("a>b || a!=b true\n");
       }
       else
       {
		printf("a>b || a!=b false\n");
       }
       //-------------
	if(!(a>b))
       {
		printf("!(a>b)  true\n");
       }
       else
       {
		printf("!(a>b) false\n");
       }
getch();
}
