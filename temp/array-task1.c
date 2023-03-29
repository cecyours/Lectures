#include<stdio.h>
int main()
{
    int a[50],b[50];
    printf("Enter the role no. of students:");
  for(int i = 0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
   for(int k =0;k<5;k++)
   {
    printf(" %d students are %d\n",k+1,a[k]);
   }
    return 0;
}