#include<stdio.h>
int main()
{
	int a[100],n,i,sum=0; 
	int *p; 

	printf("Enter the size : "); 
	scanf("%d",&n); 

	printf("address of 1st elements : %p\n",&a[0]);
	printf("address of 1st elements : %p\n",a);

	 p=a; 
	 p=&a[0];
	 printf("Enter the array : \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("a [ %d ] =",i);
	 	scanf("%d",&a[i]); 
	 	sum = sum +*(p+i);
	 }
	 printf("-------------------------\n");
	 for (i=0;i<n;++i)
	 {
	 	printf("a [ %d ] = %d\n",i,a[i]); 
	 }
	 printf("sum : %d\n",sum); 
}