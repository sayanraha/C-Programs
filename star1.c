#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
            {
            printf(" *");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}