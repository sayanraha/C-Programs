//Program to transpose a matrix using arrays
#include<stdio.h>
#define ROW 3
#define COLUMN 4
int main()
{
    int arr[ROW][COLUMN],i,j;
    printf("\n Enter the elements of the array : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("\n");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe original matrix is : \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose matrix is : \n");
    for(i=0;i<COLUMN;i++)
    {
        for(j=0;j<ROW;j++)
        {
            printf("%5d",arr[j][i]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}