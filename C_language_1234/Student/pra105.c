#include<stdio.h>
#include<stdlib.h>

void main()
{
    int numofe,i,sum=0;

    int *p;

    printf("enter the number of elements : ");
    scanf("%d",&numofe);

    p=(int *)malloc(numofe*sizeof(int));

    if(p==NULL)
    {
        printf("memory not available");
        exit(0);
    }

    printf("enter the elements : ");

    for(i=0;i<numofe;i++)
    {
        scanf("%d",p+i);
        sum = sum+*(p+i);
    }

    printf("the sum of elements is %d",sum);

        free(p);
        printf("displaying the cleared out memory locations : ");

        for(i=0;i<numofe;i++)
        {
            printf("%d",p[i]);
        }
}