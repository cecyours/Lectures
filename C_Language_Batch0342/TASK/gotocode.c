#include<stdio.h>
void main()
{
	int i=3; 
	/**
	printf("Forword 1\n");
	printf("Forword 2\n");
	printf("Forword 3\n"); 
goto code; 
	printf("Forword 4\n");
	printf("Forword 5\n");
	printf("Forword 6\n");
	printf("Forword 7\n");
code:
	printf("Forword 8\n");
	printf("Forword 9\n");
	printf("Forword 10\n");
*/
	
	printf("backword 1\n"); 
	printf("backword 2\n"); 
	printf("backword 3\n");
hell: 
	printf("backword 4\n"); 
	printf("backword 5\n"); 
	printf("backword 6\n"); 
	printf("backword 7\n");
	printf("backword 8\n"); 
	printf("backword 9		->%d\n",i);  
i--;
if(i>0)
   goto hell;
   printf("backword 10/n");

}
