#include<stdio.h>
void main()
{
	int a,b;
	char choice,ch;
	
	do{
		printf("\nEnter the operation : "); 
		scanf("%d%c%d",&a,&ch,&b);
		
		switch(ch)
		{
			case '+' : printf("%d + %d = %d\n",a,b,a+b);break;
			case '-' : printf("%d - %d = %d\n",a,b,a-b);break;
			case '*' : printf("%d * %d = %d\n",a,b,a*b);break;
			case '/' : printf("%d / %d = %d\n",a,b,a/b);break;		
			case '%' : printf("%d % %d = %d\n",a,b,a%b);break;
		}
		scanf("%c",&choice);
		printf("do you want to repeat[y/n] : ");
		scanf("%c",&choice);
		
	}while(choice=='y' || choice=='Y');
	printf("Exit.....");
}
