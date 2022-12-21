#include<stdio.h>
union Student{

	int rollNo;
	char div;
};

int main()
{
	union Student s;

	s.rollNo = 65;
	s.div = 'B';
	printf("your rollNo : %d\n",s.rollNo); // 66
	printf("   your div : %c\n",s.div);
}