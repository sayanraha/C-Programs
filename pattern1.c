#include<stdio.h>
int main(void)
{
    int n = 5,i,j,k,l;
    printf("THE FOLLOWING PATTER IS : \n");
    for(i = 1;i<=n;i++)
    {
        int p = 1;
        for(j = i;j<n;j++)
        {
            printf(" ");
        }
        for(k = 1;k<i;k++)
        {
            printf("%d",p++);
        }
        for(l= 1;l<=i;l++)
        {
            printf("%d",p--);
        }
        printf("\n");
    }
    int m = n-1;
    for(i=m;i>=1;i--)
    {
        int q = 1;
        for(j = i;j>=m;j--)
        {
            printf(" ");
        }
        for(k = 1;k<i;k++)
        {
            printf("%d",q++);
        }
        for(l= 1;l<=i;l++)
        {
            printf("%d",q--);
        }
        printf("\n");
    }
}