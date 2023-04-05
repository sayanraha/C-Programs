#include<stdio.h>
int main()
{
    int i,j,p;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        p=5;
        for(j=1;j<=i;j++)
        {
            printf("%d",p--);
        }
        p=p+1;
        for(j=1;j<i;j++)
        {
            printf("%d",++p);
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        p=5;
        for(j=4;j>=i;j--)
        {
            printf("%d",p--);
        }
        p=p+1;
        for(j=4;j>i;j--)
        {
            printf("%d",++p);
        }
        printf("\n");
    }
}