#include<stdio.h>
int main()
{
    int i,j,c=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=c;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        c=c-2;
        printf("\n");
    }
    int d=0;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        for(j=1;j<=d;j++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        d=d+2;
        printf("\n");
    }
}