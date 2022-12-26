#include<stdio.h>
struct student{

	char name[100];
	int roll no;
};
int main()
{
	struct student s;

	printf("Enter your name : ");
	scanf("%s",s.name);

	printf("Enter your roll no : ");
	scanf("%d",&s.roll no);

	printf("-----------------\n");
	printf("Welcome %s your roll no is %d\n",s.name,s.roll no);
}