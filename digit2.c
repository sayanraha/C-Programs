#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of terms - \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (i*i);
    }
    printf("The required output is : %d",sum);
}