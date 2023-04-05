#include<stdio.h>
#include<Math.h>
int main()
{
    int i,n;
    printf("Enter a number to check\n");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        break;
    }
        if(i>sqrt(n))
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a prime number",n);
        }
}