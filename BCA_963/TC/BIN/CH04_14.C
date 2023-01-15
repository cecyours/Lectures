#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	int i=1; //initialization
clrscr();
       printf("Enter the number : ");
       scanf("%d",&num);

       do{
	    printf("%2d x %2d = %d\n",num,i,num*i);
	    i++;   //increment
       }while(i<=10); //condition
getch();
}