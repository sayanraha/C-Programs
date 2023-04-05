#include<stdio.h>
int main()
{
    int i,j,a=2;
    for(i=1;i<=3;i++)
    {
        for(j=i;j<=3;j++)
        {
            printf("*");
        }
        for(j=1;j<=a;j++)
        {
            printf(" ");
        }
        for(j=i;j<=3;j++)
        {
            printf("*");
        }
        a = a+2;
        printf("\n");
    }
    printf("\n");
    int b=6;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=b;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        b = b - 2;;
        printf("\n");
    }

}