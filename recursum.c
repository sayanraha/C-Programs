//WAP to find the summation of a number from 1 to n using recursive technique.
#include<stdio.h>
int sum(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return (num + sum(num-1));
    }
}
int main()
{
    int n;
    printf("Enter the number of terms :\n");
    scanf("%d",&n);
    printf("The summation of the number from 1 to %d is = %d.\n",n,sum(n));
    return 0;
}