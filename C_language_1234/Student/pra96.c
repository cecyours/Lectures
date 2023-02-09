#include<stdio.h>
#include<string.h>
#define SIZE 20

struct bookdetail
{
    char name[20];
    char author[20];
     double price;
    int pages;
};

void output(struct bookdetail[],int n);

void main()
{
    struct bookdetail b[SIZE];

        int num,i;
        printf("enter the numbers of books : ");
        scanf("%d",&num);

        printf("\n");
        for(i=0;i<num;i++)
        {
            printf("\t=:book %d detail:=\n",i+1);

            printf("enter the name of book : ");
            scanf("%s",b[i].name);

            printf("enter the author of book : ");
            scanf("%s",b[i].author);

            printf("enter the pages of book : ");
            scanf("%d",&b[i].pages);

            printf("enter the price of book : ");
            scanf("%f",&b[i].price);
        }

        output(b,num);
}

void output(struct bookdetail v[],int n)
{
    int i,t=1;

    for(i=0;i<n;i++,t--)
    {
        printf("\n");

        printf("book no.%d\n",t);

        printf("\t\tbook %d author is %s\n",t,v[i].author);

        printf("\t\tbook %d name is %s\n",t,v[i].name);

        printf("\t\tbook %d pages is %d\n",t,v[i].pages);

        printf("\t\tbook %d price is %d\n",t,v[i].price);


                printf("\n");
    }
}