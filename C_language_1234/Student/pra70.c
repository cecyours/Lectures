#include<stdio.h>
void sortarray(int size ,int *parr)
{
    int i,j,temp;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(parr+i)<*(parr+i))
            {
                temp = *(parr+i);
                *(parr+i) = *(parr+j);
                *(parr+j) = temp;
            }
        }
    }

    printf("\nSorted array elements using pointer = ");
    for(i=0;i<size;i++)
    {
        printf("%d",*(parr+i));
    }
}

int main()
{
    int size;
    printf("enter array size to sort using pointer = ");
    scanf("%d",&size);

    int arr[size];

    printf("\nplease enter %d elements of an array = ",size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    sortarray(size,arr);

    printf("\n");
}