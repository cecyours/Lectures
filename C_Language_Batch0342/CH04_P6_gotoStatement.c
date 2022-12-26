#include<stdio.h>
void main()
{
	int i=3;
/**	
	printf("Forward goto 1\n");
	printf("Forward goto 2\n");
	printf("Forward goto 3\n");
	goto code;
	printf("Forward goto 4\n");
	printf("Forward goto 5\n");
	printf("Forward goto 6\n");
	printf("Forward goto 7\n");
	code:
	printf("Forward goto 8\n");
	printf("Forward goto 9\n");

*/
	printf("backward 1\n");
	printf("backward 2\n");
	printf("backward 3\n");
	printf("backward 4\n");
hell:
	printf("backward 5\n");
	printf("backward 6\n");
	printf("backward 7\n");
	printf("backward 8\n");
	printf("backward 9      -> %d\n",i);
i--;
if(i>0)
 goto hell;
	printf("backward 10\n");
}
