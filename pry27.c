#include<stdio.h>
int main()
{
    int i,j,a=1,b=7;
    for(i=5;i>=1;i--)//Upper triangle part
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
    for(i=1;i<=4;i++)//Lower triangle part
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=b;j++)
        {
            printf("*");
        }
        b=b-2;
        printf("\n");
    }
    return 0;
}