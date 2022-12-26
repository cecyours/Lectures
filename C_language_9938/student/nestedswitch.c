#include<stdio.h>
int main()

{
	 int rollno;
	 char div;

	 printf("Enter your info [DIV-ROLLNO] :");
	 scanf("%c-%d",&div,&rollno);


	 switch(div)
	 {
	 	case 'A':
	 	case 'a':
	 		switch(rollno)
	 		{
	 			case 1 ... 10:printf("Avengers ... \n");break;
	 			case 11 ... 20:printf("X-man ...\n");break;
	 			case 21 ... 30:printf("Justise luege ...\n");break;
	 			case 31 ... 40:printf("Hulk ...\n");break;
	 			default:printf("Loki ....\n");
	 		}
	 		break;

	 	case 'B':
	 	case 'b':
	 		switch(rollno)
	 		{
	 			case 1 ... 10:printf("Iron-man ....\n");break;
	 			case 11 ...20:printf("Spider-man ....\n");break;
	 			case 21 ... 30:printf("Aqua-man ....\n");break;
	 			case 31 ... 40:printf("Thor ...\n");break;
	 			default:printf("Super-man ....\n");
	 		}
	 		break;

	 		default:printf("info is wrong :(\n");
	 }
}