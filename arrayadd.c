//Program to add to matrix using array
#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("\nEnter the size of the rows : ");
    scanf("%d",&m);
    printf("\nEnter the size of the columns : ");
    scanf("%d",&n);
    int arr1[m][n];
    int arr2[m][n];
    int arr3[m][n];
printf("\n\nEnter the elements of the first matrix :\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n\nEnter the elements of the second matrix :\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n\nThe first Matrix is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe Second Matrix is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printf("\nThe Sum of the two Matrices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

