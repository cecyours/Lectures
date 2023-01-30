#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][100];
    char temp[100];
    int i,j;
    int n;

    printf("enter size : ");
    scanf("%d",&n);

    printf("enter those name : \n");

    for(i=0;i<n;i++)
    {
        printf("enter %d name : ",i+1);
        scanf("%s",name[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>1)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    printf("------------------------------\n");
    
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }

    return 0;
}