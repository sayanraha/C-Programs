#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        for(j=1;j<a;j++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
    int b=8;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        for(j=1;j<=b;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        b=b-2;
        printf("\n");
    }
}