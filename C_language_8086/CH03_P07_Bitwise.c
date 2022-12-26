// #include<stdio.h>
// int main()
// {
// 	int a=7,b=3;
// 	int c;

// 	/*

// 	bitwise AND : 

// 		7 => 0 1 1 1
// 		3 => 0 0 1 1
// 	---------------------
// 		&    0 0 1 1 => 3
// 	*/

// 	c = a&b;
// 	printf("%d & %d = %d\n",a,b,c);

		

// 	// bitwise OR : 

// 	// 	7 => 0 1 1 1
// 	// 	3 => 0 0 1 1
// 	// ---------------------
// 	// 	&|   0 1 1 1 => 7
	

// 	c = a | b;
// 	printf("%d | %d = %d\n",a,b,c);


	

// 	bitwise EX-OR : 

// 		7 => 0 1 1 1
// 		3 => 0 0 1 1
// 	---------------------
// 		^|   0 1 0 0 => 4
	

// 	c = a ^ b;
// 	printf("%d ^ %d = %d\n",a,b,c);


// 	a = 8;
// 	b = 2;
// 	/*

// 		c = a*2^b
// 		  = 8*2^2
// 		  = 8*4
// 		  = 32

// 	*/
// 	c = a<<b;
// 	printf("%d << %d = %d\n",a,b,c);

// 	/*

// 		c = a/2^b
// 		  = 8/2^2
// 		  = 8/4
// 		  = 2

// 	*/
// 	c = a>>b;
// 	printf("%d << %d = %d\n",a,b,c);


// 	/*
// 		c = -(a+1)
// 		  = -(8+1)
// 		  = -9
// 	*/
// 	c=~a;
// 	printf("~%d = %d\n",a,c);



// }


#include<stdio.h>
int main ()
{
	int a=6,b=4;
	int c;

	/*
		c=a*2^b
		 =6*2^4
		 =6*16
		 =96
	*/
	
	c = a<<b;
	printf("%d << %d = %d\n",a,b,c);



	c = a>>b;
	printf("%d >> %d = %d\n",a,b,c);

	/*
		c = -(a+1)
		  = -(7)
		  = -7
	*/

	c=~a;
	printf("~%d = %d\n",a,c);




}