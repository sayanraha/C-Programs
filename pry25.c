#include<stdio.h>
int main()
{
    int i,j,p;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        p=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",p++);
        }
        p=p-2;
        for(j=1;j<i;j++)
        {
            printf("%d",p--);
        }
        printf("\n");
    }
    return 0;
}