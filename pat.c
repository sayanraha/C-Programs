#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
    for(j = 1;j<=i;j++)
    {
        if((i+j)%2==0)
        printf("%d",1);
        else
        printf("%d",0);
    }
    printf("\n");
}
}