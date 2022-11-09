#include<stdio.h>


void swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int *A;
    int size;
    int length=0;
    printf("Enter size of an Array: ");
    scanf("%d",&size);
    

    A=new int[size];
    printf("\nEnter the elements of an Array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&A[i]);
        length++;
    }

    int i, j;
        for (i = 0, j = length - 1; i < j; i++, j--)
        {
            swap(&A[i], &A[j]);
        }

    printf("Elements are:");  
        for (int i = 0; i < length; i++)
        {
            printf("%d ",A[i]);
        }
    return 0;
}