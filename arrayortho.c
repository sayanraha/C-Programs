//Write a program to find whether a matrix is orthogonal or not.
#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int i,j,k,count=0;
    int a[ROW][COL],t[ROW][COL],pro[ROW][COL],n[ROW][COL],id[ROW][COL];
    printf("\n INPUT ELEMENTS IN THE MATRIX \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("\n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n THE MATRIX IS \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //LOOP FOR TRANSPOSE MATRIX
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    
    //LOOP FOR MULTIPLICATION OF THE MATRIX
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            pro[i][j]=0;
            for(k=0;k<COL;k++)
            {
                pro[i][j]+= a[i][k]*t[k][j];
            }
        }
    }
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<ROW;j++)
        {
            if(a[i][j]!=0)
            {
                n[i][j]=a[i][j]/a[i][j];
            }
            else
            {
                n[i][j]=0;
            }
        }
    }
    //IDENTITY MATRIX LOOP
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<ROW;j++)
        {
            if(i==j)
            {
                id[i][j]=1;
            }
            else
            {
                id[i][j]=0;
            }
        }
    }
    for(i=0;i<ROW;i++);
    {
        for(j=0;j<COL;j++)
        {
            if(id[i][j]==n[i][j])
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
    }
    if(count!=0)
    {
        printf("\n It is an Orthogonal Matrix\n");
    }
    else
    {
        printf("\n It is not an Orthogonal Matrix\n");
    }
    return 0;
}