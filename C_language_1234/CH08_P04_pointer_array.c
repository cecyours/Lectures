#include<stdio.h>
int main()
{
    char *names[7];

    int i,n;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter those name : \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the name : ");
        scanf("%s",&names[i]);
    }

    printf("--------------\n");

    for(i=0;i<n;i++)
    {
        printf("welcome %s\n",names[i]);
    }

    return 0;
}