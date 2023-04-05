//Multiplication program of two matrices.
#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    printf("\nEnter the number of rows for the first matrix : \n");
    scanf("%d",&r1);
    printf("\nEnter the number of columns for the first matrix : \n");
    scanf("%d",&c1);
    printf("\nEnter the number of rows for the second matrix : \n");
    scanf("%d",&r2);
    printf("\nEnter the number of columns for the second matrix : \n");
    scanf("%d",&c2);
    int arr1[r1][c1],arr2[r2][c2],arr3[r1][c2];
    printf("\nEnter elements for the first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\n");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter elements for the second matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\n");
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nThe first matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%5d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix is :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%5d",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            arr3[i][j]=0;
            for(k=0;k<c1;k++)
            {
                arr3[i][j]+=(arr1[i][k]*arr2[k][j]);
            }
        }
    }
    printf("\n The Multiplication of the two matrix is : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%5d",arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}