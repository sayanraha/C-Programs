#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=80;i++)
    {
        printf("%d\t",i);
        if(i%8==0)
        {
        printf("\n");
        }
    }
}