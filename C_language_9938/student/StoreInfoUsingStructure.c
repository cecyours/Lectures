#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
}s;

int main()
{
	printf("Enter Information:)\n");
	printf("Enter name:");
	fgets(s.name,sizeof(s.name),stdin);

	printf("Enter roll number:");
	scanf("%d",&s.roll);
	printf("Enter marks:");
	scanf("%f",&s.marks);

	printf("\n\nDisplaying Information:\n");
	printf("name:");
	printf("%s",s.name);
	printf("roll number: %d\n",s.roll);
	printf("marks: %.1f\n",s.marks);
}