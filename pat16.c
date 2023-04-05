#include<stdio.h>
int main()
{
    int i,j,a=3;
    for(i=1;i<=1;i++)
    {
        printf("*\n");
    }
    for(i=1;i<=3;i++)
    {
    for(j=1;j<=a;j++)
    {
        if(j==1||j==a)
        {
            printf("*");
        }
        else
        {
            printf("  ");
        }
    }
        a = a+1;
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        printf("* ");
    }
    return 0;
    
}