#include<stdio.h>
void Sub(int num,int i)
{

    printf("\n");
    printf("%d - %d = %d",num,i,(num-i));


    if(i-10)
    

        return Sub(num,i+1);
}
int main()
{
    int num,i=0;

    printf("enter a number to generate the table in c : ");
    scanf("%d",&num);

    printf("\n table of %d",num);
    Sub(num,1);

}

