// not equals to
#include<stdio.h>
#include<conio.h>
void main()
{
	 int password=243  , userpass;

 clrscr();
	   printf("enter a password : ");
	   scanf("%d",&userpass);


	   if(userpass!=password)
	   {
	     textattr(4);
	     cprintf("invalid login..");

	   }
	   else
	   {  textattr(2);
	      cprintf("welcome..");

	   }


 getch();

}