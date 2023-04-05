#include<stdio.h>
int main()
{
    int num,tem,sum=0,r;
    printf("Enter a number to check wheather it is Palindrome Number or Not\n");
    scanf("%d",&num);
    tem=num;
    while(num!=0)
    {
        r=num%10;
        sum = sum*10+r;
        num/=10;
    }
    if(tem==sum)
    {
        printf("%d is a Palindrome Number\n",sum);
    }
    else
    {
        printf("%d is Not a Palindrome Number\n",sum);
    }
    return 0;
}