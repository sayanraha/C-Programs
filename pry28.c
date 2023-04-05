#include<stdio.h>
int main()
{
    int i,j,a=1,b=7,c=4;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%d",i);
        }
        a=a+2;
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=b;j++)
        {
            printf("%d",c);
        }
        b=b-2;
        c=c-1;
        printf("\n");
    }
}