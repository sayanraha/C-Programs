#include<stdio.h>
int main()
{
    int a=9,n=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        a = a-2;
        printf("\n");
    }
    return 0;
}