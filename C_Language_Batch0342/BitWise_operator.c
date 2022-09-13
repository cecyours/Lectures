

#include<stdio.h>
int main()

{
	int a=7,b=2,c;

		/*binary & */
		/*
			7 => 0111
			2 => 0010
		& 	----------
			    0010 => 2
		*/
		c = a&b;
		printf("%d & %d = %d\n",a,b,c);

		/*binary | */
		/*
			7 => 0111
			2 => 0010
		 	----------
			      0111 => 7
		*/
		c = a|b;
		printf("%d | %d = %d\n",a,b,c);

		/*binary ^ */
		/*
			7 => 0111
			2 => 0010
		& 	----------
			    0101 => 5
		*/
		c = a^b;
		printf("%d ^ %d = %d\n",a,b,c);

		/*binary ~ */
		/*
			c = -(a+1)
			  = -(8)
			   = -8
		*/
		c = ~a;
		printf("~%d = %d\n",a,c);

		


} 
	