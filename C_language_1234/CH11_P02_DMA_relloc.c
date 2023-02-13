#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    char ch;
    int i,n,m,sum=0;

    printf("Enter the size : ");
    scanf("%d",&n);


    p = (int *)calloc(n,sizeof(int));

    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",(p+i));
    }

    for(i=0;i<n-1;i++)
    {
        sum += *(p+i);
        printf("%d + ",*(p+i));
    }

        sum += *(p+i);
    printf("%d = %d\n",*(p+i),sum);


    printf("do you want resize[y/n] : ");
    scanf("%c",&ch);
    scanf("%c",&ch);
   
    if(ch=='n' || ch=='N')
        exit(0);


    printf("\n----------------------\n");

    printf("Enter new size : ");
    scanf("%d",&m);

    p = (int *)realloc(p,m+n);

    printf("Enter the new data : \n");
    for(i=n;i<m+n;i++)
    {
 
        printf("Enter %d element : ",i+1);
        scanf("%d",(p+i));
               
    }

    for (i=n;i<m+n-1;i++)
    {
            sum += *(p+i);
              printf("%d + ",*(p+i));
  
    }
    sum += *(p+i);
    printf("%d = %d\n",*(p+i),sum);

    free(p);
    
    return 0;
}