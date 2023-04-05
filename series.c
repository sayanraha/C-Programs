#include<stdio.h>
int main()
{
    int n=0,i,t,sum=0,d;
    printf("Enter the number of terms -\n");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    { 
        d = n * 10;
        n = d + 1;
        sum+= n;
    }
    printf("The sum of the series is : %d",sum);
}