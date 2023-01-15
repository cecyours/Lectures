#include<stdio.h>
#include<conio.h>
void main()
{
	char div;
	int rollno;
clrscr();
	printf("Enter the div-rollno like [ A-42 ]: ");
	scanf("%c-%d",&div,&rollno); // '-' seperates div & rollno

	 if(rollno < 0  ||  rollno > 60) // validation for rollno.
	 {
		printf("invalid rollno..");
		getch();
		exit(0);
	 }

	switch(div)
	{
		case 'A' : // if div is 'A'
			   //  5 groups for div A. So as per remainder the group will be choosen
			   switch(rollno%5)
			   {
				case 0: printf("Your group is (A-1) Marvel sp.\n"); break;
				case 1: printf("Your group is (A-2) Wolverines.\n");  break;
				case 2: printf("Your group is (A-3) spy men.\n"); break;
				case 3: printf("Your group is (A-4) chemies.\n"); break;
				case 4: printf("Your group is (A-5) progies.\n"); break;
			   }
				break;
		case 'B' : // if div is 'B'
			   //  5 groups for div B. So as per remainder the group will be choosen
			   switch(rollno%5)
			   {
				case 0: printf("Your group is (B-1) Dosies.\n"); break;
				case 1: printf("Your group is (B-2) rings of hell.\n");  break;
				case 2: printf("Your group is (B-3) Cypher.\n"); break;
				case 3: printf("Your group is (B-4) gamers.\n"); break;
				case 4: printf("Your group is (B-5) paapi.\n"); break;
			   }
				break;
	       case 'C' : // if div is 'C'
			   //  3 groups for div C. So as per remainder the group will be choosen
			   switch(rollno%3)
			   {
				case 0: printf("Your group is (C-1) Lokians.\n"); break;
				case 1: printf("Your group is (C-2) Polysons.\n");  break;
				case 2: printf("Your group is (C-3) mentors.\n"); break;

			   }
				break;
		case 'D' : // if div is 'D'
			   //  2 groups for div D. So as per remainder the group will be choosen
			   switch(rollno%2)
			   {
				case 0: printf("Your group is (D-1) The watchers.\n"); break;
				case 1: printf("Your group is (D-2) Winners.\n");  break;
			   }
				break;
		default:  // if a wrong div entered.
			printf("Invalid division....");

	}
getch();
}