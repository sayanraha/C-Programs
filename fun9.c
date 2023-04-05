#include<stdio.h>
//long int dec_bi(int);
int main()
{
    int num;
    printf("Enter a decimal number :\n");
    scanf("%d",&num);
    int n;
    n = num;
    int r,m,p=0,sum = 0,temp;
    while(n>0)
    {
        r = n%2;
        sum = sum *10+r;
        n=n/2;
    }
    temp = sum;
    while(temp>0)
    {
        m = temp%10;
        p = p*10+m;
        temp = temp/10;
    }
    
    printf("The Binary Equivalent is = %ld\n",p);
}

