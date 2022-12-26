#include<stdio.h>

struct Employer {

	char name[100];
	int salary;
};
int main()
{
	struct Employer e; 

	printf("Enter your name : ");
	scanf("%s",e.name);

	printf("Enter your salary : ");
	scanf("%d",&e.salary);

	printf("-----------------------------\n");

	printf("Welcome %s your salary is : %d\n",e.name,e.salary);
}