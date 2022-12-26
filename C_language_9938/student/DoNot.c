#include<stdio.h>
struct employee
{
	char name[15];
	int empId;
	float salary;
};
int main()
{
	struct employee emp;

	printf("\nEnter data of employee :\n");
	printf("name ?:\n");
	scanf("%s",emp.name);
	printf("ID ?:\n");
	scanf("%d",&emp.empId);
	printf("salary ?:\n");
	scanf("%f",&emp.salary);

	printf("\nEnter data of employee is :>\n");

	printf("name : %s\n",emp.name);
	printf("ID : %d\n",emp.empId);
	printf("Salary : %.2f\n",emp.salary);
}