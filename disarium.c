#include<stdio.h>
#include<Math.h>
int main()
{
    int n,num,sum=0,s = 0,m,r,r1,i=1;
    printf("Enter a number to check : \n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        r = n%10;
        sum = sum*10+r;
        n = n/10;
    }
    m = sum;
    while(m!=0&&i>0)
    {
        r1 = m%10;
        s = s + pow(r1,i);
        i=i+1;
        m=m/10;
    }
    if(s==num)
    {
        printf("\n %d is a Disarium Number \n",num);
    }
    else
    {
        printf("\n %d is not a Disarium Number \n",num);
    }
    return 0;
}