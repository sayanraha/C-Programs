#include<stdio.h>
int main()
{
    int i,j,n=5,p;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        p = n;
        for(j=1;j<=i;j++)
        {
            printf("%d",p--);
        }
        p = p + 2;
        for(j=1;j<i;j++)
        {
            printf("%d",p++);
        }
        printf("\n");
    }
    return 0;
}