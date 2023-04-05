#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            if(j==1||j==a)
            {
                printf("%d",i);
            }
            else
            {
                printf("0");
            }
        }
        a = a+2;
        printf("\n");
    }
    return 0;
}