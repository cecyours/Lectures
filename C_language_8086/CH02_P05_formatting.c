
 #include<stdio.h>
int main()
{
	char text[] = "programming";
	int num = 30;
	double data = 346.2351;

	printf("text : %s\n\n",text);
	printf("   num : %d\n" ,num);
	printf("  num in octal : %o\n",num);
	printf("num is hexa : %x\n",data);
	printf("data with %%lf : %lf\n",data);
	printf("data with %%e : %e\n",data);


}