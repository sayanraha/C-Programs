#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int i,j,count=0,found=0;
    int a[ROW][COL];
    if(ROW==COL)
    {
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(i<j&&a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count!=0)
    {
        printf("\n LOWER TRIANGULAR MATRIX \n");
    }
    else
    {
        printf("\n NOT AN LOWER TRIANGULAR MATRIX \n");
    }
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(i>j&&a[i][j]==0)
            {
                found++;
            }
        }
    }
    if(found!=0)
    {
        printf("\n UPPER TRIANGULAR MATRIX \n");
    }
    else
    {
        printf("\n NOT AN UPPER TRIANGULAR MATRIX \n");
    }
    }
 return 0;
}