#include<stdio.h>
int perf_ami(int,int);
int main()
{
    int x,y;
    printf("Enter the lower limit of the range :\n");
    scanf("%d",&x);
    printf("Enter the upper limit of the range :\n");
    scanf("%d",&y);
    return perf_ami(x,y);
}
int perf_ami(int a,int b)
{
    int i,j,k,sum,sum1;
    printf("The pair of amicable numbers in the given range %d to %d are :\n",a,b);   
    for(i=a;i<=b;i++)
    {
        sum = 0;
        sum1 = 0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum = sum + j;
            }
        }
        for(k=1;k<sum;k++)
        {
            if(sum%k==0)
            {
                sum1 = sum1+k;
            }
        }
        if(sum1==i&&sum1!=sum)
        {
            printf("%d %d\n",sum1,sum);
        }
    }
    printf("The range of perfect numbers from %d to %d is :\n",a,b);
    for(i=a;i<=b;i++)
    { 
        sum = 0;

        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum == i)
        printf("%d\n",sum);
    }
}