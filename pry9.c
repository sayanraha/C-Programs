#include<stdio.h>
int main()
{
    int a = 1,i,j;
    for(i=5;i>=3;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
        }
        a = a + 1;
        printf("\n");
    }
    for(i=2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}