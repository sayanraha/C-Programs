#include<stdio.h>
int main()
{
    int num,n,a,b,count=0;
    printf("Enter a number :\n");
    scanf("%d",&num);
    printf("Enter a digit :\n");
    scanf("%d",&a);
    n=num;
    while(n)
    {
        b=n%10;
        n=n/10;
        if(b==a)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("The frequency of the digit present in the number are : %d",count);
}