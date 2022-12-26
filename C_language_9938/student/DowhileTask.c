#include<stdio.h>
#include<stdlib.h>

int main()

{
		int sum = 0,num;

		do{

			system("clear");
			printf("Total sum : %d\n",sum);
			printf("\n Enter your new number ... : ");
			scanf("%d",&num);

			sum = sum + num ;
		}while(sum <= 100);


		printf("your exit sum : %d\n",sum);
}