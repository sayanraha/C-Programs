#include<stdio.h>
int main()
{
    int a = 65,i,j;
    char c;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            c = (char)a;
            printf("%c",c);
        }
        a = a+1;
        printf("\n");
    }
}