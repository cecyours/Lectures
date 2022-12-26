#include<stdio.h>
#include<stdlib.h>
struct person{
	int age;
	float weight;
	char name[15];

};
int main()
{
	struct person *ptr;
	int i,n;

	printf("Enter The Number Of Persons : \n");
	scanf("%d",&n);

	ptr = (struct person*)malloc(n * sizeof(struct person));

	for(i = 0; i < n; ++i)
	{
		printf("Enter first name and age respectively : \n");

		scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);

	}

	printf("Displaying Information : \n");
	for(i = 0; i < n; ++i)
		printf("NAME : %s\tAGE : %d\n",(ptr+i)->name,(ptr+i)->age);
}