#include<stdio.h>
int main()
{
	int rollNo;
	char div;

	printf("Enter your credientials [DIV-ROLLNO]: ");
	scanf("%c-%d",&div,&rollNo);


	switch(div)
	{
		case 'A': 
		case 'a':
			switch(rollNo)
			{
				case 1 ... 10:printf("Avengers...\n"); break;
				case 11 ... 20:printf("X-MEN...\n"); break;
				case 21 ... 30:printf("Justise luege...\n"); break;
				default: printf("Loki..\n");
			}
			break;

		case 'B':
		case 'b':
			switch(rollNo)
			{
				case 1 ... 10:printf("Iron Man...\n"); break;
				case 11 ... 20:printf("Spider Man...\n"); break;
				case 21 ... 30:printf("Aquaman...\n"); break;
				default: printf("Super Man..\n");
			}
			break;
			default: printf("invalid..\n");
	}
}

