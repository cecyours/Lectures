#include<stdio.h>


struct student
{
	int rollno;
	char name[100];
	float marks;
};

void main()
{
	struct student s1 = 
	{
		12,"Yash",99.99
	}
		,s2 = 
	{
		11,"Gk",99.99
	};

	printf("%10s | %6s | %5s\n","name","rollno","marks");
	printf("%10s + %6s + %5s\n","===","===","===");
	printf("%10s | %6d | %3.2f\n",s1.name,s1.rollno,s1.marks);
	printf("%10s | %6d | %3.2f\n",s2.name,s2.rollno,s2.marks);
}