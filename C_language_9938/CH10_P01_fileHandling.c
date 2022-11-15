
#include<stdio.h>
/*mode 

w : write 
r : read
a : append

+ read/right
*/
int main()
{
	FILE *fp;
	char ch;
	char name[100];

	fp = fopen("yash.txt","a+");


	printf("Enter your name : ");
	scanf("%s",name);

	fprintf(fp,"Hii im %s\n",name);


	/*read*/
	fseek(fp,0,0);
	while((ch = fgetc(fp))!=EOF)
	{
		printf(" %c",ch);
	}
	fclose(fp);
}