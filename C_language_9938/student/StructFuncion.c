#include<stdio.h>
struct student{
	char name[30];
	int age;
};

void display(struct student s);

 int main()
 {
 		struct student s1;

 		printf("Enter name : ");

 		scanf("%[^|n]*c",s1.name);

 		printf("Enter age : \n");
 		scanf("%d",&s1.age);

 		display(s1);
  }

  void display(struct student s)
  {
  	printf("\ndisplaying INformation\n");
  	printf("Name : %s\n",s.name);
  	printf("age :%d\n",s.age);
  }