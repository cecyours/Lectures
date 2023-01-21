/**
primitive : default data type i.e int, char, float

derived : get by using primitive DT like array, pointer, function

user defined DT: which are created programmer/ user like structure, union etc

*/
#include<stdio.h>
#include<conio.h>
struct Student{

	int rollNo;
	char name[100];
};
void main()
{
	struct Student s={10,"Rio"};
	clrscr();
		printf("Hello %s, your roll no is : %d\n",s.name,s.rollNo);
	getch();
}