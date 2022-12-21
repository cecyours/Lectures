#include<stdio.h>
union student{
	int rollno;
	char div;

};

int main()
{
	union student s;

	s.rollno = 65;
	s.div = 'B';
	printf("your rollno : %d\n",s.rollno);
	printf("  your data : %c\n",s.div);
}