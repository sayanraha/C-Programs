//Program to print elements of a 2D array by subscripting a pointer to an array variable
#include<stdio.h>
#define N 3
int main(void)
{
    int arr[N][N],i,j;
    int (*ptr)[N] = arr;
    printf("\n Input array elements\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
     printf("\n  array elements\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}