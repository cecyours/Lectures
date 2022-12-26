#include<stdio.h>
int n,i,j;

struct student {
	int rollno;
	char name[15];
	float marks[3];
	char subject[3][100] = {"maths","science","english"};
	float total = 0,pr = 0; 
};

int main()
{
	struct student s[10];

	FILE *fp;
	printf("Enter the size : ");
	scanf("%d",&n);
	fp = fopen("work.txt","a+");
	printf("Enter details : \n");

	for(i=0;i<n;i++)
	{
		printf("\n\nEnter details for student %d\n",i+1);
		

		for(i=0;i<n;i++)
		{
			fprintf(fp,"%4d | %6d | %10s",i+1,s[i].rollno,s[i].name);

				for(j=0;j<3;j++)
				{
					fprintf(fp," | %7.2f",s[i].marks[j]);
				}

			fprintf(fp," | %7.2f | %7.2f\n",s[i].total,s[i].pr);
		}
}