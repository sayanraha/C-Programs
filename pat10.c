#include<stdio.h>
int main()
{
    int i,j,spc = 0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=spc;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        spc = spc + 2;
        printf("\n");
    }
    return 0;
}