#include<stdio.h>
int main()
{
    int i,j,s;
    for(i=1;i<=5;i++)// For number of lines
    {
        for(j=1;j<i;j++)//For Space printing
        {
            printf(" ");
        }
        
        for(j=5;j>=i;j--)//For staring from 5
        {
            printf("%d",j);
        }
        s=i+1;
        for(j=s;j<=5;j++)//Ending till 5
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}