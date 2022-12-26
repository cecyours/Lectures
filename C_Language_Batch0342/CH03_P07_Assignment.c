#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 10;
	int b = 3;
	
	a+=b; // a = a+b
	printf("+= : %d\n",a); // 13

	a-=b; // a = a-b
	printf("-= : %d\n",a); // 10
	
	a*=b; // a=a*b
	printf("*= : %d\n",a);  // 30
	
	a/=b; // a=a/b 
	printf("/= : %d\n",a); //10 
	
	a%=b; // a=a%b 
	printf("%= : %d\n",a); //1 
	
	a&=b; //a=a&b 
	printf("&= : %d\n",a); //1
	
	a|=b; //a=a|b
	printf("|= : %d\n",a); // 3
	
	a^=b; //a=a^b 
	printf("^= : %d\n",a); //0
	
	a<<=b; //a=a<<b 
	printf("<<= : %d\n",a); //0
	
	a>>=b; //a=a>>b
	printf(">>= : %d\n",a);//0

}
