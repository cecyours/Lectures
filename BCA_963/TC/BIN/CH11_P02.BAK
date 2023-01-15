//string.h functions
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>  //for functions
int main()
{

    char str1[100],str2[100];
clrscr();
	cout<<"Enter the string 1 : ";
	gets(str1);
	textattr(12);
	int len = strlen(str1);
	cprintf("Length : %d\n\r",len);

	strcpy(str2,str1); // str1 -> str2
	strcpy(str2,"abc");// "abc" -> str2
	cout<<"str 1 : "<<str1<<"\tstr 2 : "<<str2<<"\n";

	strlwr(str1);
	cprintf("strlwr : %s \n\r",str1);
	strupr(str1);
	cprintf("strupr : %s \n\r",str1);

	strlwr(str1);
	cout<<"str 1 : "<<str1<<"\tstr 2 : "<<str2<<"\n";
	cout<<"status : "<<strcmp(str1,str2)<<endl;

	cprintf("finding 'h' in %s at %p\n\r",str1,strchr(str1,'h'));
	cprintf("finding \"hell\" in %s at %p\n\r",str1,strstr(str1,"hell"));

	strrev(str1);//reverse the text
	cout<<"reverse the str : "<<str1<<endl;

	strset(str1,'*');
	cprintf("set : %s\n\r",str1);
getch();
return 0;
}