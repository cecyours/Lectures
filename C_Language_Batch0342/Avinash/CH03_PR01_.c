#include<stdio.h>
void main ()
{
	int a,b,c; 
	char operation; 
	
	printf("Enter operation : ");
	scanf("%d%c%d",&a,&operation);
	
	switch(operation); 
{
	case '+' : printf("%d + %d = %d\n",a,b,a+b);break;
	case '-' : printf("%d - %d = %d\n",a,b,a-b);break;
	case '*' : printf("%d * %d = %d\n",a,b,a*b);break;
	case '/' : printf("%d / %d = %d\n",a,b,a/b);break;
	case '%' : printf("%d % %d = %d\n",a,b,a%b);break;
}
		
}
