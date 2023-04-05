#include<stdio.h>
int main()
{
    int i,j,a=1,b=7;
    for(i=1;i<=5;i++)//loop number of lines
    {
        for(j=i;j<5;j++)//loop for number of spaces
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)//loop for the upper triangle
        {
            printf("%d",j);
        }
        a=a+2;
        printf("\n");
    }
    for(i=1;i<=4;i++)//loop for number of lines
    {
        for(j=1;j<=i;j++)// loop for the spaces
        {
            printf(" ");
        }
        for(j=1;j<=b;j++)//loop for the lower triangle
        {
            printf("%d",j);
        }
        b=b-2;
        printf("\n");
    }
    return 0;
}