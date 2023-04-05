#include<stdio.h>
int main(void)
{
    int i,j;
    printf("The Pattern is : \n");
    for(i= 1;i<=5;i++)
    {
        for(j = 1; j<=i;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
    
}