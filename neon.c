#include<stdio.h>
int main()
{
    int n,sqr,rem,sum = 0;
    printf("Enter a number to check :\n");
    scanf("%d",&n);
    int num = n;
    sqr = num*num;
    while(sqr!=0)
    {
        rem = sqr%10;
        sum = sum + rem;
        sqr = sqr/10;
    }
    if(sum == n)
    {
        printf("\n %d is a Neon Number \n",n);
    }
    else
    {
        printf("\n %d is not a Neon Number \n",n);
    }
    return 0;
}