#include<stdio.h>
int main()
{
    int i,j,a=4;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=i;j++)
        {
            
                printf("*");
            
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        a = a + 2;
        printf("\n");
    }
}