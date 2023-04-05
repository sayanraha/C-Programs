#include<stdio.h>
int main()
{
    int a = 1,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        a = a+2;
        printf("\n");
    }
    return 0;
}