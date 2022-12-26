#include<stdio.h>
int main()
{
	int a,b,c; 
	int *pa,*pb,*pc; 

	pa=&a; 
	pb=&b; 
	pc=&c; 

	printf("Enter a number : "); 
	scanf("%d",pa); 

	printf("Enter a number : "); 
	scanf("%d",pb);

	*pc = *pa+*pb; 

	printf("%d + %d = %d\n",a,b,c);  

	printf("\n-----------------------------\n");
 

	printf("Enter a number : "); 
	scanf("%d",pa); 

	printf("Enter a number : "); 
	scanf("%d",pb);

	*pc = *pa-*pb; 
	printf("%d - %d = %d\n",a,b,c);   

	printf("\n-----------------------------\n");

	printf("Enter a number : "); 
	scanf("%d",pa); 

	printf("Enter a number : "); 
	scanf("%d",pb);

	*pc = *pa * *pb; 

	printf("%d X %d = %d\n",a,b,c);  

}