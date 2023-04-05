#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            if(j==1||j==a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        a=a+2;
        printf("\n");
    }
    int b = 9;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=b;j++)
        {
            if(j==1||j==b)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        b = b-2;
        printf("\n");
    }
}