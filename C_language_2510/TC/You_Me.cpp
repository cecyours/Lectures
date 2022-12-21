#include<iostream.h>
#include<conio.h>
int me=0;
void printLoveYou(int you)
{
  me=0;
	cprintf("\r");
	while(me!=you)
       {

		textattr(1);

	 cprintf("%c ",3);
	 me++;
       }

}
void printLoveMe(int you,int c=1)
{    cprintf("\r");
  me=0;
      if(c==1)
       while(me!=you)
       {
	 if(me%2==0)
		textattr(1);
	 else
		textattr(1);
	 cprintf("\n\r     %c",3);
	 me++;
       }
       else
	while(me!=you)
       {
	 if(me%2==0)
		textattr(4);
	 else
		textattr(1);
	 cprintf("\n\r%c",3);
	 me++;
       }
}
void you(int n=15)
{
   while(n>0)
   {
    cout<<" ";
    n--;
   }

}
void main()
{

clrscr();
     printLoveYou(6);
     printLoveMe(5);
     printLoveYou(6);
     cout<<"\n\n\n";
     textattr(4);
     you();
     cprintf("%c          %c%c     %c        %c   %c %c %c\n\r",3,3,3,3,3,3,3,3);
     you();
     cprintf("%c        %c    %c    %c      %c    %c \n\r",3,3,3,3,3,3);
     you();
     cprintf("%c        %c    %c     %c    %c     %c %c %c\n\r",3,3,3,3,3,3,3,3);
     you();
     cprintf("%c        %c    %c      %c  %c      %c\n\r",3,3,3,3,3,3,3);
     you();
     cprintf("%c %c %c      %c%c         %c%c       %c %c %c\n\r",3,3,3,3,3,3,3,3,3,3);
      cout<<"\n\n";
     textattr(1);
     you(45);
     cprintf("%c        %c      %c %c      %c     %c\n\r",3,3,3,3,3,3);
     you(45);
     cprintf("  %c    %c      %c    %c     %c     %c\n\r",3,3,3,3,3,3);
     you(45);
     cprintf("    %c%c        %c    %c     %c     %c\n\r",3,3,3,3,3,3);
     you(45);
     cprintf("    %c%c        %c    %c      %c   %c\n\r",3,3,3,3,3,3);
     you(45);
     cprintf("    %c%c          %c%c         %c %c\n\r",3,3,3,3,3,3);
getch();
}
