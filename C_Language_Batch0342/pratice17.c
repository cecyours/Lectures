#include<stdio.h>
struct Student{

	char name[100]; 
	int rollno;
}; 
int main()
{
	struct Student s[100]; 
	int n,i; 

	printf("Enter the size : "); 
	scanf("%d",&n); 

	printf("Enter your data : \n"); 

	for(i=0;i<n;i++)

	{
		printf("\n -------- STUDENT %d -------- \n",i+1); 
		printf("Enter name : "); 
		scanf("%s",&s[i].name); 
		printf("Enter rollno : "); 
		scanf("%d",&s[i].rollno);
	}

	printf("----------------------\n"); 
	for(i=0;i<n;i++)
	{
		printf(" %3d | %s\n",s[i].rollno,s[i].name );
	}
}