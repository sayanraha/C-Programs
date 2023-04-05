#include<stdio.h>
int main()
{
    int n,sqr,r,rem,num=0,sum=0,s=0,temp;
    printf("Enter a number to check : ");
    scanf("%d",&n);
    sqr = n*n;
    while(sqr!= 0 && sqr>n)
    {
        rem = sqr%10;
        num = num *10 + rem;
        sqr = sqr/10;
    }
        temp = num;
    while(temp!=0)
    {
        r = temp%10;
        s= s*10+r;
        temp=temp/10;
    }
    if(s== n)
    {
        printf("AUTOMORPHIC NUMBER \n");
    }
    else
    {
        printf("Not an AUTOMORPHIC NUMBER \n");
    }
    return 0;
}