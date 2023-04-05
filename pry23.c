#include<stdio.h>
int main()
{
    int a=9,n=5,m=5,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%d",m);
        }
        a = a-2;
        m = m-1;
        printf("\n");
    }
    return 0;
}