
#include<stdio.h>

struct Student{
	int rollno;
	char name[100];
	float marks;
};

void main()
{
	struct Student s1 = {12,"Yash",33.34},s2={10,"Gk",24.24};

	printf("%10s | %6s | %5s\n","name","rollno","marks");
	printf("%10s + %6s + %5s\n","------","------","-----");
	printf("%10s | %6d | %3.2f\n",s1.name,s1.rollno,s1.marks);
	printf("%10s | %6d | %3.2f\n",s2.name,s2.rollno,s2.marks);
}