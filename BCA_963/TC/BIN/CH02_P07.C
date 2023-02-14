#include<conio.h>
#include<stdio.h>
int main()
{
	char *ptr,ch;
	int i;
clrscr();
	  printf("Enter your name : ");
	  //scanf("%s",ptr);
	  gets(ptr);

	  printf("welcome %s\n",ptr);

	  for(i=0;*(ptr+i)!=NULL;i++)
	  {
		   ch = *(ptr+i);

		   if(ch>='a' && ch<='z')
		   {
			 // convert lower to upper
			ch = ch-32;
		   }
		   else if(ch>='A' && ch<='Z')
		   {
			ch = ch+32;
		   }
		   printf("%c",ch);
	  }
getch();
}