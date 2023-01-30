
#include<string.h>
#include<stdio.h>
int main()
{
    char names[10][100];
    char temp[100];
    int i,j;
    int n;

    printf("Enter size : ");
    scanf("%d",&n);

    printf("Enter those names : \n");
    
    for(i=0;i<n;i++)
    {
        printf("Enter %d name : ",i+1);
        scanf("%s",names[i]);
    }

    //sort the names

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(names[i],names[j])>1)
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    printf("----------------\n");

    for(i=0;i<n;i++)
    {
        printf("%s\n",names[i]);
    }

    return 0;
}