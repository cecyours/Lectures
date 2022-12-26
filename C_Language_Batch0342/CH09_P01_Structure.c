#include<stdio.h>

struct Student{

	char name[100];
	int rollNo;
};

int main()
{

	struct Student s;


	printf("Enter your name : ");
	scanf("%s",s.name);

	printf("Enter your rollNO : ");
	scanf("%d",&s.rollNo);

	printf("-----------------------\n");
	printf("welcom %s your rollNo is %d\n",s.name,s.rollNo);
}