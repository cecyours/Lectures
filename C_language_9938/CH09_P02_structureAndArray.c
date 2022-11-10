

#include<stdio.h>
int n,i,j;
struct Student{
	char name[100];
	int rollNO;
	float marks[3];
	char subjects[3][100]  = {"Maths","Science","english"}; 
	float total=0,pr=0;
};
int main()
{
	struct Student s[10];

	printf("Enter the size  : ");
	scanf("%d",&n);

	printf("Enter details  : \n");

	for(i=0;i<n;i++)
	{
		printf("\n\nEnter details for student %d\n",i+1);
		printf("name : ");
		scanf("%s",&s[i].name);

		printf("rollNO : ");
		scanf("%d",&s[i].rollNO);

			for(j=0;j<3;j++)
			{
				printf("Enter marks of %s : ",s[i].subjects[j]);
				scanf("%f",&s[i].marks[j]);
				s[i].total += s[i].marks[j];
			}
				s[i].pr = s[i].total/3;
	
		}

		printf("\n=================================\n");

	printf("%4s | %6s | %10s | %5s | %6s | %5s | %5s | %5s\n","SrNO","RollNo","name","maths","Science","eng","total","pr");	
	printf("%4s + %6s + %10s + %5s + %6s + %5s + %5s + %5s\n","----","------","---------","-----","-------","---","-----","--");	

	
	for(i=0;i<n;i++)
	{
	printf("%4d | %6d | %10s ",i+1,s[i].rollNO,s[i].name);	
	 
			for(j=0;j<3;j++)
			{ 
				printf("| %4.2f ",s[i].marks[j]);	
			}
		printf("| %2.2f | %2.2f \n",s[i].total,s[i].pr);	

	}


}