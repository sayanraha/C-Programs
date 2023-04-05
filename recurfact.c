//WAP to find the facctorial of a number using recursive technique.
#include<stdio.h>
int fact(int num)
{
    if(num==0||num==1)
    {
        return 1;
    }
    else
    {
        return (num*fact(num-1));
    }
}
int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d.\n",n,fact(n));
    return 0;
}