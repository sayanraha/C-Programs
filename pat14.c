#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=i;j<=9;j++)
        {
            printf(" ");
        }
        for(j=10-i;j<=9;j++)
        {
            printf("%d",j);
        }
        printf("0");
        for(j=9;j>=10-i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}