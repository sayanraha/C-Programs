#include<stdio.h>

int main()
{
    int num,d,p,n,sum;
    printf("The armstrong numbers are\n");
    for(num=100;num<=999;num++)
    {
        n = num;
        sum=0;
        while(n>0)
        {
            d = n%10;
            n=n/10;
            p = d*d*d;
            sum=sum+ p;
        
        }
        if(num==sum)
        {
            printf("%d\n",num);
        }
        
    }
    return 0;

}