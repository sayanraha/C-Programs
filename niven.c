#include<stdio.h>
int main()
{
    int n,rem,sum = 0,num;
    printf("Enter a number to check : ");
    scanf("%d",&n);
    num = n;
    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    if(n%sum==0)
    {
        printf("\n %d is a Niven Number \n",n);
    }
    else
    {
        printf("\n %d is not a Niven Number \n",n);
    }
    return 0;
}